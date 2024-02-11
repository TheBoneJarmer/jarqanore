package be.labruyere.arqanore;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.nio.file.*;
import java.util.ArrayList;
import java.util.jar.JarFile;

/**
 * Manages the bridge between the JRE and native library
 */
public class Arqanore {
    private static File tempDirectory;
    private static File[] tempFiles;
    
    /**
     * Gets the version number from Arqanore
    */
    public static String getVersion() {
        return _getVersion();    
    }
    
    /**
     * Gets the OpenGL version number from your device
    */
    public static String getOpenGLVersion() {
        return _getOpenGLVersion();    
    }

    /**
     * Initializes the Arqanore library.
     */
    static void init()  {
        if (tempDirectory != null || tempFiles != null) {
            return;
        }

        try {
            tempDirectory = generateTempDirectory();
            tempFiles = generateTempFiles();

            for (File file : tempFiles) {
                loadLibrary(file);

                if (isPosixCompliant()) {
                    if (!file.delete()) {
                        throw new RuntimeException("Failed to delete temp file " + file.getAbsolutePath());
                    }
                } else {
                    file.deleteOnExit();
                }
            }

            tempDirectory.deleteOnExit();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

    /* HELPER METHODS */
    private static void loadLibrary(File file) {
        System.load(file.getAbsolutePath());
    }

    private static String[] getJarFiles() throws IOException {
        var result = new ArrayList<String>();
        var path = Arqanore.class.getProtectionDomain().getCodeSource().getLocation().getPath();

        // Quickfix
        if (!path.endsWith("jarqanore.jar")) {
            path += "jarqanore.jar";
        }

        var file = new File(path);
        var jarFile = new JarFile(file);
        var jarEntries = jarFile.entries();

        while (jarEntries.hasMoreElements()) {
            result.add(jarEntries.nextElement().getName());
        }

        jarFile.close();
        return result.toArray(new String[0]);
    }

    private static File[] generateTempFiles() throws IOException {
        ArrayList<File> result = new ArrayList<>();
        String[] filenames = getJarFiles();

        for (String filename : filenames) {
            if (!filename.startsWith("lib/")) {
                continue;
            }

            File tempFile = generateTempFile("/" + filename);

            if (tempFile != null) {
                result.add(tempFile);
            }
        }

        return result.toArray(new File[0]);
    }

    private static File generateTempFile(String path) throws IOException {
        String filename = path.substring(path.lastIndexOf("/") + 1);
        File temp = new File(tempDirectory, filename);

        if (temp.isDirectory()) {
            return null;
        }

        try {
            InputStream stream = Arqanore.class.getResourceAsStream(path);

            if (stream != null) {
                Files.copy(stream, temp.toPath(), StandardCopyOption.REPLACE_EXISTING);
                stream.close();
            } else {
                throw new IOException("Failed to open stream for " + path);
            }
        } catch (NullPointerException e) {
            throw new FileNotFoundException("Failed to locate file " + path);
        }

        return temp;
    }

    private static File generateTempDirectory() throws IOException {
        String tempDirectory = System.getProperty("java.io.tmpdir");
        File generatedDirectory = new File(tempDirectory, "arqanore_" + System.nanoTime());

        if (!generatedDirectory.mkdir()) {
            throw new IOException("Failed to create temp dir");
        }

        return generatedDirectory;
    }

    private static boolean isPosixCompliant() {
        try {
            return FileSystems.getDefault().supportedFileAttributeViews().contains("posix");
        } catch (FileSystemNotFoundException | ProviderNotFoundException | SecurityException e) {
            return false;
        }
    }
    
    private static native String _getVersion();
    
    private static native String _getOpenGLVersion();
}

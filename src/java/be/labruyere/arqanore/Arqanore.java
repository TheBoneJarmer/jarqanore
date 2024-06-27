package be.labruyere.arqanore;

/**
 * Manages the bridge between the JRE and native library
 */
public class Arqanore {
    /**
     * Gets the version number from Arqanore
    */
    public static int[] getVersion() {
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
    static void init() {
        System.loadLibrary("jarqanore");
    }
    
    private static native int[] _getVersion();
    
    private static native String _getOpenGLVersion();
}

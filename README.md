# JArqanore

## About
JArqanore is a Java wrapper for my other library, [Arqanore](https://github.com/thebonejarmer/arqanore), which was written in C++. Due to the fact it is merely a wrapper, JArqanore only runs on the platforms supported by Arqanore. Furthermore, Arqanore and all of its dependencies needs to be installed separately in order for JArqanore to work. Due to the many requirements Arqanore has I did not include a pre-compiled library within the final jar file. Its up to the developer to publish it along with their application.

## Building
### Arqanore
As stated earlier, you will have to clone Arqanore and follow the instructions in the README file there. The following instructions are going to assume you built and installed Arqanore already.

> **Tip!** It may be interesting to try running the examples in the Arqanore repo to make sure the library works. JArqanore assumes Arqanore will work so any crashes caused by a faulty library installation or compilation are not covered and could result into nasty errors.

### Native vs java library
JArqanore uses the JNI framework to make a connection between c++ and Java. So for this reason JArqanore is divided into a native library and a java library. The native library uses CMake as build tool and the java library uses the java compiler directly.

> **Tip!** Unlike with Arqanore you do not have to install the resulting library somewhere on the system. Instead it is packed in the resulting JAR file because it is essential and only useful to JArqanore.

### Scripts
To automate the build process a little I decided to create some bash scripts to help me with this. These scripts are resided in the root directory of this repo.

## Usage

```java
import be.labruyere.arqanore.*;
import be.labruyere.arqanore.enums.Keys;

public class App {
    private static Window window;
    
    private static void onOpen() {
        // Load assets and initialize stuff here
    }

    private static void onClose() {
        // Delete pointers here
    }

    private static void onUpdate(double at) {
        // It is highly recommended to use try-catch statements in every callback. 
        // This is to ensure the onClose event is being called or else you will have corrupted memory!
        try {
            if (Keyboard.keyPressed(Keys.ESCAPE)) {
                window.close();
            }
        } catch (ArqanoreException e) {
            e.printStackTrace();
            window.close();
        }
    }
    
    private static void onRender2D() {
        // Render sprites, text and polygons here!
    }

    private static void onRender3D() {
        // Render 3D models here
    }

    public static void main(String[] args) {
        try {
            window = new Window(1440, 786, "App");
            window.onOpen("App", "onOpen");
            window.onClose("App", "onClose");
            window.onUpdate("App", "onUpdate");
            window.onRender3D("App", "onRender3D");
            window.onRender2D("App", "onRender2D");
            window.open(false, true);
        } catch (ArqanoreException ex) {
            ex.printStackTrace();
        }
    }
}
```

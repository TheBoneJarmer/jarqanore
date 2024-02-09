/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class be_labruyere_arqanore_Window */

#ifndef _Included_be_labruyere_arqanore_Window
#define _Included_be_labruyere_arqanore_Window
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _getWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_be_labruyere_arqanore_Window__1getWidth
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _getHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_be_labruyere_arqanore_Window__1getHeight
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _getX
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_be_labruyere_arqanore_Window__1getX
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _getY
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_be_labruyere_arqanore_Window__1getY
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _getVSync
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_be_labruyere_arqanore_Window__1getVSync
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _getTitle
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_be_labruyere_arqanore_Window__1getTitle
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _getClearColor
 * Signature: (J)Lbe/labruyere/arqanore/Color;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Window__1getClearColor
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _getVersion
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_be_labruyere_arqanore_Window__1getVersion
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _getFps
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_be_labruyere_arqanore_Window__1getFps
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setWidth
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setHeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setHeight
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setX
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setX
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setY
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setY
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setVSync
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setVSync
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setTitle
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setTitle
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setClearColor
 * Signature: (JLbe/labruyere/arqanore/Color;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setClearColor
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setOpenCallback
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setOpenCallback
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setCloseCallback
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setCloseCallback
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setTickCallback
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setTickCallback
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setUpdateCallback
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setUpdateCallback
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setRender2DCallback
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setRender2DCallback
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setRender3DCallback
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setRender3DCallback
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setResizeCallback
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setResizeCallback
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setPositionCallback
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setPositionCallback
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setCharCallback
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setCharCallback
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _setOpenGLCallback
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1setOpenGLCallback
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _create
 * Signature: (IILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_Window__1create
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _open
 * Signature: (JZZ)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1open
  (JNIEnv *, jobject, jlong, jboolean, jboolean);

/*
 * Class:     be_labruyere_arqanore_Window
 * Method:    _close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Window__1close
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class be_labruyere_arqanore_Camera */

#ifndef _Included_be_labruyere_arqanore_Camera
#define _Included_be_labruyere_arqanore_Camera
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_Camera__1create
  (JNIEnv *, jobject);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Camera__1destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _getPosition
 * Signature: (J)Lbe/labruyere/arqanore/Vector3;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Camera__1getPosition
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _getRotation
 * Signature: (J)Lbe/labruyere/arqanore/Quaternion;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Camera__1getRotation
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _getFov
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_be_labruyere_arqanore_Camera__1getFov
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _getNear
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_be_labruyere_arqanore_Camera__1getNear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _getFar
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_be_labruyere_arqanore_Camera__1getFar
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _setPosition
 * Signature: (JLbe/labruyere/arqanore/Vector3;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Camera__1setPosition
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _setRotation
 * Signature: (JLbe/labruyere/arqanore/Quaternion;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Camera__1setRotation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _setFov
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Camera__1setFov
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _setNear
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Camera__1setNear
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     be_labruyere_arqanore_Camera
 * Method:    _setFar
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Camera__1setFar
  (JNIEnv *, jobject, jlong, jfloat);

#ifdef __cplusplus
}
#endif
#endif

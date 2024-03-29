/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class be_labruyere_arqanore_MeshFrame */

#ifndef _Included_be_labruyere_arqanore_MeshFrame
#define _Included_be_labruyere_arqanore_MeshFrame
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     be_labruyere_arqanore_MeshFrame
 * Method:    _create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_MeshFrame__1create
  (JNIEnv *, jobject);

/*
 * Class:     be_labruyere_arqanore_MeshFrame
 * Method:    _destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_MeshFrame__1destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_MeshFrame
 * Method:    _getPosition
 * Signature: (J)Lbe/labruyere/arqanore/Vector3;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_MeshFrame__1getPosition
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_MeshFrame
 * Method:    _getRotation
 * Signature: (J)Lbe/labruyere/arqanore/Quaternion;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_MeshFrame__1getRotation
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_MeshFrame
 * Method:    _getScale
 * Signature: (J)Lbe/labruyere/arqanore/Vector3;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_MeshFrame__1getScale
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_MeshFrame
 * Method:    _setPosition
 * Signature: (JLbe/labruyere/arqanore/Vector3;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_MeshFrame__1setPosition
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_MeshFrame
 * Method:    _setRotation
 * Signature: (JLbe/labruyere/arqanore/Quaternion;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_MeshFrame__1setRotation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_MeshFrame
 * Method:    _setScale
 * Signature: (JLbe/labruyere/arqanore/Vector3;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_MeshFrame__1setScale
  (JNIEnv *, jobject, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif

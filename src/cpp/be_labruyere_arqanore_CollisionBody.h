/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class be_labruyere_arqanore_CollisionBody */

#ifndef _Included_be_labruyere_arqanore_CollisionBody
#define _Included_be_labruyere_arqanore_CollisionBody
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _create
 * Signature: (Lbe/labruyere/arqanore/Vector3;Lbe/labruyere/arqanore/Quaternion;)J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_CollisionBody__1create
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_CollisionBody__1destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _isActive
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_be_labruyere_arqanore_CollisionBody__1isActive
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _getPosition
 * Signature: (J)Lbe/labruyere/arqanore/Vector3;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_CollisionBody__1getPosition
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _getRotation
 * Signature: (J)Lbe/labruyere/arqanore/Quaternion;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_CollisionBody__1getRotation
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _setActive
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_CollisionBody__1setActive
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _setPosition
 * Signature: (JLbe/labruyere/arqanore/Vector3;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_CollisionBody__1setPosition
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _setRotation
 * Signature: (JLbe/labruyere/arqanore/Quaternion;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_CollisionBody__1setRotation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_CollisionBody__1dispose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _addCollider
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_CollisionBody__1addCollider
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     be_labruyere_arqanore_CollisionBody
 * Method:    _isColliding
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_be_labruyere_arqanore_CollisionBody__1isColliding
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
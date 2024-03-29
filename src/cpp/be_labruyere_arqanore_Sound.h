/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class be_labruyere_arqanore_Sound */

#ifndef _Included_be_labruyere_arqanore_Sound
#define _Included_be_labruyere_arqanore_Sound
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _isPaused
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_be_labruyere_arqanore_Sound__1isPaused
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _isLooping
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_be_labruyere_arqanore_Sound__1isLooping
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _isPlaying
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_be_labruyere_arqanore_Sound__1isPlaying
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _getVolume
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_be_labruyere_arqanore_Sound__1getVolume
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _getPan
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_be_labruyere_arqanore_Sound__1getPan
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _setLooping
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Sound__1setLooping
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _setPaused
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Sound__1setPaused
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _setVolume
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Sound__1setVolume
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _setPan
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Sound__1setPan
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _create
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_Sound__1create
  (JNIEnv *, jobject, jstring);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Sound__1destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _play
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Sound__1play
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Sound
 * Method:    _stop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Sound__1stop
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif

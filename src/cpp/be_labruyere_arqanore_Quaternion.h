/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class be_labruyere_arqanore_Quaternion */

#ifndef _Included_be_labruyere_arqanore_Quaternion
#define _Included_be_labruyere_arqanore_Quaternion
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     be_labruyere_arqanore_Quaternion
 * Method:    _eulerAngles
 * Signature: (Lbe/labruyere/arqanore/Quaternion;)Lbe/labruyere/arqanore/Vector3;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Quaternion__1eulerAngles
  (JNIEnv *, jclass, jobject);

/*
 * Class:     be_labruyere_arqanore_Quaternion
 * Method:    _normalize
 * Signature: (Lbe/labruyere/arqanore/Quaternion;)Lbe/labruyere/arqanore/Quaternion;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Quaternion__1normalize
  (JNIEnv *, jclass, jobject);

/*
 * Class:     be_labruyere_arqanore_Quaternion
 * Method:    _rotate
 * Signature: (Lbe/labruyere/arqanore/Quaternion;FLbe/labruyere/arqanore/Vector3;)Lbe/labruyere/arqanore/Quaternion;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Quaternion__1rotate__Lbe_labruyere_arqanore_Quaternion_2FLbe_labruyere_arqanore_Vector3_2
  (JNIEnv *, jclass, jobject, jfloat, jobject);

/*
 * Class:     be_labruyere_arqanore_Quaternion
 * Method:    _rotate
 * Signature: (Lbe/labruyere/arqanore/Quaternion;Lbe/labruyere/arqanore/Vector3;)Lbe/labruyere/arqanore/Quaternion;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Quaternion__1rotate__Lbe_labruyere_arqanore_Quaternion_2Lbe_labruyere_arqanore_Vector3_2
  (JNIEnv *, jclass, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif

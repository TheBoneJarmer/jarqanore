#include <cinttypes>
#include "be_labruyere_arqanore_BoxCollider.h"
#include "arqanore/collider.h"

jlong Java_be_labruyere_arqanore_BoxCollider__1create(JNIEnv *env, jobject cls, jfloat width, jfloat height, jfloat depth) {
    return (intptr_t) new arqanore::BoxCollider(width, height, depth);
}

void Java_be_labruyere_arqanore_BoxCollider__1destroy(JNIEnv *env, jobject cls, jlong collider) {
    delete (arqanore::BoxCollider *) collider;
}

#include <cinttypes>
#include "be_labruyere_arqanore_ConcaveCollider.h"
#include "arqanore/collider.h"

jlong Java_be_labruyere_arqanore_ConcaveCollider__1create(JNIEnv *env, jobject cls, jlong model) {
    auto ptr = (arqanore::Model *) model;
    return (intptr_t) new arqanore::ConcaveCollider(*ptr);
}

void Java_be_labruyere_arqanore_ConcaveCollider__1destroy(JNIEnv *env, jobject cls, jlong collider) {
    delete (arqanore::ConcaveCollider *) collider;
}

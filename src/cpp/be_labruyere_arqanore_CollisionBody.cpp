#include <cinttypes>
#include "be_labruyere_arqanore_CollisionBody.h"
#include "arqanore/collisionbody.h"
#include "arq_utils.h"

jlong Java_be_labruyere_arqanore_CollisionBody__1create(JNIEnv *env, jobject cls, jobject obj_pos, jobject obj_rot) {
    auto pos = convert_vector3(env, obj_pos);
    auto rot = convert_quaternion(env, obj_rot);

    return (intptr_t) new arqanore::CollisionBody(pos, rot);
}

void Java_be_labruyere_arqanore_CollisionBody__1destroy(JNIEnv *env, jobject cls, jlong body) {
    delete (arqanore::CollisionBody *) body;
}

jboolean Java_be_labruyere_arqanore_CollisionBody__1isActive(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::CollisionBody *) body;
    return ptr->active();
}

jobject Java_be_labruyere_arqanore_CollisionBody__1getPosition(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::CollisionBody *) body;
    auto pos = ptr->position();

    return convert_vector3(env, pos);
}

jobject Java_be_labruyere_arqanore_CollisionBody__1getRotation(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::CollisionBody *) body;
    auto rot = ptr->rotation();

    return convert_quaternion(env, rot);
}

void Java_be_labruyere_arqanore_CollisionBody__1setActive(JNIEnv *env, jobject cls, jlong body, jboolean value) {
    auto ptr = (arqanore::CollisionBody *) body;
    ptr->active(value);
}

void Java_be_labruyere_arqanore_CollisionBody__1setPosition(JNIEnv *env, jobject cls, jlong body, jobject value) {
    auto ptr = (arqanore::CollisionBody *) body;
    auto pos = convert_vector3(env, value);

    ptr->position(pos);
}

void Java_be_labruyere_arqanore_CollisionBody__1setRotation(JNIEnv *env, jobject cls, jlong body, jobject value) {
    auto ptr = (arqanore::CollisionBody *) body;
    auto rot = convert_quaternion(env, value);

    ptr->rotation(rot);
}

void Java_be_labruyere_arqanore_CollisionBody__1dispose(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::CollisionBody *) body;
    ptr->dispose();
}

void Java_be_labruyere_arqanore_CollisionBody__1addCollider(JNIEnv *env, jobject cls, jlong body, jlong collider) {
    auto ptr1 = (arqanore::CollisionBody *) body;
    auto ptr2 = (arqanore::Collider *) collider;

    ptr1->add_collider(*ptr2);
}

jboolean Java_be_labruyere_arqanore_CollisionBody__1isColliding(JNIEnv *env, jobject cls, jlong body, jlong other) {
    auto ptr1 = (arqanore::CollisionBody *) body;
    auto ptr2 = (arqanore::CollisionBody *) other;

    return ptr1->colliding(*ptr2);
}

#include "be_labruyere_arqanore_RigidBody.h"
#include "arqanore/rigidbody.h"
#include "arq_utils.h"

jlong Java_be_labruyere_arqanore_RigidBody__1create__I(JNIEnv *env, jobject cls, jint type) {
    return (intptr_t) new arqanore::RigidBody(type);
}

jlong Java_be_labruyere_arqanore_RigidBody__1create__ILbe_labruyere_arqanore_Vector3_2Lbe_labruyere_arqanore_Quaternion_2(JNIEnv *env, jobject cls, jint type, jobject obj_pos, jobject obj_rot) {
    auto pos = convert_vector3(env, obj_pos);
    auto rot = convert_quaternion(env, obj_rot);

    return (intptr_t)new arqanore::RigidBody(type, pos, rot);
}

void Java_be_labruyere_arqanore_RigidBody__1destroy(JNIEnv *env, jobject cls, jlong body) {
    delete (arqanore::RigidBody *) body;
}

jobject Java_be_labruyere_arqanore_RigidBody__1getPosition(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    auto pos = ptr->position();

    return convert_vector3(env, pos);
}

jobject Java_be_labruyere_arqanore_RigidBody__1getLinearVelocity(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    auto pos = ptr->linear_velocity();

    return convert_vector3(env, pos);
}

jobject Java_be_labruyere_arqanore_RigidBody__1getAngularVelocity(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    auto pos = ptr->angular_velocity();

    return convert_vector3(env, pos);
}

jobject Java_be_labruyere_arqanore_RigidBody__1getLinearLockAxis(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    auto pos = ptr->linear_lock_axis();

    return convert_vector3(env, pos);
}

jobject Java_be_labruyere_arqanore_RigidBody__1getAngularLockAxis(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    auto pos = ptr->angular_lock_axis();

    return convert_vector3(env, pos);
}

jobject Java_be_labruyere_arqanore_RigidBody__1getForce(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    auto pos = ptr->force();

    return convert_vector3(env, pos);
}

jobject Java_be_labruyere_arqanore_RigidBody__1getTorque(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    auto pos = ptr->torque();

    return convert_vector3(env, pos);
}

jobject Java_be_labruyere_arqanore_RigidBody__1getRotation(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    auto rot = ptr->rotation();

    return convert_quaternion(env, rot);
}

jfloat Java_be_labruyere_arqanore_RigidBody__1getMass(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    return ptr->mass();
}

jfloat Java_be_labruyere_arqanore_RigidBody__1getLinearDamping(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    return ptr->linear_damping();
}

jfloat Java_be_labruyere_arqanore_RigidBody__1getAngularDamping(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    return ptr->angular_damping();
}

jboolean Java_be_labruyere_arqanore_RigidBody__1isSleeping(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    return ptr->sleeping();
}

jboolean Java_be_labruyere_arqanore_RigidBody__1isActive(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    return ptr->active();
}

jboolean Java_be_labruyere_arqanore_RigidBody__1isGravityEnabled(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    return ptr->gravity_enabled();
}

void Java_be_labruyere_arqanore_RigidBody__1setPosition(JNIEnv *env, jobject cls, jlong body, jobject value) {
    auto ptr = (arqanore::RigidBody *) body;
    auto pos = convert_vector3(env, value);

    ptr->position(pos);
}

void Java_be_labruyere_arqanore_RigidBody__1setLinearVelocity(JNIEnv *env, jobject cls, jlong body, jobject value) {
    auto ptr = (arqanore::RigidBody *) body;
    auto vec = convert_vector3(env, value);

    ptr->linear_velocity(vec);
}

void Java_be_labruyere_arqanore_RigidBody__1setAngularVelocity(JNIEnv *env, jobject cls, jlong body, jobject value) {
    auto ptr = (arqanore::RigidBody *) body;
    auto vec = convert_vector3(env, value);

    ptr->angular_velocity(vec);
}

void Java_be_labruyere_arqanore_RigidBody__1setLinearLockAxis(JNIEnv *env, jobject cls, jlong body, jobject value) {
    auto ptr = (arqanore::RigidBody *) body;
    auto vec = convert_vector3(env, value);

    ptr->linear_lock_axis(vec);
}

void Java_be_labruyere_arqanore_RigidBody__1setAngularLockAxis(JNIEnv *env, jobject cls, jlong body, jobject value) {
    auto ptr = (arqanore::RigidBody *) body;
    auto vec = convert_vector3(env, value);

    ptr->angular_lock_axis(vec);
}

void Java_be_labruyere_arqanore_RigidBody__1setRotation(JNIEnv *env, jobject cls, jlong body, jobject value) {
    auto ptr = (arqanore::RigidBody *) body;
    auto rot = convert_quaternion(env, value);

    ptr->rotation(rot);
}

void Java_be_labruyere_arqanore_RigidBody__1setMass(JNIEnv *env, jobject cls, jlong body, jfloat value) {
    auto ptr = (arqanore::RigidBody *) body;
    ptr->mass(value);
}

void Java_be_labruyere_arqanore_RigidBody__1setLinearDamping(JNIEnv *env, jobject cls, jlong body, jfloat value) {
    auto ptr = (arqanore::RigidBody *) body;
    ptr->linear_damping(value);
}

void Java_be_labruyere_arqanore_RigidBody__1setAngularDamping(JNIEnv *env, jobject cls, jlong body, jfloat value) {
    auto ptr = (arqanore::RigidBody *) body;
    ptr->angular_damping(value);
}

void Java_be_labruyere_arqanore_RigidBody__1setSleeping(JNIEnv *env, jobject cls, jlong body, jboolean value) {
    auto ptr = (arqanore::RigidBody *) body;
    ptr->sleeping(value);
}

void Java_be_labruyere_arqanore_RigidBody__1setActive(JNIEnv *env, jobject cls, jlong body, jboolean value) {
    auto ptr = (arqanore::RigidBody *) body;
    ptr->active(value);
}

void Java_be_labruyere_arqanore_RigidBody__1setGravityEnabled(JNIEnv *env, jobject cls, jlong body, jboolean value) {
    auto ptr = (arqanore::RigidBody *) body;
    ptr->gravity_enabled(value);
}

void Java_be_labruyere_arqanore_RigidBody__1update(JNIEnv *env, jobject cls, jlong body, jdouble factor) {
    auto ptr = (arqanore::RigidBody *) body;
    ptr->update(factor);
}

void Java_be_labruyere_arqanore_RigidBody__1applyForce(JNIEnv *env, jobject cls, jlong body, jobject value) {
    auto ptr = (arqanore::RigidBody *) body;
    auto vec = convert_vector3(env, value);

    ptr->apply_force(vec);
}

void Java_be_labruyere_arqanore_RigidBody__1applyTorque(JNIEnv *env, jobject cls, jlong body, jobject value) {
    auto ptr = (arqanore::RigidBody *) body;
    auto vec = convert_vector3(env, value);

    ptr->apply_torque(vec);
}

void Java_be_labruyere_arqanore_RigidBody__1resetForce(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    ptr->reset_force();
}

void Java_be_labruyere_arqanore_RigidBody__1resetTorque(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    ptr->reset_torque();
}

void Java_be_labruyere_arqanore_RigidBody__1addCollider(JNIEnv *env, jobject cls, jlong body, jlong collider) {
    auto ptr1 = (arqanore::RigidBody *) body;
    auto ptr2 = (arqanore::Collider *) collider;

    ptr1->add_collider(*ptr2);
}

void Java_be_labruyere_arqanore_RigidBody__1dispose(JNIEnv *env, jobject cls, jlong body) {
    auto ptr = (arqanore::RigidBody *) body;
    ptr->dispose();
}

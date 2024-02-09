package be.labruyere.arqanore;

import be.labruyere.arqanore.enums.PointerType;
import be.labruyere.arqanore.enums.RigidBodyType;
import be.labruyere.arqanore.exceptions.ArqanoreException;
import be.labruyere.arqanore.utils.EnumUtils;

public class RigidBody extends Pointer {
    public Vector3 getPosition() {
        return _getPosition(address);
    }

    public Vector3 getLinearVelocity() {
        return _getLinearVelocity(address);
    }

    public Vector3 getAngularVelocity() {
        return _getAngularVelocity(address);
    }

    public Vector3 getLinearLockAxis() {
        return _getLinearLockAxis(address);
    }

    public Vector3 getAngularLockAxis() {
        return _getAngularLockAxis(address);
    }

    public Vector3 getForce() {
        return _getForce(address);
    }

    public Vector3 getTorque() {
        return _getTorque(address);
    }

    public Quaternion getRotation() {
        return _getRotation(address);
    }

    public float getMass() {
        return _getMass(address);
    }

    public float getLinearDamping() {
        return _getLinearDamping(address);
    }

    public float getAngularDamping() {
        return _getAngularDamping(address);
    }

    public boolean isSleeping() {
        return _isSleeping(address);
    }

    public boolean isActive() {
        return _isActive(address);
    }

    public boolean isGravityEnabled() {
        return _isGravityEnabled(address);
    }

    public void setPosition(Vector3 value) {
        _setPosition(address, value);
    }

    public void setPosition(float x, float y, float z) {
        var vec = new Vector3(x, y, z);
        _setPosition(address, vec);
    }

    public void setLinearVelocity(Vector3 value) {
        _setLinearVelocity(address, value);
    }

    public void setLinearVelocity(float x, float y, float z) {
        var vec = new Vector3(x, y, z);
        _setLinearVelocity(address, vec);
    }

    public void setAngularVelocity(Vector3 value) {
        _setAngularVelocity(address, value);
    }

    public void setAngularVelocity(float x, float y, float z) {
        var vec = new Vector3(x, y, z);
        _setAngularVelocity(address, vec);
    }

    public void setLinearLockAxis(Vector3 value) {
        _setLinearLockAxis(address, value);
    }

    public void setLinearLockAxis(float x, float y, float z) {
        var vec = new Vector3(x, y, z);
        _setLinearLockAxis(address, vec);
    }

    public void setAngularLockAxis(Vector3 value) {
        _setAngularLockAxis(address, value);
    }

    public void setAngularLockAxis(float x, float y, float z) {
        var vec = new Vector3(x, y, z);
        _setAngularLockAxis(address, vec);
    }

    public void setRotation(Quaternion value) {
        _setRotation(address, value);
    }

    public void setRotation(float x, float y, float z, float w) {
        var quat = new Quaternion(x, y, z, w);
        _setRotation(address, quat);
    }

    public void setMass(float value) {
        _setMass(address, value);
    }

    public void setLinearDamping(float value) {
        _setLinearDamping(address, value);
    }

    public void setAngularDamping(float value) {
        _setAngularDamping(address, value);
    }

    public void setSleeping(boolean value) {
        _setSleeping(address, value);
    }

    public void setActive(boolean value) {
        _setActive(address, value);
    }

    public void setGravityEnabled(boolean value) {
        _setGravityEnabled(address, value);
    }

    /**
     * Internal constructor
     *
     * @param pointer     The native pointer address
     * @param pointerType The native pointer type
     */
    RigidBody(long pointer, PointerType pointerType) {
        super();

        this.address = pointer;
        this.type = pointerType;
    }

    /**
     * Public default constructor.
     */
    public RigidBody(RigidBodyType type) throws ArqanoreException {
        super();

        address = _create(EnumUtils.convertRigidBodyType(type));
    }

    public RigidBody(RigidBodyType type, Vector3 position, Quaternion rotation) throws ArqanoreException {
        super();

        address = _create(EnumUtils.convertRigidBodyType(type), position, rotation);
    }

    /**
     * Deletes the native pointer
     */
    @Override
    public void delete() {
        if (type != PointerType.DYNAMIC) {
            return;
        }

        _destroy(address);
        super.delete();
    }

    public void update(double factor) {
        _update(address, factor);
    }

    public void applyForce(Vector3 value) {
        _applyForce(address, value);
    }

    public void applyForce(float x, float y, float z) {
        var vec = new Vector3(x, y, z);
        applyForce(vec);
    }

    public void applyTorque(Vector3 value) {
        _applyTorque(address, value);
    }

    public void applyTorque(float x, float y, float z) {
        var vec = new Vector3(x, y, z);
        applyTorque(vec);
    }

    public void resetForce() {
        _resetForce(address);
    }

    public void resetTorque() {
        _resetTorque(address);
    }

    public void addCollider(BoxCollider collider) {
        _addCollider(address, collider.address);
    }

    public void addCollider(SphereCollider collider) {
        _addCollider(address, collider.address);
    }

    public void addCollider(ConcaveCollider collider) {
        _addCollider(address, collider.address);
    }

    public void dispose() {
        _dispose(address);
    }

    private native long _create(int type);

    private native long _create(int type, Vector3 position, Quaternion rotation);

    private native void _destroy(long pointer);


    private native Vector3 _getPosition(long pointer);

    private native Vector3 _getLinearVelocity(long pointer);

    private native Vector3 _getAngularVelocity(long pointer);

    private native Vector3 _getLinearLockAxis(long pointer);

    private native Vector3 _getAngularLockAxis(long pointer);

    private native Vector3 _getForce(long pointer);

    private native Vector3 _getTorque(long pointer);

    private native Quaternion _getRotation(long pointer);

    private native float _getMass(long pointer);

    private native float _getLinearDamping(long pointer);

    private native float _getAngularDamping(long pointer);

    private native boolean _isSleeping(long pointer);

    private native boolean _isActive(long pointer);

    private native boolean _isGravityEnabled(long pointer);

    private native void _setPosition(long pointer, Vector3 position);

    private native void _setLinearVelocity(long pointer, Vector3 value);

    private native void _setAngularVelocity(long pointer, Vector3 value);

    private native void _setLinearLockAxis(long pointer, Vector3 value);

    private native void _setAngularLockAxis(long pointer, Vector3 value);

    private native void _setRotation(long pointer, Quaternion rotation);

    private native void _setMass(long pointer, float value);

    private native void _setLinearDamping(long pointer, float value);

    private native void _setAngularDamping(long pointer, float value);

    private native void _setSleeping(long pointer, boolean value);

    private native void _setActive(long pointer, boolean value);

    private native void _setGravityEnabled(long pointer, boolean value);

    private native void _update(long pointer, double factor);

    private native void _applyForce(long pointer, Vector3 value);

    private native void _applyTorque(long pointer, Vector3 value);

    private native void _resetForce(long pointer);

    private native void _resetTorque(long pointer);

    private native void _addCollider(long pointer, long collider);

    private native void _dispose(long pointer);
}

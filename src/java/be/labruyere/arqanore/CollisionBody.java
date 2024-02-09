package be.labruyere.arqanore;

import be.labruyere.arqanore.enums.PointerType;
import be.labruyere.arqanore.exceptions.ArqanoreException;

public class CollisionBody extends Pointer {
    public boolean isActive() {
        return _isActive(address);
    }

    public Vector3 getPosition() {
        return _getPosition(address);
    }

    public Quaternion getRotation() {
        return _getRotation(address);
    }

    public void setActive(boolean value) {
        _setActive(address, value);
    }

    public void setPosition(Vector3 value) {
        _setPosition(address, value);
    }

    public void setPosition(float x, float y, float z) {
        var vec = new Vector3(x, y, z);
        _setPosition(address, vec);
    }

    public void setRotation(Quaternion value) {
        _setRotation(address, value);
    }

    public void setRotation(float x, float y, float z, float w) {
        var quat = new Quaternion(x, y, z, w);
        _setRotation(address, quat);
    }

    /**
     * Internal constructor
     *
     * @param pointer     The native pointer address
     * @param pointerType The native pointer type
     */
    CollisionBody(long pointer, PointerType pointerType) {
        super();

        this.address = pointer;
        this.type = pointerType;
    }

    /**
     * Public default constructor.
     */
    public CollisionBody(Vector3 position, Quaternion rotation) throws ArqanoreException {
        super();

        address = _create(position, rotation);
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

    public boolean isColliding(CollisionBody body) {
        return _isColliding(address, body.address);
    }

    private native long _create(Vector3 position, Quaternion rotation);

    private native void _destroy(long pointer);

    private native boolean _isActive(long pointer);

    private native Vector3 _getPosition(long pointer);

    private native Quaternion _getRotation(long pointer);

    private native void _setActive(long pointer, boolean value);

    private native void _setPosition(long pointer, Vector3 position);

    private native void _setRotation(long pointer, Quaternion rotation);

    private native void _dispose(long pointer);

    private native void _addCollider(long pointer, long collider);

    private native boolean _isColliding(long pointer, long body);
}

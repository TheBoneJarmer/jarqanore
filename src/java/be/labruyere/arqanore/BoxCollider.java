package be.labruyere.arqanore;

import be.labruyere.arqanore.enums.PointerType;
import be.labruyere.arqanore.exceptions.ArqanoreException;

public class BoxCollider extends Pointer {
    /**
     * Internal constructor
     * @param pointer The native pointer address
     * @param pointerType The native pointer type
     */
    BoxCollider(long pointer, PointerType pointerType) {
        super();

        this.address = pointer;
        this.type = pointerType;
    }

    /**
     * Public default constructor.
     */
    public BoxCollider(float width, float height, float depth) throws ArqanoreException {
        super();

        address = _create(width, height, depth);
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

    private native long _create(float width, float height, float depth);
    private native void _destroy(long pointer);
}

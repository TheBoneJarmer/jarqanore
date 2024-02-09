package be.labruyere.arqanore;

import be.labruyere.arqanore.enums.PointerType;
import be.labruyere.arqanore.exceptions.ArqanoreException;

public class ConcaveCollider extends Pointer {
    /**
     * Internal constructor
     * @param pointer The native pointer address
     * @param pointerType The native pointer type
     */
    ConcaveCollider(long pointer, PointerType pointerType) {
        super();

        this.address = pointer;
        this.type = pointerType;
    }

    /**
     * Public default constructor.
     */
    public ConcaveCollider(Model model) throws ArqanoreException {
        super();

        address = _create(model.address);
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

    private native long _create(long model);
    private native void _destroy(long pointer);
}

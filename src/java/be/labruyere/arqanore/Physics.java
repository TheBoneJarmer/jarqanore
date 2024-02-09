package be.labruyere.arqanore;

public class Physics {
    static {
        Arqanore.init();
    }

    public static Vector3 getGravity() {
        return _getGravity();
    }

    public static boolean isGravityEnabled() {
        return _isGravityEnabled();
    }

    public static boolean isSleepingEnabled() {
        return _isSleepingEnabled();
    }

    public static float getSleepLinearVelocity() {
        return _getSleepLinearVelocity();
    }

    public static float getSleepAngularVelocity() {
        return _getSleepAngularVelocity();
    }

    public static float getTimeBeforeSleep() {
        return _getTimeBeforeSleep();
    }

    public static void setGravity(Vector3 value) {
        _setGravity(value);
    }

    public static void setGravity(float x, float y, float z) {
        var vec = new Vector3(x,y,z);
        _setGravity(vec);
    }

    public static void setGravityEnabled(boolean value) {
        _setGravityEnabled(value);
    }

    public static void setSleepingEnabled(boolean value) {
        _setSleepingEnabled(value);
    }

    public static void setSleepLinearVelocity(float value) {
        _setSleepLinearVelocity(value);
    }

    public static void setSleepAngularVelocity(float value) {
        _setSleepAngularVelocity(value);
    }

    public static void setTimeBeforeSleep(float value) {
        _setTimeBeforeSleep(value);
    }

    private static native Vector3 _getGravity();
    private static native boolean _isGravityEnabled();
    private static native boolean _isSleepingEnabled();
    private static native float _getSleepLinearVelocity();
    private static native float _getSleepAngularVelocity();
    private static native float _getTimeBeforeSleep();
    private static native void _setGravity(Vector3 value);
    private static native void _setGravityEnabled(boolean value);
    private static native void _setSleepingEnabled(boolean value);
    private static native void _setSleepLinearVelocity(float value);
    private static native void _setSleepAngularVelocity(float value);
    private static native void _setTimeBeforeSleep(float value);
}

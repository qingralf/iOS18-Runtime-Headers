/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACThreadSafeCollection : NSObject {
    NSHashTable * _objects;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _objectsLock;
    bool  _weakObjects;
}

+ (id)strongObjectsCollection;
+ (id)weakObjectsCollection;

- (void).cxx_destruct;
- (void)_synchronizedObjects:(id /* block */)arg1;
- (void)append:(id)arg1;
- (long long)count;
- (void)forEach:(id /* block */)arg1;
- (id)initWithWeakObjects:(bool)arg1;
- (void)remove:(id)arg1;

@end

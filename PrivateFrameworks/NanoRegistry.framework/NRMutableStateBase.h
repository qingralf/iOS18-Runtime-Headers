/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRMutableStateBase : NSObject <NRMutableStateProtocol> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _observers;
    <NRMutableStateParentDelegate> * _parentDelegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)classTypes;
+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (id)enclosedClassTypes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addObserverQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)applyDiff:(id)arg1;
- (id)applyDiff:(id)arg1 upOnly:(bool)arg2 notifyParent:(bool)arg3 unconditional:(bool)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (void)notifyObserversWithDiff:(id)arg1;
- (void)notifyParentWithDiff:(id)arg1;
- (id)parentDelegate;
- (void)removeObserver:(id)arg1;
- (void)setParentDelegate:(id)arg1;

@end

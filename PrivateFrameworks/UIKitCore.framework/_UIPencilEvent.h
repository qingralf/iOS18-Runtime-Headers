/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPencilEvent : UIEvent <BSDebugDescriptionProviding> {
    _UIGenericGestureHIDEventDescriptor * _continuousEventDescriptorForDispatch;
    NSCountedSet * _countedWindowPointerWithInteractionsWantingFocus;
    NSMapTable * _deliveryRecordsByDescriptor;
    UINotificationFeedbackGenerator * _doubleTapNotificationGenerator;
    NSArray * _interactionsForDispatch;
    double  _normalizedForceVelocity;
    unsigned long long  _phase;
    NSHashTable * _registeredInteractions;
    unsigned long long  _senderID;
    <BSInvalidatable> * _stateCaptureToken;
    long long  _subtype;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupAfterDispatch;
- (id)_cloneEvent;
- (id)_init;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)subtype;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end

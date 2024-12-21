/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDynamicButtonEvent : UIEvent <BSDebugDescriptionProviding, BSDescriptionStreamable, _UIEventComponentContaining> {
    NSMapTable * _deliveryTableByDynamicButton;
    _UIDynamicButton * _dynamicButtonForDispatch;
    NSMapTable * _dynamicButtonsByWindow;
}

@property (nonatomic, readonly, copy) NSSet *_allDynamicButtons;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allDynamicButtons;
- (id)_allWindows;
- (void)_cancelComponents:(id)arg1;
- (void)_cleanupAfterDispatch;
- (id)_cloneEvent;
- (id)_componentsForGestureRecognizer:(id)arg1;
- (id)_componentsForWindow:(id)arg1;
- (id)_dispatchWindows;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_init;
- (void)_removeComponents:(id)arg1;
- (void)_removeGestureRecognizer:(id)arg1 fromComponents:(id)arg2;
- (bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_windowDidBecomeHidden:(id)arg1;
- (void)_windowDidDetachContext:(id)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (long long)subtype;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end
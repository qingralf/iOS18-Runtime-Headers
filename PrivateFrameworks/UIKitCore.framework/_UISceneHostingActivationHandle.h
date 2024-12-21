/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISceneHostingActivationHandle : NSObject <BSInvalidatable, _UISceneHostingActivationHandle> {
    <_UISceneHostingActivating> * _activationTarget;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isHandleValid, nonatomic, readonly) bool handleValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate:(id /* block */)arg1;
- (void)deactivate:(id /* block */)arg1;
- (void)dealloc;
- (void)invalidate;
- (bool)isActive;
- (bool)isHandleValid;

@end
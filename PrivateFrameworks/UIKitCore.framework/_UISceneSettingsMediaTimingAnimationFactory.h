/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISceneSettingsMediaTimingAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    CAMediaTimingFunction * __timingFunctionForAnimation;
}

@property (getter=_timingFunctionForAnimation, nonatomic, retain) CAMediaTimingFunction *_timingFunctionForAnimation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (void)set_timingFunctionForAnimation:(id)arg1;

@end

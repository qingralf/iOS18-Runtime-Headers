/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

@interface BKUIPearlEnrollAnimationManager : NSObject <CAAnimationDelegate>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)gaussianBlurWithRadius:(double)arg1;
- (id)gaussianBlurWithRadius:(double)arg1 normalizeEdges:(bool)arg2 hardEdges:(bool)arg3 quality:(id)arg4 intermediateBitDepth:(id)arg5;
- (void)runBasicAnimationOnLayer:(id)arg1 withDuration:(double)arg2 keyPath:(id)arg3 fromValue:(id)arg4 toValue:(id)arg5 removedOnCompletion:(bool)arg6 timingFunction:(id)arg7 completion:(id /* block */)arg8;
- (void)transitionTo:(id)arg1 completion:(id /* block */)arg2;

@end

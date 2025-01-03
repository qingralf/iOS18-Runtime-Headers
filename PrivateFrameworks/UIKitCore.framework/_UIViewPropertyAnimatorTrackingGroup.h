/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating> {
    NSArray * _trackingAnimators;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) double fractionComplete;
@property (readonly) unsigned long long hash;
@property (getter=isReversed, nonatomic) bool reversed;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *trackingAnimators;

- (void).cxx_destruct;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;
- (void)finishAnimationAtPosition:(long long)arg1;
- (double)fractionComplete;
- (id)initWithAnimators:(id)arg1;
- (bool)isReversed;
- (bool)isRunning;
- (void)pauseAnimation;
- (void)setFractionComplete:(double)arg1;
- (void)setReversed:(bool)arg1;
- (void)startAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (long long)state;
- (void)stopAnimation:(bool)arg1;
- (id)trackingAnimators;

@end

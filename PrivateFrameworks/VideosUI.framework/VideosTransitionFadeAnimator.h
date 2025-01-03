/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosTransitionFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    double  _animationDuration;
    long long  _transitionType;
}

@property (nonatomic) double animationDuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long transitionType;

- (void)animateTransition:(id)arg1;
- (double)animationDuration;
- (id)initWithTransitionType:(long long)arg1 andDuration:(double)arg2;
- (void)setAnimationDuration:(double)arg1;
- (void)setTransitionType:(long long)arg1;
- (double)transitionDuration:(id)arg1;
- (long long)transitionType;

@end

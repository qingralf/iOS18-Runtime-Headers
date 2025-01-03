/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
 */

@interface EMKRippleAnimator : NSObject {
    EMKRippleAnimation * _animation;
    UIColor * _foregroundColor;
    <_NSTextAnimator> * _glimmerAnimator;
    id /* block */  _notify;
    <_NSTextAnimator> * _scaleRippleAnimator;
}

@property (nonatomic, retain) EMKRippleAnimation *animation;
@property (nonatomic, copy) UIColor *foregroundColor;
@property (nonatomic, retain) <_NSTextAnimator> *glimmerAnimator;
@property (getter=isIdle, nonatomic, readonly) bool idle;
@property (nonatomic, readonly) double nextAnimationTriggerDelay;
@property (nonatomic, copy) id /* block */ notify;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic, retain) <_NSTextAnimator> *scaleRippleAnimator;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (id)animation;
- (id)foregroundColor;
- (id)glimmerAnimator;
- (id)initWithAnimation:(id)arg1 foregroundColor:(id)arg2;
- (bool)isIdle;
- (bool)isPlaying;
- (double)nextAnimationTriggerDelay;
- (id /* block */)notify;
- (id)scaleRippleAnimator;
- (void)setAnimation:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setGlimmerAnimator:(id)arg1;
- (void)setNotify:(id /* block */)arg1;
- (void)setScaleRippleAnimator:(id)arg1;
- (void)start;
- (unsigned long long)state;

@end

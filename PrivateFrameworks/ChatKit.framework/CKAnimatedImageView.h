/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAnimatedImageView : UIImageView <IMAnimationTimerObserver> {
    CKAnimatedImage * _animatedImage;
    bool  _automaticallyObserveWindowForAnimationTimer;
    NSArray * _frames;
    bool  _userExplicitlyUnpausedAnimation;
}

@property (nonatomic, retain) CKAnimatedImage *animatedImage;
@property (nonatomic) bool automaticallyObserveWindowForAnimationTimer;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool userExplicitlyUnpausedAnimation;

- (void).cxx_destruct;
- (id)animatedImage;
- (bool)animationExplicitlyResumed;
- (void)animationTimerFired:(double)arg1;
- (bool)automaticallyObserveWindowForAnimationTimer;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)frames;
- (void)setAnimatedImage:(id)arg1;
- (void)setAutomaticallyObserveWindowForAnimationTimer:(bool)arg1;
- (void)setFrames:(id)arg1;
- (void)setUserExplicitlyUnpausedAnimation:(bool)arg1;
- (void)updateAnimationTimerObserving;
- (bool)userExplicitlyUnpausedAnimation;

@end
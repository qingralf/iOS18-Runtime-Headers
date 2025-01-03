/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarLockView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable> {
    _UIStatusBarImageView * _bodyView;
    id /* block */  _completionBlock;
    _UIStatusBarImageView * _shackleView;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation; /* unknown property attribute: ? */
@property (nonatomic, retain) _UIStatusBarImageView *bodyView;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long overriddenVerticalAlignment; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool prefersBaselineAlignment; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment; /* unknown property attribute: ? */
@property (nonatomic, retain) _UIStatusBarImageView *shackleView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (void)animateUnlockWithCompletionBlock:(id /* block */)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)applyStyleAttributes:(id)arg1;
- (id)bodyView;
- (id /* block */)completionBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)jiggleWithCompletionBlock:(id /* block */)arg1;
- (bool)prefersBaselineAlignment;
- (void)resetLock;
- (void)setBodyView:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setShackleView:(id)arg1;
- (id)shackleView;

@end

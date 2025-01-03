/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate> {
    bool  _disabled;
    double  _keyScale;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) double keyScale;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primaryGlyphNormalizedExitRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } secondaryGlyphNormalizedExitRect;
@property (nonatomic, readonly) bool shouldPurgeKeyViews;
@property (readonly) Class superclass;

+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;

- (void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (Class)_keyViewClassForSpecialtyKey:(id)arg1 screenTraits:(id)arg2;
- (double)delayedDeactivationTimeForKeyView:(id)arg1;
- (bool)disabled;
- (void)endTransitionForKeyView:(id)arg1;
- (double)keyScale;
- (Class)keyViewClassForKey:(id)arg1 renderTraits:(id)arg2 screenTraits:(id)arg3;
- (id)keycapAlternateDualStringTransform:(id)arg1;
- (id)keycapAlternateTransform:(id)arg1;
- (id)keycapLeftSelectLeftTransform;
- (id)keycapLeftSelectPrimaryTransform;
- (id)keycapLeftSelectRightTransform;
- (id)keycapLeftTransform;
- (id)keycapMeshTransformFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)keycapMeshTransformFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3;
- (id)keycapNullTransform;
- (id)keycapPrimaryDualStringTransform:(id)arg1;
- (id)keycapPrimaryExitTransform;
- (id)keycapPrimaryTransform;
- (id)keycapRightSelectLeftTransform;
- (id)keycapRightSelectPrimaryTransform;
- (id)keycapRightSelectRightTransform;
- (id)keycapRightTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryGlyphNormalizedExitRect;
- (id)primaryReverseTransform;
- (void)reset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })secondaryGlyphNormalizedExitRect;
- (void)setDisabled:(bool)arg1;
- (void)setKeyScale:(double)arg1;
- (bool)shouldAssertCurrentKeyState:(id)arg1;
- (bool)shouldPurgeKeyViews;
- (bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(id /* block */)arg4;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(id /* block */)arg4;
- (void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(bool)arg3;
- (void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(struct CGSize { double x1; double x2; })arg2;

@end

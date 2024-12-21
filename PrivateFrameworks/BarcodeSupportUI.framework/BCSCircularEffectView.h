/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BarcodeSupportUI.framework/BarcodeSupportUI
 */

@interface BCSCircularEffectView : UIView <CAAnimationDelegate> {
    UIImage * _centerGlyphImage;
    CALayer * _centerRing;
    bool  _centerRingScaleAnimationStarted;
    NSMutableArray * _circles;
    CALayer * _glyphLayer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildRings;
- (void)animateCenterGlyphAndRings;
- (void)animateRingsRotationWithCompletion:(id /* block */)arg1;
- (void)animationDidStart:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareCenterGlyphWithImage:(id)arg1;
- (void)revealCenterGlyphAndRings;

@end
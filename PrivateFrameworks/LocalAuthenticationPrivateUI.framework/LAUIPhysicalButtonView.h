/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUIPhysicalButtonView : UIView {
    bool  _animating;
    LAUIPhysicalButtonViewAnimation * _animation;
    long long  _animationStyle;
    UIView * _buttonView;
    UIView * _containerView;
    <UICoordinateSpace> * _coordinateSpace;
    unsigned int  _edge;
    bool  _export;
    <SBSHardwareButtonHintViewContentVisibilityControlling><BSInvalidatable> * _exportedHandle;
    bool  _exporting;
    <UICoordinateSpace> * _fixedCoordinateSpace;
    NSString * _instruction;
    UILabel * _instructionLabel;
    bool  _isInstructionHidden;
    long long  _lastInterfaceOrientation;
    bool  _onScreen;
    long long  _style;
    unsigned long long  _visibilityAnimationCount;
    bool  _workaroundsDisabled;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic) long long animationStyle;
@property (nonatomic, readonly) unsigned int edge;
@property (nonatomic, copy) NSString *instruction;
@property (nonatomic) bool isInstructionHidden;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)_colorForStyle:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_physicalButtonNormalizedFrame;
- (void)_updateOnScreen;
- (long long)animationStyle;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)disableWorkarounds;
- (unsigned int)edge;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (id)instruction;
- (void)interfaceOrientationDidChange:(id)arg1;
- (bool)isAnimating;
- (bool)isInstructionHidden;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationStyle:(long long)arg1;
- (void)setInstruction:(id)arg1;
- (void)setIsInstructionHidden:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void)updateFrame;

@end

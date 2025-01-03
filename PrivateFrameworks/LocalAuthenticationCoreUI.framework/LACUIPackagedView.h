/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCoreUI.framework/LocalAuthenticationCoreUI
 */

@interface LACUIPackagedView : UIView {
    CALayer * _rootLayer;
    bool  _setInitialStateWhenMovedToWindow;
    LACUIPackagedViewStateController * _stateController;
}

@property (nonatomic, retain) CALayer *rootLayer;
@property (nonatomic) bool setInitialStateWhenMovedToWindow;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })convertPointToSublayerCoordinates:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromSublayerCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)description;
- (void)didMoveToWindow;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (void)layoutSubviews;
- (id)rootLayer;
- (bool)setInitialStateWhenMovedToWindow;
- (void)setRootLayer:(id)arg1;
- (void)setSetInitialStateWhenMovedToWindow:(bool)arg1;
- (void)setState:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setStateNamed:(id)arg1 animated:(bool)arg2;
- (void)setStateNamed:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end

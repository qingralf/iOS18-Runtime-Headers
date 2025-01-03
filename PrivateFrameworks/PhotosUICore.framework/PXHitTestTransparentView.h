/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXHitTestTransparentView : UIView {
    <PXHitTestTransparentViewDelegate> * _delegate;
}

@property (nonatomic) <PXHitTestTransparentViewDelegate> *delegate;

- (void).cxx_destruct;
- (long long)_hitTestBehaviorForView:(id)arg1;
- (bool)_isPoint:(struct CGPoint { double x1; double x2; })arg1 insideView:(id)arg2 withEvent:(id)arg3 adjustedPoint:(out struct CGPoint { double x1; double x2; }*)arg4;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPGSVTransitionInterstitialAlignmentView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentInsetAdjustments;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentInsets;
    struct CGPoint { 
        double x; 
        double y; 
    }  _alignmentRectAnchorPoint;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _effectiveAlignmentInsets;
    id /* block */  _provider;
    UIView * _view;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } alignmentRectAnchorPoint;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })alignmentRectAnchorPoint;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithView:(id)arg1 alignmentRectInsetsAdjustmentProvider:(id /* block */)arg2;
- (void)layoutSubviews;
- (void)setAlignmentRectAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)view;

@end

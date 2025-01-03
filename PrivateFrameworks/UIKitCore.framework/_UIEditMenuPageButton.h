/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIEditMenuPageButton : UIButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _arrowEdgeInsets;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _defaultInsets;
    long long  _direction;
    UIVisualEffectView * _separatorView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } arrowEdgeInsets;
@property (nonatomic, readonly) long long direction;

- (void).cxx_destruct;
- (void)_configureButtonWithGroupName:(id)arg1;
- (id)_imageNameForCurrentDirection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arrowEdgeInsets;
- (long long)direction;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithDirection:(long long)arg1 backgroundGroupName:(id)arg2;
- (void)layoutSubviews;
- (void)setArrowEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end

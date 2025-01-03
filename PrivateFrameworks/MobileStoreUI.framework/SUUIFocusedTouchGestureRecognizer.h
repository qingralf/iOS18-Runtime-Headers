/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIFocusedTouchGestureRecognizer : UIGestureRecognizer {
    NSMutableSet * _activeTouches;
    bool  _didTouchOutside;
    UIView * _focusedView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _touchAllowance;
}

@property (nonatomic, readonly) UIView *focusedView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchAllowance;

- (void).cxx_destruct;
- (id)focusedView;
- (id)initWithFocusedView:(id)arg1 touchAllowance:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)reset;
- (void)setTouchAllowance:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchAllowance;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

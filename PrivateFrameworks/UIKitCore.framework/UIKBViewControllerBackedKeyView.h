/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBViewControllerBackedKeyView : UIKBKeyView {
    UIViewController * _childViewController;
    bool  _hasAncestorViewController;
}

@property (nonatomic, retain) UIKBScreenTraits *screenTraits;

+ (bool)wantsScreenTraits;

- (void).cxx_destruct;
- (void)addChildViewControllerIfNeeded;
- (id)contentViewController;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;
- (void)layoutSubviews;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

@end
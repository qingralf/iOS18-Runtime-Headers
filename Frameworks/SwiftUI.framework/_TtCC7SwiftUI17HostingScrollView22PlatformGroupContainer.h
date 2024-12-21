/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
 */

@interface _TtCC7SwiftUI17HostingScrollView22PlatformGroupContainer : UIView <UIFocusItem, UIFocusItemContainer> {
    void _focusableBorder;
    void _focusableBounds;
    void _focusableFillerBounds;
    void _pixelLength;
    void fillerItems;
    void requestedFocusItem;
    void scrollView;
}

@property (nonatomic, readonly) NSArray *_childGestureRecognizerContainers;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

+ (bool)_supportsInvalidatingFocusCache;

- (void).cxx_destruct;
- (bool)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)_childGestureRecognizerContainers;
- (bool)_swiftuiReturnsSubviewsInFocusItemsInRect;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredFocusEnvironments;

@end
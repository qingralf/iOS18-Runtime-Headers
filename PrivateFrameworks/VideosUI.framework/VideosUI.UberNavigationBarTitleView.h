/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosUI.UberNavigationBarTitleView : _UINavigationBarTitleView <VUIViewScrollPercentageUpdateProtocol> {
    void allowsUberTinting;
    void backButtonFrame;
    void backButtonFrameChangeHandler;
    void customBackButton;
    void dismissalDisplayMode;
    void effectiveTitleOpacity;
    void futureDisplayMode;
    void hostViewController;
    void isMaterialBackButtonDisplayed;
    void isNavigationRoot;
    void supportsMaterialBackButton;
    void titleOpacity;
    void titleView;
    void touchProxyView;
}

@property (nonatomic) bool allowsUberTinting;

- (void).cxx_destruct;
- (bool)allowsUberTinting;
- (void)contentDidChange;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAllowsUberTinting:(bool)arg1;
- (void)setScrolledNonUberPercentage:(double)arg1;

@end
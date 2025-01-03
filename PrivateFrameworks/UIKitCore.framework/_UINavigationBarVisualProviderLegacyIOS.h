/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarVisualProviderLegacyIOS : _UINavigationBarVisualProvider <_UIBasicAnimationFactory, _UINavigationBarGestureHandlerDelegate> {
    UIImageView * _backIndicatorView;
    _UIBarBackground * _backgroundView;
    _UIBarBackgroundLayoutLegacy * _backgroundViewLayout;
    UIFocusContainerGuide * _contentFocusContainerGuide;
    UIView * _contentView;
    UIView * _customBackgroundView;
    _UINavigationBarGestureHandler * _gestureHandler;
    _UINavigationBarLegacyContentView * _layoutView;
    NSArray * _leftViews;
    _UINavBarPrompt * _prompt;
    NSArray * _rightViews;
    NSMutableArray * _slideTransitionClippingViews;
    UIView * _titleView;
    <UIViewControllerTransitionCoordinator> * _transitionCoordinator;
    UILayoutGuide * _userContentGuide;
    NSLayoutConstraint * _userContentGuideLeading;
    NSLayoutConstraint * _userContentGuideTrailing;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2;
- (double)_backIndicatorClippingMargin;
- (double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_completeNavigationTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 transitionAssistant:(id)arg3 completion:(id /* block */)arg4;
- (void)_completeTopItemTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 previousLeftViews:(id)arg3 previousRightViews:(id)arg4 enableUserInteraction:(id)arg5 transitionAssistant:(id)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(id)arg2;
- (id)_defaultTitleFontForItem:(id)arg1 fittingHeight:(double)arg2 withScaleAdjustment:(double)arg3;
- (id)_effectiveBackIndicatorImage;
- (double)_effectiveBackIndicatorLeftMargin;
- (id)_effectiveBackIndicatorTransitionMaskImage;
- (void)_getLeftMargin:(double*)arg1 rightMargin:(double*)arg2 forNavigationItem:(id)arg3 showingBackButton:(bool)arg4 visualStyle:(id)arg5;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 returnedIdealWidthOfTextContent:(double*)arg6 availableLayoutWidthForTextContent:(double*)arg7 idealBackButtonWidth:(double*)arg8;
- (void)_handleMouseDownAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_handleMouseUpAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_layoutInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withVisualStyle:(id)arg2;
- (void)_layoutSubviewsFromContentView;
- (id)_navigationItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_popForTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_preferredContentSizeForItem:(id)arg1;
- (void)_setUpContentFocusContainerGuide;
- (void)_setViewsAnimated:(bool)arg1 forTopNavigationItem:(id)arg2 backNavigationItem:(id)arg3 previousTopItem:(id)arg4;
- (bool)_shim_107516167;
- (void)_shim_30244716;
- (bool)_shim_34415965;
- (id)_shim_backIndicatorView;
- (long long)_shim_backdropStyle;
- (double)_shim_backgroundHeight;
- (id)_shim_compatibilityBackgroundView;
- (id)_shim_contentView;
- (id)_shim_customHitTest:(struct CGPoint { double x1; double x2; })arg1 forView:(id)arg2;
- (bool)_shim_disableBlurTinting;
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(bool)arg1;
- (id)_shim_layoutView;
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_shim_pressBackIndicator:(bool)arg1 initialPress:(bool)arg2;
- (id)_shim_promptText;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)_shim_setDisableBlurTinting:(bool)arg1;
- (void)_shim_setPromptText:(id)arg1 animated:(bool)arg2;
- (void)_shim_setShadowAlpha:(double)arg1;
- (void)_shim_setUseContentView:(bool)arg1;
- (double)_shim_shadowAlpha;
- (bool)_shim_throwConstraintExceptions;
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_shim_updateBackIndicator;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;
- (id)_shim_userContentGuide;
- (bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;
- (bool)_shouldPopForTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (void)_startPopAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(id /* block */)arg6;
- (void)_startPushAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(id /* block */)arg6;
- (unsigned long long)_subviewIndexAboveBackground;
- (bool)_supportsCanvasView;
- (bool)_suppressBackIndicator;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (void)_updateBackIndicatorImage;
- (void)_updateBackIndicatorViewTintColor;
- (void)_updateBackground;
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(bool)arg5 rightMaskImage:(id)arg6;
- (id)backButtonViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)barSizeChanged;
- (bool)canHandleStatusBarTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)changeAppearance;
- (struct CGPoint { double x1; double x2; })frameOriginForStatusBarLocatedAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)gestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(id /* block */)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 defaultViewHit:(id)arg2;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (void)popAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)preferredFocusedView;
- (void)prepare;
- (void)prepareForPop;
- (void)prepareForPush;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)pushAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)removeContentForItem:(id)arg1;
- (void)setBackButtonVisible:(bool)arg1 animated:(bool)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setupTopNavigationItem;
- (bool)shouldGestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)shouldUseHeightRangeFittingWidth;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)statusBarStyle;
- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBackgroundGroupName;
- (void)updateTopNavigationItemAnimated:(bool)arg1;
- (void)updateTopNavigationItemTitleView;

@end

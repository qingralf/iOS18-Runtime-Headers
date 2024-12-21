/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIEmojiSearchView : UIView {
    UIView * _animojiButton;
    UIView * _bottomHalfContainerView;
    long long  _buttonConfiguration;
    NSLayoutConstraint * _buttonConstaintNoButton;
    NSLayoutConstraint * _buttonConstraintFirstButtonDisabled;
    NSLayoutConstraint * _buttonConstraintFirstButtonEnabled;
    NSLayoutConstraint * _buttonConstraintOneButton;
    NSLayoutConstraint * _buttonConstraintTwoButtons;
    bool  _collapsed;
    UIView * _createButton;
    id /* block */  _createButtonCallback;
    UIVisualEffectView * _createButtonVisualEffectView;
    id /* block */  _createStickerFromPhotosButtonCallback;
    id /* block */  _layoutInvalidationCallback;
    UIView * _memojiButton;
    NSString * _overridingPlaceholder;
    UIView * _predictionView;
    UILayoutGuide * _predictionViewGuide;
    bool  _predictionViewVisible;
    UIView * _predictionViewWrapperView;
    NSLayoutConstraint * _predictionWrapperBottom;
    NSArray * _predictionWrapperConstraints;
    NSLayoutConstraint * _predictionWrapperLeading;
    NSLayoutConstraint * _predictionWrapperTop;
    id /* block */  _presentAvatarEditorButtonCallback;
    double  _previousInsets;
    UIView * _resultsCollectionContainerView;
    UIView * _resultsCollectionView;
    NSArray * _resultsCollectionWrapperConstraints;
    bool  _resultsViewVisible;
    NSLayoutConstraint * _searchFieldLeading;
    NSLayoutConstraint * _searchFieldToTop;
    TUIEmojiSearchTextField * _searchTextField;
    UIView * _searchTextFieldContainerView;
    UIView * _searchTextFieldPortal;
    bool  _shouldCreateButtonGlow;
    NSArray * _sideBySideViewConstraints;
    UIView * _stickerButton;
    NSArray * _textFieldOnTopConstraints;
    NSLayoutConstraint * _topToBottomPadding;
    bool  _useHorizontalLayout;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic, copy) id /* block */ createButtonCallback;
@property (nonatomic, copy) id /* block */ createStickerFromPhotosButtonCallback;
@property (nonatomic, copy) id /* block */ layoutInvalidationCallback;
@property (nonatomic, retain) UIView *predictionView;
@property (nonatomic) bool predictionViewVisible;
@property (nonatomic, copy) id /* block */ presentAvatarEditorButtonCallback;
@property (nonatomic, retain) UIView *resultsCollectionView;
@property (nonatomic) bool resultsViewVisible;
@property (nonatomic, readonly) TUIEmojiSearchTextField *searchTextField;

+ (bool)gmsAvailability;
+ (bool)isNotificationExtension;
+ (bool)shouldShowButtons;
+ (bool)shouldShowGenmoji;
+ (bool)shouldShowImages;

- (void).cxx_destruct;
- (void)_buttonConfigurationWillChange:(id)arg1;
- (id)_constraintsFromView:(id)arg1 toContainerView:(id)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 identifier:(id)arg4;
- (void)_createPredictionViewConstraints;
- (void)_createResultsViewConstraints;
- (void)_createSearchTextFieldAndButtonConstraints;
- (void)_didChangeHandBiasNotification:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_handBiasedEdgeInsets;
- (void)_placeholderWillChange:(id)arg1;
- (void)_updatePlaceholder;
- (id)addButtonForAction:(id)arg1 image:(id)arg2 accessibilityLabel:(id)arg3 addLightEffect:(bool)arg4;
- (void)addButtons;
- (id /* block */)createButtonCallback;
- (void)createConstraintsIfNeeded;
- (id /* block */)createStickerFromPhotosButtonCallback;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateCollectionViewLayoutIfNeeded;
- (bool)isCollapsed;
- (id /* block */)layoutInvalidationCallback;
- (void)layoutSubviews;
- (id)predictionView;
- (bool)predictionViewVisible;
- (id /* block */)presentAvatarEditorButtonCallback;
- (id)resultsCollectionView;
- (bool)resultsViewVisible;
- (id)searchTextField;
- (void)setCollapsed:(bool)arg1;
- (void)setCreateButtonCallback:(id /* block */)arg1;
- (void)setCreateStickerFromPhotosButtonCallback:(id /* block */)arg1;
- (void)setLayoutInvalidationCallback:(id /* block */)arg1;
- (void)setPredictionView:(id)arg1;
- (void)setPredictionViewVisible:(bool)arg1;
- (void)setPredictionViewVisible:(bool)arg1 animated:(bool)arg2;
- (void)setPresentAvatarEditorButtonCallback:(id /* block */)arg1;
- (void)setResultsCollectionView:(id)arg1;
- (void)setResultsViewVisible:(bool)arg1;
- (void)setShouldCreateButtonGlow:(bool)arg1 animated:(bool)arg2;
- (void)transitionToCompactLayout:(bool)arg1;
- (void)updateButtons;
- (void)updateGlowEffects;
- (void)updateInsetsIfNeeded:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updatePlaceholder;

@end
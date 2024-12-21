/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIButtonBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
    <_UIButtonBarAppearanceDelegate> * _appearanceDelegate;
    _UIBackButtonMaskView * _backButtonMask;
    NSLayoutConstraint * _backButtonTitleMaxWidthConstraint;
    UIButton * _backIndicatorButton;
    NSMutableDictionary * _backgroundImages;
    UIImageView * _backgroundView;
    NSArray * _barButtonTitleAttributes;
    NSMutableDictionary * _currentConstraints;
    NSArray * _finalTitleAttributes;
    struct { 
        unsigned int imageHasBaseline : 1; 
        unsigned int backButtonMaskEnabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
    }  _flags;
    _UIModernBarButton * _imageButton;
    id /* block */  _menuProvider;
    NSMutableDictionary * _oldConstraints;
    long long  _systemItem;
    UIColor * _tintColor;
    _UIModernBarButton * _titleButton;
    NSArray * _titleContent;
    NSMutableDictionary * _titleLookup;
}

- (void).cxx_destruct;
- (void)_addConstraintsForBackgroundViewWithOffset:(double)arg1 isBackButton:(bool)arg2 resizesImage:(bool)arg3;
- (void)_addHorizontalConstraintsForContentButton:(id)arg1 titleOffset:(double)arg2 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)_addHorizontalConstraintsForImageWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3;
- (void)_addHorizontalConstraintsForTextWithOffset:(double)arg1 additionalPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_addVerticalConstraintsForBackIndicatorWithTitleOffset:(double)arg1 bottomOffset:(double)arg2 useBaselineAlignment:(bool)arg3;
- (void)_addVerticalConstraintsForImageWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_addVerticalConstraintsForTextWithOffset:(double)arg1;
- (id)_backIndicatorImageForCompact:(bool)arg1;
- (id)_backIndicatorMaskForCompact:(bool)arg1;
- (id)_backIndicatorMaskSymbolConfigurationForCompact:(bool)arg1;
- (id)_backIndicatorSymbolConfigurationForCompact:(bool)arg1;
- (void)_computeTextAttributes;
- (void)_computeTextAttributesForBarButtonItem:(id)arg1;
- (void)_configureBackButtonMask;
- (void)_configureBackButtonWithBackButtonLayoutInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 useBaselineAlignment:(bool)arg2;
- (void)_configureImageBackButtonWithImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 useBaselineAlignment:(bool)arg3;
- (void)_configureImageOrTitleCompact:(bool)arg1;
- (void)_configureImageWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3;
- (void)_configureTextBackButtonWithTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 useBaselineAlignment:(bool)arg3;
- (void)_configureTextWithOffset:(struct UIOffset { double x1; double x2; })arg1 additionalPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (double)_defaultBackIndicatorBaselineInsetCompact:(bool)arg1;
- (double)_defaultPaddingForInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageInsetsForBarButtonItem:(id)arg1 compact:(bool)arg2 isBackButton:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForCompact:(bool)arg1;
- (void)_prepareBackgroundViewFromBarButtonItem:(id)arg1 isBackButton:(bool)arg2;
- (void)_removeTitleButton;
- (void)_setTitle:(id)arg1;
- (void)_setupAlternateTitles;
- (id)_titleContentForTitle:(id)arg1;
- (void)_updateTextContent;
- (void)_updateViewsForMaskingEnabled;
- (void)activateHeightMinimizer;
- (void)activateWidthMinimizer;
- (void)addActiveConstraint:(id)arg1 named:(id)arg2;
- (id)alignmentViewForStaticNavBarButtonLeading;
- (id)alignmentViewForStaticNavBarButtonTrailing;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 compact:(bool)arg2;
- (struct UIOffset { double x1; double x2; })backButtonBackgroundVerticalAdjustmentForCompact:(bool)arg1;
- (bool)backButtonMaskEnabled;
- (struct UIOffset { double x1; double x2; })backButtonTitlePositionOffsetForCompact:(bool)arg1;
- (id)backIndicatorView;
- (id)backgroundImageForState:(unsigned long long)arg1 compact:(bool)arg2;
- (id)backgroundImageView;
- (struct UIOffset { double x1; double x2; })backgroundVerticalAdjustmentForCompact:(bool)arg1;
- (id)buttonContextMenuInteractionConfiguration;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)arg1;
- (id)buttonContextMenuTargetedPreview;
- (Class)buttonControlClass;
- (struct CGSize { double x1; double x2; })buttonImageViewSize:(id)arg1;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(id /* block */)arg2;
- (bool)buttonSelectionState:(id)arg1 forRequestedState:(bool)arg2;
- (id)buttonSpringLoadedInteractionEffect;
- (bool)canUpdateMenuInPlace;
- (void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (double)contentButtonTrailingOffset:(double)arg1;
- (id)contentView;
- (id)imageButton;
- (id)matchingPointerShapeForView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContainer:(id)arg3;
- (struct CGPoint { double x1; double x2; })menuAnchorPoint;
- (id)pointerPreviewParameters;
- (id)pointerShapeInContainer:(id)arg1;
- (void)reload;
- (void)resetButtonHasHighlighted;
- (void)setBackButtonMaskEnabled:(bool)arg1;
- (bool)shouldLift;
- (bool)supportsBackButtons;
- (id)symbolConfigurationCompact:(bool)arg1;
- (id)symbolImageView;
- (id)textButton;
- (id)tintColor;
- (struct UIOffset { double x1; double x2; })titlePositionOffsetForCompact:(bool)arg1;
- (void)updateActiveConstraints:(id /* block */)arg1;
- (void)updateButton:(id)arg1 appearance:(id)arg2;
- (void)updateButton:(id)arg1 forEnabledState:(bool)arg2;
- (void)updateButton:(id)arg1 forHeldState:(bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(bool)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(bool)arg2;
- (void)updateImage;
- (void)updateMenu;

@end
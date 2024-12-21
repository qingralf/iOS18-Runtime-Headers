/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFPrivateBrowsingPrivacyProtectionsBanner : SFPinnableBanner {
    SFThemeColorEffectView * _backdrop;
    NSArray * _backdropConstraints;
    UIStackView * _buttonStackView;
    NSLayoutConstraint * _compactModeButtonStackViewWidthConstraint;
    NSArray * _compactModeConstraints;
    _SFDimmingButton * _dismissButton;
    id /* block */  _dismissButtonHandler;
    id /* block */  _reducePrivacyProtectionsActionHandler;
    _SFDimmingButton * _reducePrivacyProtectionsButton;
    NSArray * _regularModeConstraints;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleTopConstraint;
}

@property (nonatomic, copy) id /* block */ dismissButtonHandler;
@property (nonatomic, copy) id /* block */ reducePrivacyProtectionsActionHandler;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_createLayoutConstraints;
- (void)_dismiss;
- (void)_reducePrivacyProtections;
- (bool)_shouldUseCompactModeLayout;
- (id)_titleLabelFont:(bool)arg1;
- (void)_updateButtonStackViewAxisIfNeeded;
- (id)accessibilityIdentifier;
- (id /* block */)dismissButtonHandler;
- (id)init;
- (void)invalidateBannerLayout;
- (void)layoutSubviews;
- (id /* block */)reducePrivacyProtectionsActionHandler;
- (void)setDismissButtonHandler:(id /* block */)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setReducePrivacyProtectionsActionHandler:(id /* block */)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)themeDidChange;
- (id)titleLabel;
- (void)updateConstraintsForLayoutMode;

@end
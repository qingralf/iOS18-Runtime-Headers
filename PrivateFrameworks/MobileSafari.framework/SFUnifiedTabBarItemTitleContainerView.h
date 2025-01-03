/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFUnifiedTabBarItemTitleContainerView : UIView {
    long long  _alignment;
    bool  _animateLockViewPosition;
    bool  _animatingResize;
    SFURLLabel * _availabilityLabel;
    NSLayoutConstraint * _availabilityLabelAlignmentConstraint;
    bool  _collapsed;
    double  _contentOffset;
    bool  _dimsText;
    UIButton * _fakeClearButton;
    bool  _hasFocusedSensitiveInputField;
    bool  _hidesIconForHover;
    UIImage * _icon;
    double  _iconAlpha;
    double  _iconSpacing;
    SFFaviconView * _iconView;
    bool  _leadingAlignsIcon;
    SFURLLabel * _leadingAnnotationLabel;
    long long  _lockIconEdge;
    UIImageView * _lockView;
    bool  _narrow;
    double  _offsetOfTitleInSearchField;
    NSString * _placeholder;
    UIFont * _placeholderFont;
    UITextField * _searchField;
    long long  _securityAnnotation;
    bool  _showsIcon;
    bool  _showsLockIcon;
    bool  _showsPrivateAnnotation;
    bool  _showsSearchField;
    bool  _showsSearchIcon;
    bool  _showsSquishedAccessoryViews;
    double  _spacing;
    UIImageView * _squishedIconView;
    UIImageView * _squishedLockView;
    unsigned long long  _startIndexOfTitleInTextWhenExpanded;
    bool  _suppressesText;
    NSString * _textWhenExpanded;
    SFUnifiedTabBarItemTitleContainerViewTheme * _theme;
    NSString * _title;
    SFURLLabel * _titleLabel;
    bool  _titleLanguageIsRightToLeft;
    NSString * _titleTextStyle;
    double  _titleToSearchIconSpacing;
    NSString * _titleWhenCollapsed;
    UILabel * _trailingAnnotationLabel;
    bool  _usesInsetFromLayoutMargins;
}

@property (nonatomic, readonly) NSArray *_arrangedViews;
@property (nonatomic, readonly) NSArray *_arrangedViewsByContentCompressionResistancePriority;
@property (setter=_setShowsFakeClearButton:, nonatomic) bool _showsFakeClearButton;
@property (nonatomic) long long alignment;
@property (nonatomic) bool animateLockViewPosition;
@property (getter=isAnimatingResize, nonatomic) bool animatingResize;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic) double contentOffset;
@property (nonatomic) bool dimsText;
@property (nonatomic) bool hasFocusedSensitiveInputField;
@property (nonatomic) bool hidesIconForHover;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) double iconAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } iconFrame;
@property (nonatomic) bool leadingAlignsIcon;
@property (nonatomic) long long lockIconEdge;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } lockSize;
@property (nonatomic, readonly) double maximumIconWidth;
@property (nonatomic, readonly) double minimumWidthToShowTitle;
@property (getter=isNarrow, nonatomic, readonly) bool narrow;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, retain) UIFont *placeholderFont;
@property (nonatomic, retain) UITextField *searchField;
@property (nonatomic) long long securityAnnotation;
@property (nonatomic) bool showsIcon;
@property (nonatomic) bool showsLockIcon;
@property (nonatomic) bool showsPrivateAnnotation;
@property (nonatomic) bool showsSearchField;
@property (nonatomic) bool showsSearchIcon;
@property (nonatomic) bool showsSquishedAccessoryViews;
@property (nonatomic) double spacing;
@property (nonatomic, readonly) NSArray *squishedAccessoryViews;
@property (nonatomic) unsigned long long startIndexOfTitleInTextWhenExpanded;
@property (nonatomic) bool suppressesText;
@property (nonatomic, copy) NSString *textWhenExpanded;
@property (nonatomic, retain) SFUnifiedTabBarItemTitleContainerViewTheme *theme;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleRect;
@property (nonatomic, retain) NSString *titleTextStyle;
@property (nonatomic) double titleToSearchIconSpacing;
@property (nonatomic, copy) NSString *titleWhenCollapsed;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } urlSize;
@property (nonatomic) bool usesInsetFromLayoutMargins;

- (void).cxx_destruct;
- (double)_alphaForView:(id)arg1;
- (id)_arrangedViews;
- (id)_arrangedViewsByContentCompressionResistancePriority;
- (double)_collapsedWidthForView:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveDirectionalLayoutMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveLayoutMargins;
- (bool)_iconIsSymbol;
- (double)_iconSize;
- (id)_lastVisibleViewInViews:(id)arg1;
- (void)_layOutFakeClearButtonUsingPresentationFrame:(bool)arg1;
- (void)_layOutSearchField;
- (void)_layoutArrangedViews;
- (void)_layoutSquishedAccessoryView:(id)arg1 forView:(id)arg2;
- (void)_layoutSquishedAccessoryViews;
- (void)_leadingAlignCenteredIconIfNeeded;
- (id)_placeholderText;
- (struct CGSize { double x1; double x2; })_preferredSizeForView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_searchFieldFrame;
- (void)_setShowsFakeClearButton:(bool)arg1;
- (bool)_shouldShowAvailabilityLabel;
- (bool)_shouldSlideArrangedViewForSearchField:(id)arg1;
- (bool)_showsFakeClearButton;
- (bool)_showsPlaceholder;
- (bool)_showsView:(id)arg1;
- (void)_slideArrangedViewsForSearchField:(double)arg1;
- (double)_spacingBetweenView:(id)arg1 nextView:(id)arg2;
- (id)_squishedAccessorySymbolConfiguration;
- (id)_squishedIconView;
- (id)_squishedLockView;
- (id)_titleFontWithTraitCollection:(id)arg1;
- (void)_updateAlignmentForAvailabilityLabel:(id)arg1;
- (void)_updateIcon;
- (void)_updateIconSpacing;
- (void)_updateOffsetOfTitleInSearchField;
- (void)_updateSearchFieldColor;
- (void)_updateSecurityAnnotation;
- (void)_updateSecurityAnnotationAnimated:(bool)arg1;
- (void)_updateSquishedAccessorySymbolConfigurations;
- (void)_updateTitle;
- (void)_updateTitleColor;
- (void)_updateTitleFont;
- (bool)_viewCollapsesWhenHidden:(id)arg1;
- (long long)alignment;
- (bool)animateLockViewPosition;
- (void)beginTitleTextStyleAnimation;
- (void)beginTransitioningSearchField;
- (double)contentOffset;
- (bool)dimsText;
- (void)dismissAvailabilityLabelAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)endTitleTextStyleAnimation;
- (void)endTransitioningSearchField;
- (bool)hasFocusedSensitiveInputField;
- (bool)hidesIconForHover;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)icon;
- (double)iconAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconFrame;
- (id)initWithAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAnimatingResize;
- (bool)isCollapsed;
- (bool)isNarrow;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (bool)leadingAlignsIcon;
- (double)leadingIconOffset;
- (long long)lockIconEdge;
- (struct CGSize { double x1; double x2; })lockSize;
- (double)maximumIconWidth;
- (double)minimumWidthToShowTitle;
- (id)placeholder;
- (id)placeholderFont;
- (void)presentAvailabilityLabelWithText:(id)arg1;
- (bool)requiresTruncationToDisplayAvailabilityLabel:(id)arg1;
- (id)searchField;
- (long long)securityAnnotation;
- (void)setAlignment:(long long)arg1;
- (void)setAnimateLockViewPosition:(bool)arg1;
- (void)setAnimatingResize:(bool)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setContentOffset:(double)arg1;
- (void)setDimsText:(bool)arg1;
- (void)setHasFocusedSensitiveInputField:(bool)arg1;
- (void)setHidesIconForHover:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconAlpha:(double)arg1;
- (void)setLeadingAlignsIcon:(bool)arg1;
- (void)setLockIconEdge:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderFont:(id)arg1;
- (void)setSearchField:(id)arg1;
- (void)setSecurityAnnotation:(long long)arg1;
- (void)setShowsIcon:(bool)arg1;
- (void)setShowsLockIcon:(bool)arg1;
- (void)setShowsPrivateAnnotation:(bool)arg1;
- (void)setShowsSearchField:(bool)arg1;
- (void)setShowsSearchIcon:(bool)arg1;
- (void)setShowsSquishedAccessoryViews:(bool)arg1;
- (void)setSpacing:(double)arg1;
- (void)setStartIndexOfTitleInTextWhenExpanded:(unsigned long long)arg1;
- (void)setSuppressesText:(bool)arg1;
- (void)setTextWhenExpanded:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (void)setTitleToSearchIconSpacing:(double)arg1;
- (void)setTitleWhenCollapsed:(id)arg1;
- (void)setUsesInsetFromLayoutMargins:(bool)arg1;
- (bool)showsIcon;
- (bool)showsLockIcon;
- (bool)showsPrivateAnnotation;
- (bool)showsSearchField;
- (bool)showsSearchIcon;
- (bool)showsSquishedAccessoryViews;
- (double)spacing;
- (id)squishedAccessoryViews;
- (unsigned long long)startIndexOfTitleInTextWhenExpanded;
- (bool)suppressesText;
- (id)textWhenExpanded;
- (id)theme;
- (id)title;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRect;
- (id)titleTextStyle;
- (double)titleToSearchIconSpacing;
- (id)titleWhenCollapsed;
- (void)traitCollectionDidChange:(id)arg1;
- (double)urlBaselineToBottomBoundsDistanceForHeight:(double)arg1;
- (double)urlCapHeightToTopBoundsDistanceForHeight:(double)arg1;
- (struct CGSize { double x1; double x2; })urlSize;
- (bool)usesInsetFromLayoutMargins;

@end

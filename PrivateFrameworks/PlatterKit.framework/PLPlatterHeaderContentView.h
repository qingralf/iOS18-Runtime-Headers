/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLPlatterHeaderContentView : UIView <BSUIDateLabelDelegate, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSDate * _date;
    bool  _dateAllDay;
    long long  _dateFormatStyle;
    UILabel<BSUIDateLabel> * _dateLabel;
    BSUIFontProvider * _fontProvider;
    bool  _hasUpdatedContent;
    bool  _heedsHorizontalLayoutMargins;
    NSArray * _iconButtons;
    PLPlatterHeaderContentViewLayoutManager * _layoutManager;
    NSString * _preferredContentSizeCategory;
    NSTimeZone * _timeZone;
    UILabel * _titleLabel;
    bool  _usesLargeTextLayout;
    UIButton * _utilityButton;
    double  _utilityButtonHorizontalLayoutReference;
    UIView * _utilityView;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, readonly) double contentBaseline;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic) bool dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (getter=_dateLabel, nonatomic, readonly) UILabel *dateLabel;
@property (getter=_dateLabelFont, nonatomic, readonly) UIFont *dateLabelFont;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=_fontProvider, setter=_setFontProvider:, nonatomic, retain) BSUIFontProvider *fontProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool heedsHorizontalLayoutMargins;
@property (nonatomic, readonly) NSArray *iconButtons;
@property (getter=_iconDimension, nonatomic, readonly) double iconDimension;
@property (getter=_iconLeadingPadding, nonatomic, readonly) double iconLeadingPadding;
@property (getter=_iconTrailingPadding, nonatomic, readonly) double iconTrailingPadding;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic, copy) NSString *preferredContentSizeCategory; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (getter=_titleLabel, nonatomic, readonly) UILabel *titleLabel;
@property (getter=_titleLabel, setter=_setTitleLabel:, nonatomic, retain) UILabel *titleLabel;
@property (getter=_titleLabelFont, nonatomic, readonly) UIFont *titleLabelFont;
@property (getter=_usesLargeTextLayout, setter=_setUsesLargeTextLayout:, nonatomic) bool usesLargeTextLayout;
@property (nonatomic, readonly) UIButton *utilityButton;
@property (getter=_utilityButtonHorizontalLayoutReference, setter=_setUtilityButtonHorizontalLayoutReference:, nonatomic) double utilityButtonHorizontalLayoutReference;
@property (nonatomic, retain) UIView *utilityView;

+ (id)_titleLabelFontFromFontProvider:(id)arg1;
+ (double)contentBaselineToBoundsBottomWithWidth:(double)arg1 scale:(double)arg2;

- (void).cxx_destruct;
- (id)_attributedStringForTitle:(id)arg1;
- (void)_configureDateLabel;
- (void)_configureDateLabelIfNecessary;
- (void)_configureIconButton:(id)arg1 withIcon:(id)arg2;
- (void)_configureIconButtonsForIcons:(id)arg1;
- (void)_configureTitleLabel:(id)arg1;
- (void)_configureUtilityButton;
- (void)_configureUtilityButtonIfNecessary;
- (void)_darkerSystemColorsStatusDidChange:(id)arg1;
- (id)_dateLabel;
- (id)_dateLabelFont;
- (id)_dateLabelPreferredFont;
- (id)_fontProvider;
- (double)_headerHeightForWidth:(double)arg1;
- (double)_iconDimension;
- (double)_iconLeadingPadding;
- (double)_iconTrailingPadding;
- (void)_layoutDateLabelWithScale:(double)arg1;
- (void)_layoutIconButtonsWithScale:(double)arg1;
- (id)_layoutManager;
- (void)_layoutTitleLabelWithScale:(double)arg1;
- (void)_layoutUtilityButtonWithScale:(double)arg1;
- (id)_lazyTitleLabel;
- (id)_newIconButton;
- (id)_newTitleLabel;
- (void)_recycleDateLabel;
- (void)_reduceTransparencyStatusDidChange:(id)arg1;
- (void)_setFontProvider:(id)arg1;
- (void)_setTitleLabel:(id)arg1;
- (void)_setUsesLargeTextLayout:(bool)arg1;
- (void)_setUtilityButtonHorizontalLayoutReference:(double)arg1;
- (void)_tearDownDateLabel;
- (id)_titleLabel;
- (id)_titleLabelFont;
- (id)_titleLabelPreferredFont;
- (void)_updateStylingForTitleLabel:(id)arg1;
- (void)_updateTextAttributesForDateLabel;
- (void)_updateTextAttributesForTitleLabel:(id)arg1;
- (id)_updateTitleAttributesForAttributedString:(id)arg1;
- (void)_updateUtilityButtonFont;
- (void)_updateUtilityButtonVisualStyling;
- (bool)_usesLargeTextLayout;
- (id)_utilityButton;
- (double)_utilityButtonHorizontalLayoutReference;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (double)contentBaseline;
- (id)date;
- (long long)dateFormatStyle;
- (void)dateLabelDidChange:(id)arg1;
- (void)dealloc;
- (bool)heedsHorizontalLayoutMargins;
- (id)iconButtons;
- (id)icons;
- (id)init;
- (bool)isDateAllDay;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)preferredContentSizeCategory;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setHeedsHorizontalLayoutMargins:(bool)arg1;
- (void)setIcons:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUtilityView:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)timeZone;
- (id)title;
- (id)utilityButton;
- (id)utilityView;
- (id)visualStylingProvider;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end

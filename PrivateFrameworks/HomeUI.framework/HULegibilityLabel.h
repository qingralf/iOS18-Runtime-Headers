/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULegibilityLabel : UIView <HUActsAsLabel> {
    NSAttributedString * _attributedText;
    UILayoutGuide * _firstBaselineLayoutGuide;
    UIFont * _font;
    bool  _isDirty;
    UILayoutGuide * _lastBaselineLayoutGuide;
    NSArray * _legibilityConstraints;
    _UILegibilitySettings * _legibilitySettings;
    _UILegibilityView * _legibilityView;
    UILabel * _lookasideLabel;
    long long  _options;
    double  _strength;
    NSString * _text;
    UIColor * _textColorOverride;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, readonly) double firstBaselineOffsetFromBottom;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) double lastBaselineOffsetFromBottom;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double strength;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (void)_markOurselfDirty;
- (void)_updateLabelForLegibilitySettings;
- (void)_updateLegibilityView;
- (bool)adjustsFontForContentSizeCategory;
- (bool)adjustsFontSizeToFitWidth;
- (id)attributedText;
- (double)baselineOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })characterOverflowInsets;
- (double)firstBaselineOffsetFromBottom;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSettings:(id)arg1 strength:(double)arg2;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4 options:(long long)arg5;
- (double)lastBaselineOffsetFromBottom;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (long long)lineBreakMode;
- (double)minimumScaleFactor;
- (long long)numberOfLines;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setOptions:(long long)arg1;
- (void)setStrength:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

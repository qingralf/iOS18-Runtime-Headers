/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenAlternateDateLabel : UIView <SBUILegibility> {
    NSDate * _date;
    UIFont * _font;
    SBUILegibilityLabel * _label;
    _UILegibilitySettings * _legibilitySettings;
    double  _strength;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } characterOverflowInsets;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBUILegibilityLabel *label;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (readonly) Class superclass;

+ (id)_lunarCalendarIdentifier;
+ (bool)showAlternateDate;

- (void).cxx_destruct;
- (id)_alternateDateString;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })characterOverflowInsets;
- (id)date;
- (id)font;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 font:(id)arg3;
- (id)label;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setDate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;

@end

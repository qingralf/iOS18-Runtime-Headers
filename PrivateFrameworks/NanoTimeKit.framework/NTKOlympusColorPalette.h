/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKOlympusColorPalette : NTKFaceColorPalette <NTKCircularAnalogDialColorPalette, NTKOlympusColorPalette> {
    unsigned long long  _dial;
    unsigned long long  _style;
    bool  _useSmallFont;
}

@property (nonatomic, readonly) UIColor *bezelComplicationColor;
@property (nonatomic, readonly) UIColor *black;
@property (nonatomic, readonly) UIColor *circularDialFillColor;
@property (nonatomic, readonly) UIColor *circularDialSubtickColor;
@property (nonatomic, readonly) UIColor *circularDialTickColor;
@property (nonatomic, readonly) UIColor *cornerComplicationsAccentColor;
@property (nonatomic, readonly) UIColor *customBlack;
@property (nonatomic, readonly) UIColor *darker;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long dial;
@property (nonatomic, readonly) UIColor *digits;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMulticolorPalette;
@property (nonatomic, readonly) UIColor *largeHandsColor;
@property (nonatomic, readonly) UIColor *logo;
@property (nonatomic, readonly) UIColor *orangeLogo;
@property (nonatomic, readonly) UIColor *primaryBackgroundColor;
@property (nonatomic, readonly) UIColor *primaryColor;
@property (nonatomic, readonly) UIColor *primaryLogoColor;
@property (nonatomic, readonly) UIColor *primaryOutlineTextColor;
@property (nonatomic, readonly) UIColor *primaryShiftedColor;
@property (nonatomic, readonly) UIColor *primaryTextColor;
@property (nonatomic, readonly) UIColor *secondHandColor;
@property (nonatomic, readonly) UIColor *secondaryBackgroundColor;
@property (nonatomic, readonly) UIColor *secondaryColor;
@property (nonatomic, readonly) UIColor *secondaryLogoColor;
@property (nonatomic, readonly) UIColor *secondaryOutlineTextColor;
@property (nonatomic, readonly) UIColor *secondaryShiftedColor;
@property (nonatomic, readonly) UIColor *secondaryTextColor;
@property (nonatomic, readonly) UIColor *softBlack;
@property (nonatomic, readonly) UIColor *softerBlack;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *swatch;
@property (nonatomic, readonly) UIColor *ticks;
@property (nonatomic) bool useSmallFont;

- (id)_bezelComplicationColor;
- (id)_circularDialFillColor;
- (id)_circularDialSubtickColor;
- (id)_circularDialTickColor;
- (id)_cornerComplicationsAccentColor;
- (id)_customBlack;
- (id)_darker;
- (id)_digits;
- (id)_largeHandsColor;
- (id)_logo;
- (id)_primaryBackgroundColor;
- (id)_primaryLogoColor;
- (id)_primaryOutlineTextColor;
- (id)_primaryTextColor;
- (id)_secondHandColor;
- (id)_secondHandForColorName:(id)arg1;
- (double)colorBrightness:(id)arg1;
- (id)colorForCircularTicksForHour:(unsigned long long)arg1;
- (id)colorForCircularTicksForMinute:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dial;
- (id)identifier;
- (id)init;
- (bool)isMulticolorPalette;
- (id)mainColor;
- (id)secondaryBackgroundColor;
- (id)secondaryLogoColor;
- (id)secondaryOutlineTextColor;
- (id)secondaryTextColor;
- (void)setDial:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setUseSmallFont:(bool)arg1;
- (unsigned long long)style;
- (bool)useSmallFont;

@end

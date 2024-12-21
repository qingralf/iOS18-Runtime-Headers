/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKGossamerColorPalette : NTKFaceColorPalette <NTKGossamerColorPalette> {
    UIColor * _accentColor;
    struct { 
        double top; 
        double center; 
        double bottom; 
    }  _approximateComplicationPositions;
    UIColor * _backgroundColor;
    NSArray * _backgroundGradientColors;
    unsigned long long  _backgroundStyle;
    UIColor * _bottomAccentColor;
    UIColor * _bottomApproximateBackgroundColor;
    NSString * _cachedIdentifier;
    UIColor * _centerAccentColor;
    UIColor * _centerApproximateBackgroundColor;
    NSNumber * _editingComplicationsFraction;
    UIColor * _foregroundColor;
    NSNumber * _foregroundGradientFraction;
    NSNumber * _imageViewFraction;
    UIColor * _infographModularDateAccentColor;
    UIColor * _infographModularDateLabelColor;
    UIColor * _infographModularTimeLabelColor;
    bool  _isDirty;
    bool  _isEditingComplications;
    bool  _isSwatchPreview;
    UIColor * _modularCompactDialBackgroundColor;
    UIColor * _modularCompactDialDigitalTimeColor;
    UIColor * _modularCompactDialForegroundPrimaryColor;
    UIColor * _modularCompactDialForegroundSecondaryColor;
    UIColor * _modularCompactDialSecondHandColor;
    UIColor * _modularCompactSecondTickActiveColor;
    UIColor * _modularCompactSecondTickInactiveColor;
    NSNumber * _monochromeFraction;
    NSNumber * _scaleFactor;
    UIColor * _swatchComplicationPlaceholderColor;
    NSNumber * _tintedFraction;
    UIColor * _topAccentColor;
    UIColor * _topApproximateBackgroundColor;
    UIColor * _xLargeLargeTimeTritiumFillColor;
    UIColor * _xLargeLargeTimeTritiumOutlineColor;
    UIColor * _xLargeSmallTimeTritiumOutlineColor;
}

@property (nonatomic, readonly) UIColor *accentColor;
@property (nonatomic) struct { double x1; double x2; double x3; } approximateComplicationPositions;
@property (nonatomic, readonly) NSArray *backgroundGradientColors;
@property (nonatomic, readonly) UIColor *backgroundOffGradientBottomColor;
@property (nonatomic, readonly) UIColor *backgroundOffGradientMidColor;
@property (nonatomic, readonly) UIColor *backgroundOffGradientTopColor;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic, readonly) UIColor *bottomAccentColor;
@property (nonatomic, readonly) UIColor *bottomApproximateBackgroundColor;
@property (nonatomic, readonly) UIColor *centerAccentColor;
@property (nonatomic, readonly) UIColor *centerApproximateBackgroundColor;
@property (nonatomic, readonly) UIColor *dateLabelAccentColor;
@property (nonatomic, readonly) UIColor *dateLabelTextColor;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *dialColor;
@property (nonatomic, readonly) UIColor *digitalTimeLabelColor;
@property (nonatomic, readonly) NSNumber *editingComplicationsFraction;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, readonly) NSNumber *foregroundGradientFraction;
@property (nonatomic, readonly) UIColor *gradientBottomColor;
@property (nonatomic, readonly) UIColor *gradientMidColor;
@property (nonatomic, readonly) UIColor *gradientTopColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *hourMinuteHandFillColor;
@property (nonatomic, readonly) UIColor *hourMinuteHandStrokeColor;
@property (nonatomic, readonly) UIColor *hourTickColor;
@property (nonatomic, readonly) NSNumber *imageViewFraction;
@property (nonatomic, readonly) UIColor *inputColor;
@property (nonatomic, readonly) bool isCuratedColor;
@property (nonatomic, readonly) bool isCuratedStarlightColor;
@property (nonatomic) bool isEditingComplications;
@property (nonatomic, readonly) bool isSeasonalGradientColor;
@property (nonatomic) bool isSwatchPreview;
@property (nonatomic, readonly) UIColor *largeTimeTritiumFillColor;
@property (nonatomic, readonly) UIColor *largeTimeTritiumOutlineColor;
@property (nonatomic, readonly) UIColor *minuteTickColor;
@property (nonatomic, readonly) NSNumber *monochromeFraction;
@property (nonatomic, readonly) UIColor *rangeDarkColor;
@property (nonatomic, readonly) UIColor *rangeLightColor;
@property (nonatomic, readonly) NSNumber *scaleFactor;
@property (nonatomic, readonly) UIColor *secondHandColor;
@property (nonatomic, readonly) UIColor *secondTickActiveColor;
@property (nonatomic, readonly) UIColor *secondTickInactiveColor;
@property (nonatomic, readonly) UIColor *smallTimeTritiumOutlineColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *swatchComplicationPlaceholderColor;
@property (nonatomic, readonly) UIColor *timeLabelColor;
@property (nonatomic, readonly) NSNumber *tintedFraction;
@property (nonatomic, readonly) UIColor *topAccentColor;
@property (nonatomic, readonly) UIColor *topApproximateBackgroundColor;

+ (double)contentScaleForTintedBackground;

- (void).cxx_destruct;
- (id)_backgroundOffGradientBottomColor;
- (id)_backgroundOffGradientMidColor;
- (id)_backgroundOffGradientTopColor;
- (id)_gradientBottomColor;
- (id)_gradientMidColor;
- (id)_gradientTopColor;
- (id)_inputColor;
- (id)_rangeDarkColor;
- (id)_rangeLightColor;
- (void)_setApproximateComplicationBackgroundColors;
- (id)_starlightBackgroundColors;
- (id)accentColor;
- (struct { double x1; double x2; double x3; })approximateComplicationPositions;
- (id)backgroundGradientColors;
- (unsigned long long)backgroundStyle;
- (id)bottomAccentColor;
- (id)bottomApproximateBackgroundColor;
- (id)centerAccentColor;
- (id)centerApproximateBackgroundColor;
- (void)configurationDidChange:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)curatedNumber;
- (id)dateLabelAccentColor;
- (id)dateLabelTextColor;
- (id)dialColor;
- (id)digitalTimeLabelColor;
- (id)editingComplicationsFraction;
- (id)foregroundColor;
- (id)foregroundGradientFraction;
- (id)hourMinuteHandFillColor;
- (id)hourMinuteHandStrokeColor;
- (id)hourTickColor;
- (id)identifier;
- (id)imageViewFraction;
- (id)init;
- (void)invalidateCachedValues;
- (bool)isCuratedColor;
- (bool)isCuratedStarlightColor;
- (bool)isEditingComplications;
- (bool)isSeasonalGradientColor;
- (bool)isSwatchPreview;
- (id)largeTimeTritiumFillColor;
- (id)largeTimeTritiumOutlineColor;
- (id)minuteTickColor;
- (id)monochromeFraction;
- (void)resolveColorsIfNeeded;
- (id)scaleFactor;
- (id)secondHandColor;
- (id)secondTickActiveColor;
- (id)secondTickInactiveColor;
- (void)setApproximateComplicationPositions:(struct { double x1; double x2; double x3; })arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setIsEditingComplications:(bool)arg1;
- (void)setIsSwatchPreview:(bool)arg1;
- (id)smallTimeTritiumOutlineColor;
- (id)swatchComplicationPlaceholderColor;
- (id)swatchImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)timeLabelColor;
- (id)tintedFraction;
- (id)topAccentColor;
- (id)topApproximateBackgroundColor;

@end
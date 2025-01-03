/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTextInfo : NSObject <NSCopying> {
    FCColor * _color;
    FCLoadableFont * _font;
    long long  _fontSizeAdjustment;
    double  _lineHeightMultiplier;
}

@property (nonatomic, copy) FCColor *color;
@property (nonatomic, copy) FCLoadableFont *font;
@property (nonatomic) long long fontSizeAdjustment;
@property (nonatomic) double lineHeightMultiplier;

+ (id)textInfoFromJSONValues:(id)arg1 URLGenerator:(id)arg2;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)font;
- (long long)fontSizeAdjustment;
- (double)fontSizeWithInitialFontSize:(double)arg1;
- (double)lineHeightMultiplier;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontSizeAdjustment:(long long)arg1;
- (void)setLineHeightMultiplier:(double)arg1;

@end

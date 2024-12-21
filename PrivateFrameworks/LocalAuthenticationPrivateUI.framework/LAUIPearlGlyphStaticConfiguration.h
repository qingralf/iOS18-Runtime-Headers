/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUIPearlGlyphStaticConfiguration : NSObject {
    double  _checkmarkThicknessScale;
    long long  _initialStyle;
    double  _lineThicknessScale;
    long long  _pathStyle;
    bool  _secureVariantEnabled;
    long long  _secureVariantType;
}

@property (nonatomic) double checkmarkThicknessScale;
@property (nonatomic) long long initialStyle;
@property (nonatomic) double lineThicknessScale;
@property (nonatomic) long long pathStyle;
@property (nonatomic) bool secureVariantEnabled;
@property (nonatomic) long long secureVariantType;

+ (id)createDefaultConfiguration;
+ (id)createSystemApertureConfiguration;

- (double)checkmarkThicknessScale;
- (id)init;
- (long long)initialStyle;
- (double)lineThicknessScale;
- (long long)pathStyle;
- (bool)secureVariantEnabled;
- (long long)secureVariantType;
- (void)setCheckmarkThicknessScale:(double)arg1;
- (void)setInitialStyle:(long long)arg1;
- (void)setLineThicknessScale:(double)arg1;
- (void)setPathStyle:(long long)arg1;
- (void)setSecureVariantEnabled:(bool)arg1;
- (void)setSecureVariantType:(long long)arg1;

@end
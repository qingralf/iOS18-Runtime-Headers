/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKFaceColorPalette : NSObject <NSCopying, NSObject, NTKFaceColorPalette, NTKFaceColorPaletteConfigurationDelegate, NTKFaceColorPaletteKeyColors> {
    NSMutableArray * _bundleList;
    NSCache * _colorCache;
    NTKFaceColorPaletteConfiguration * _configuration;
    NSBundle * _domainBundle;
    NSString * _faceSpecificNamespace;
    NSString * _identifier;
    NTKInterpolatedColorPalette * _interpolatedTritiumPalette;
    NSCache * _swatchImageCache;
    bool  _tritium;
    NTKFaceColorPalette * _tritiumPalette;
}

@property (nonatomic, retain) NSMutableArray *bundleList;
@property (nonatomic, retain) NSCache *colorCache;
@property (nonatomic, retain) NTKFaceColorPaletteConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSBundle *domainBundle;
@property (nonatomic, copy) NSString *faceSpecificNamespace;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKInterpolatedColorPalette *interpolatedTritiumPalette;
@property (nonatomic, retain) NTKPigmentEditOption *pigmentEditOption;
@property (nonatomic, readonly) UIColor *primaryColor;
@property (nonatomic, readonly) UIColor *primaryShiftedColor;
@property (nonatomic, readonly) UIColor *secondaryColor;
@property (nonatomic, readonly) UIColor *secondaryShiftedColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *swatch;
@property (nonatomic, retain) NSCache *swatchImageCache;
@property (getter=isTritium, nonatomic, readonly) bool tritium;
@property (nonatomic, retain) NTKFaceColorPalette *tritiumPalette;

+ (id)colorWithName:(id)arg1 inDomain:(id)arg2;
+ (bool)resolveInstanceMethod:(SEL)arg1;

- (void).cxx_destruct;
- (id)_loadColorFromAssetCatalogForKey:(id)arg1 namespace:(id)arg2 collectionName:(id)arg3 bundle:(id)arg4 colorFraction:(double)arg5 ignoringOptionAndCollection:(bool)arg6 inspector:(id)arg7;
- (id)_notFoundColor;
- (id)_primaryShiftedColor;
- (id)_secondaryColor;
- (id)_secondaryShiftedColor;
- (id)_unityMiddleColor;
- (id)_unitySwatchImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_unitySwatchImageForSize:(struct CGSize { double x1; double x2; })arg1 redColor:(id)arg2 blackColor:(id)arg3 greenColor:(id)arg4;
- (id)bundleList;
- (void)colorBundleContentChanged;
- (id)colorCache;
- (id)configuration;
- (void)configurationDidChange:(id)arg1;
- (id)copyWithOption:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domainBundle;
- (id)entryNameForKey:(id)arg1;
- (void)executeWithOption:(id)arg1 block:(id /* block */)arg2;
- (id)faceSpecificNamespace;
- (bool)hasPrimaryColorRange;
- (id)identifier;
- (id)init;
- (id)initWithDomainName:(id)arg1 inBundle:(id)arg2;
- (id)initWithFaceClass:(Class)arg1;
- (id)interpolatedTritiumPalette;
- (bool)isBlackColor;
- (bool)isCompositePalette;
- (bool)isEqual:(id)arg1;
- (bool)isEvergreenCollection;
- (bool)isMulticolor;
- (bool)isNotFoundColor:(id)arg1;
- (bool)isRainbowColor;
- (bool)isSeasonalCollection;
- (bool)isSiriColor;
- (bool)isTritium;
- (bool)isUnityColor;
- (bool)isVictory;
- (bool)isWhite;
- (bool)isWhiteColor;
- (bool)isZeus;
- (id)multitoneColorNames;
- (id)paletteAtIndex:(unsigned long long)arg1;
- (id)pigmentEditOption;
- (id)primaryColorWithFraction:(double)arg1;
- (void)resetColorCache;
- (void)setBundleList:(id)arg1;
- (void)setColorCache:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDomainBundle:(id)arg1;
- (void)setFaceSpecificNamespace:(id)arg1;
- (void)setInterpolatedTritiumPalette:(id)arg1;
- (void)setPigmentEditOption:(id)arg1;
- (void)setSwatchImageCache:(id)arg1;
- (void)setTritiumPalette:(id)arg1;
- (id)swatch;
- (id)swatchImageCache;
- (id)swatchImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)swatchPrimaryColor;
- (id)tritiumPalette;
- (id)tritiumPaletteWithProgress:(double)arg1;
- (id)valueForKey:(id)arg1;

@end

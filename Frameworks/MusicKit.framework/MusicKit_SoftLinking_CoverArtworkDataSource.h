/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MusicKit.framework/MusicKit
 */

@interface MusicKit_SoftLinking_CoverArtworkDataSource : NSObject <MPArtworkDataSource> {
    NSCache * _cache;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_bundle;
+ (id)sharedDataSource;

- (void).cxx_destruct;
- (id)_cacheIdentifierForCoverArtworkRecipeToken:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_coverArtworkImageWithSize:(struct CGSize { double x1; double x2; })arg1 destinationScale:(double)arg2 coverArtworkToken:(id)arg3;
- (id)_errorWithDescription:(id)arg1;
- (id)_generateAngularGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 andSpace:(struct CGColorSpace { }*)arg4;
- (id)_generateGradientArchesImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 andSpace:(struct CGColorSpace { }*)arg4;
- (id)_generateGradientSoundwaveImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 andSpace:(struct CGColorSpace { }*)arg4;
- (id)_generateGradientVinylImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 andSpace:(struct CGColorSpace { }*)arg4;
- (id)_generateLinearGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 andSpace:(struct CGColorSpace { }*)arg4;
- (id)_generateNineDotGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 andSpace:(struct CGColorSpace { }*)arg4;
- (id)_generateRadialGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 andSpace:(struct CGColorSpace { }*)arg4;
- (id)_generateSimpleGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 andSpace:(struct CGColorSpace { }*)arg4;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)imageForCoverArtworkRecipe:(id)arg1;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)roundValueFor:(double)arg1 toScale:(double)arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end

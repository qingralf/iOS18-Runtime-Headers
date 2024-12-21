/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHIconImageAppearanceStore : NSObject <BSDescriptionStreaming> {
    NSMutableDictionary * _darkImages;
    NSMutableDictionary * _lightImages;
    NSMutableDictionary * _tintableImages;
    NSMutableDictionary * _tintedImages;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numberOfCachedImages;
@property (readonly) Class superclass;

+ (id)defaultIcon;

- (void).cxx_destruct;
- (id)_cacheKeyForIcon:(id)arg1;
- (void)appendDescriptionToStream:(id)arg1;
- (id)description;
- (void)enumerateImageCachesUsingBlock:(id /* block */)arg1;
- (void)enumerateImagesForIcon:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateImagesUsingBlock:(id /* block */)arg1;
- (bool)hasAnyImagesForIcon:(id)arg1;
- (id)imageForIcon:(id)arg1 appearance:(id)arg2;
- (id)imageForIcon:(id)arg1 appearanceType:(long long)arg2;
- (id)imageForIcon:(id)arg1 compatibleWithTraitCollection:(id)arg2;
- (id)imagesForAppearance:(id)arg1 createIfNecessary:(bool)arg2;
- (id)imagesForAppearanceType:(long long)arg1 createIfNecessary:(bool)arg2;
- (id)imagesForTraitCollection:(id)arg1 createIfNecessary:(bool)arg2;
- (unsigned long long)numberOfCachedImages;
- (unsigned long long)numberOfCachedImagesForAppearance:(id)arg1;
- (unsigned long long)numberOfCachedImagesForAppearanceType:(long long)arg1;
- (void)removeAllImages;
- (void)removeAllImagesForAppearance:(id)arg1;
- (void)removeAllImagesForAppearancesOtherThanAppearances:(id)arg1;
- (void)removeAllImagesForIcon:(id)arg1;
- (void)removeAllImagesForIcon:(id)arg1 appearance:(id)arg2;
- (void)removeAllImagesForIcons:(id)arg1;
- (void)removeImageForIcon:(id)arg1 appearance:(id)arg2;
- (void)removeImageForIcon:(id)arg1 traitCollection:(id)arg2;
- (void)setImage:(id)arg1 forIcon:(id)arg2 appearance:(id)arg3;
- (void)setImage:(id)arg1 forIcon:(id)arg2 traitCollection:(id)arg3;
- (id)succinctDescription;

@end
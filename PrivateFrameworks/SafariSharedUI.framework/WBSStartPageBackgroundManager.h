/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSStartPageBackgroundManager : NSObject <WBTabGroupManagerObserver> {
    long long  _appearance;
    NSMutableDictionary * _backgroundImageIdentifierToImage;
    NSMutableDictionary * _backgroundImageIdentifierToLuminance;
    WBSCGImage * _image;
    NSObject<OS_dispatch_queue> * _imageReadWriteQueue;
    NSURL * _imageURL;
    NSMutableDictionary * _imageURLToTileRequired;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _lastPrefetchedFilePath;
    WBSCGImage * _prefetchedImage;
    double  _prefetchedImageLuminance;
    WBSCGImage * _prefetchedImageThumbnail;
    NSURL * _prefetchedImageURL;
    struct atomic<long long> { 
        struct __cxx_atomic_impl<long long, std::__cxx_atomic_base_impl<long long>> { 
            _Atomic long long __a_value; 
        } __a_; 
    }  _prefetchingCoalescingDelay;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSCGImage *image;
@property (readonly) Class superclass;

+ (id)ciColorKernel;
+ (id)defaultManager;
+ (void)warmUp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearPrefetchedImage;
- (void)_commitImage:(id)arg1 appearanceName:(long long)arg2 luminance:(double)arg3 forIdentifier:(id)arg4 isGeneratedImage:(bool)arg5 withinProfile:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)_deleteImageWithIdentifier:(id)arg1;
- (id)_fetchImage:(id)arg1 source:(struct CGImageSource { }*)arg2 adjustForDarkAppearance:(bool)arg3;
- (long long)_generatedImageScaleWithSymbol:(id)arg1;
- (double)_iconOpacityForBackgroundColor:(id)arg1 forDarkIcon:(bool)arg2;
- (bool)_isGeneratedBackgroundImageInImageSource:(struct CGImageSource { }*)arg1;
- (void)_loadImageFromDiskForIdentifier:(id)arg1;
- (void)_prefetchImage:(id)arg1 luminance:(double)arg2 completion:(id /* block */)arg3 withNanoSecondDelay:(long long)arg4;
- (unsigned long long)_primaryIndexForImage:(id)arg1 source:(struct CGImageSource { }*)arg2 adjustForDarkAppearance:(bool)arg3;
- (void)_processImageForIdentifier:(id)arg1 isGeneratedImage:(bool)arg2 withinProfile:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_readImagePropertiesFromImageSource:(struct CGImageSource { }*)arg1 forImageIdentifier:(id)arg2 isNonGlobalBackgroundImage:(bool)arg3;
- (void)_saveImage:(id)arg1 appearance:(long long)arg2 luminance:(double)arg3 forIdentifier:(id)arg4 isGeneratedImage:(bool)arg5 withinProfile:(bool)arg6 completion:(id /* block */)arg7;
- (void)_setExtendedAttributesOnBackgroundImage;
- (void)_setHasProfileSpecificBackgroundImage:(bool)arg1 forIdentifier:(id)arg2;
- (void)_setHasTabGroupSpecificBackgroundImage:(bool)arg1 forIdentifier:(id)arg2;
- (void)_setImage:(id)arg1 withAppearance:(long long)arg2 forIdentifier:(id)arg3;
- (void)_setImageOnAnyQueue:(id)arg1 withAppearance:(long long)arg2 forIdentifier:(id)arg3;
- (bool)_tabGroupShouldInheritProfileBackgroundImage:(id)arg1 forProfileWithIdentifier:(id)arg2;
- (bool)_tabGroupShouldUseGlobalBackgroundImage:(id)arg1 forProfileWithIdentifier:(id)arg2;
- (id)_templateImageWithImage:(id)arg1 color:(id)arg2;
- (id)_thumbnailForImage:(id)arg1 source:(struct CGImageSource { }*)arg2 adjustForDarkAppearance:(bool)arg3;
- (void)_updateThumbnailIfNeeded;
- (id)analyzeImageAndThresholdIfNecessary:(struct CGImage { }*)arg1 thumbnail:(struct CGImage { }*)arg2 precomputedLuminance:(double)arg3 getAppearance:(long long*)arg4 luminance:(double*)arg5;
- (long long)appearanceForImage:(id)arg1;
- (long long)appearanceForImageWithIdentifier:(id)arg1 forProfile:(id)arg2;
- (long long)appearanceForLuminance:(double)arg1;
- (long long)appearanceIfImageExists:(bool)arg1;
- (id)assignImage:(id)arg1 oldImage:(id)arg2;
- (void)cacheImageFromURL:(id)arg1 completion:(id /* block */)arg2;
- (id)ciContext;
- (void)clearImage;
- (void)clearImageWithIdentifier:(id)arg1 withinProfile:(bool)arg2;
- (void)clearPrefetchedImage;
- (void)commitPrefetchedImageWithLuminance:(double)arg1 forIdentifier:(id)arg2 isGeneratedImage:(bool)arg3 withinProfile:(bool)arg4;
- (id)fetchImage:(id)arg1;
- (void)generateProfileSpecificBackgroundImageWithSymbol:(id)arg1 forProfile:(id)arg2 withColor:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getHasGeneratedBackgroundImage:(id)arg1 forProfileWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasGlobalBackgroundImage;
- (bool)hasProfileSpecificBackgroundImage:(id)arg1;
- (bool)hasTabGroupSpecificBackgroundImage:(id)arg1;
- (id)image;
- (id)imageForIdentifier:(id)arg1 forProfile:(id)arg2;
- (id)initWithImageURL:(id)arg1;
- (bool)isCorrectBackgroundImageLoadedForIdentifier:(id)arg1;
- (void)loadImageFromDiskForIdentifier:(id)arg1;
- (id)normalizeImage:(id)arg1 properties:(id)arg2;
- (void)prefetchImage:(id)arg1 completion:(id /* block */)arg2;
- (void)prefetchImage:(id)arg1 luminance:(double)arg2 completion:(id /* block */)arg3;
- (id)prefetchedImageNameForProfile:(id)arg1;
- (id)prefetchedImageThumbnailForProfile:(id)arg1;
- (id)presetIconColorForSymbol:(id)arg1;
- (void)processImageForIdentifier:(id)arg1 isGeneratedImage:(bool)arg2 withinProfile:(bool)arg3;
- (void)processImageForIdentifier:(id)arg1 isGeneratedImage:(bool)arg2 withinProfile:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)reloadProfileSpecificBackgroundImageFromDisk:(id)arg1;
- (void)reloadTabGroupSpecificBackgroundImageFromDisk:(id)arg1;
- (void)tabGroupManager:(id)arg1 didRemoveProfileWithIdentifier:(id)arg2;
- (void)tabGroupManager:(id)arg1 didRemoveTabGroupWithUUID:(id)arg2;
- (id)thresholdImage:(struct CGImage { }*)arg1 minValue:(double)arg2 maxValue:(double)arg3 multiplier:(double)arg4;

@end
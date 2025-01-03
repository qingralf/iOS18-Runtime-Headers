/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPhotoPickerProviderItem : NSObject <NSCopying> {
    bool  _allowsEditing;
    NSString * _assetIdentifier;
    <CNScheduler> * _callbackQueue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    UIImage * _croppedFullSizeImage;
    <CNPhotoPickerProviderItemDelegate> * _delegate;
    NSData * _filteredImageData;
    UIImage * _fullSizeImage;
    NSData * _fullscreenImageData;
    NSData * _imageData;
    NSString * _imageFilterName;
    UIImage * _loadingPlaceholderImage;
    NSString * _localizedVariantDisplayName;
    NSString * _recentsIdentifier;
    <CNScheduler> * _renderingQueue;
    NSDate * _sortDate;
    UIImage * _thumbnailImage;
    NSData * _thumbnailImageData;
}

@property (nonatomic) bool allowsEditing;
@property (nonatomic, readonly) bool allowsMoveAndScale;
@property (nonatomic, readonly) bool allowsVariants;
@property (nonatomic, retain) NSString *assetIdentifier;
@property (nonatomic, readonly) <CNScheduler> *callbackQueue;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, retain) UIImage *croppedFullSizeImage;
@property (nonatomic) <CNPhotoPickerProviderItemDelegate> *delegate;
@property (nonatomic, retain) NSData *filteredImageData;
@property (nonatomic, retain) UIImage *fullSizeImage;
@property (nonatomic, retain) NSData *fullscreenImageData;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSString *imageFilterName;
@property (nonatomic, readonly) unsigned long long imageType;
@property (nonatomic, retain) UIImage *loadingPlaceholderImage;
@property (nonatomic, retain) NSString *localizedVariantDisplayName;
@property (nonatomic, readonly) NSString *localizedVariantsTitle;
@property (nonatomic, readonly) NSData *originalImageData;
@property (nonatomic, retain) NSString *recentsIdentifier;
@property (nonatomic, readonly) <CNScheduler> *renderingQueue;
@property (nonatomic, readonly) bool shouldShowCaption;
@property (nonatomic, retain) NSDate *sortDate;
@property (nonatomic, retain) UIImage *thumbnailImage;
@property (nonatomic, retain) NSData *thumbnailImageData;
@property (nonatomic, readonly) NSString *variantIdentifier;

+ (id)generateImageDataWithData:(id)arg1 filterName:(id)arg2;
+ (id)generateThumbnailImageDataWithData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)thumbnailViewForImage:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsEditing;
- (bool)allowsMoveAndScale;
- (bool)allowsVariants;
- (void)applyVariantEffectToFullsizeImageWithCompletion:(id /* block */)arg1;
- (id)assetIdentifier;
- (id)callbackQueue;
- (void)clearThumbnailImage;
- (id)contactImageForMetadataStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createVariantsItemsWithVariantsManager:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)croppedFullSizeImage;
- (id)delegate;
- (id)filteredImageData;
- (id)fullSizeImage;
- (void)fullSizeViewWithCompletion:(id /* block */)arg1;
- (id)fullscreenImageData;
- (void)generateAllImageDatasIfNeeded;
- (id)generatePhotoFilterVariants;
- (id)generateThumbnailImageDataIfNeeded;
- (id)generateThumbnailImageDataWithData:(id)arg1;
- (unsigned long long)hash;
- (id)imageData;
- (id)imageFilterName;
- (unsigned long long)imageType;
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 imageFilterName:(id)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 renderingQueue:(id)arg6 callbackQueue:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)loadingPlaceholderImage;
- (id)localizedVariantDisplayName;
- (id)localizedVariantsTitle;
- (id)originalImageData;
- (id)recentsIdentifier;
- (id)renderingQueue;
- (id)rotateImageDataIfNeeded:(id)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAssetIdentifier:(id)arg1;
- (void)setCroppedFullSizeImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilteredImageData:(id)arg1;
- (void)setFullSizeImage:(id)arg1;
- (void)setFullscreenImageData:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageFilterName:(id)arg1;
- (void)setLoadingPlaceholderImage:(id)arg1;
- (void)setLocalizedVariantDisplayName:(id)arg1;
- (void)setRecentsIdentifier:(id)arg1;
- (void)setSortDate:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (bool)shouldShowCaption;
- (id)sortDate;
- (id)thumbnailImage;
- (id)thumbnailImageData;
- (void)thumbnailViewWithCompletion:(id /* block */)arg1;
- (void)thumbnailViewWithPlaceholderProvider:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateContact:(id)arg1;
- (void)updateTintColorIfNeeded:(id)arg1;
- (void)updateVisualIdentity:(id)arg1;
- (id)variantIdentifier;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
 */

@interface IMImageStore : NSObject <IMCache> {
    id /* block */  _alternativeSize;
    IMImageDiskCache * _diskCache;
    NSOperationQueue * _fetchOperationQueue;
    double  _maxImageDimensionInPixels;
    IMMemoryCache * _memoryCache;
    NSString * _name;
}

@property (nonatomic, copy) id /* block */ alternativeSize;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableMemoryCache;
@property (nonatomic, readonly) IMImageDiskCache *diskCache;
@property (nonatomic, retain) NSOperationQueue *fetchOperationQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxImageDimensionInPixels;
@property (nonatomic, readonly) IMMemoryCache *memoryCache;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (unsigned long long)_memorySize;
+ (id /* block */)defaultAlternativeSizeBlock;
+ (id)defaultBasePath;
+ (int)defaultImageResizeOptions;
+ (unsigned long long)defaultMaxConcurrentOperations;
+ (double)defaultMaxImageDimensionInPixels;
+ (id)defaultName;
+ (id)defaultStore;

- (void).cxx_destruct;
- (void)_addImage:(id)arg1 toMemoryCacheWithKey:(id)arg2;
- (id)_createModifiedImageFromSourceKey:(id)arg1 newImageKey:(id)arg2 modifier:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 resizeOptions:(int)arg5;
- (id)_createScaledImageFromSourceKey:(id)arg1 newImageKey:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 resizeOptions:(int)arg4;
- (id)_keyForSize:(struct CGSize { double x1; double x2; })arg1 baseKey:(id)arg2;
- (id)_keyForSize:(struct CGSize { double x1; double x2; })arg1 baseKey:(id)arg2 modifier:(id)arg3;
- (id)_loadDiskCacheImageForKey:(id)arg1 expectImageExists:(bool)arg2;
- (id)_performImagingTransactionNamed:(id)arg1 block:(id /* block */)arg2;
- (void)addImage:(id)arg1 forKey:(id)arg2;
- (void)addImage:(id)arg1 forKey:(id)arg2 persist:(bool)arg3;
- (void)addImage:(id)arg1 forKey:(id)arg2 persist:(bool)arg3 discardTransparency:(bool)arg4;
- (void)addImagesWithSourceUrl:(id)arg1 forKeys:(id)arg2 removeOldItems:(bool)arg3 discardTransparency:(bool)arg4 completion:(id /* block */)arg5;
- (id /* block */)alternativeSize;
- (void)asyncImageForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)asyncImageForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)asyncImageForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 modifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)asyncImageForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 resizeOptions:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)asyncImageForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 resizeOptions:(int)arg3 modifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)asyncImageForKey:(id)arg1 squareDimension:(double)arg2 cacheKeyModifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)asyncImageURLForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)asyncImageURLForKey:(id)arg1 squareDimension:(double)arg2 cacheKeyModifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)clearCache;
- (void)configureMemoryCache;
- (bool)disableMemoryCache;
- (id)diskCache;
- (id)fetchOperationQueue;
- (id)fullName;
- (bool)hasItemForKey:(id)arg1;
- (bool)hasItemForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)hasItemForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 modifier:(id)arg3;
- (id)imageForKey:(id)arg1;
- (id)imageForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)imageForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 modifier:(id)arg3;
- (id)imageForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 resizeOptions:(int)arg3;
- (id)imageForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 resizeOptions:(int)arg3 modifier:(id)arg4;
- (id)imageInMemoryForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)imageInMemoryForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 modifier:(id)arg3;
- (id)imageUrlForKey:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 basePath:(id)arg2 maxImageDimensionInPixels:(double)arg3 maxConcurrentOperations:(unsigned long long)arg4 alternativeSizeBlock:(id /* block */)arg5;
- (void)invalidateImageAtURL:(id)arg1;
- (void)invalidateImageForKey:(id)arg1;
- (bool)isEmpty;
- (double)maxImageDimensionInPixels;
- (id)memoryCache;
- (void)memoryWarning;
- (id)name;
- (void)onQueueInvalidateImageForKey:(id)arg1;
- (void)performWhenURLAvailableForImageForKey:(id)arg1 block:(id /* block */)arg2;
- (void)removeItemForKey:(id)arg1;
- (void)removeItemsWithPrefx:(id)arg1;
- (bool)requireSquareImages:(id)arg1;
- (void)setAlternativeSize:(id /* block */)arg1;
- (void)setDisableMemoryCache:(bool)arg1;
- (void)setFetchOperationQueue:(id)arg1;
- (void)setMaxImageDimensionInPixels:(double)arg1;
- (void)setName:(id)arg1;

@end

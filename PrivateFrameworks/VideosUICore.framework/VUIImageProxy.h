/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

@interface VUIImageProxy : NSObject <NSCopying> {
    bool  _allowsSubstitutionForOriginal;
    bool  _cacheOnLoad;
    id /* block */  _completionHandler;
    VUIImageDecorator * _decorator;
    _VUIDecoratorRequest * _decoratorRequestToken;
    struct CGSize { 
        double width; 
        double height; 
    }  _dynamicProxyRequestedSize;
    long long  _groupType;
    id  _imageDidWriteObserver;
    long long  _imageDirection;
    id  _imageLoader;
    bool  _isLoading;
    bool  _loadSynchronouslyIfCached;
    id  _object;
    bool  _optimizedImageRendering;
    <VUINetworkRequestLoader> * _requestLoader;
    id  _requestToken;
    bool  _returnImageAfterWrittenToDisk;
    id /* block */  _writeCompletionHandler;
    bool  _writeToAssetLibrary;
}

@property (nonatomic) bool allowsSubstitutionForOriginal;
@property (nonatomic) bool cacheOnLoad;
@property (copy) id /* block */ completionHandler;
@property (nonatomic, retain) VUIImageDecorator *decorator;
@property (nonatomic, retain) _VUIDecoratorRequest *decoratorRequestToken;
@property (nonatomic) struct CGSize { double x1; double x2; } dynamicProxyRequestedSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } expectedSize;
@property (nonatomic) long long groupType;
@property (nonatomic, retain) id imageDidWriteObserver;
@property (nonatomic) long long imageDirection;
@property (nonatomic, retain) id imageLoader;
@property (nonatomic) bool isLoading;
@property (nonatomic) bool loadSynchronouslyIfCached;
@property (nonatomic, readonly) id object;
@property (nonatomic) bool optimizedImageRendering;
@property (nonatomic) <VUINetworkRequestLoader> *requestLoader;
@property (nonatomic, retain) id requestToken;
@property (nonatomic) bool returnImageAfterWrittenToDisk;
@property (copy) id /* block */ writeCompletionHandler;
@property (nonatomic) bool writeToAssetLibrary;

+ (id)_imageDecoratorQueue;
+ (id)_imageReadWriteQueue;

- (void).cxx_destruct;
- (id)_assetKeyWithImageLoaderKey:(id)arg1 decoratorIdentifier:(id)arg2;
- (void)_callCompletionHandlerWithImage:(id)arg1 error:(id)arg2 finished:(bool)arg3;
- (void)_callWriteCompletionHandlerWithPath:(id)arg1 error:(id)arg2 finished:(bool)arg3;
- (void)_completeImageLoadWithImage:(id)arg1 imagePath:(id)arg2 error:(id)arg3 assetKey:(id)arg4 expiryDate:(id)arg5 tags:(id)arg6 requestRecord:(id)arg7;
- (void)_decorateAndWriteImage:(id)arg1 imagePath:(id)arg2 scaleToSize:(struct CGSize { double x1; double x2; })arg3 cropToFit:(bool)arg4 scalingResult:(unsigned long long)arg5 assetKey:(id)arg6 expiryDate:(id)arg7 tags:(id)arg8 requestRecord:(id)arg9;
- (id)_decoratedImageAssetKey;
- (id)_decoratedImageAssetPath;
- (id)_decoratorIdentifier;
- (id)_imageAssetPathWithAssetKey:(id)arg1;
- (void)_imageDidWriteHandler:(id)arg1;
- (id)_imageLoaderKey;
- (id)_originalImageAssetKey;
- (id)_originalImageAssetPath;
- (bool)allowsSubstitutionForOriginal;
- (bool)cacheOnLoad;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)decorator;
- (id)decoratorRequestToken;
- (id)description;
- (struct CGSize { double x1; double x2; })dynamicProxyRequestedSize;
- (struct CGSize { double x1; double x2; })expectedSize;
- (long long)groupType;
- (unsigned long long)hash;
- (id)imageDidWriteObserver;
- (long long)imageDirection;
- (id)imageLoader;
- (id)initWithObject:(id)arg1 imageLoader:(id)arg2 groupType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isImageAvailable;
- (bool)isLoading;
- (bool)isOfSameOriginAs:(id)arg1;
- (void)load;
- (bool)loadSynchronouslyIfCached;
- (id)object;
- (bool)optimizedImageRendering;
- (id)requestLoader;
- (id)requestToken;
- (bool)returnImageAfterWrittenToDisk;
- (void)setAllowsSubstitutionForOriginal:(bool)arg1;
- (void)setCacheOnLoad:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDecorator:(id)arg1;
- (void)setDecoratorRequestToken:(id)arg1;
- (void)setDynamicProxyRequestedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGroupType:(long long)arg1;
- (void)setImageDidWriteObserver:(id)arg1;
- (void)setImageDirection:(long long)arg1;
- (void)setImageLoader:(id)arg1;
- (void)setIsLoading:(bool)arg1;
- (void)setLoadSynchronouslyIfCached:(bool)arg1;
- (void)setOptimizedImageRendering:(bool)arg1;
- (void)setRequestLoader:(id)arg1;
- (void)setRequestToken:(id)arg1;
- (void)setReturnImageAfterWrittenToDisk:(bool)arg1;
- (void)setWriteCompletionHandler:(id /* block */)arg1;
- (void)setWriteToAssetLibrary:(bool)arg1;
- (id /* block */)writeCompletionHandler;
- (bool)writeToAssetLibrary;

@end

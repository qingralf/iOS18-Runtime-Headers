/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAVAsset : NSObject <FCContentArchivable, NSCopying> {
    AVURLAsset * _asset;
    <FCAVAssetCacheType> * _assetCache;
    <FCAVAssetKeyCacheType> * _assetKeyCache;
    <FCAVAssetKeyManagerType> * _assetKeyManager;
    NFUnfairLock * _assetLock;
    NSDictionary * _assetOptions;
    <FCAVAssetResourceLoaderType> * _assetResourceLoader;
    NSString * _identifier;
    NSURL * _remoteURL;
}

@property (nonatomic, readonly) AVURLAsset *asset;
@property (nonatomic, readonly) FCContentArchive *contentArchive;
@property (nonatomic, readonly) FCContentManifest *contentManifest;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (void)_resetUnderlyingAsset;
- (id)asset;
- (id)contentArchive;
- (id)contentManifest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
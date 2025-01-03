/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetHandle : NSObject <FCContentArchivable, NSCopying> {
    NSString * _assetKey;
    NTPBAsset * _assetMetadata;
    unsigned long long  _countOfPenalizedDownloadAttempts;
    <FCAssetDataProvider> * _dataProvider;
    NSDate * _dateOfLastDownloadAttempt;
    <FCAssetHandleDelegate> * _delegate;
    NSError * _downloadError;
    NSHashTable * _downloadRequests;
    NSObject<OS_dispatch_group> * _fetchGroup;
    FCOperation * _fetchOperation;
    FCInterestToken * _holdToken;
    long long  _lifetimeHint;
    NSString * _rawFilePath;
    NSURL * _remoteURL;
    NFUnfairLock * _stateLock;
}

@property (nonatomic, readonly) FCContentArchive *contentArchive;
@property (nonatomic, readonly) FCContentManifest *contentManifest;
@property (retain) <FCAssetDataProvider> *dataProvider;
@property (readonly) NSError *downloadError;
@property (readonly, copy) NSString *filePath;
@property (readonly, copy) NSURL *fileURL;
@property (readonly) bool isDownloadFailureRecoverable;
@property (nonatomic, readonly) NSURL *remoteURL;
@property (nonatomic, readonly, copy) NSString *uniqueKey;

- (void).cxx_destruct;
- (id)contentArchive;
- (id)contentManifest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataProvider;
- (void)dealloc;
- (id)downloadError;
- (id)downloadIfNeededWithCompletion:(id /* block */)arg1;
- (id)downloadIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)downloadIfNeededWithGroup:(id)arg1;
- (id)downloadIfNeededWithPriority:(long long)arg1 completion:(id /* block */)arg2;
- (id)fetchDataProviderWithCompletion:(id /* block */)arg1;
- (id)fetchDataProviderWithPriority:(long long)arg1 flags:(long long)arg2 completion:(id /* block */)arg3;
- (id)filePath;
- (id)fileURL;
- (bool)isDownloadFailureRecoverable;
- (id)remoteURL;
- (void)setDataProvider:(id)arg1;
- (id)uniqueKey;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@interface TVPContentKeySession : NSObject <AVContentKeySessionDelegate> {
    NSObject<TVPContentKeyLoading> * _contentKeyLoader;
    NSObject<OS_dispatch_queue> * _contentKeyProcessingQueue;
    AVContentKeySession * _contentKeySession;
    NSMutableArray * _keyRequestsInProgress;
    id /* block */  _offlineKeyGenerationCompletionHandler;
    bool  _offlineKeyGenerationIsForRenewal;
    NSArray * _offlineKeyIdentifiersInProgress;
}

@property (nonatomic, retain) NSObject<TVPContentKeyLoading> *contentKeyLoader;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *contentKeyProcessingQueue;
@property (nonatomic, retain) AVContentKeySession *contentKeySession;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *keyRequestsInProgress;
@property (nonatomic, copy) id /* block */ offlineKeyGenerationCompletionHandler;
@property (nonatomic) bool offlineKeyGenerationIsForRenewal;
@property (nonatomic, retain) NSArray *offlineKeyIdentifiersInProgress;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_finishOfflineKeyGeneration;
- (void)_generateOfflineKeyRequestsForIdentifiers:(id)arg1 isRenewal:(bool)arg2 completion:(id /* block */)arg3;
- (void)_loadAVContentKeyRequests:(id)arg1 type:(long long)arg2 isRenewal:(bool)arg3;
- (void)_timeoutOfflineKeyRequestGeneration;
- (id)contentKeyLoader;
- (id)contentKeyProcessingQueue;
- (id)contentKeySession;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3;
- (void)fetchOfflineKeysForParams:(id)arg1 completion:(id /* block */)arg2;
- (void)finishKeyRequest:(id)arg1;
- (void)generateOfflineKeyRequestsForIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithContentKeyLoader:(id)arg1 avAsset:(id)arg2;
- (id)keyRequestsInProgress;
- (void)makeSecureInvalidationDataForOfflineKeyData:(id)arg1 nonceData:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)offlineKeyGenerationCompletionHandler;
- (bool)offlineKeyGenerationIsForRenewal;
- (id)offlineKeyIdentifiersInProgress;
- (void)setContentKeyLoader:(id)arg1;
- (void)setContentKeyProcessingQueue:(id)arg1;
- (void)setContentKeySession:(id)arg1;
- (void)setKeyRequestsInProgress:(id)arg1;
- (void)setOfflineKeyGenerationCompletionHandler:(id /* block */)arg1;
- (void)setOfflineKeyGenerationIsForRenewal:(bool)arg1;
- (void)setOfflineKeyIdentifiersInProgress:(id)arg1;

@end

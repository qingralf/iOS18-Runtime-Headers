/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICContentKeySession : NSObject <AVContentKeySessionDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _active;
    NSNumber * _adamID;
    bool  _allowFallbackToStreamingKeys;
    bool  _automaticKeyRenewalPaused;
    bool  _bypassCache;
    NSMutableDictionary * _completedKeyRequests;
    AVContentKeySession * _contentKeySession;
    <ICContentKeySessionDelegateProtocol> * _delegate;
    bool  _isStoreKeyServer;
    NSURL * _keyCertificateURL;
    NSMutableDictionary * _keyRenewalDates;
    NSObject<OS_dispatch_source> * _keyRenewalTimer;
    NSMutableDictionary * _keyResponses;
    long long  _keyServerProtocolType;
    NSURL * _keyServerURL;
    <ICContentKeyStoreProtocol> * _keyStore;
    NSURL * _offlineLeaseStartURL;
    NSURL * _offlineLeaseStopNonceURL;
    NSURL * _offlineLeaseStopURL;
    NSMutableSet * _pendingKeyIdentifiers;
    NSMutableSet * _pendingRenewalKeyIdentifiers;
    ICContentKeySessionPrefetchKeyConfiguration * _prefetchKeyConfiguration;
    ICFileContentKeyStore * _prefetchedContentKeyStore;
    NSMutableArray * _renewalCompletionBlocks;
    ICStoreRequestContext * _requestContext;
    bool  _requestOfflineKeys;
    NSURL * _streamingleaseStopURL;
    NSObject<OS_dispatch_semaphore> * _waitForKeysSemaphore;
}

@property (nonatomic, copy) NSNumber *adamID;
@property (nonatomic) bool allowFallbackToStreamingKeys;
@property (nonatomic) bool bypassCache;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isStoreKeyServer;
@property (nonatomic, copy) NSURL *keyCertificateURL;
@property (nonatomic) long long keyServerProtocolType;
@property (nonatomic, copy) NSURL *keyServerURL;
@property (nonatomic, readonly) <ICContentKeyStoreProtocol> *keyStore;
@property (nonatomic, copy) NSURL *offlineLeaseStartURL;
@property (nonatomic, copy) NSURL *offlineLeaseStopNonceURL;
@property (nonatomic, copy) NSURL *offlineLeaseStopURL;
@property (nonatomic, readonly) ICStoreRequestContext *requestContext;
@property (nonatomic) bool requestOfflineKeys;
@property (nonatomic, copy) NSURL *streamingleaseStopURL;
@property (readonly) Class superclass;

+ (id)copyKeysToPendingInvalidationStoreFromPath:(id)arg1;
+ (id)enhancedAudioSharedContentKeyPath;
+ (id)pendingInvalidationKeyStorePath;

- (void).cxx_destruct;
- (void)_finishProcessingKeyWithIdentifier:(id)arg1;
- (void)_invalidateKeyWithIdentifier:(id)arg1 forAdamID:(id)arg2 offline:(bool)arg3 usingAccountDSID:(id)arg4 keyData:(id)arg5 withCompletion:(id /* block */)arg6;
- (bool)_isPrefetchKey:(id)arg1;
- (void)_performKeyDeliveryRequestForContentKeyRequest:(id)arg1 persistResponse:(bool)arg2 isRenewal:(bool)arg3;
- (void)_processKeyWithIdentifier:(id)arg1;
- (void)_renewExpiredKeys;
- (void)_scheduleKeyRefreshTimer;
- (id)adamID;
- (void)addAsset:(id)arg1;
- (void)addAsset:(id)arg1 shouldPreloadKeys:(bool)arg2 waitForKeyIdentifiers:(bool)arg3;
- (bool)allowFallbackToStreamingKeys;
- (bool)bypassCache;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithRequestContext:(id)arg1;
- (id)initWithRequestContext:(id)arg1 keyStore:(id)arg2;
- (id)initWithRequestContext:(id)arg1 keyStore:(id)arg2 delegate:(id)arg3;
- (void)invalidateKeyWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)isStoreKeyServer;
- (id)keyCertificateURL;
- (long long)keyServerProtocolType;
- (id)keyServerURL;
- (id)keyStore;
- (id)offlineLeaseStartURL;
- (id)offlineLeaseStopNonceURL;
- (id)offlineLeaseStopURL;
- (void)pauseAutomaticKeyRenewal;
- (void)processKeyWithIdentifier:(id)arg1;
- (void)removeAsset:(id)arg1;
- (void)renewAllKeys;
- (id)requestContext;
- (bool)requestOfflineKeys;
- (void)resumeAutomaticKeyRenewal;
- (void)setAdamID:(id)arg1;
- (void)setAllowFallbackToStreamingKeys:(bool)arg1;
- (void)setBypassCache:(bool)arg1;
- (void)setIsStoreKeyServer:(bool)arg1;
- (void)setKeyCertificateURL:(id)arg1;
- (void)setKeyServerProtocolType:(long long)arg1;
- (void)setKeyServerURL:(id)arg1;
- (void)setOfflineLeaseStartURL:(id)arg1;
- (void)setOfflineLeaseStopNonceURL:(id)arg1;
- (void)setOfflineLeaseStopURL:(id)arg1;
- (void)setRequestOfflineKeys:(bool)arg1;
- (void)setStreamingleaseStopURL:(id)arg1;
- (void)stopSessionInvalidatingKeys:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)streamingleaseStopURL;
- (void)waitForAllKeysToProcess;
- (void)waitForAllKeysToProcessWithTimeout:(double)arg1;
- (void)waitForKeyRenewalsWithCompletionHandler:(id /* block */)arg1;

@end

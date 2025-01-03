/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapDataSubscriptionOfflineDownloader : NSObject <GEOMapDataSubscriptionDataDownloader, GEOOfflineDataRequesterDelegate> {
    GEOApplicationAuditToken * _auditToken;
    bool  _calculatingBatches;
    bool  _canceled;
    unsigned long long  _currentKeySelectorIndex;
    <GEOMapDataSubscriptionOfflineDownloaderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    GEOTileDB * _diskCache;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _finished;
    NSMutableArray * _inProgressRequesters;
    NSArray * _keySelectors;
    NSObject<OS_os_log> * _log;
    NSString * _logPrefix;
    GEOResourceManifestManager * _manifestManager;
    unsigned long long  _numberOfParallelRequests;
    GEOMapDataSubscriptionOfflineDataKeySelector * _offlineKeySelector;
    bool  _paused;
    NSError * _preparationError;
    NSObject<OS_dispatch_group> * _preparationGroup;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _prepared;
    NSProgress * _progress;
    long long  _progressMode;
    NSMutableArray * _remainingCurrentBatchRequests;
    unsigned long long  _requestOptions;
    NSArray * _requiredLayers;
    GEOMapDataSubscription * _subscription;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) <GEOMapDataSubscriptionDataDownloaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) GEOMapDataSubscription *subscription;
@property (readonly) Class superclass;

+ (id)loggingDescription;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)initWithSubscription:(id)arg1 diskCache:(id)arg2 manifestManager:(id)arg3 requestOptions:(unsigned long long)arg4 auditToken:(id)arg5 keySelectors:(id)arg6 requiredLayers:(id)arg7 delegate:(id)arg8 delegateQueue:(id)arg9 log:(id)arg10 logPrefix:(id)arg11;
- (void)offlineRequester:(id)arg1 didFailWithError:(id)arg2;
- (void)offlineRequester:(id)arg1 didFinishWithData:(id)arg2 withETag:(id)arg3 containingDataKeys:(id)arg4;
- (void)pause;
- (id)progress;
- (void)resume;
- (id)subscription;

@end

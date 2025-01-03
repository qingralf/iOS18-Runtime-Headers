/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapDataSubscriptionResourcesDownloader : NSObject <GEOMapDataSubscriptionDataDownloader> {
    GEOApplicationAuditToken * _auditToken;
    bool  _calculatingBatches;
    bool  _canceled;
    <GEOMapDataSubscriptionDataDownloaderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _finished;
    NSObject<OS_os_log> * _log;
    NSString * _logPrefix;
    GEOResourceManifestManager * _manifestManager;
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
    NSArray * _resourcesToFetch;
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
- (id)initWithSubscription:(id)arg1 manifestManager:(id)arg2 requestOptions:(unsigned long long)arg3 auditToken:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 log:(id)arg7 logPrefix:(id)arg8;
- (void)pause;
- (id)progress;
- (void)resume;
- (id)subscription;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOSearchAttributionManifestVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {
    GEOSearchAttributionManifest * _attributionManifest;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    NSURLSessionDataTask * _downloadTask;
    GEOSearchAttributionManifestVersionMigrator * _migrator;
    NSURL * _newSearchAttributionManifestURL;
    GEOActiveTileGroup * _oldTileGroup;
    GEOActiveTileGroupMigrationTaskOptions * _options;
    GEOReportedProgress * _progress;
    <GEORequestCounterTicket> * _requestCounterTicket;
    bool  _running;
    <NSObject> * _transaction;
    NSURLSession * _urlSession;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedWeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOActiveTileGroupMigrationTaskOptions *options;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NSObject> *transaction;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (void)_handleResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)cancel;
- (void)dealloc;
- (long long)estimatedWeight;
- (id)init;
- (id)initWithMigrator:(id)arg1 newSearchAttributionManifestURL:(id)arg2 oldTileGroup:(id)arg3;
- (id)options;
- (void)populateTileGroup:(id)arg1;
- (id)progress;
- (void)removeOldData:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;
- (id)transaction;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSDownloader : BRCFSTransferScheduler <BRCModule> {
    double  _activeDownloadSizeRefreshInterval;
    unsigned long long  _activeDownloadsSize;
    BRCDeadlineScheduler * _downloadsDeadlineScheduler;
    BRCFairScheduler * _fairScheduler;
    NSDate * _lastDownloadRefresh;
    brc_task_tracker * _tracker;
    NSMutableDictionary * _willRetryOperationProgress;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BRCDeadlineScheduler *downloadsDeadlineScheduler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_bumpThrottleForDownload:(id)arg1 throttle:(id)arg2;
- (void)_cancelJobs:(id)arg1 state:(int)arg2;
- (void)_clearDownloadErrorForDocument:(id)arg1;
- (void)_close;
- (bool)_createDownloadingJobForItem:(id)arg1 state:(int)arg2 kind:(int)arg3 etag:(id)arg4 userInitiated:(bool)arg5 stageFileName:(id)arg6 error:(id*)arg7;
- (void)_finishDownloadCleanup:(id)arg1;
- (void)_finishedDownload:(id)arg1 syncContext:(id)arg2 operationID:(id)arg3 error:(id)arg4;
- (id)_getCancelErrorFromCancelReason:(int)arg1;
- (bool)_hasLosersToDelete:(id)arg1 serverItem:(id)arg2;
- (void)_postponeLoserForWinner:(long long)arg1 etag:(id)arg2;
- (void)_reportDownloadErrorForDocument:(id)arg1 error:(id)arg2;
- (id)_sanitizeRecord:(id)arg1;
- (void)_sendContentsBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3 isLoserDownload:(bool)arg4;
- (void)_sendLosersBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3;
- (void)_sendThumbnailsBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3;
- (void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4;
- (void)_willDownload:(id)arg1 operationID:(id)arg2;
- (void)addAliasItem:(id)arg1 toDownloadingItem:(id)arg2;
- (bool)applyLosersToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int*)arg4 addedLosers:(id)arg5 removedLosers:(id)arg6;
- (bool)applyThumbnailToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int*)arg4;
- (void)cancel;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 etag:(id)arg3;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 etag:(id)arg3 andNotifyDownloadTrackers:(bool)arg4;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 etag:(id)arg3 andNotifyDownloadTrackers:(bool)arg4 cancelReason:(int)arg5;
- (void)cancelAndCleanupItemDownloads:(id)arg1;
- (void)close;
- (void)deleteDownloadingJobForItem:(id)arg1;
- (void)deleteJobsMatching:(id)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (id)downloadsDeadlineScheduler;
- (void)evictLosersOnItem:(id)arg1 atURL:(id)arg2 applySchedulerState:(int*)arg3;
- (id)generateContentStageFileNameForItem:(id)arg1 etag:(id)arg2;
- (id)generateThumbnailStageFileNameForItem:(id)arg1 etag:(id)arg2;
- (bool)hasAdditionsToApplyForItem:(id)arg1 serverItem:(id)arg2;
- (bool)hasThumbnailToApplyForItem:(id)arg1;
- (unsigned long long)inFlightSize;
- (id)initWithAccountSession:(id)arg1;
- (bool)isDownloadingItem:(id)arg1;
- (bool)makeContentLive:(id)arg1;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (unsigned long long)recoverAndReportMissingJobs;
- (void)rescheduleJobsForPendingDiskSpaceWithAvailableSpace:(unsigned long long)arg1;
- (void)rescheduleJobsPendingRecentsAndFavoritesFetchInZone:(id)arg1;
- (void)rescheduleJobsPendingWinnerForItem:(id)arg1;
- (void)resume;
- (void)schedule;
- (bool)scheduleContentDownloadForItem:(id)arg1 serverItem:(id)arg2 options:(unsigned long long)arg3 etagIfLoser:(id)arg4 stageFileName:(id)arg5 error:(id*)arg6;
- (void)scheduleLosersDownloadForItem:(id)arg1 serverItem:(id)arg2 purgeStaleEntries:(bool)arg3 applySchedulerState:(int*)arg4;
- (void)scheduleThumbnailDownloadForItem:(id)arg1 serverItem:(id)arg2 applySchedulerState:(int*)arg3;
- (bool)shouldScheduleLosersEvictionForItem:(id)arg1;
- (unsigned long long)sizeOfActiveDownloads;
- (void)suspend;
- (void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(id /* block */)arg5;
- (void)updateContentDownloadForMetaOnlyChange:(id)arg1 fromEtag:(id)arg2 toEtag:(id)arg3;

@end

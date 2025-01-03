/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSReader : BRCFSSchedulerBase <BRCFSEventsDelegate, BRCModule, BRCSuspendable> {
    BRCCountedSet * _coordinatedReaders;
    BRCAsyncDirectoryEnumerator * _currentScan;
    unsigned long long  _lostItemCountUnderUnknownParent;
    NSObject<OS_dispatch_source> * _lostScanDelay;
    struct { 
        unsigned long long sectionID; 
        char *function; 
        int line; 
    }  _lostScanDelaySection;
    NSObject<OS_dispatch_group> * _lostScanGroup;
    BRCFairSource * _lostScanSource;
    NSMutableSet * _lostSet;
    bool  _readerCountReachedMax;
    bool  _resumed;
    brc_task_tracker * _taskTracker;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *lostScanGroup;
@property (readonly) Class superclass;
@property (nonatomic, readonly) brc_task_tracker *taskTracker;

- (void).cxx_destruct;
- (void)_attemptSchedulingCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (unsigned long long)_backoffBeforeProcessingLostItemWithStamp:(unsigned long long)arg1 appLibrary:(id)arg2;
- (void)_cancelScan;
- (void)_close;
- (bool)_createSharedZoneIfNecessaryWithLookup:(id)arg1;
- (void)_delayJobID:(id)arg1 by:(double)arg2;
- (void)_didResolvedDocumentID:(unsigned int)arg1 fileID:(unsigned long long)arg2 zone:(id)arg3;
- (bool)_fetchNextLostItemID:(id*)arg1 parentID:(id*)arg2 appLibraryRowID:(id*)arg3 tooManyScans:(bool*)arg4 stamp:(long long*)arg5;
- (void)_finishCurrentRelpathScan;
- (void)_finishedScanWithError:(int)arg1;
- (void)_fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 item:(id)arg4 lookup:(id)arg5 unresolvedLastPathComponent:(id)arg6;
- (void)_lostScanSchedule;
- (id)_nextLostItemIDWithBackoff:(long long*)arg1 appLibrary:(id*)arg2 now:(long long)arg3;
- (void)_processDeadItem:(id)arg1;
- (void)_processLostItem:(id)arg1;
- (void)_processLostItem:(id)arg1 resolvedToPath:(id)arg2;
- (unsigned long long)_readCoordinationCount;
- (void)_recoverFromUnknownParentLoopAtPath:(id)arg1;
- (void)_refaultItem:(id)arg1 withFaultPath:(id)arg2;
- (void)_resolveDocumentID:(unsigned int)arg1 zone:(id)arg2;
- (void)_scanDirectory:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_scanDone:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_scheduleCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (void)_scheduleReadJobWithID:(id)arg1;
- (bool)_slowScanDirectoryAtPath:(id)arg1;
- (void)_startScanOfRegularAppLibrary:(id)arg1;
- (void)_startScanOfRelpath:(id)arg1;
- (bool)canRetryJobWithID:(id)arg1;
- (bool)canScheduleMoreJobs;
- (void)cancel;
- (void)createReadingJobForItem:(id)arg1 state:(int)arg2;
- (void)dealloc;
- (void)deleteReadingJobForItem:(id)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)endReadCoordinationInAppLibrary:(id)arg1;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(id)arg4;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2 unresolvedLastPathComponent:(id)arg3;
- (void)fseventOnAlias:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnContainer:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnDeadPath:(id)arg1 item:(id)arg2;
- (void)fseventOnDirectory:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 lookup:(id)arg4;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 lookup:(id)arg4 unresolvedLastPathComponent:(id)arg5;
- (void)fseventOnRoot:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnSymlink:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnURL:(id)arg1 dbFlags:(unsigned int)arg2;
- (void)fseventRecursiveAtRoot:(id)arg1 withReason:(id)arg2;
- (id)initWithAccountSession:(id)arg1;
- (id)itemForCreatedDocumentsDirectory:(id)arg1 appLibrary:(id)arg2 path:(id)arg3;
- (id)lookupAndReadItemUnderCoordinationAtURL:(id)arg1;
- (id)lostScanGroup;
- (BOOL)needsLookupReloadAfterHandlingCrossZoneMoveWithItem:(id)arg1 relpath:(id)arg2;
- (void)readUnderCoordinationAtURL:(id)arg1;
- (bool)readUnderCoordinationWithLookup:(id)arg1;
- (unsigned long long)recoverAndReportMissingJobs;
- (void)reset;
- (void)resume;
- (void)scanContainerDocumentsIfNeeded:(id)arg1;
- (void)schedule;
- (void)scheduleAppLibraryForLostScan:(id)arg1;
- (void)setState:(int)arg1 forItem:(id)arg2;
- (bool)startReadCoordinationInAppLibrary:(id)arg1;
- (void)suspend;
- (id)taskTracker;
- (bool)thumbnailChangedForItem:(id)arg1 relpath:(id)arg2 url:(id)arg3 error:(id*)arg4;
- (void)unscheduleAppLibraryForLostScan:(id)arg1;
- (bool)updateLookupAfterHandlingPathMatchWithFSRoot:(id*)arg1 relpath:(id*)arg2;

@end

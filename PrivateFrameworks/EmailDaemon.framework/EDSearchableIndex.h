/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDSearchableIndex : NSObject <CSSearchableIndexDelegate_Private, EDSearchableIndexSchedulable, EDSearchableIndexVerifierDataSource, EFLoggable, EFSignpostable, EMSearchableIndexInterface> {
    EFStoppableScheduler * _addIndexItemsScheduler;
    EMCoreAnalyticsCollector * _analyticsCollector;
    NSObject<OS_os_activity> * _batchIndexingActivity;
    EFCancelationToken * _cancelationToken;
    double  _coalescingDelaySeconds;
    <EFCancelable> * _coalescingTimer;
    _Atomic long long  _countOfBlocksAffectingDataSourceAndIndex;
    unsigned long long  _currentMaximumBatchSize;
    <EDSearchableIndexDataSource> * _dataSource;
    bool  _dataSourceIndexingPermitted;
    EFStoppableScheduler * _dataSourceScheduler;
    double  _dataSourceUpdateTimeLimit;
    EFFuture * _delayDataSourceAssignmentFuture;
    bool  _enableSpotlightVerification;
    NSString * _indexName;
    EFStoppableScheduler * _indexingBatchScheduler;
    bool  _indexingDisabledForPPT;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _indexingDisabledForPPTLock;
    EFStoppableScheduler<EFSuspendableScheduler><EFAssertableScheduler> * _indexingScheduler;
    NSDate * _lastReindexRadarPrompt;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mainThreadAccessibleIvarLock;
    EFStoppableScheduler * _preprocessingScheduler;
    <EDSearchableIndexSchedulableDelegate> * _schedulableDelegate;
    CSSearchableIndex * _searchIndex;
    NSString * _searchableIndexBundleID;
    bool  _skipIndexExclusionCheck;
    EDSearchableIndexState * _state;
    <EFCancelable> * _stateCancelable;
    EFStoppableScheduler<EFAssertableScheduler> * _stateTransitionScheduler;
    unsigned long long  _throttledDataSourceBatchSize;
    unsigned long long  _throttledIndexingBatchSize;
}

@property (getter=isActive, readonly) bool active;
@property (nonatomic, readonly) EMCoreAnalyticsCollector *analyticsCollector;
@property (nonatomic, readonly) bool canIndexAttachments;
@property (nonatomic) bool clientStateFetched;
@property (nonatomic) double coalescingDelaySeconds;
@property (nonatomic, readonly, copy) NSString *copyDiagnosticInformation;
@property (readonly) unsigned long long currentMaximumBatchSize;
@property (nonatomic, readonly, copy) NSSet *currentReasons;
@property (nonatomic) <EDSearchableIndexDataSource> *dataSource;
@property (getter=isDataSourceIndexingPermitted, nonatomic) bool dataSourceIndexingPermitted;
@property (nonatomic, readonly, copy) NSSet *dataSourceRefreshReasons;
@property (nonatomic) double dataSourceUpdateTimeLimit;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) EFFuture *delayDataSourceAssignmentFuture;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableSpotlightVerification;
@property (nonatomic, readonly, copy) NSSet *exclusionReasons;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *indexName;
@property (getter=isIndexingDisabledForPPT, nonatomic) bool indexingDisabledForPPT;
@property (getter=isPerformingBlockAffectingDataSourceAndIndex, readonly) bool performingBlockAffectingDataSourceAndIndex;
@property (getter=isPersistenceAvailable) bool persistenceAvailable;
@property (getter=isPluggedIn, nonatomic, readonly) bool pluggedIn;
@property (nonatomic, readonly) EFObservable *powerObservable;
@property (nonatomic, readonly, copy) NSSet *purgeReasons;
@property (readonly) long long resumeCount;
@property (nonatomic) <EDSearchableIndexSchedulableDelegate> *schedulableDelegate;
@property (nonatomic, retain) CSSearchableIndex *searchIndex;
@property (nonatomic, copy) NSString *searchableIndexBundleID;
@property (readonly) unsigned long long signpostID;
@property (nonatomic) bool skipIndexExclusionCheck;
@property (nonatomic, retain) EDSearchableIndexState *state;
@property (readonly) Class superclass;

+ (id)_localClientState;
+ (id)_localClientStateURL;
+ (id)_reindexReasonString:(long long)arg1;
+ (void)_saveLocalClientState:(id)arg1;
+ (id)indexWhileLockedLog;
+ (bool)isIncrementalIndexingType:(long long)arg1;
+ (bool)isValidTransaction:(long long)arg1;
+ (id)log;
+ (id)signpostLog;

- (void).cxx_destruct;
- (void)_clearOrphanedSearchableMessagesFromDatabase;
- (void)_coalescingTimerFired;
- (void)_collectAnalyticsForReindexReason:(long long)arg1;
- (void)_collectAnalyticsForReindexReason:(long long)arg1 withInfo:(id)arg2;
- (id)_consumeBatchOfSize:(unsigned long long)arg1;
- (void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)_dataSourceAssignTransaction:(long long)arg1 updates:(id)arg2 completion:(id /* block */)arg3;
- (void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(id /* block */)arg2;
- (void)_dataSourcePrepareToIndexItems:(id)arg1 fromRefresh:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_dataSourceRequestNeededUpdatesExcludingIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)_dataSourceScheduleWork:(id /* block */)arg1;
- (void)_dataSourceVerifyRepresentativeSampleWithCompletion:(id /* block */)arg1;
- (void)_doIndexItems:(id)arg1 fromRefresh:(bool)arg2 immediately:(bool)arg3;
- (id)_eventDataForTransitionState:(id)arg1;
- (void)_fetchLastClientState;
- (void)_getDomainRemovals:(id*)arg1 identifierRemovals:(id*)arg2;
- (void)_handleFailingTransactionIDs:(id)arg1;
- (id)_identifiersForItems:(id)arg1;
- (id)_identifiersStringForItems:(id)arg1 maxLength:(unsigned long long)arg2;
- (void)_indexItems:(id)arg1 fromRefresh:(bool)arg2 immediately:(bool)arg3;
- (void)_invalidateItemsInTransactions:(id)arg1;
- (void)_logSignpostForIndexingBatchAssignedDomainRemovalCount:(unsigned long long)arg1;
- (void)_logSignpostForIndexingBatchAssignedUpdatesWithItemsIndexedCount:(unsigned long long)arg1;
- (void)_logSignpostForIndexingBatchCompletedWithItemsIndexedCount:(id)arg1;
- (void)_logSignpostForIndexingBatchStartWithPendingItemsCount:(id)arg1;
- (id)_missingIdentifiersForIdentifiersNeedingReindex:(id)arg1;
- (long long)_nextTransaction;
- (void)_noteNeedsLastClientStateFetch;
- (void)_powerStateChanged;
- (void)_processAttachmentItemsForSuggestionsService:(id)arg1;
- (id)_processDomainRemovals:(id)arg1;
- (void)_processIdentifierRemovals:(id)arg1;
- (bool)_processIndexingBatch:(id)arg1 clientState:(id)arg2 itemsNotIndexed:(id)arg3;
- (void)_processRefreshRequestWithCompletion:(id /* block */)arg1;
- (void)_processSpotlightVerificationWithCompletion:(id /* block */)arg1;
- (void)_promptToFileRadarAboutReindexing:(id /* block */)arg1;
- (void)_queueConsumeBudgetElapsedPeriod:(double)arg1;
- (void)_queueConsumeBudgetItemCount:(unsigned long long)arg1 lastItemDateReceived:(id)arg2;
- (void)_queueRefresh;
- (void)_queueTransitionFromRefresh:(bool)arg1;
- (void)_registerDistantFutureSpotlightVerification;
- (void)_registerStateCaptureHandler;
- (void)_resume;
- (void)_resumeIndexingScheduler;
- (void)_scheduleDataSourceRefresh;
- (void)_scheduleProcessPendingItemsFromRefresh:(bool)arg1;
- (void)_scheduleSpotlightVerification;
- (void)_scheduleSpotlightVerificationOnIndexingQueueWithCompletion:(id /* block */)arg1;
- (void)_sendAnalyticsForReindexReason:(long long)arg1;
- (void)_startCoalescingTimer;
- (void)_stopCoalescingTimer;
- (void)_storeLastKnownReindexReason:(long long)arg1 withInfo:(id)arg2;
- (id)_suggestionsService;
- (void)_suspend;
- (void)_suspendIndexingScheduler;
- (double)_throttleRequestedSize:(unsigned long long*)arg1 targetTime:(double)arg2 action:(id /* block */)arg3;
- (long long)_transaction;
- (void)_transitionWithBudgetTimeUsed:(double)arg1;
- (void)_verifySpotlightIndex;
- (id)analyticsCollector;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (void)attachmentBecameAvailable:(id)arg1;
- (void)beginUpdatesAffectingDataSourceAndIndex;
- (id)bundleIDForSearchableIndexVerifier:(id)arg1;
- (bool)canIndexAttachments;
- (bool)clientStateFetched;
- (double)coalescingDelaySeconds;
- (id)copyDiagnosticInformation;
- (unsigned long long)currentMaximumBatchSize;
- (id)currentReasons;
- (id)dataSamplesForSearchableIndexVerifier:(id)arg1 searchableIndex:(id)arg2 count:(unsigned long long)arg3 lastVerifiedMessageID:(long long)arg4;
- (id)dataSource;
- (id)dataSourceRefreshReasons;
- (double)dataSourceUpdateTimeLimit;
- (void)dealloc;
- (id)delayDataSourceAssignmentFuture;
- (bool)enableSpotlightVerification;
- (void)endUpdatesAffectingDataSourceAndIndex;
- (id)exclusionReasons;
- (void)generatedSummariesDidUpdate:(id)arg1;
- (void)indexAttachmentsForMessageWithIdentifier:(id)arg1 immediately:(bool)arg2;
- (void)indexItems:(id)arg1;
- (void)indexItems:(id)arg1 fromRefresh:(bool)arg2 immediately:(bool)arg3;
- (void)indexItems:(id)arg1 immediately:(bool)arg2;
- (void)indexMessages:(id)arg1 includeBody:(bool)arg2 indexingType:(long long)arg3;
- (id)indexName;
- (id)initWithName:(id)arg1 dataSource:(id)arg2;
- (bool)isActive;
- (bool)isDataSourceIndexingPermitted;
- (bool)isIndexingDisabledForPPT;
- (bool)isPerformingBlockAffectingDataSourceAndIndex;
- (bool)isPersistenceAvailable;
- (bool)isPluggedIn;
- (id)knownTransactionIDsForSearchableIndexVerifier:(id)arg1;
- (void)markMessagesAsPrinted:(id)arg1;
- (id)powerObservable;
- (id)purgeReasons;
- (void)redonateAllItemsWithAcknowledgementHandler:(id /* block */)arg1;
- (void)refresh;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)removeItemsForDomainIdentifier:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1 reasons:(id)arg2 fromRefresh:(bool)arg3;
- (void)removeMessages:(id)arg1;
- (void)resetIndexForNewLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)resume;
- (long long)resumeCount;
- (void)richLinkBecameAvailable:(id)arg1;
- (id)schedulableDelegate;
- (void)scheduleRecurringActivity;
- (id)searchIndex;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (id)searchableIndexBundleID;
- (id)searchableIndexForSearchableIndexVerifier:(id)arg1;
- (void)searchableItemsDidUpdate:(id)arg1 mask:(long long)arg2;
- (void)setClientStateFetched:(bool)arg1;
- (void)setCoalescingDelaySeconds:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceIndexingPermitted:(bool)arg1;
- (void)setDataSourceUpdateTimeLimit:(double)arg1;
- (void)setDelayDataSourceAssignmentFuture:(id)arg1;
- (void)setEnableSpotlightVerification:(bool)arg1;
- (void)setForeground:(bool)arg1;
- (void)setIndexingDisabledForPPT:(bool)arg1;
- (void)setPersistenceAvailable:(bool)arg1;
- (void)setSchedulableDelegate:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setSearchableIndexBundleID:(id)arg1;
- (void)setSkipIndexExclusionCheck:(bool)arg1;
- (void)setState:(id)arg1;
- (unsigned long long)signpostID;
- (bool)skipIndexExclusionCheck;
- (id)state;
- (void)suspend;
- (void)test_resetSpotlightIndex;
- (void)test_tearDown;

@end

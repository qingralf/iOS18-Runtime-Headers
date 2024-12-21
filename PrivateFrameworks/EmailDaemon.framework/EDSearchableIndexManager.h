/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDSearchableIndexManager : NSObject <EDCategoryChangeHookResponder, EDMessageChangeHookResponder, EFLoggable> {
    EDPersistenceDatabase * _database;
    EDMessagePersistence * _messagePersistence;
    bool  _needsToRedonate;
    bool  _needsToScheduleRecurringActivity;
    EDSpotlightDaemonClient * _spotlightDaemonClient;
    <EFCancelable> * _turboModeObservationToken;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDSearchableIndex *index;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic) bool needsToRedonate;
@property (nonatomic) bool needsToScheduleRecurringActivity;
@property (nonatomic, readonly) EDSearchableIndexPersistence *persistence;
@property (nonatomic, readonly) EDSearchableIndexScheduler *scheduler;
@property (nonatomic, retain) EDSpotlightDaemonClient *spotlightDaemonClient;
@property (readonly) Class superclass;
@property (nonatomic, retain) <EFCancelable> *turboModeObservationToken;

+ (void)addSearchQueryCancelable:(id)arg1;
+ (id)log;
+ (void)removeSearchQueryCancelable:(id)arg1;
+ (id)searchableIndexBundleID;
+ (id)searchableIndexName;
+ (id)searchableItemResultForExpression:(id)arg1;
+ (bool)shouldCancelSearchQuery;

- (void).cxx_destruct;
- (void)_removeItemsForPersistedMessages:(id)arg1;
- (void)_startObservingTurboModeToggle;
- (id)database;
- (void)enableIndexingAndBeginScheduling:(bool)arg1;
- (void)enableIndexingAndBeginScheduling:(bool)arg1 budgetConfiguration:(id)arg2;
- (id)index;
- (id)initWithDatabase:(id)arg1 messagePersistence:(id)arg2 richLinkPersistence:(id)arg3 hookResponder:(id)arg4;
- (id)messagePersistence;
- (bool)needsToRedonate;
- (bool)needsToScheduleRecurringActivity;
- (id)persistence;
- (void)persistenceDidAddDataDetectionResults:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidAddLabels:(id)arg1 removeLabels:(id)arg2 messages:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidChangeCategorizationForMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidFinishUpdates;
- (void)persistenceDidUpdateData:(id)arg1 message:(id)arg2;
- (void)persistenceWillBeginUpdates;
- (void)resetIndexForNewLibrary;
- (void)scheduleRecurringActivity;
- (id)scheduler;
- (void)setNeedsToRedonate;
- (void)setNeedsToRedonate:(bool)arg1;
- (void)setNeedsToScheduleRecurringActivity:(bool)arg1;
- (void)setSpotlightDaemonClient:(id)arg1;
- (void)setTurboModeObservationToken:(id)arg1;
- (id)spotlightDaemonClient;
- (void)test_tearDown;
- (id)turboModeObservationToken;

@end
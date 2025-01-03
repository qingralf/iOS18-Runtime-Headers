/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryServiceStore : NSObject <WBSHistoryServiceDatabaseDelegate, WBSHistoryStore> {
    WBSHistoryObjectCache * _cache;
    <WBSHistoryConnectionProxy> * _connection;
    WBSHistoryCrypto * _crypto;
    NSString * _databaseID;
    <WBSHistoryServiceDatabaseProtocol> * _databaseProxy;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
    <WBSHistoryStoreDelegate> * _delegate;
    double  _historyAgeLimit;
    Class  _historyItemClass;
    unsigned long long  _itemCountLimit;
    NSDate * _lastMaintenanceDate;
    long long  _lastTemporaryDatabaseID;
    id /* block */  _loadCompletionBlock;
    WBSPeriodicActivityScheduler * _maintenanceScheduler;
    long long  _nextTemporaryDatabaseID;
    struct atomic<WBSHistoryServiceStoreState> { 
        struct __cxx_atomic_impl<WBSHistoryServiceStoreState, std::__cxx_atomic_base_impl<WBSHistoryServiceStoreState>> { 
            _Atomic long long __a_value; 
        } __a_; 
    }  _state;
}

@property (nonatomic, readonly) WBSHistoryCrypto *crypto;
@property (nonatomic, readonly) NSString *databaseID;
@property (retain) <WBSHistoryServiceDatabaseProtocol> *databaseProxy;
@property (nonatomic, retain) NSURL *databaseURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <WBSHistoryStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double historyAgeLimit;
@property (nonatomic, readonly) bool isUsingInMemoryDatabase;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_ageLimitSinceReferenceDate;
- (id)_connectOptions;
- (void)_connectWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)_databaseFetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_ensureItemHasID:(id)arg1;
- (bool)_ensureVisitHasID:(id)arg1;
- (void)_expireOldVisits;
- (void)_fetchHistoryItemsForTopics:(id)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchTags:(unsigned long long)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3 withIdentifiers:(id)arg4 limit:(unsigned long long)arg5 minimumItemCount:(unsigned long long)arg6 sortOrder:(long long)arg7 completionHandler:(id /* block */)arg8;
- (id)_fetchVisitsOnDatabaseQueue:(unsigned long long)arg1 predicate:(id)arg2 error:(id*)arg3;
- (long long)_generateTemporaryDatabaseID;
- (void)_load:(id /* block */)arg1;
- (id)_loadOnDatabaseQueue:(unsigned long long)arg1 readHandle:(id)arg2;
- (void)_performMaintenance:(id /* block */)arg1;
- (void)_scheduleMaintenance;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2 group:(id)arg3;
- (void)_updateLastMaintenanceDate;
- (void)_waitForDatabase:(id /* block */)arg1;
- (void)addAutocompleteTrigger:(id)arg1 forItem:(id)arg2;
- (void)assignHistoryItem:(id)arg1 toTopicTags:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 blockList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(id /* block */)arg7;
- (void)connectionProxyConnectionWasInterrupted:(id)arg1;
- (id)crypto;
- (id)databaseID;
- (id)databaseProxy;
- (id)databaseURL;
- (id)delegate;
- (void)exportHistory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)getAutocompleteTriggersForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 onlyFromThisDevice:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)getItemCountBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)historyAgeLimit;
- (id)initWithDatabaseID:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
- (id)initWithDatabaseID:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4 connectionProxy:(id)arg5;
- (void)initializeCloudHistoryWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isUsingInMemoryDatabase;
- (void)itemWasReplaced:(id)arg1 byItem:(id)arg2;
- (void)itemsWereAdded:(id)arg1 byUserInitiatedAction:(bool)arg2;
- (void)itemsWereModified:(id)arg1 byUserInitiatedAction:(bool)arg2;
- (void)loadWithCompletionHandler:(id /* block */)arg1;
- (void)performMaintenance:(id /* block */)arg1;
- (void)releaseCloudHistory:(id /* block */)arg1;
- (void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportPermanentIDsForItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportPermanentIDsForVisits:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportSevereError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 enumerationBlock:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)setDatabaseProxy:(id)arg1;
- (void)setDatabaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHistoryAgeLimit:(double)arg1;
- (void)setTitle:(id)arg1 ofTag:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)tagsWithIdentifiers:(id)arg1 type:(unsigned long long)arg2 level:(long long)arg3 creatingIfNecessary:(bool)arg4 withTitles:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)vacuumHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)visitAttributeWasUpdated:(id)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3;
- (void)visitTitleWasUpdated:(id)arg1;
- (void)visitsWereAdded:(id)arg1;
- (void)visitsWereModified:(id)arg1;
- (void)waitForLoadingToComplete;

@end

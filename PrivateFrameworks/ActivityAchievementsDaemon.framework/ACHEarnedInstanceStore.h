/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

@interface ACHEarnedInstanceStore : NSObject <ACHEarnedInstanceEntityJournalEntryAppliedObserver, ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> {
    NSMutableArray * _allEarnedInstances;
    ACHDatabaseAssertionClient * _assertionClient;
    ACHAwardsClient * _client;
    unsigned char  _device;
    ACHEarnedInstanceDuplicateUtility * _duplicateUtility;
    NSObject<OS_dispatch_queue> * _earnedInstanceQueue;
    NSCache * _earnedInstancesForEarnedDateComponentsCache;
    NSCache * _earnedInstancesForTemplateUniqueNameCache;
    ACHEarnedInstanceEntityWrapper * _entityWrapper;
    bool  _initialEarnedInstanceFetchComplete;
    bool  _isUsingNewAwardingSystem;
    bool  _needsUpdateWhenProtectedDataAvailable;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
    int  _syncedEarnedInstancesToken;
}

@property (nonatomic, retain) NSMutableArray *allEarnedInstances;
@property (nonatomic, retain) ACHDatabaseAssertionClient *assertionClient;
@property (nonatomic, retain) ACHAwardsClient *client;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char device;
@property (nonatomic, retain) ACHEarnedInstanceDuplicateUtility *duplicateUtility;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *earnedInstanceQueue;
@property (nonatomic, readonly) NSArray *earnedInstances;
@property (nonatomic, retain) NSCache *earnedInstancesForEarnedDateComponentsCache;
@property (nonatomic, retain) NSCache *earnedInstancesForTemplateUniqueNameCache;
@property (nonatomic, retain) ACHEarnedInstanceEntityWrapper *entityWrapper;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialEarnedInstanceFetchComplete;
@property (nonatomic, readonly) bool isUsingNewAwardingSystem;
@property (nonatomic) bool needsUpdateWhenProtectedDataAvailable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic) int syncedEarnedInstancesToken;

- (void).cxx_destruct;
- (id)_client_earnedInstances;
- (id)_client_earnedInstancesForTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (bool)_client_removeAllEarnedInstancesWithError:(id*)arg1;
- (id)_daemon_earnedInstances;
- (id)_daemon_earnedInstancesForTemplateUniqueName:(id)arg1;
- (bool)_daemon_removeAllEarnedInstancesWithError:(id*)arg1;
- (void)_notifyInitialFetchComplete;
- (void)_notifyObserversOfAddedEarnedInstances:(id)arg1;
- (void)_notifyObserversOfRemovedEarnedInstances:(id)arg1;
- (void)_notifyObserversOfSync;
- (bool)_queue_addEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 triggerSync:(bool)arg4 error:(id*)arg5;
- (void)_queue_appendOrInsertEarnedInstanceToInMemoryStore:(id)arg1;
- (id)_queue_client_addEarnedInstancesWithSingleTemplate:(id)arg1 provenance:(long long)arg2 error:(id*)arg3;
- (bool)_queue_client_removeEarnedInstances:(id)arg1 error:(id*)arg2;
- (id)_queue_daemon_addEarnedInstancesWithSingleTemplate:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4;
- (bool)_queue_daemon_loadAllEarnedInstancesFromDatabaseIfNecessary;
- (bool)_queue_daemon_removeEarnedInstances:(id)arg1 error:(id*)arg2;
- (id)_queue_earnedInstancesArray;
- (id)_queue_earnedInstancesFilteredForDuplicates:(id)arg1;
- (id)_queue_orphanedEarnedInstancesWithFetchedInstances:(id)arg1;
- (void)_queue_purgeCaches;
- (void)_queue_removeEarnedInstanceFromInMemoryStore:(id)arg1;
- (bool)addEarnedInstances:(id)arg1 databaseContext:(id)arg2 error:(id*)arg3;
- (bool)addEarnedInstances:(id)arg1 error:(id*)arg2;
- (void)addObserver:(id)arg1;
- (id)allEarnedInstances;
- (id)assertionClient;
- (id)client;
- (unsigned long long)countOfEarnedInstancesForTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfEarnedInstancesForTemplateUniqueName:(id)arg1 inDateComponentInterval:(id)arg2 withCalendar:(id)arg3 error:(id*)arg4;
- (id)countOfEarnedInstancesForTemplateUniqueNames:(id)arg1 error:(id*)arg2;
- (unsigned char)device;
- (id)duplicateUtility;
- (void)earnedInstanceEntityDidApplyJournalEntriesInsertedEarnedInstances:(id)arg1 removedEarnedInstances:(id)arg2;
- (bool)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2;
- (id)earnedInstanceQueue;
- (id)earnedInstances;
- (id)earnedInstancesForEarnedDateComponents:(id)arg1 error:(id*)arg2;
- (id)earnedInstancesForEarnedDateComponentsCache;
- (id)earnedInstancesForTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (id)earnedInstancesForTemplateUniqueNameCache;
- (id)entityWrapper;
- (id)initWithClient:(id)arg1 assertionClient:(id)arg2 earnedInstanceDuplicateUtility:(id)arg3 device:(unsigned char)arg4;
- (id)initWithProfile:(id)arg1 earnedInstanceEntityWrapper:(id)arg2 earnedInstanceDuplicateUtility:(id)arg3 device:(unsigned char)arg4;
- (bool)initialEarnedInstanceFetchComplete;
- (bool)isUsingNewAwardingSystem;
- (bool)loadAllEarnedInstancesFromDatabaseIfNecessary;
- (id)mostRecentEarnedInstanceForTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (id)mostRecentEarnedInstancesForTemplateUniqueNames:(id)arg1 error:(id*)arg2;
- (bool)needsUpdateWhenProtectedDataAvailable;
- (id)observerQueue;
- (id)observers;
- (id)profile;
- (bool)removeAllEarnedInstancesWithError:(id*)arg1;
- (bool)removeEarnedInstances:(id)arg1 error:(id*)arg2;
- (void)removeObserver:(id)arg1;
- (void)setAllEarnedInstances:(id)arg1;
- (void)setAssertionClient:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setDevice:(unsigned char)arg1;
- (void)setDuplicateUtility:(id)arg1;
- (void)setEarnedInstanceQueue:(id)arg1;
- (void)setEarnedInstancesForEarnedDateComponentsCache:(id)arg1;
- (void)setEarnedInstancesForTemplateUniqueNameCache:(id)arg1;
- (void)setEntityWrapper:(id)arg1;
- (void)setInitialEarnedInstanceFetchComplete:(bool)arg1;
- (void)setNeedsUpdateWhenProtectedDataAvailable:(bool)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSyncedEarnedInstancesToken:(int)arg1;
- (int)syncedEarnedInstancesToken;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation
 */

@interface DSSharingPermissions : NSObject {
    NSObject<OS_dispatch_queue> * _dataUsageQueue;
    NSMutableDictionary * _fetchStartTimesBySource;
    NSOrderedSet * _filteredPeople;
    NSOrderedSet * _filteredReadOnlySharingPeople;
    NSOrderedSet * _filteredReadOnlySharingTypes;
    NSOrderedSet * _filteredSharingTypes;
    DSMe * _me;
    NSMutableOrderedSet * _people;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _permissionsLock;
    NSMutableOrderedSet * _publicSharingTypes;
    NSMutableOrderedSet * _readOnlySharingPeople;
    NSMutableOrderedSet * _readOnlySharingTypes;
    DSSourceRepository * _repo;
    NSMutableOrderedSet * _sharingTypes;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) NSArray *allPeople;
@property (nonatomic, readonly, copy) NSArray *allPublicSharingTypes;
@property (nonatomic, readonly, copy) NSArray *allReadOnlySharingPeople;
@property (nonatomic, readonly, copy) NSArray *allReadOnlySharingTypes;
@property (nonatomic, readonly, copy) NSArray *allSharingTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataUsageQueue;
@property (nonatomic, readonly, copy) NSDictionary *elapsedUnfinishedFetchesBySource;
@property (nonatomic, retain) NSMutableDictionary *fetchStartTimesBySource;
@property (nonatomic, retain) NSOrderedSet *filteredPeople;
@property (nonatomic, retain) NSOrderedSet *filteredReadOnlySharingPeople;
@property (nonatomic, retain) NSOrderedSet *filteredReadOnlySharingTypes;
@property (nonatomic, retain) NSOrderedSet *filteredSharingTypes;
@property (retain) DSMe *me;
@property (nonatomic, retain) NSMutableOrderedSet *people;
@property (nonatomic, retain) NSMutableOrderedSet *publicSharingTypes;
@property (nonatomic, readonly) long long publicSharingTypesCount;
@property (nonatomic, retain) NSMutableOrderedSet *readOnlySharingPeople;
@property (nonatomic, retain) NSMutableOrderedSet *readOnlySharingTypes;
@property (nonatomic, retain) DSSourceRepository *repo;
@property (nonatomic, retain) NSMutableOrderedSet *sharingTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_trackResourceForPublicAccess:(id)arg1 source:(id)arg2;
- (void)addParticipant:(id)arg1 forSource:(id)arg2 sharedResource:(id)arg3 deviceOwnerRole:(long long)arg4;
- (id)allPeople;
- (id)allPublicSharingTypes;
- (id)allReadOnlySharingPeople;
- (id)allReadOnlySharingTypes;
- (id)allSharingTypes;
- (id)dataUsageQueue;
- (id)elapsedUnfinishedFetchesBySource;
- (void)fetchCompletedForSource:(id)arg1;
- (void)fetchPermissionsFromSources:(id)arg1 includingErrors:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchPermissionsOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchStartTimesBySource;
- (void)fetchStartedForSource:(id)arg1;
- (void)filterPeopleWithPredicate:(id)arg1;
- (void)filterReadOnlySharingPeopleWithPredicate:(id)arg1;
- (void)filterReadOnlySharingTypesWithPredicate:(id)arg1;
- (void)filterSharingTypesWithPredicate:(id)arg1;
- (id)filteredPeople;
- (id)filteredReadOnlySharingPeople;
- (id)filteredReadOnlySharingTypes;
- (id)filteredSharingTypes;
- (id)init;
- (id)me;
- (id)people;
- (long long)peopleCountWithFilter:(bool)arg1;
- (id)person:(long long)arg1 withFilter:(bool)arg2;
- (id)publicSharingType:(long long)arg1;
- (id)publicSharingTypes;
- (long long)publicSharingTypesCount;
- (id)readOnlySharingPeople;
- (long long)readOnlySharingPeopleCountWithFilter:(bool)arg1;
- (id)readOnlySharingPerson:(long long)arg1 withFilter:(bool)arg2;
- (id)readOnlySharingType:(long long)arg1 withFilter:(bool)arg2;
- (id)readOnlySharingTypes;
- (long long)readOnlySharingTypesCountWithFilter:(bool)arg1;
- (void)removePerson:(id)arg1;
- (void)removePerson:(id)arg1 sources:(id)arg2;
- (void)removePublicSharingType:(id)arg1;
- (void)removeSharingType:(id)arg1;
- (void)removeSharingType:(id)arg1 people:(id)arg2;
- (id)repo;
- (void)setDataUsageQueue:(id)arg1;
- (void)setFetchStartTimesBySource:(id)arg1;
- (void)setFilteredPeople:(id)arg1;
- (void)setFilteredReadOnlySharingPeople:(id)arg1;
- (void)setFilteredReadOnlySharingTypes:(id)arg1;
- (void)setFilteredSharingTypes:(id)arg1;
- (void)setMe:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setPublicSharingTypes:(id)arg1;
- (void)setReadOnlySharingPeople:(id)arg1;
- (void)setReadOnlySharingTypes:(id)arg1;
- (void)setRepo:(id)arg1;
- (void)setSharingTypes:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)sharingType:(long long)arg1 withFilter:(bool)arg2;
- (id)sharingTypes;
- (long long)sharingTypesCountWithFilter:(bool)arg1;
- (bool)shouldAllowBundleIDWithNoPolicy:(id)arg1;
- (void)sort;
- (void)stopAllSharingOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyDataUsagePoliciesForSources:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)workQueue;

@end

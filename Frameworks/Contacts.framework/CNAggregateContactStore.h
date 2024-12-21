/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNAggregateContactStore : CNContactStore {
    CNContactStore * _contactStoreForMatchingDictionaryWork;
    NSArray * _contactStores;
    CNContactStore * _mainStore;
    NSArray * _postFetchDecoratorBlocks;
}

@property (nonatomic, retain) CNContactStore *contactStoreForMatchingDictionaryWork;
@property (nonatomic, copy) NSArray *contactStores;
@property (nonatomic, readonly) CNContactStore *mainStore;
@property (nonatomic, retain) NSArray *postFetchDecoratorBlocks;

- (void).cxx_destruct;
- (id)XPCDataMapperStore;
- (id)_allStoreResultsWithError:(id*)arg1 withBlock:(id /* block */)arg2;
- (void)_enumerateStoresUsingBlock:(id /* block */)arg1;
- (id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(bool)arg2 keysToFetch:(id)arg3 error:(id*)arg4;
- (id)_unifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (void)addLimitedAccessForBundle:(id)arg1 contactIdentifier:(id)arg2;
- (void)addLimitedAccessForBundle:(id)arg1 contactIdentifiers:(id)arg2;
- (void)addPostFetchDecorator:(id /* block */)arg1;
- (bool)analyzeDatabaseWithError:(id*)arg1;
- (void)applyLimitedAccessSyncEvents:(id)arg1;
- (id)applyPostFetchDecoratorsToContact:(id)arg1 keysToFetch:(id)arg2 unifyContactsFromMainStore:(bool)arg3;
- (id)applyPostFetchDecoratorsToContacts:(id)arg1 keysToFetch:(id)arg2 unifyContactsFromMainStore:(bool)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3;
- (id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)contactStoreForMatchingDictionaryWork;
- (id)contactStores;
- (id)contactStoresSupportingSpotlightIndexing;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)currentHistoryAnchor;
- (id)currentHistoryToken;
- (id)defaultContainerIdentifier;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (void)didFetchContacts:(id)arg1 forPredicate:(id)arg2 fromStore:(id)arg3 unifiedFetch:(bool)arg4;
- (void)dropAllLimitedAccessRows;
- (void)dropAllLimitedAccessRowsAndSyncNotify;
- (bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id*)arg2;
- (id)enumeratorForContactFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4;
- (id)fetchLimitedAccessContactIdentifiersForBundle:(id)arg1;
- (id)findContactStoreForMatchingDictionaryWork;
- (id)firstContactStoreSupportingSpotlightIndexing;
- (id)getBackgroundColorOnImageData:(id)arg1 bitmapFormat:(id)arg2 error:(id*)arg3;
- (id)getLimitedAccessContactsCountForBundle:(id)arg1;
- (id)getLimitedAccessLastSyncSequenceNumber:(id*)arg1;
- (id)getWatchLimitedAccessSyncDataStartingAtSequenceNumber:(long long)arg1;
- (id)groupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)hasGroups;
- (bool)hasMultipleGroupsOrAccounts;
- (id)iOSMapper;
- (id)identifierWithError:(id*)arg1;
- (id)individualContactCountWithError:(id*)arg1;
- (id)initWithContactStores:(id)arg1;
- (id)initWithContactStores:(id)arg1 configuration:(id)arg2;
- (bool)isSpotlightIndexingSupported;
- (id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)arg1 error:(id*)arg2;
- (id)legacyTetheredSyncComputerAnchor;
- (id)legacyTetheredSyncDeviceAnchor;
- (id)mainContactStore;
- (id)mainStore;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)meContactIdentifiers:(id*)arg1;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id*)arg4;
- (id)originForSuggestion:(id)arg1 error:(id*)arg2;
- (id)policyWithDescription:(id)arg1 error:(id*)arg2;
- (id)populateSyncTableForLimitedAccessAboveSequenceNumber:(id)arg1;
- (id)postFetchDecoratorBlocks;
- (void)purgeLimitedAccessRecordsForBundle:(id)arg1;
- (bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;
- (void)removeLimitedAccessForBundle:(id)arg1 contactIdentifier:(id)arg2;
- (void)removeLimitedAccessForBundle:(id)arg1 contactIdentifiers:(id)arg2;
- (id)requestAccessForEntityType:(long long)arg1;
- (bool)resetSortDataIfNeededWithError:(id*)arg1;
- (int)saveSequenceCount;
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
- (void)setContactStoreForMatchingDictionaryWork:(id)arg1;
- (void)setContactStores:(id)arg1;
- (bool)setDefaultAccountIdentifier:(id)arg1 error:(id*)arg2;
- (void)setLegacyTetheredSyncComputerAnchor:(id)arg1;
- (void)setLegacyTetheredSyncDeviceAnchor:(id)arg1;
- (void)setLimitedAccessTableCurrentSequenceNumber:(id)arg1;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
- (void)setPostFetchDecoratorBlocks:(id)arg1;
- (bool)shouldAnalyzeDatabaseWithError:(id*)arg1;
- (bool)store:(id)arg1 supportsSelector:(SEL)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)supportsSaveRequest:(id)arg1;
- (id)unifiedContactCountWithError:(id*)arg1;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (void)updateLimitedAccessTable:(id)arg1;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;
- (bool)verifyChangeHistoryForClientIdentifier:(id)arg1 error:(id*)arg2;
- (id)verifyIndexWithError:(id*)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDSpotlightReceiver : NSObject <SpotlightReceiver> {
    SGCoalescingDropBox * _deleteInteractionBundleIdDropbox;
    SGCoalescingDropBox * _deleteInteractionGroupIdDropbox;
    SGCoalescingDropBox * _deleteInteractionIdDropbox;
    <SpotlightReceiver> * _duReceiver;
    SGDSuggestManager * _suggestManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SGDSuggestManager *suggestManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessSummarizationPipelineForBundleId:(id)arg1 block:(id /* block */)arg2;
- (void)_addSearchableItem:(id)arg1 bundleID:(id)arg2;
- (bool)_isFullyInitialized;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
- (void)addUserAction:(id)arg1 withItem:(id)arg2;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1;
- (void)deleteAllUserActivities:(id)arg1;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2;
- (id)init;
- (void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)setSuggestManager:(id)arg1;
- (id)suggestManager;
- (id)supportedContentTypes;

@end
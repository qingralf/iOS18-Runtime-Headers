/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSiriIntelligenceDonor : NSObject {
    NSMutableSet * _closedTabsToIndex;
    NSObject<OS_dispatch_queue> * _coreSpotlightDonationSerialQueue;
    WBSSpotlightDonationEntityCorrelator * _entityCorrelator;
    NSMutableSet * _identifiersLeftToReindex;
    WBSSpotlightReindexingBackgroundSystemTaskManager * _reindexingBackgroundSystemTaskManager;
    NSObject<OS_dispatch_queue> * _tabDonationSerialQueue;
    WBSDispatchSourceTimer * _tabDonationTimer;
    NSMutableDictionary * _tabsToDonate;
}

+ (id)_bookmarkItemIdentifierForURLString:(id)arg1;
+ (id)_coreSpotlightItemIdentifierForURLString:(id)arg1;
+ (id)_coreSpotlightTabDonationIdentifierForProfileWithIdentifier:(id)arg1;
+ (id)_historyItemIdentifierForURLString:(id)arg1 profileIdentifier:(id)arg2;
+ (id)coreSpotlightBookmarkIsVistedForProfileIDsAttributeKey;
+ (id)coreSpotlightBookmarkTitleAttributeKey;
+ (id)coreSpotlightHistoryItemIsSTPAttributeKey;
+ (id)coreSpotlightPageDonationIdentifierForProfileWithIdentifier:(id)arg1;
+ (id)coreSpotlightProfileIDKey;
+ (id)coreSpotlightTabTabGroupAttributeKey;
+ (id)historyItemIdentifierForURL:(id)arg1 profileIdentifier:(id)arg2;
+ (id)historyItemIdentifierForURLString:(id)arg1 profileIdentifier:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_arrayByFilteringDeletedHistoryItems:(id)arg1;
- (id)_computeCoreSpotlightIDsForBookmarks:(id)arg1;
- (void)_computeCoreSpotlightIndexingRequirementsForAllIDs:(id)arg1 indexedIDs:(id)arg2 outIndexIDs:(id*)arg3 outRemoveIDs:(id*)arg4;
- (id)_contentDescriptionForURL:(id)arg1;
- (id)_coreSpotlightItemsSubarrays:(id)arg1;
- (void)_donateDataForPageWithURL:(id)arg1 history:(id)arg2 fullPageText:(id)arg3 readerText:(id)arg4 autocompleteTriggers:(id)arg5 profileIdentifier:(id)arg6 personalizationData:(id)arg7;
- (void)_donateHistoryItemsToCoreSpotlightCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 historiesForProfiles:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_getIndexedBookmarksIDsToAttributesWithCompletionHandler:(id /* block */)arg1;
- (void)_getIndexedIDsForSearchQueryString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_getIndexedItemsForSearchQueryString:(id)arg1 attributes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_indexCoreSpotlightData:(id)arg1 filterDeletedHistoryItems:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_indexCoreSpotlightData:(id)arg1 filterDeletedHistoryItems:(bool)arg2 onDispatchQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_indexHistoryItemsToCoreSpotlight:(id)arg1 filterDeletedHistoryItems:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_indexTabData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_removeCoreSpotlightDataWithIDs:(id)arg1 onDispatchQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_sanitizeAttributeSet:(id)arg1;
- (void)_scheduleTabBatchDonationTimerIfNeeded;
- (id)_searchableItemsForIDs:(id)arg1 allBookmarks:(id)arg2;
- (void)donateAllHistoryToCoreSpotlightForProfiles:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)donateDataForPageWithURL:(id)arg1 fullPageText:(id)arg2 readerText:(id)arg3 profileIdentifier:(id)arg4 personalizationData:(id)arg5;
- (void)donatePendingTabDataNowWithCompletionHandler:(id /* block */)arg1;
- (void)donateSafariBookmarksToCoreSpotlight:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)donateTextInWebView:(id)arg1 extractedReaderText:(id)arg2 canDonateFullPageText:(bool)arg3 profileIdentifier:(id)arg4 personalizationData:(id)arg5 extractInnerText:(id /* block */)arg6;
- (void)export30DaysWorthOfHistoryToCoreSpotlightForProfiles:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)reindexAllBookmarkAndHistoryItems:(id)arg1 historiesForProfiles:(id)arg2 withAcknowledgementHandler:(id /* block */)arg3;
- (void)reindexBookmarkAndHistoryItemsWithIdentifiers:(id)arg1 allBookmarks:(id)arg2 historiesForProfiles:(id)arg3 withAcknowledgementHandler:(id /* block */)arg4;
- (void)removeAllCoreSpotlightHistoryDataDonatedBySafariForProfileWithIdentifier:(id)arg1;
- (void)removeCoreSpotlightDataWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setTabNeedsSpotlightDeletion:(id)arg1;
- (void)setTabNeedsSpotlightDonation:(id)arg1;
- (void)updateCoreSpotlightReadingListDataAfterUpgrade:(id)arg1;

@end
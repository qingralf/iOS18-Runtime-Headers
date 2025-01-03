/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMockSpotlightIndexingLogger : NSObject <CNSpotlightIndexingLogger>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)deferringReindexAsFailedToPrepareForReindexing;
- (void)didNotFinishIndexingForDeltaSyncWithError:(id)arg1;
- (void)didNotFinishIndexingForFullSyncWithError:(id)arg1;
- (void)failedToBeginIndexBatchWithSpotlight:(id)arg1;
- (void)failedToClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2 error:(id)arg3;
- (void)failedToCreateSearchableItemForContactIdentifier:(id)arg1;
- (void)failedToCreateUnarchiverForClientStateWithError:(id)arg1;
- (void)failedToDeleteAllSearchableItemsWithSpotlight:(id)arg1 willRetry:(bool)arg2;
- (void)failedToEndIndexBatchWithSpotlight:(id)arg1 willRetry:(bool)arg2;
- (void)failedToFetchClientStateFromSpotlight:(id)arg1 willRetry:(bool)arg2;
- (void)failedToFetchContactForChange:(id)arg1;
- (void)failedToFetchSearchableForContactIdentifiers:(id)arg1 error:(id)arg2;
- (void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(bool)arg3;
- (void)failedToJournalSearchableItemsForIndexingWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(bool)arg3;
- (void)failedToUnarchiveClientStateData:(id)arg1;
- (void)finishedBatchIndexWithUpdateIdentifiers:(id)arg1 deleteIdentifiers:(id)arg2;
- (void)finishedIndexingForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)finishedIndexingForFullSyncWithCount:(unsigned long long)arg1;
- (void)indexingContacts:(id /* block */)arg1;
- (void)noContactChangesToIndex;
- (void)reindexingAllSearchableItems:(id /* block */)arg1;
- (void)reindexingSearchableItemsWithIdentifiers:(id /* block */)arg1;
- (void)verifiedIndexWithSummmary:(id)arg1;
- (void)verifyingIndex:(id /* block */)arg1;
- (void)willBatchIndexForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)willBatchIndexForFullSyncWithCount:(unsigned long long)arg1 lastOffset:(long long)arg2 doneFullSync:(bool)arg3;
- (void)willClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2;
- (void)willReindexAsChangeHistoryIsTruncated:(id)arg1;
- (void)willReindexAsFailedToFetchChangeHistory:(id)arg1 error:(id)arg2;
- (void)willReindexAsFailedToFetchClientState;
- (void)willReindexAsFailedToRegisterForChangeHistory:(id)arg1 error:(id)arg2;
- (void)willReindexAsIndexVersionChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)willReindexAsSnapshotAnchorChangedFrom:(id)arg1 to:(id)arg2;
- (void)willReindexItemsWithIdentifiers:(id)arg1;
- (void)willResumeIndexingAfterOffset:(long long)arg1;
- (void)willResumeReindexingAsNotFinished;
- (void)willStartIndexingWithClientState:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI
 */

@interface MessageListSelectionModel : NSObject <EFPubliclyDescribable> {
    <MessageListSelectionModelDataSource> * _dataSource;
    <MessageListSelectionModelDelegate> * _delegate;
    NSMutableSet * _itemIDsMissingMessageListItem;
    NSMutableSet * _itemIDsPendingConfiguration;
    NSMutableSet * _itemsToDeselectAfterMultipleSelection;
    EFFuture * _mailboxPredictionFuture;
    bool  _multipleSelectionActive;
    bool  _performingDataSourceUpdates;
    EFDebouncer * _predictionDebouncer;
    <EFCancelable> * _restoreSelectionCancelable;
    bool  _shouldRestoreSelection;
    TrackedMessageListItems * _trackedItems;
    long long  _trackedItemsArchiveByDefault;
    long long  _trackedItemsCount;
    long long  _trackedItemsSupportArchiving;
    long long  _trackedItemsWillMoveToTrash;
    NSArray * _trackedMailboxes;
    long long  _type;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic) <MessageListSelectionModelDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <MessageListSelectionModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSelectAll;
@property (nonatomic, readonly) bool isSelectionValid;
@property (nonatomic, retain) NSMutableSet *itemIDsMissingMessageListItem;
@property (nonatomic, retain) NSMutableSet *itemIDsPendingConfiguration;
@property (nonatomic, readonly) NSMutableSet *itemsToDeselectAfterMultipleSelection;
@property (nonatomic, retain) EFFuture *mailboxPredictionFuture;
@property (getter=isMultipleSelectionActive, nonatomic) bool multipleSelectionActive;
@property (getter=isPerformingDataSourceUpdates, nonatomic) bool performingDataSourceUpdates;
@property (nonatomic, readonly) EMMailbox *predictedMoveMailbox;
@property (nonatomic, retain) EFDebouncer *predictionDebouncer;
@property (nonatomic, readonly) long long preserveSelectionTimeout;
@property (nonatomic, retain) <EFCancelable> *restoreSelectionCancelable;
@property (nonatomic) bool shouldRestoreSelection;
@property (readonly) Class superclass;
@property (nonatomic, retain) TrackedMessageListItems *trackedItems;
@property (nonatomic) long long trackedItemsArchiveByDefault;
@property (nonatomic) long long trackedItemsCount;
@property (nonatomic) long long trackedItemsSupportArchiving;
@property (nonatomic) long long trackedItemsWillMoveToTrash;
@property (nonatomic, retain) NSArray *trackedMailboxes;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)__updatePredictionWithSelection:(id)arg1;
- (bool)_allChildrenSelected:(id)arg1;
- (void)_scheduleMailboxPredictionUpdate;
- (bool)_trackItemIDs:(id)arg1 updateCount:(bool)arg2;
- (void)_untrackAllItemIDs;
- (bool)_untrackItemIDs:(id)arg1 updateCount:(bool)arg2;
- (id)cascadedItemIDsForItemID:(id)arg1 isSelecting:(bool)arg2;
- (void)clearAll;
- (void)configureSelectionForItemID:(id)arg1;
- (long long)count;
- (id)currentMessageListItemSelection;
- (id)dataSource;
- (id)delegate;
- (unsigned long long)deleteSelectionState;
- (id)deselectItemWithItemID:(id)arg1;
- (void)didExpandThreadItemID:(id)arg1 addedItemIDs:(id)arg2;
- (void)disableSelectAll;
- (id)ef_publicDescription;
- (void)enableSelectAllWithMailboxes:(id)arg1;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (bool)isMultipleSelectionActive;
- (bool)isPerformingDataSourceUpdates;
- (bool)isSelectAll;
- (bool)isSelectedItemID:(id)arg1;
- (bool)isSelectionValid;
- (id)itemIDs;
- (id)itemIDsMissingMessageListItem;
- (id)itemIDsPendingConfiguration;
- (id)itemIDsToUnselectForItemID:(id)arg1;
- (id)itemsToDeselectAfterMultipleSelection;
- (id)mailboxPredictionFuture;
- (id)predictedMoveMailbox;
- (id)predictionDebouncer;
- (void)preserveSelection;
- (long long)preserveSelectionTimeout;
- (id)restoreSelectionCancelable;
- (id)selectItemWithItemID:(id)arg1;
- (id)selectionWithMessageListItems:(id)arg1 mailboxes:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemIDsMissingMessageListItem:(id)arg1;
- (void)setItemIDsPendingConfiguration:(id)arg1;
- (void)setMailboxPredictionFuture:(id)arg1;
- (void)setMultipleSelectionActive:(bool)arg1;
- (void)setPerformingDataSourceUpdates:(bool)arg1;
- (void)setPredictionDebouncer:(id)arg1;
- (void)setRestoreSelectionCancelable:(id)arg1;
- (void)setShouldRestoreSelection:(bool)arg1;
- (void)setTrackedItems:(id)arg1;
- (void)setTrackedItemsArchiveByDefault:(long long)arg1;
- (void)setTrackedItemsCount:(long long)arg1;
- (void)setTrackedItemsSupportArchiving:(long long)arg1;
- (void)setTrackedItemsWillMoveToTrash:(long long)arg1;
- (void)setTrackedMailboxes:(id)arg1;
- (void)setType:(long long)arg1;
- (bool)shouldRestoreSelection;
- (id)trackedItems;
- (long long)trackedItemsArchiveByDefault;
- (long long)trackedItemsCount;
- (long long)trackedItemsSupportArchiving;
- (long long)trackedItemsWillMoveToTrash;
- (id)trackedMailboxes;
- (long long)type;
- (void)willCollapseThreadItemID:(id)arg1;

@end
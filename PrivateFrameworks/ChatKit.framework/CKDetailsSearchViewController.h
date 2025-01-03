/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsSearchViewController : CKSearchViewController <CKContainerSearchControllerDelegate, CKDetailsSearchResultsFooterCellDelegate, CKDetailsSearchResultsTitleHeaderCellDelegate, QLPreviewControllerDelegate> {
    CKSearchController * _associatedDetailsSubsectionSearchController;
    UIBarButtonItem * _cancelButton;
    NSArray * _chatGUIDs;
    CKConversation * _conversation;
    UIBarButtonItem * _deleteButton;
    <CKDetailsSearchControllerDelegate> * _detailsDelegate;
    UIBarButtonItem * _flexibleItem;
    CKDetailsSearchResultsFooterCell * _footerSizingCell;
    UICollectionViewCell * _lastUserSelectedCell;
    NSDate * _lastUserSelectedCellTime;
    CKQLPreviewController * _previewController;
    CKQLPreviewControllerDataSource * _qlPreviewDataSource;
    UIBarButtonItem * _saveButton;
    bool  _searchComplete;
    UIBarButtonItem * _selectButton;
    CKSearchIndexingFooterCell * _sizingIndexingFooterCell;
    CKDetailsSearchResultsTitleHeaderCell * _titleSizingCell;
}

@property (nonatomic, retain) CKSearchController *associatedDetailsSubsectionSearchController;
@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (nonatomic, retain) NSArray *chatGUIDs;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) UIBarButtonItem *deleteButton;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CKDetailsSearchControllerDelegate> *detailsDelegate;
@property (nonatomic, retain) UIBarButtonItem *flexibleItem;
@property (nonatomic, retain) CKDetailsSearchResultsFooterCell *footerSizingCell;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UICollectionViewCell *lastUserSelectedCell;
@property (nonatomic, retain) NSDate *lastUserSelectedCellTime;
@property (nonatomic, retain) CKQLPreviewController *previewController;
@property (nonatomic, retain) CKQLPreviewControllerDataSource *qlPreviewDataSource;
@property (nonatomic, retain) UIBarButtonItem *saveButton;
@property (nonatomic) bool searchComplete;
@property (nonatomic, retain) UIBarButtonItem *selectButton;
@property (nonatomic, retain) CKSearchIndexingFooterCell *sizingIndexingFooterCell;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKDetailsSearchResultsTitleHeaderCell *titleSizingCell;

- (void).cxx_destruct;
- (void)_cancelEditing:(id)arg1;
- (void)_configureIndexingCell:(id)arg1;
- (void)_deleteAttachmentsAtIndexPaths:(id)arg1;
- (void)_deleteSelectedAttachments:(id)arg1;
- (id)_newSnapshotForCurrentControllerState;
- (void)_presentResult:(id)arg1 withFullScreenViewController:(id)arg2;
- (void)_registerCells;
- (void)_saveSelectedAttachments:(id)arg1;
- (id)_searchControllerForIndexPath:(id)arg1;
- (void)_searchResultHeaderButtonTapped:(id)arg1;
- (Class)_searchResultsHeaderClass;
- (void)_selectButtonTapped:(id)arg1;
- (id)_selectedIndexPaths;
- (void)_updateToolbar;
- (id)associatedDetailsSubsectionSearchController;
- (id)cancelButton;
- (id)chatGUIDs;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)conversation;
- (id)deleteButton;
- (void)deleteChatItemWithTransferGUID:(id)arg1 fromMessageItem:(id)arg2;
- (void)deleteMessageItem:(id)arg1;
- (void)deleteTransferGUID:(id)arg1;
- (id)detailsDelegate;
- (id)flexibleItem;
- (id)footerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2;
- (id)footerSizingCell;
- (id)globalLayoutConfiguration;
- (void)handleSpacePressed;
- (id)headerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2;
- (id)initWithSearchControllerClasses:(id)arg1;
- (id)lastUserSelectedCell;
- (id)lastUserSelectedCellTime;
- (id)layoutSectionForController:(id)arg1 withEnvironment:(id)arg2;
- (void)loadView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })parentMarginInsetsForSearchController:(id)arg1;
- (void)presentQuickLookView:(id)arg1;
- (id)previewController;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)qlPreviewDataSource;
- (void)rekickZKWSearchForAttachmentBatchUpdate;
- (void)reloadData;
- (id)saveButton;
- (id)searchBarForSearchViewController:(id)arg1;
- (bool)searchComplete;
- (id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
- (id)searchController:(id)arg1 conversationsForExistingChatsWithGUIDs:(id)arg2;
- (void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3;
- (void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2;
- (id)searchControllerChatGUIDsForDetailsSearch:(id)arg1;
- (void)searchControllerContentsDidChange:(id)arg1;
- (void)searchControllerDidBeginDragging:(id)arg1;
- (void)searchDetailsFooterCellShowAllTapped:(id)arg1;
- (void)searchDetailsShowAllButtonTapped:(id)arg1;
- (void)searchEnded;
- (void)searchResultsTitleCellShowAllButtonTapped:(id)arg1;
- (void)searchViewController:(id)arg1 didUpdatePopoverGroups:(id)arg2;
- (void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2;
- (void)searchViewControllerDidRequestDismissal:(id)arg1;
- (void)searchWithText:(id)arg1;
- (id)selectButton;
- (void)setAssociatedDetailsSubsectionSearchController:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setChatGUIDs:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setDetailsDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setFlexibleItem:(id)arg1;
- (void)setFooterSizingCell:(id)arg1;
- (void)setLastUserSelectedCell:(id)arg1;
- (void)setLastUserSelectedCellTime:(id)arg1;
- (void)setPreviewController:(id)arg1;
- (void)setQlPreviewDataSource:(id)arg1;
- (void)setSaveButton:(id)arg1;
- (void)setSearchComplete:(bool)arg1;
- (void)setSelectButton:(id)arg1;
- (void)setSizingIndexingFooterCell:(id)arg1;
- (void)setTitleSizingCell:(id)arg1;
- (void)setupDetailsSearchController:(id)arg1;
- (bool)shouldInsetResultsForSearchController:(id)arg1;
- (id)sizeAttributeForController:(id)arg1 sizingAttribute:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sizingIndexingFooterCell;
- (id)titleSizingCell;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsSpaceKeyCommandActive;

@end

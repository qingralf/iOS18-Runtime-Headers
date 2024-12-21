/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNVisualIdentityPickerViewController : UIViewController <AVTAvatarEditorViewControllerDelegate, CNAvatarEditingManagerDelegate, CNPhotoPickerActionsViewControllerDelegate, CNPhotoPickerHeaderViewDelegate, CNPhotoPickerProviderGroupDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate, CNVisualIdentityImagePickerControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    CNPhotoPickerActionsViewController * _actionsViewController;
    bool  _allowRotation;
    NSString * _assignActionTitleOverride;
    CNAvatarEditingManager * _avatarEditingManager;
    UICollectionView * _collectionView;
    CNContactStyle * _contactStyle;
    CNPhotoPickerDataSource * _dataSource;
    <CNVisualIdentityPickerViewControllerDelegate> * _delegate;
    CNPhotoPickerProviderItem * _duplicatingProviderItem;
    CNVisualIdentityEditablePrimaryAvatarViewController * _editablePrimaryAvatarController;
    CNPhotoPickerProviderItem * _editingProviderItem;
    CNPhotoPickerHeaderView * _headerView;
    CNVisualIdentityImagePickerController * _imagePickerController;
    CNPhotoPickerProviderItem * _lastSelectedProviderItem;
    NSArray * _pendingInjectedSuggestionItems;
    CNVisualIdentity * _pendingVisualIdentity;
    <CNVisualIdentityPickerPresenterDelegate> * _presenterDelegate;
    NSData * _proposedImageData;
    bool  _shouldUpdateEmojiSuggestions;
}

@property (nonatomic, retain) CNPhotoPickerActionsViewController *actionsViewController;
@property (nonatomic) bool allowRotation;
@property (nonatomic, retain) NSString *assignActionTitleOverride;
@property (nonatomic, retain) CNAvatarEditingManager *avatarEditingManager;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (nonatomic, readonly) CNPhotoPickerDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CNVisualIdentityPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNPhotoPickerProviderItem *duplicatingProviderItem;
@property (nonatomic, retain) CNVisualIdentityEditablePrimaryAvatarViewController *editablePrimaryAvatarController;
@property (nonatomic, retain) CNPhotoPickerProviderItem *editingProviderItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNPhotoPickerHeaderView *headerView;
@property (nonatomic, retain) CNVisualIdentityImagePickerController *imagePickerController;
@property (nonatomic, retain) CNPhotoPickerProviderItem *lastSelectedProviderItem;
@property (nonatomic, retain) NSArray *pendingInjectedSuggestionItems;
@property (nonatomic, retain) CNVisualIdentity *pendingVisualIdentity;
@property (nonatomic) <CNVisualIdentityPickerPresenterDelegate> *presenterDelegate;
@property (nonatomic, retain) NSData *proposedImageData;
@property (nonatomic) bool shouldUpdateEmojiSuggestions;
@property (readonly) Class superclass;

+ (bool)canShowAvatarEditor;
+ (bool)canShowPhotoPickerForView:(id)arg1 withTraitCollection:(id)arg2;
+ (struct CGSize { double x1; double x2; })defaultContentSize;
+ (struct CGSize { double x1; double x2; })defaultItemSize;
+ (id)descriptorForRequiredKeys;
+ (id)imagePickerForContact:(id)arg1;
+ (id)imagePickerForGroupIdentity:(id)arg1;
+ (id)imagePickerForVisualIdentity:(id)arg1;
+ (double)itemsPerRowForWidth:(double)arg1;
+ (id)log;
+ (id)makeDescriptorForRequiredKeys;
+ (id)navigationControllerForPicker:(id)arg1;

- (void).cxx_destruct;
- (id)actionsViewController;
- (bool)allowRotation;
- (id)assignActionTitleOverride;
- (id)avatarEditingManager;
- (void)avatarEditingManager:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (void)buildCollectionView;
- (void)buildHeaderView;
- (void)cancel:(id)arg1;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)collectionViewPaddingForCatalyst;
- (void)confirmCancelAction;
- (id)contactImageForCurrentActiveItem;
- (id)contactStyle;
- (id)dataSource;
- (long long)defaultModalPresentationStyle;
- (id)delegate;
- (void)deleteExistingItem:(id)arg1;
- (void)deleteItemFromRecentsImageStore:(id)arg1;
- (void)didCancelEditingProviderItemFromViewController:(id)arg1;
- (void)didSelectSuggestionsAddItemAtIndexPath:(id)arg1;
- (void)done:(id)arg1;
- (id)duplicatingProviderItem;
- (void)editableAvatarViewController:(id)arg1 didUpdateWithProviderItem:(id)arg2;
- (id)editablePrimaryAvatarController;
- (id)editingProviderItem;
- (void)handleAddEmojiItemSelectedWithIndexPath:(id)arg1;
- (bool)hasPendingChanges;
- (void)headerActionPressedAtIndexPath:(id)arg1;
- (id)headerView;
- (id)imagePickerController;
- (void)imagePickerController:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithPhotosDataSource:(id)arg1 style:(id)arg2 allowRotation:(bool)arg3;
- (void)initializeHeaderView;
- (id)insertNewItem:(id)arg1 toGroupType:(long long)arg2 updateActive:(bool)arg3;
- (id)insertNewItem:(id)arg1 toGroupType:(long long)arg2 updateActive:(bool)arg3 scrollToItem:(bool)arg4;
- (void)insertNewItemIntoSuggestions:(id)arg1;
- (bool)isEditingOrDuplicatingItem;
- (bool)isModalInPresentation;
- (bool)isPresentingModalViewController;
- (id)lastSelectedProviderItem;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)pendingInjectedSuggestionItems;
- (id)pendingVisualIdentity;
- (void)photoPickerActionsViewController:(id)arg1 didPerformAction:(long long)arg2 withProviderItem:(id)arg3 atIndexPath:(id)arg4;
- (void)photoPickerActionsViewControllerDidFinish:(id)arg1;
- (void)photoPickerHeaderView:(id)arg1 didUpdateIdentityNameTextField:(id)arg2 withText:(id)arg3;
- (void)photoPickerHeaderViewDidReceiveDroppedImageData:(id)arg1;
- (void)photoPickerHeaderViewDidTapClearAvatarImageButton:(id)arg1;
- (id)photoPickerNavigationControllerForRootController:(id)arg1;
- (void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2;
- (void)photoPickerProviderGroupDidUpdate:(id)arg1 requiresFullReload:(bool)arg2;
- (void)presentActionsViewControllerForProviderItem:(id)arg1 atIndexPath:(id)arg2;
- (void)presentCameraImagePicker;
- (void)presentDismissConfirmation;
- (void)presentEditItemViewController:(id)arg1 fromViewController:(id)arg2;
- (void)presentEmojiEditor;
- (void)presentLibraryImagePickerForIndexPath:(id)arg1;
- (void)presentMonogramEditorFromIndexPath:(id)arg1;
- (void)presentVisualIdentityItemEditorForItem:(id)arg1 fromViewController:(id)arg2;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (id)presenterDelegate;
- (void)processSelectionForSuggestionsProviderItem:(id)arg1 atIndexPath:(id)arg2;
- (id)proposedImageData;
- (void)reloadItemsForUpdatedSuggestionsGroup:(id)arg1 atSectionIndex:(long long)arg2;
- (void)saveItemToRecentsImageStore:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectItem:(id)arg1 presentFromViewControllerIfNeeded:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)setActionsViewController:(id)arg1;
- (void)setAllowRotation:(bool)arg1;
- (void)setAssignActionTitleOverride:(id)arg1;
- (void)setAvatarEditingManager:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuplicatingProviderItem:(id)arg1;
- (void)setEditablePrimaryAvatarController:(id)arg1;
- (void)setEditingProviderItem:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setImagePickerController:(id)arg1;
- (void)setLastSelectedProviderItem:(id)arg1;
- (void)setPendingInjectedSuggestionItems:(id)arg1;
- (void)setPendingVisualIdentity:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setProposedImageData:(id)arg1;
- (void)setShouldUpdateEmojiSuggestions:(bool)arg1;
- (void)setSuggestionsProviderItemAsActiveItem:(id)arg1;
- (bool)shouldUpdateEmojiSuggestions;
- (void)showAvatarCropAndScaleForItem:(id)arg1 fromViewController:(id)arg2;
- (void)showAvatarEditorForCreation;
- (void)showAvatarPosePickerFromItem:(id)arg1 atIndexPath:(id)arg2;
- (double)textFieldFontSize;
- (void)updateActiveIndexPath:(id)arg1;
- (void)updateActiveIndexPath:(id)arg1 reload:(bool)arg2;
- (void)updateActiveIndexPathForUpdatedSuggestionsGroup:(id)arg1 atSectionIndex:(long long)arg2;
- (void)updateDoneButtonEnabledState;
- (void)updateDoneButtonEnabledStateForEditingProviderItem:(id)arg1;
- (void)updateEmojiSuggestionsForUpdatedVisualIdentity:(id)arg1 locale:(id)arg2;
- (void)updateForSelectedProviderItem:(id)arg1;
- (void)updateHeaderViewAvatar;
- (void)updateInjectedItemsSectionForProviderItem:(id)arg1;
- (void)updateMonogramsForUpdatedVisualIdentity:(id)arg1;
- (void)updateVisualIdentityWithName:(id)arg1 locale:(id)arg2;
- (void)updateVisualIdentityWithProposedImageData:(id)arg1;
- (void)updateVisualIdentityWithProviderItem:(id)arg1;
- (void)viewController:(id)arg1 didSelectUpdatedProviderItem:(id)arg2;
- (void)viewController:(id)arg1 didSelectUpdatedProviderItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visualIdentity;
- (void)visualIdentityEditorController:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)visualIdentityEditorControllerDidCancel:(id)arg1;

@end
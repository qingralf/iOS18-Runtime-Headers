/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIWishlistViewController : SUUIViewController <SUUIItemListTableDelegate> {
    _UIBackdropView * _backdropView;
    <SUUIWishlistDelegate> * _delegate;
    UIBarButtonItem * _deleteButton;
    bool  _editing;
    _UIContentUnavailableView * _emptyWishlistView;
    SUUIItemListTableViewController * _itemListViewController;
    bool  _reloadOnNextAppear;
    SUUISyncWishlistOperation * _syncOperation;
    SUUIWishlist * _wishlist;
    long long  _wishlistState;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SUUIWishlistDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)wishlistBarButtonItemWithClientContext:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteAction:(id)arg1;
- (void)_deleteItemsAtIndexPaths:(id)arg1;
- (void)_destroyEmptyWishlistView;
- (void)_doneAction:(id)arg1;
- (id)_emptyWishlistView;
- (void)_finishSignInWithResponse:(id)arg1 error:(id)arg2;
- (void)_finishSyncWithResult:(bool)arg1 didChange:(bool)arg2 error:(id)arg3;
- (bool)_isEditingEnabled;
- (id)_itemListViewController;
- (void)_reloadChildView;
- (void)_reloadForAccountsChanged;
- (void)_reloadNavigationBarAnimated:(bool)arg1;
- (void)_reloadWishlist;
- (void)_setEditing:(bool)arg1 animated:(bool)arg2;
- (void)_signInAction:(id)arg1;
- (void)_syncWishlist;
- (void)_toggleEditAction:(id)arg1;
- (void)_updateDeleteButton;
- (id)_wishlist;
- (void)_wishlistDidChangeNotification:(id)arg1;
- (long long)_wishlistState;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;
- (void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)loadView;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

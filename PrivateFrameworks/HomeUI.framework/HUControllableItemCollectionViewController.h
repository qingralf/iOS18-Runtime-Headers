/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControllableItemCollectionViewController : HUItemCollectionViewController <HUPresentationDelegate, HUQuickControlPresentationCoordinatorDelegate, HUQuickControlPresentationHost, UICollectionViewDragDelegate, UIGestureRecognizerDelegate> {
    NSMutableDictionary * _actionSetExecutionFuturesKeyedByIdentifier;
    UIViewController<HUQuickControlPresentationHost> * _ancestorQuickControlHostAtPresentationTime;
    UICollectionViewCell * _cellBeingReordered;
    bool  _constrainCellReorderingToBounds;
    unsigned long long  _contentColorStyle;
    UIGestureRecognizer * _contextualTapGestureRecognizer;
    <HULockAuthorizationDelegate> * _lockAuthorizationDelegate;
    HUQuickControlPresentationCoordinator * _quickControlPresentationCoordinator;
    <HUQuickControlPresentationDelegate> * _quickControlPresentationDelegate;
    UILongPressGestureRecognizer * _reorderGestureRecognizer;
    HFItem<NSCopying> * _selectedContextualMenuItem;
    bool  _useCustomDragAndDrop;
    bool  _viewAppeared;
}

@property (nonatomic, retain) NSMutableDictionary *actionSetExecutionFuturesKeyedByIdentifier;
@property (nonatomic) UIViewController<HUQuickControlPresentationHost> *ancestorQuickControlHostAtPresentationTime;
@property (nonatomic, retain) UICollectionViewCell *cellBeingReordered;
@property (nonatomic, readonly) UICollectionViewLayout<HUControllableCollectionViewLayout> *collectionViewLayout;
@property (nonatomic) bool constrainCellReorderingToBounds;
@property (nonatomic, readonly) unsigned long long contentColorStyle;
@property (nonatomic, retain) UIGestureRecognizer *contextualTapGestureRecognizer;
@property (nonatomic, readonly) bool controlsWantSystemPresentationAnimations;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCustomControlPresentationAnimations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItemManager *itemManager;
@property (nonatomic) <HULockAuthorizationDelegate> *lockAuthorizationDelegate;
@property (nonatomic, retain) HUQuickControlPresentationCoordinator *quickControlPresentationCoordinator;
@property (nonatomic) <HUQuickControlPresentationDelegate> *quickControlPresentationDelegate;
@property (nonatomic, retain) UILongPressGestureRecognizer *reorderGestureRecognizer;
@property (nonatomic, retain) HFItem<NSCopying> *selectedContextualMenuItem;
@property (readonly) Class superclass;
@property (nonatomic) bool useCustomDragAndDrop;
@property (nonatomic) bool viewAppeared;

- (void).cxx_destruct;
- (id)_ancestorQuickControlPresentationHost;
- (id)_childItemsForItem:(id)arg1;
- (void)_commonInit;
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;
- (void)_handleContextualGesture:(id)arg1;
- (void)_handleReorderGesture:(id)arg1;
- (bool)_hasTapActionForItem:(id)arg1;
- (bool)_isMultiControllableServiceAccessory:(id)arg1;
- (id)_itemForServiceControlPresentationAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_itemSetDidChange;
- (id)_performTapActionForItem:(id)arg1;
- (id)_performTapActionForItem:(id)arg1 tappedArea:(id)arg2;
- (void)_registerSectionDecorationViews;
- (void)_reorderGestureDidBegin:(id)arg1;
- (void)_reorderGestureDidChange:(id)arg1;
- (void)_reorderGestureDidEnd:(id)arg1 finished:(bool)arg2;
- (void)_showQuickControlsForSelectedMenuItem;
- (void)_showSettingsForSelectedMenuItem;
- (void)_updateEditingStateForCell:(id)arg1 animate:(bool)arg2;
- (void)_updateReorderingGestureRecognizer;
- (id)_visibleCellForItem:(id)arg1;
- (void)accessoryControlViewControllerFor:(void *)arg1 tileItem:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 85: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, BOOL, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, out const /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, unsigned int, oneway int, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in long double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, out short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)actionSetExecutionFuturesKeyedByIdentifier;
- (bool)alwaysAllowReordering;
- (id)ancestorQuickControlHostAtPresentationTime;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canReorderItemAtIndexPath:(id)arg1;
- (id)cellBeingReordered;
- (void)childViewController:(id)arg1 didEndQuickControlsPresentation:(id)arg2;
- (void)childViewController:(id)arg1 willBeginQuickControlsPresentation:(id)arg2;
- (bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)configureWithAccessoryControlViewController:(id)arg1;
- (bool)constrainCellReorderingToBounds;
- (unsigned long long)contentColorStyle;
- (id)contextualTapGestureRecognizer;
- (id)controlItemSupprtingToggleInteractionForItem:(id)arg1;
- (bool)controlsWantSystemPresentationAnimations;
- (void)didReorderItemWithSortedItemsBySectionID:(id)arg1;
- (void)diffableDataItemManager:(id)arg1 didUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4;
- (void)disableRefresh;
- (id)dragItemForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)enableRefresh;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hasCustomControlPresentationAnimations;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)itemForAccessoryControlsWithItem:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (bool)itemSupportsToggleInteraction:(id)arg1;
- (id)lockAuthorizationDelegate;
- (bool)matterItemSupportsToggle:(id)arg1;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (id)presentAccessoryControlsForItem:(id)arg1;
- (id)presentAccessorySettingsForItem:(id)arg1;
- (id)presentAccessorySettingsForItem:(id)arg1 secondaryDestination:(unsigned long long)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3;
- (void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2;
- (id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2 tappedArea:(id)arg3;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2 view:(id)arg3;
- (bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 willEndPresentationWithContext:(id)arg2;
- (id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (id)quickControlPresentationContextForUUID:(id)arg1 type:(unsigned long long)arg2;
- (id)quickControlPresentationCoordinator;
- (id)quickControlPresentationDelegate;
- (void)refreshTileHelper;
- (id)reorderGestureRecognizer;
- (id)reorderableItemListForSection:(long long)arg1;
- (bool)requiresUnlockToPerformActionForItem:(id)arg1;
- (id)selectedContextualMenuItem;
- (void)setActionSetExecutionFuturesKeyedByIdentifier:(id)arg1;
- (void)setAncestorQuickControlHostAtPresentationTime:(id)arg1;
- (void)setCellBeingReordered:(id)arg1;
- (void)setConstrainCellReorderingToBounds:(bool)arg1;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (void)setContextualTapGestureRecognizer:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setExecutionFuture:(id)arg1 forActionSet:(id)arg2;
- (void)setLockAuthorizationDelegate:(id)arg1;
- (void)setQuickControlPresentationCoordinator:(id)arg1;
- (void)setQuickControlPresentationDelegate:(id)arg1;
- (void)setReorderGestureRecognizer:(id)arg1;
- (void)setReorderableItemList:(id)arg1 forSection:(long long)arg2;
- (void)setSelectedContextualMenuItem:(id)arg1;
- (void)setUseCustomDragAndDrop:(bool)arg1;
- (void)setViewAppeared:(bool)arg1;
- (bool)shouldShowAccessoryControlForItem:(id)arg1;
- (id)tappableAreaForPoint:(struct CGPoint { double x1; double x2; })arg1 inItem:(id)arg2 atIndexPath:(id)arg3;
- (id)toggleMatterItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollectionForPresentationCoordinator:(id)arg1;
- (id)unwrappedItemForAccessoryControls:(id)arg1;
- (bool)useCustomDragAndDrop;
- (bool)viewAppeared;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willDismissWithViewController:(id)arg1;

@end

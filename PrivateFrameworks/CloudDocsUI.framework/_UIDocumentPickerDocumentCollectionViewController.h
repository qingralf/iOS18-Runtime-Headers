/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateTableLayout, UIViewControllerPreviewingDelegate, _UIDocumentPickerContainedViewController> {
    NSArray * _actions;
    long long  _displayMode;
    bool  _editing;
    _UIDocumentPickerFlowLayout * _gridLayout;
    UIActivityIndicatorView * _initialActivityView;
    _UIDocumentPickerContainerModel * _model;
    NSArray * _modelObjects;
    bool  _monitoring;
    UIView * _pinnedHeaderView;
    <_UIDocumentPickerServiceViewController> * _serviceViewController;
    bool  _shouldHideSortBar;
    _UIDocumentPickerSortOrderView * _sortView;
    _UIDocumentPickerTableLayout * _tableLayout;
    bool  _updatesMayAnimate;
    <UIViewControllerPreviewing> * _viewControllerPreviewContext;
}

@property (nonatomic, retain) NSArray *actions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayMode;
@property (nonatomic, retain) _UIDocumentPickerFlowLayout *gridLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *indexPathsForSelectedItems;
@property (nonatomic, retain) UIActivityIndicatorView *initialActivityView;
@property (nonatomic, retain) _UIDocumentPickerContainerModel *model;
@property (nonatomic, copy) NSArray *modelObjects;
@property (nonatomic) bool monitoring;
@property (nonatomic, retain) UIView *pinnedHeaderView;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) <_UIDocumentPickerServiceViewController> *serviceViewController;
@property (nonatomic) bool shouldHideSortBar;
@property (nonatomic, retain) _UIDocumentPickerSortOrderView *sortView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsActions;
@property (nonatomic, retain) _UIDocumentPickerTableLayout *tableLayout;
@property (nonatomic) bool updatesMayAnimate;

- (void).cxx_destruct;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_showMoreOptionsForRow:(id)arg1 view:(id)arg2;
- (bool)_smallCells;
- (void)_unlockAnimations;
- (void)_updateIconSpacing;
- (void)_updateRowHeight;
- (id)actionViewForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)actions;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 tableLayout:(id)arg2 accessoryButtonTappedForRowWithIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 editingStyleForRowAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 indentationLevelForRowAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)dealloc;
- (void)didDismissSearchController:(id)arg1;
- (long long)displayMode;
- (void)ensureSortViewInvisible;
- (id)gridLayout;
- (id)indexPathsForSelectedItems;
- (id)initWithModel:(id)arg1;
- (id)initialActivityView;
- (id)itemForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)model;
- (void)modelChanged:(id)arg1;
- (id)modelObjects;
- (bool)monitoring;
- (void)performAction:(long long)arg1 forRow:(id)arg2 view:(id)arg3;
- (id)pinnedHeaderView;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)previewActionItemsForItem:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollSortViewToVisible;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)serviceViewController;
- (void)setActions:(id)arg1;
- (void)setContentSizeAdjustment:(double)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setGridLayout:(id)arg1;
- (void)setIndexPathsForSelectedItems:(id)arg1;
- (void)setInitialActivityView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelObjects:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setPinnedHeaderView:(id)arg1;
- (void)setPinnedHeaderView:(id)arg1 animated:(bool)arg2;
- (void)setServiceViewController:(id)arg1;
- (void)setShouldHideSortBar:(bool)arg1;
- (void)setSortView:(id)arg1;
- (void)setTableLayout:(id)arg1;
- (void)setUpdatesMayAnimate:(bool)arg1;
- (bool)shouldHideSortBar;
- (id)sortView;
- (bool)supportsActions;
- (id)tableLayout;
- (void)updateContentInset;
- (void)updatePinnedHeader;
- (bool)updatesMayAnimate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willDismissSearchController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end

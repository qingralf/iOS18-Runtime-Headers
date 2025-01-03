/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackCollectionViewController : UICollectionViewController <_TVCollectionViewing> {
    UIView * _backdropTintView;
    UIViewController * _backdropTintViewController;
    bool  _configureForListTemplate;
    <_TVStackCollectionViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToStackCollectionViewControllerScrollViewDidScroll; 
    }  _delegateFlags;
    NSIndexPath * _lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator * _needsMoreContentEvaluator;
    NSArray * _stackRows;
    NSArray * _stackSections;
    NSArray * _viewControllers;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) _TVStackCollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_TVStackCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IKViewElement *viewElement;

- (void).cxx_destruct;
- (void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg2;
- (void)_buildStackSections;
- (void)_configureBackgroundTintView;
- (struct CGSize { double x1; double x2; })_maxContentSize;
- (double)_maxViewWidth;
- (id)_needsMoreTargetElement;
- (void)_updateBackgroundTintView;
- (void)_updateBackgroundTintViewEffects;
- (void)_updateFirstItemRowIndexes;
- (bool)_updateWithCollectionListElement:(id)arg1 autoHighlightIndexPath:(id*)arg2;
- (id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)preloadCellsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)resetLastFocusedIndexPath;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewElement;

@end

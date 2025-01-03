/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosExtrasCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, VideosExtrasCarouselCollectionViewDelegate, VideosExtrasZoomingImageTransitionParticipant> {
    VideosExtrasCarouselCollectionView * _carouselCollectionView;
    UICollectionViewLayout<VideosExtrasCarouselCollectionViewLayout> * _carouselCollectionViewLayout;
    <VideosExtrasCarouselViewControllerDataSource> * _dataSource;
    <VideosExtrasCarouselViewControllerDelegate> * _delegate;
    bool  _revealingNavigationBarDuringTransition;
}

@property (nonatomic, retain) VideosExtrasCarouselCollectionView *carouselCollectionView;
@property (nonatomic, retain) UICollectionViewLayout<VideosExtrasCarouselCollectionViewLayout> *carouselCollectionViewLayout;
@property (nonatomic) <VideosExtrasCarouselViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <VideosExtrasCarouselViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexOfVisibleItem;
@property (getter=isRevealingNavigationBarDuringTransition, nonatomic) bool revealingNavigationBarDuringTransition;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureScrollViewSnaps;
- (id)_findSnappingItemFromContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_isPhone;
- (void)_loadCarouselCollectionViewInView:(id)arg1 withContraintsAccumulator:(id)arg2;
- (long long)_numberOfItems;
- (void)_snapTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg1 toItemIndexPath:(id)arg2 atItemOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)_updateOpacityOfTextInVisibleCells;
- (void)_updateWindowSizeForVisibleCells;
- (id)carouselCollectionView;
- (id)carouselCollectionViewCellForItemAtIndex:(unsigned long long)arg1;
- (id)carouselCollectionViewLayout;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (unsigned long long)indexOfVisibleItem;
- (bool)isRevealingNavigationBarDuringTransition;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setCarouselCollectionView:(id)arg1;
- (void)setCarouselCollectionViewLayout:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setRevealingNavigationBarDuringTransition:(bool)arg1;
- (void)subviewsDidChangeForCarouselCollectionView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

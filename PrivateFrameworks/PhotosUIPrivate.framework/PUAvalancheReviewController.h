/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUAvalancheReviewController : UIViewController <PHAssetCollectionDataSource, PUAvalancheReviewCollectionViewLayoutDelegate, PUOneUpAssetTransitionViewController, PUOneUpPhotosSharingTransitionViewController, PUPhotosSharingTransitionViewController, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PUTransitionViewAnimatorDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    PUAssetTransitionInfo * __assetTransitionInfo;
    NSMutableDictionary * __assetsToSizeDictionary;
    PLAvalanche * __avalancheBeingReviewed;
    PHCachingImageManager * __cachingImageManager;
    UIBarButtonItem * __cancelBarButtonItem;
    UICollectionView * __collectionView;
    PUAvalancheReviewCollectionViewLayout * __collectionViewLayout;
    bool  __completingReviewMode;
    <PLAssetContainer> * __currentAssetContainer;
    UIBarButtonItem * __doneBarButtonItem;
    NSIndexPath * __inFlightReferenceIndexPath;
    PLManagedAsset * __initialAsset;
    NSOrderedSet * __initialFavorites;
    PUTransitionViewAnimator * __photoZoomAnimator;
    PUPhotosZoomingSharingGridCell * __photoZoomCell;
    PUPhotoPinchGestureRecognizer * __photoZoomPinchGestureRecognizer;
    PUPhotosSharingTransitionContext * __photosSharingTransitionContext;
    NSMutableSet * __preheatedAssets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __previousPreheatRect;
    PUAvalancheReviewControllerSpec * __spec;
    UITapGestureRecognizer * __tapGestureRecognizer;
    UICollectionViewLayout * __transitionLayout;
    bool  __updatingContentOffsetFromScrubbing;
    PHFetchResult * _assetCollectionsFetchResult;
    <PLAssetContainerList> * _avalancheContainerList;
    <PUAvalancheReviewControllerDelegate> * _delegate;
    PHPhotoLibrary * _photoLibrary;
    NSMutableDictionary * _resultsForAssetCollection;
}

@property (nonatomic, retain) PUAssetTransitionInfo *_assetTransitionInfo;
@property (setter=_setAssetsToSizeDictionary:, nonatomic, retain) NSMutableDictionary *_assetsToSizeDictionary;
@property (nonatomic, readonly) PLAvalanche *_avalancheBeingReviewed;
@property (nonatomic, readonly) PHCachingImageManager *_cachingImageManager;
@property (nonatomic, readonly) UIBarButtonItem *_cancelBarButtonItem;
@property (nonatomic, readonly) UICollectionView *_collectionView;
@property (nonatomic, readonly) PUAvalancheReviewCollectionViewLayout *_collectionViewLayout;
@property (nonatomic) bool _completingReviewMode;
@property (nonatomic, readonly) <PLAssetContainer> *_currentAssetContainer;
@property (nonatomic, readonly) UIBarButtonItem *_doneBarButtonItem;
@property (nonatomic, readonly) NSIndexPath *_inFlightReferenceIndexPath;
@property (nonatomic, readonly) PLManagedAsset *_initialAsset;
@property (nonatomic, readonly) NSOrderedSet *_initialFavorites;
@property (setter=_setPhotoZoomAnimator:, nonatomic, retain) PUTransitionViewAnimator *_photoZoomAnimator;
@property (setter=_setPhotoZoomCell:, nonatomic, retain) PUPhotosZoomingSharingGridCell *_photoZoomCell;
@property (setter=_setPhotoZoomPinchGestureRecognizer:, nonatomic, retain) PUPhotoPinchGestureRecognizer *_photoZoomPinchGestureRecognizer;
@property (nonatomic, retain) PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
@property (setter=_setPreheatedAssets:, nonatomic, retain) NSMutableSet *_preheatedAssets;
@property (setter=_setPreviousPreheatRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _previousPreheatRect;
@property (nonatomic, readonly) PUReviewScrubber *_reviewScrubber;
@property (nonatomic, readonly) PUAvalancheReviewControllerSpec *_spec;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (setter=_setTransitionLayout:, nonatomic, retain) UICollectionViewLayout *_transitionLayout;
@property (nonatomic, readonly) bool _updatingContentOffsetFromScrubbing;
@property (nonatomic, readonly) PHFetchResult *assetCollectionsFetchResult;
@property (nonatomic, readonly) <PLAssetContainerList> *avalancheContainerList;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PUAvalancheReviewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetAtIndexPath:(id)arg1;
- (id)_assetTransitionInfo;
- (id)_assetsToSizeDictionary;
- (id)_avalancheBeingReviewed;
- (void)_beginZoomingForCellAtIndexPath:(id)arg1;
- (id)_cachingImageManager;
- (bool)_canShowWhileLocked;
- (id)_cancelBarButtonItem;
- (void)_cancelReviewMode;
- (void)_cancelReviewModeAction:(id)arg1;
- (id)_collectionView;
- (id)_collectionViewLayout;
- (bool)_completingReviewMode;
- (id)_currentAsset;
- (id)_currentAssetContainer;
- (void)_dismissReviewControllerWithAsset:(id)arg1;
- (id)_doneBarButtonItem;
- (void)_endZoomingForCell;
- (void)_finishReviewAndDeleteNonPicks:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameAtIndexPath:(id)arg1 inView:(id)arg2;
- (void)_getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2;
- (void)_getMainCollectionViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)_handleDoneButton:(id)arg1;
- (void)_handlePhotoPinch:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (id)_inFlightReferenceIndexPath;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint { double x1; double x2; })arg2 excludingIndexPath:(id)arg3;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (id)_initialAsset;
- (id)_initialFavorites;
- (void)_pageToIndexPath:(id)arg1 animated:(bool)arg2;
- (id)_phAssetAtIndexPath:(id)arg1;
- (id)_photoZoomAnimator;
- (id)_photoZoomCell;
- (id)_photoZoomPinchGestureRecognizer;
- (id)_photosSharingTransitionContext;
- (id)_preheatedAssets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_previousPreheatRect;
- (void)_promoteFavoriteAssetsAndDeleteNonPicks:(bool)arg1 withReviewCompletionHandler:(id /* block */)arg2;
- (void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg1;
- (void)_reloadAvalancheDataWithAsset:(id)arg1;
- (void)_resetPreheating;
- (id)_reviewScrubber;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)_setAssetsToSizeDictionary:(id)arg1;
- (void)_setPhotoZoomAnimator:(id)arg1;
- (void)_setPhotoZoomCell:(id)arg1;
- (void)_setPhotoZoomPinchGestureRecognizer:(id)arg1;
- (void)_setPreheatedAssets:(id)arg1;
- (void)_setPreviousPreheatRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setTransitionLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeForItemAtIndexPath:(id)arg1;
- (id)_spec;
- (void)_startPreheatingAllAssets;
- (void)_stopPreheatingAllAssets;
- (id)_tapGestureRecognizer;
- (void)_toggleCurrentPickStatusAtIndexPath:(id)arg1;
- (id)_transitionLayout;
- (void)_updateBarItemsAnimated:(bool)arg1;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updateCollectionViewLayoutInsets;
- (void)_updateEnabledNavigationBarItems;
- (void)_updateMainViewAnimated:(bool)arg1;
- (void)_updateNavigationItemTitle;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (void)_updatePreheatedAssets;
- (void)_updateReviewScrubberFromContentOffset;
- (bool)_updatingContentOffsetFromScrubbing;
- (id)assetCollectionsFetchResult;
- (id)assetsInAssetCollection:(id)arg1;
- (id)avalancheContainerList;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)embeddedActivityView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })embeddedActivityViewFrameWhenShowing:(bool)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSpec:(id)arg1 startingAtAsset:(id)arg2 inAvalanche:(id)arg3 currentAssetContainer:(id)arg4 photoLibrary:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atIndexPath:(id)arg4;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })oneUpAssetTransitionAssetFinalFrame:(id)arg1;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (unsigned long long)reviewScrubber:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (bool)reviewScrubber:(id)arg1 shouldProvideFeedbackForCellAtIndexPath:(id)arg2;
- (void)reviewScrubber:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3;
- (void)reviewScrubberDidScrub:(id)arg1;
- (void)reviewScrubberDidSelectItemAtIndexPath:(id)arg1;
- (unsigned short)reviewScrubberImageFormat;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setOneUpPhotosSharingTransitionContext:(id)arg1;
- (void)setOneUpPhotosSharingTransitionInfo:(id)arg1;
- (void)setPhotosSharingTransitionContext:(id)arg1;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(bool)arg2;
- (void)set_assetTransitionInfo:(id)arg1;
- (void)set_completingReviewMode:(bool)arg1;
- (void)set_photosSharingTransitionContext:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)transitionCollectionView;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

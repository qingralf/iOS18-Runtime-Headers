/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamExtractedDocumentViewController : UIViewController <CAAnimationDelegate, DCUnsavedDataDelegate, ICDocCamExtractedThumbnailContainerViewDelegate, ICDocCamFilterViewDelegate, ICDocCamThumbnailViewLayoutDelegate, ICDocCamZoomablePageContentDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIPageViewControllerDelegatePrivate, UIScrollViewDelegate, UITextFieldDelegate> {
    UIBarButtonItem * _actionButtonItem;
    UIBarButtonItem * _addButtonItem;
    bool  _adjustPageViewControllerForMarkup;
    UILongPressGestureRecognizer * _axHUDLongPressGestureRecognizer;
    bool  _barsShouldBeHidden;
    UIToolbar * _bottomToolbar;
    bool  _cameraRestricted;
    UIButton * _collectionTitleButton;
    UIColor * _darkenedCollectionViewTitleTintColor;
    UIColor * _defaultCollectionViewTitleTintColor;
    <ICDocCamExtractedDocumentControllerDelegate> * _delegate;
    ICDocCamDocumentInfoCollection * _documentInfoCollection;
    NSMutableArray * _documentsToUpdateWhenScrollingStops;
    UIBarButtonItem * _doneButtonItem;
    UIAlertController * _editTitleAlert;
    UIBarButtonItem * _filterButtonItem;
    UIBarButtonItem * _filterButtonItemForNavBar;
    ICDocCamFilterViewController * _filterViewController;
    UIAccessibilityHUDItem * _hudItemForAccessibilityLargerText;
    ICDocCamImageCache * _imageCache;
    UILongPressGestureRecognizer * _imageLongPressGestureRecognizer;
    bool  _isAnimatingPageViewController;
    bool  _isScrollingBetweenPages;
    long long  _lastAXProposedIndexForReordering;
    bool  _layoutHasHappened;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _menuControllerTargetRect;
    int  _mode;
    NSIndexPath * _movingIndexPath;
    double  _movingXPosition;
    double  _movingYPosition;
    UILabel * _pageIndexLabel;
    NSLayoutConstraint * _pageViewBottomConstraint;
    UIPageViewController * _pageViewController;
    UIView * _pageViewControllerContainerView;
    UIScrollView * _pageViewControllerScrollView;
    NSLayoutConstraint * _pageViewLeadingConstraint;
    NSLayoutConstraint * _pageViewTopConstraint;
    NSLayoutConstraint * _pageViewTrailingConstraint;
    long long  _presentationPageIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousViewSize;
    UIBarButtonItem * _recropButtonItem;
    UIBarButtonItem * _recropButtonItemForNavBar;
    UIBarButtonItem * _retakeButtonItem;
    UIBarButtonItem * _rotateButtonItem;
    UIBarButtonItem * _rotateButtonItemForNavBar;
    bool  _rotationUnderWay;
    CIContext * _sharedCoreImageContext;
    bool  _statusBarWasHiddenWhenDoneTapped;
    bool  _statusBarWasHiddenWhenRetakeTapped;
    UICollectionView * _thumbnailCollectionView;
    UICollectionViewController * _thumbnailCollectionViewController;
    ICDocCamExtractedThumbnailContainerView * _thumbnailContainerView;
    UIBarButtonItem * _thumbnailContainerViewItem;
    UILongPressGestureRecognizer * _thumbnailLongPressGestureRecognizer;
    UIStackView * _titleView;
    UIView * _titleViewWrapper;
    NSLayoutConstraint * _titleViewWrapperHeightConstraint;
    NSLayoutConstraint * _titleViewWrapperWidthConstraint;
    UIView * _topToolbar;
    UIBarButtonItem * _trashButtonItem;
    UIBarButtonItem * _trashButtonItemForNavBar;
}

@property (nonatomic, retain) UIBarButtonItem *actionButtonItem;
@property (nonatomic, retain) UIBarButtonItem *addButtonItem;
@property (nonatomic) bool adjustPageViewControllerForMarkup;
@property (nonatomic, retain) UILongPressGestureRecognizer *axHUDLongPressGestureRecognizer;
@property (nonatomic) bool barsShouldBeHidden;
@property (nonatomic) UIToolbar *bottomToolbar;
@property (nonatomic) bool cameraRestricted;
@property (nonatomic, retain) UIButton *collectionTitleButton;
@property (nonatomic, readonly) UIImageView *currentImageView;
@property (nonatomic, retain) UIColor *darkenedCollectionViewTitleTintColor;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) UIColor *defaultCollectionViewTitleTintColor;
@property (nonatomic) <ICDocCamExtractedDocumentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICDocCamDocumentInfoCollection *documentInfoCollection;
@property (nonatomic, retain) NSMutableArray *documentsToUpdateWhenScrollingStops;
@property (nonatomic, retain) UIBarButtonItem *doneButtonItem;
@property (nonatomic) UIAlertController *editTitleAlert;
@property (nonatomic, retain) UIBarButtonItem *filterButtonItem;
@property (nonatomic, retain) UIBarButtonItem *filterButtonItemForNavBar;
@property (nonatomic, retain) ICDocCamFilterViewController *filterViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIAccessibilityHUDItem *hudItemForAccessibilityLargerText;
@property (nonatomic, retain) ICDocCamImageCache *imageCache;
@property (nonatomic, retain) UILongPressGestureRecognizer *imageLongPressGestureRecognizer;
@property (nonatomic) bool isAnimatingPageViewController;
@property (nonatomic, readonly) bool isPageViewControllerScrolled;
@property (nonatomic) bool isScrollingBetweenPages;
@property (nonatomic) long long lastAXProposedIndexForReordering;
@property (nonatomic) bool layoutHasHappened;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } menuControllerTargetRect;
@property (nonatomic) int mode;
@property (nonatomic, retain) NSIndexPath *movingIndexPath;
@property (nonatomic) double movingXPosition;
@property (nonatomic) double movingYPosition;
@property (nonatomic, retain) UILabel *pageIndexLabel;
@property (nonatomic, retain) NSLayoutConstraint *pageViewBottomConstraint;
@property (nonatomic, retain) UIPageViewController *pageViewController;
@property (nonatomic) UIView *pageViewControllerContainerView;
@property (nonatomic, retain) UIScrollView *pageViewControllerScrollView;
@property (nonatomic, retain) NSLayoutConstraint *pageViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *pageViewTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *pageViewTrailingConstraint;
@property (nonatomic) long long presentationPageIndex;
@property (nonatomic) struct CGSize { double x1; double x2; } previousViewSize;
@property (nonatomic, retain) UIBarButtonItem *recropButtonItem;
@property (nonatomic, retain) UIBarButtonItem *recropButtonItemForNavBar;
@property (nonatomic, retain) UIBarButtonItem *retakeButtonItem;
@property (nonatomic, retain) UIBarButtonItem *rotateButtonItem;
@property (nonatomic, retain) UIBarButtonItem *rotateButtonItemForNavBar;
@property (nonatomic) bool rotationUnderWay;
@property (nonatomic, readonly) <DCScanDataDelegate> *scanCollectionDataDelegate;
@property (nonatomic, readonly) <DCScanDataDelegate> *selectedScanDataDelegate;
@property (nonatomic, retain) CIContext *sharedCoreImageContext;
@property (nonatomic, readonly) bool shouldDisableActions;
@property (nonatomic, readonly) bool shouldDisableSharrow;
@property (nonatomic) bool statusBarWasHiddenWhenDoneTapped;
@property (nonatomic) bool statusBarWasHiddenWhenRetakeTapped;
@property (readonly) Class superclass;
@property (nonatomic, retain) UICollectionView *thumbnailCollectionView;
@property (nonatomic, retain) UICollectionViewController *thumbnailCollectionViewController;
@property (nonatomic, readonly) ICDocCamReorderingThumbnailCollectionViewLayout *thumbnailCollectionViewLayout;
@property (nonatomic, retain) ICDocCamExtractedThumbnailContainerView *thumbnailContainerView;
@property (nonatomic, retain) UIBarButtonItem *thumbnailContainerViewItem;
@property (nonatomic, retain) UILongPressGestureRecognizer *thumbnailLongPressGestureRecognizer;
@property (nonatomic, retain) UIStackView *titleView;
@property (nonatomic, retain) UIView *titleViewWrapper;
@property (nonatomic, retain) NSLayoutConstraint *titleViewWrapperHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleViewWrapperWidthConstraint;
@property (nonatomic) UIView *topToolbar;
@property (nonatomic, retain) UIBarButtonItem *trashButtonItem;
@property (nonatomic, retain) UIBarButtonItem *trashButtonItemForNavBar;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForOrientation:(long long)arg1 window:(id)arg2;

- (void).cxx_destruct;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (bool)_canShowWhileLocked;
- (void)_pageViewControllerDidFinishTransitions:(id)arg1;
- (bool)accessibilityPerformEscape;
- (bool)accessibilityScrollLeftPage;
- (bool)accessibilityScrollRightPage;
- (id)actionButtonItem;
- (id)addButtonItem;
- (void)addImageAction:(id)arg1;
- (bool)adjustPageViewControllerForMarkup;
- (void)alertAndDiscardMarkup;
- (id)axHUDLongPressGestureRecognizer;
- (bool)barsShouldBeHidden;
- (id)bottomToolbar;
- (bool)cameraDisabled;
- (bool)cameraRestricted;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)changePage:(long long)arg1;
- (void)collectionNameTapped:(id)arg1;
- (id)collectionTitleButton;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 imageSizeAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)copy:(id)arg1;
- (id)croppedAndFilteredmageForDocumentAtIndex:(long long)arg1;
- (id)croppedButNotFilteredImageForDocInfo:(id)arg1;
- (id)croppedButNotFilteredImageForDocumentAtIndex:(long long)arg1;
- (id)currentBackgroundColor;
- (id)currentDocument;
- (bool)currentImageHasMarkup;
- (id)currentImageView;
- (id)currentPageContentViewController;
- (id)darkenedCollectionViewTitleTintColor;
- (void)dealloc;
- (id)defaultCollectionViewTitleTintColor;
- (void)defaultsChanged;
- (id)delegate;
- (void)delete:(id)arg1;
- (void)deleteButtonAction:(id)arg1;
- (void)deleteCurrentPage;
- (void)deselectFilterButtons;
- (void)didDismissMarkupViewController;
- (void)didUpdateDocumentImage:(id)arg1;
- (void)didUpdateDocumentInfoArrayNewCurrentDocument:(id)arg1;
- (void)didUpdateDocumentTitle:(id)arg1;
- (unsigned long long)documentCount;
- (id)documentInfoCollection;
- (id)documentsToUpdateWhenScrollingStops;
- (void)doneAction:(id)arg1;
- (id)doneButtonItem;
- (id)editTitleAlert;
- (void)filterButtonAction:(id)arg1;
- (id)filterButtonItem;
- (id)filterButtonItemForNavBar;
- (id)filterViewController;
- (bool)filterViewControllerApplyToAll:(short)arg1;
- (bool)filterViewControllerCanApplyToAll:(short)arg1;
- (bool)filterViewControllerDidSelectFilter:(short)arg1;
- (struct CGSize { double x1; double x2; })frameSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleAccessibilityLongPressOnCollectionTitle:(id)arg1;
- (void)hideBarsForZoomablePageContentViewController:(id)arg1;
- (void)hideFilterViewIfNecessary;
- (id)hudItemForAccessibilityLargerText;
- (id)imageCache;
- (id)imageForDocInfo:(id)arg1 newFilter:(short)arg2;
- (bool)imageIsPortrait:(id)arg1;
- (id)imageLongPressGestureRecognizer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectWithZoomAndPanForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSizeForDocumentAtIndex:(long long)arg1;
- (id)indexPathForCurrentDocument;
- (id)initWithDelegate:(id)arg1 documentInfoCollection:(id)arg2 imageCache:(id)arg3 currentIndex:(long long)arg4 mode:(int)arg5;
- (bool)isAnimatingPageViewController;
- (bool)isPageViewControllerScrolled;
- (bool)isScrollingBetweenPages;
- (bool)isShowingBarsForZoomablePageContentViewController:(id)arg1;
- (long long)lastAXProposedIndexForReordering;
- (bool)layoutHasHappened;
- (id)makeUIImageFromCIImage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuControllerTargetRect;
- (int)mode;
- (id)movingIndexPath;
- (double)movingXPosition;
- (double)movingYPosition;
- (double)normalizedPageViewControllerScrollPosition;
- (long long)orientationRotated90DegreesFromOrientation:(long long)arg1;
- (id)orientationString:(long long)arg1;
- (id)pageIndexLabel;
- (id)pageViewBottomConstraint;
- (id)pageViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewControllerContainerView;
- (id)pageViewControllerScrollView;
- (id)pageViewLeadingConstraint;
- (id)pageViewTopConstraint;
- (id)pageViewTrailingConstraint;
- (void)pencilDownInZoomablePageContentViewController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (void)prepareForDismissal;
- (long long)presentationPageIndex;
- (struct CGSize { double x1; double x2; })previousViewSize;
- (void)recreateThumbnailContainerWithWidth:(double)arg1 leadingTrailingMargin:(double)arg2;
- (id)recropButtonItem;
- (id)recropButtonItemForNavBar;
- (void)recropButtonPressed:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })recropTargetForIndexPath:(id)arg1;
- (void)resetImageCentering;
- (void)respondToImageLongPressGesture:(id)arg1;
- (void)respondToThumbnailLongPressGesture:(id)arg1;
- (void)retakeAction:(id)arg1;
- (id)retakeButtonItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })retakeTargetForIndexPath:(id)arg1;
- (id)rootView;
- (void)rotateAction:(id)arg1;
- (id)rotateButtonItem;
- (id)rotateButtonItemForNavBar;
- (void)rotateCurrentImage;
- (bool)rotationUnderWay;
- (id)scanCollectionDataDelegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectFilterButtons;
- (id)selectedScanDataDelegate;
- (void)setActionButtonItem:(id)arg1;
- (void)setAddButtonItem:(id)arg1;
- (void)setAdjustPageViewControllerForMarkup:(bool)arg1;
- (void)setAxHUDLongPressGestureRecognizer:(id)arg1;
- (void)setBarsShouldBeHidden:(bool)arg1;
- (void)setBottomToolbar:(id)arg1;
- (void)setCameraRestricted:(bool)arg1;
- (void)setCollectionTitleButton:(id)arg1;
- (void)setCurrentThumbnailItem:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setDarkenedCollectionViewTitleTintColor:(id)arg1;
- (void)setDefaultCollectionViewTitleTintColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentInfoCollection:(id)arg1;
- (void)setDocumentsToUpdateWhenScrollingStops:(id)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setEditTitleAlert:(id)arg1;
- (void)setFilterButtonItem:(id)arg1;
- (void)setFilterButtonItemForNavBar:(id)arg1;
- (void)setFilterViewController:(id)arg1;
- (void)setHudItemForAccessibilityLargerText:(id)arg1;
- (void)setImage:(id)arg1 forCell:(id)arg2 useResizedImage:(bool)arg3;
- (void)setImageCache:(id)arg1;
- (void)setImageLongPressGestureRecognizer:(id)arg1;
- (void)setIsAnimatingPageViewController:(bool)arg1;
- (void)setIsScrollingBetweenPages:(bool)arg1;
- (void)setLastAXProposedIndexForReordering:(long long)arg1;
- (void)setLayoutHasHappened:(bool)arg1;
- (void)setMenuControllerTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMode:(int)arg1;
- (void)setMovingIndexPath:(id)arg1;
- (void)setMovingXPosition:(double)arg1;
- (void)setMovingYPosition:(double)arg1;
- (void)setPageIndexLabel:(id)arg1;
- (void)setPageViewBottomConstraint:(id)arg1;
- (void)setPageViewController:(id)arg1;
- (void)setPageViewControllerContainerView:(id)arg1;
- (void)setPageViewControllerScrollView:(id)arg1;
- (void)setPageViewLeadingConstraint:(id)arg1;
- (void)setPageViewTopConstraint:(id)arg1;
- (void)setPageViewTrailingConstraint:(id)arg1;
- (void)setPresentationPageIndex:(long long)arg1;
- (void)setPreviousViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRecropButtonItem:(id)arg1;
- (void)setRecropButtonItemForNavBar:(id)arg1;
- (void)setRetakeButtonItem:(id)arg1;
- (void)setRotateButtonItem:(id)arg1;
- (void)setRotateButtonItemForNavBar:(id)arg1;
- (void)setRotationUnderWay:(bool)arg1;
- (void)setSharedCoreImageContext:(id)arg1;
- (void)setStatusBarWasHiddenWhenDoneTapped:(bool)arg1;
- (void)setStatusBarWasHiddenWhenRetakeTapped:(bool)arg1;
- (void)setThumbnailCollectionView:(id)arg1;
- (void)setThumbnailCollectionViewController:(id)arg1;
- (void)setThumbnailContainerView:(id)arg1;
- (void)setThumbnailContainerViewItem:(id)arg1;
- (void)setThumbnailLongPressGestureRecognizer:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTitleViewWrapper:(id)arg1;
- (void)setTitleViewWrapperHeightConstraint:(id)arg1;
- (void)setTitleViewWrapperWidthConstraint:(id)arg1;
- (void)setTopToolbar:(id)arg1;
- (void)setTrashButtonItem:(id)arg1;
- (void)setTrashButtonItemForNavBar:(id)arg1;
- (void)setupAccessibilityInfo;
- (void)setupThumbnailViewController;
- (void)share:(id)arg1;
- (void)shareAction:(id)arg1;
- (id)sharedCoreImageContext;
- (bool)shouldDisableActions;
- (bool)shouldDisableSharrow;
- (void)showBarsForZoomablePageContentViewController:(id)arg1;
- (void)showFilterViewIfNecessary;
- (void)showPrimaryControllerForNotes:(id)arg1 animated:(bool)arg2;
- (void)showViewControllerAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)speakAccessibilityAnnouncementForMovingItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)speakAccessibilityAnnouncementForReorderIfNecessaryForProposedIndexPath:(id)arg1;
- (void)startMarkupViewController;
- (bool)statusBarWasHiddenWhenDoneTapped;
- (bool)statusBarWasHiddenWhenRetakeTapped;
- (void)switchBarVisibilityForZoomablePageContentViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetViewRect;
- (id)thumbnailCollectionView;
- (id)thumbnailCollectionViewController;
- (id)thumbnailCollectionViewLayout;
- (id)thumbnailContainerView;
- (void)thumbnailContainerView:(id)arg1 moveItemFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (unsigned long long)thumbnailContainerViewCurrentIndex:(id)arg1;
- (void)thumbnailContainerViewDecrementCurrentIndex:(id)arg1;
- (void)thumbnailContainerViewIncrementCurrentIndex:(id)arg1;
- (bool)thumbnailContainerViewIsVisible;
- (bool)thumbnailContainerViewIsVisible:(id)arg1;
- (id)thumbnailContainerViewItem;
- (unsigned long long)thumbnailContainerViewNumberOfItems:(id)arg1;
- (bool)thumbnailContainerViewSupportsReordering:(id)arg1;
- (id)thumbnailLongPressGestureRecognizer;
- (double)thumbnailToolbarHeight;
- (id)titleView;
- (id)titleViewWrapper;
- (id)titleViewWrapperHeightConstraint;
- (id)titleViewWrapperWidthConstraint;
- (id)topToolbar;
- (void)traitCollectionDidChange:(id)arg1;
- (id)trashButtonItem;
- (id)trashButtonItemForNavBar;
- (id)truncatedString:(id)arg1 clipLength:(unsigned long long)arg2;
- (id)undoManager;
- (void)updateDocumentImage:(id)arg1;
- (void)updateFilterButtonItemAccessibilityInfo;
- (void)updateFilterViewLayoutIfNeeded;
- (void)updateForAccessibilityDarkerSystemColors;
- (void)updateImage:(id)arg1 document:(id)arg2 withFilterType:(short)arg3;
- (void)updateImageViewAccessibilityForPageContentViewController:(id)arg1;
- (void)updateLayout;
- (void)updatePageIndicatorForPageIndex:(long long)arg1;
- (void)updatePageViewControllerConstraints:(bool)arg1 animationBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)updateTitleView;
- (id)viewControllerAtIndex:(unsigned long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomTargetForIndexPath:(id)arg1;

@end

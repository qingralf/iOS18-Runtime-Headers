/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBRootFolderViewPageManagementLayoutManager : NSObject <SBFolderObserver, SBHPageManagementCellViewControllerDelegate, SBIconDragManagerDelegate, SBIconListModelObserver, SBIconListViewDominoPivotAnimatorDelegate, SBIconViewActionDelegate, SBIconViewDelegate, SBIconViewProviding, SBRootFolderViewLayoutManager, UIScrollViewDelegate> {
    SBHFocusMode * _activeFocusMode;
    unsigned long long  _activeTransitionCount;
    UIViewController * _alertPresentationViewController;
    bool  _allowsEditing;
    bool  _allowsPageHiding;
    UITapGestureRecognizer * _backgroundTapGestureRecognizer;
    NSURL * _completionURL;
    <SBDockOffscreenFractionModifying> * _dockOffscreenAssertion;
    SBHPageManagementIcon * _draggingIcon;
    SBTitledHomeScreenButton * _focusModeOptionsButton;
    UIImageView * _focusModeSymbolView;
    SBIconDragManager * _iconDragManager;
    NSMapTable * _iconViewControllersByIcon;
    NSMapTable * _iconViewControllersByListModel;
    NSMapTable * _initialScalingAttributesByIconView;
    <UIViewImplicitlyAnimating> * _latestActiveTransitionAnimator;
    long long  _layoutAction;
    long long  _layoutConfiguration;
    <BSInvalidatable> * _pageDotsVisibilityAssertion;
    NSMapTable * _pageIconsByListModel;
    SBIconListModel * _pageManagementListModel;
    UIScrollView * _pageManagementScrollView;
    SBRootFolderView * _rootFolderView;
    SBIconListView * _rootListView;
    <BSInvalidatable> * _scrollAccessoryBorrowedAssertion;
    unsigned long long  _transitionCount;
    id  _userInfo;
}

@property (nonatomic, retain) SBHFocusMode *activeFocusMode;
@property (nonatomic) unsigned long long activeTransitionCount;
@property (nonatomic) UIViewController *alertPresentationViewController;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsPageHiding;
@property (nonatomic, retain) UITapGestureRecognizer *backgroundTapGestureRecognizer;
@property (nonatomic, copy) NSURL *completionURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SBDockOffscreenFractionModifying> *dockOffscreenAssertion;
@property (nonatomic, retain) SBHPageManagementIcon *draggingIcon;
@property (getter=isEditing, nonatomic) bool editing; /* unknown property attribute: ? */
@property (nonatomic, retain) SBTitledHomeScreenButton *focusModeOptionsButton;
@property (nonatomic, retain) UIImageView *focusModeSymbolView;
@property (readonly) unsigned long long hash;
@property (getter=isIconContentPossiblyVisibleOverApplication, nonatomic, readonly) bool iconContentPossiblyVisibleOverApplication; /* unknown property attribute: ? */
@property (nonatomic, readonly) SBIconDragManager *iconDragManager;
@property (nonatomic, readonly) SBHIconModel *iconModel; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isTrackingActiveOrDroppingIconDrags;
@property (nonatomic, retain) <UIViewImplicitlyAnimating> *latestActiveTransitionAnimator;
@property (nonatomic) long long layoutAction;
@property (nonatomic) long long layoutConfiguration;
@property (getter=isMainDisplayLibraryViewVisible, nonatomic) bool mainDisplayLibraryViewVisible; /* unknown property attribute: ? */
@property (getter=isOverlayTodayViewVisible, nonatomic) bool overlayTodayViewVisible; /* unknown property attribute: ? */
@property (nonatomic, retain) <BSInvalidatable> *pageDotsVisibilityAssertion;
@property (nonatomic, retain) SBIconListModel *pageManagementListModel;
@property (nonatomic, retain) UIScrollView *pageManagementScrollView;
@property (getter=isRootFolderContentVisible, nonatomic, readonly) bool rootFolderContentVisible; /* unknown property attribute: ? */
@property (nonatomic) SBRootFolderView *rootFolderView;
@property (nonatomic, retain) SBIconListView *rootListView;
@property (nonatomic, retain) <BSInvalidatable> *scrollAccessoryBorrowedAssertion;
@property (getter=isScrolling, nonatomic) bool scrolling; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (getter=isTrackingScroll, nonatomic) bool trackingScroll; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long transitionCount;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (bool)_allowsCloseBoxForIconView:(id)arg1;
- (bool)_canRasterizeIconView:(id)arg1;
- (void)_removePageIcon:(id)arg1;
- (void)_updateCloseBoxVisibilityWithAnimation:(long long)arg1;
- (id)activeFocusMode;
- (unsigned long long)activeTransitionCount;
- (id)alertPresentationViewController;
- (bool)allowsEditing;
- (bool)allowsPageHiding;
- (id)backgroundTapGestureRecognizer;
- (void)backgroundTapped:(id)arg1;
- (id)backgroundViewForSnapshotForPageManagementCellViewController:(id)arg1;
- (void)cleanUpViewsInFolderView:(id)arg1;
- (long long)closeBoxTypeForIconView:(id)arg1;
- (id)completionURL;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)customImageViewControllerForIconView:(id)arg1;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)dockOffscreenAssertion;
- (void)dominoPivotAnimator:(id)arg1 didLayOutIconView:(id)arg2;
- (id)draggingDelegateForIconView:(id)arg1;
- (id)draggingIcon;
- (id)focusModeOptionsButton;
- (void)focusModeOptionsButtonTapped:(id)arg1;
- (id)focusModeSymbolView;
- (void)folder:(id)arg1 listHiddenDidChange:(id)arg2;
- (unsigned long long)folderListIndexToAnimateOutForList:(id)arg1 inFolder:(id)arg2 avoidingList:(id)arg3;
- (void)iconCloseBoxTapped:(id)arg1;
- (id)iconDragManager;
- (bool)iconDragManager:(id)arg1 canAddDragItemsToSession:(id)arg2 fromIconView:(id)arg3;
- (bool)iconDragManager:(id)arg1 canBeginIconDragForIconView:(id)arg2;
- (void)iconDragManager:(id)arg1 didPerformIconDrop:(id)arg2 withIcons:(id)arg3 inIconListView:(id)arg4;
- (bool)iconDragManager:(id)arg1 doesIconRepresentRealIconPosition:(id)arg2 inLocation:(id)arg3;
- (id)iconDragManager:(id)arg1 dragItemsForIconView:(id)arg2;
- (id)iconDragManager:(id)arg1 dragPreviewForIconView:(id)arg2;
- (void)iconDragManager:(id)arg1 iconListView:(id)arg2 item:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (void)iconDragManager:(id)arg1 iconView:(id)arg2 item:(id)arg3 willAnimateDragCancelWithAnimator:(id)arg4;
- (void)iconDragManager:(id)arg1 iconView:(id)arg2 willAnimateDragLiftWithAnimator:(id)arg3 session:(id)arg4;
- (void)iconDragManager:(id)arg1 iconView:(id)arg2 willBeginDragSession:(id)arg3;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (id)iconListViewForIndexPath:(id)arg1;
- (bool)iconShouldAllowCloseBoxTap:(id)arg1;
- (bool)iconViewCanBecomeFocused:(id)arg1;
- (id)iconViewQueryableForIconDragManager:(id)arg1;
- (id)init;
- (bool)isEditing;
- (bool)isIconViewRecycled:(id)arg1;
- (bool)isTrackingActiveOrDroppingIconDrags;
- (id)latestActiveTransitionAnimator;
- (long long)layoutAction;
- (long long)layoutConfiguration;
- (void)layoutFooterViewsInFolderView:(id)arg1;
- (void)layoutHeaderViewsInFolderView:(id)arg1;
- (void)layoutScrollViewAndRootListViewInFolderView:(id)arg1;
- (void)makeMaterialViewsVisible;
- (void)makeRootListViewInFolderView:(id)arg1 animated:(bool)arg2;
- (id)newCellBackgroundMaterialViewInFolderView:(id)arg1 initialWeighting:(double)arg2;
- (bool)pageContainsBookmarkIcons:(id)arg1;
- (id)pageDotsVisibilityAssertion;
- (bool)pageManagementCellViewControllerCanReceiveTap:(id)arg1;
- (void)pageManagementCellViewControllerDidReceiveTap:(id)arg1;
- (bool)pageManagementCellViewControllerShouldSuppressHighlight:(id)arg1;
- (id)pageManagementListModel;
- (id)pageManagementScrollView;
- (id)parentViewControllerForCustomIconImageViewControllerForIconView:(id)arg1;
- (void)presentPageDeleteConfirmationAlertForIconView:(id)arg1 completion:(id /* block */)arg2;
- (void)presentSecondPageDeleteConfirmationAlertBookmarksFoundForIconView:(id)arg1 completion:(id /* block */)arg2;
- (void)rasterizeIconViewsForImprovedLegibilityInScaledDownListViews;
- (void)recycleIconView:(id)arg1;
- (id)rootFolderView;
- (id)rootListModelForIconDragManager:(id)arg1;
- (id)rootListView;
- (id)rootViewForIconDragManager:(id)arg1;
- (id)scrollAccessoryBorrowedAssertion;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setActiveFocusMode:(id)arg1;
- (void)setActiveTransitionCount:(unsigned long long)arg1;
- (void)setAlertPresentationViewController:(id)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsPageHiding:(bool)arg1;
- (void)setBackgroundTapGestureRecognizer:(id)arg1;
- (void)setCompletionURL:(id)arg1;
- (void)setDockOffscreenAssertion:(id)arg1;
- (void)setDraggingIcon:(id)arg1;
- (void)setFocusModeOptionsButton:(id)arg1;
- (void)setFocusModeSymbolView:(id)arg1;
- (void)setLatestActiveTransitionAnimator:(id)arg1;
- (void)setLayoutAction:(long long)arg1;
- (void)setLayoutConfiguration:(long long)arg1;
- (void)setPageDotsVisibilityAssertion:(id)arg1;
- (void)setPageManagementListModel:(id)arg1;
- (void)setPageManagementScrollView:(id)arg1;
- (void)setRootFolderView:(id)arg1;
- (void)setRootListView:(id)arg1;
- (void)setScrollAccessoryBorrowedAssertion:(id)arg1;
- (void)setTransitionCount:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)transitionCount;
- (void)transitionToActive:(bool)arg1 inFolderView:(id)arg2 usingAnimator:(id)arg3;
- (void)turnOffIconViewRazterizationForNormalSizeListViews;
- (id)userInfo;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserSwitcherFooterView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    <CKAppStripPredictiveTypeTransition> * _animator;
    UICollectionView * _appStripCollectionView;
    CKAppStripLayout * _appStripLayout;
    <CKBrowserSwitcherFooterViewDataSource> * _dataSource;
    <CKBrowserSwitcherFooterViewDelegate> * _delegate;
    UIView * _grayLine;
    bool  _hasTouches;
    bool  _hideShinyStatus;
    bool  _ignoreDataSourceChanges;
    bool  _isDoingMagnificationAnimation;
    bool  _isMagnificationEnabled;
    bool  _isMagnified;
    bool  _isMinifyingOnTranscriptScroll;
    UILongPressGestureRecognizer * _longPressRecognizer;
    NSTimer * _minificationTimer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minifiedContentInsets;
    bool  _minifiesOnSelection;
    UIView * _predictiveTypeSnapshotView;
    bool  _scrollsLastUsedAppIconIntoView;
    double  _snapshotVerticalOffset;
    bool  _toggleBordersOnInterfaceStyle;
    UILongPressGestureRecognizer * _touchTracker;
    UIView * _visibleView;
}

@property (nonatomic, readonly) UICollectionView *appStripCollectionView;
@property (nonatomic, retain) CKAppStripLayout *appStripLayout;
@property (nonatomic) <CKBrowserSwitcherFooterViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CKBrowserSwitcherFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *grayLine;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideShinyStatus;
@property (nonatomic) bool isMagnified;
@property (nonatomic) bool isMinifyingOnTranscriptScroll;
@property (nonatomic) bool minifiesOnSelection;
@property (nonatomic) bool scrollsLastUsedAppIconIntoView;
@property (nonatomic) bool showBorders;
@property (nonatomic) double snapshotVerticalOffset;
@property (readonly) Class superclass;
@property (nonatomic) bool toggleBordersOnInterfaceStyle;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateVisibilityState;
- (void)adjustMagnificationAtPoint:(struct CGPoint { double x1; double x2; })arg1 minifyImmediately:(bool)arg2;
- (void)animateAppStripVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)appStripCollectionView;
- (id)appStripLayout;
- (void)appsLongPressed:(id)arg1;
- (void)clearSelection;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)contentHeight;
- (double)contentHeightForCameraApps;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)grayLine;
- (bool)hideShinyStatus;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toggleBordersOnInterfaceStyle:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForAppStrip;
- (void)installedAppsChanged:(id)arg1;
- (bool)isMagnified;
- (bool)isMinifyingOnTranscriptScroll;
- (void)layoutSubviews;
- (bool)minifiesOnSelection;
- (void)minifyImmediately:(bool)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)resetScrollPosition;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (bool)scrollsLastUsedAppIconIntoView;
- (void)selectPluginAtIndexPath:(id)arg1;
- (void)setAppStripLayout:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGrayLine:(id)arg1;
- (void)setHideShinyStatus:(bool)arg1;
- (void)setInitiallySelectedPluginIfNeeded;
- (void)setIsMagnified:(bool)arg1;
- (void)setIsMinifyingOnTranscriptScroll:(bool)arg1;
- (void)setMinifiesOnSelection:(bool)arg1;
- (void)setScrollsLastUsedAppIconIntoView:(bool)arg1;
- (void)setShowBorders:(bool)arg1;
- (void)setSnapshotVerticalOffset:(double)arg1;
- (void)setToggleBordersOnInterfaceStyle:(bool)arg1;
- (bool)showBorders;
- (double)snapshotVerticalOffset;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForFocusPoint:(struct CGPoint { double x1; double x2; })arg1 initialLayoutMode:(unsigned long long)arg2 finalLayoutMode:(unsigned long long)arg3;
- (bool)toggleBordersOnInterfaceStyle;
- (void)touchTrackerTrackedTouches:(id)arg1;
- (void)transcriptCollectionStartedScrolling:(id)arg1;
- (void)updateBrowserCell:(id)arg1;
- (void)updateCollectionView:(id)arg1;
- (void)updatePredictiveTypeSnapshot:(id)arg1;
- (void)visibleAppsChanges:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

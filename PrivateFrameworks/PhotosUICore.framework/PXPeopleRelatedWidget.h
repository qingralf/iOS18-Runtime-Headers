/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleRelatedWidget : NSObject <PXPeopleDataSourceDelegate, PXPeopleStripCollectionViewControllerDelegate, PXWidget, UIGestureRecognizerDelegate> {
    double  _cellMinInteritemSpacing;
    double  _cellMinLineSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    PXPeopleStripCollectionViewController * _collectionViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    long long  _contentViewAnchoringType;
    PXPhotosDetailsContext * _context;
    PXPeopleWidgetDataSource * _dataSource;
    bool  _hasLoadedContentData;
    bool  _isSummaryMode;
    PXUITapGestureRecognizer * _pressGestureRecognizer;
    bool  _showFooter;
    PXWidgetSpec * _spec;
    bool  _startedLoadingDataSource;
    PXUITapGestureRecognizer * _tapGestureRecognizer;
    double  _targetPrefetchWidth;
    bool  _userInteractionEnabled;
    unsigned long long  _viewType;
    <PXWidgetDelegate> * _widgetDelegate;
    <PXWidgetUnlockDelegate> * _widgetUnlockDelegate;
}

@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXAssetActionManager *assetActionManager; /* unknown property attribute: ? */
@property (nonatomic) double cellMinInteritemSpacing;
@property (nonatomic) double cellMinLineSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (nonatomic, retain) PXPeopleStripCollectionViewController *collectionViewController;
@property (nonatomic, readonly) long long contentLayoutStyle; /* unknown property attribute: ? */
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) PXTilingController *contentTilingController; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long contentViewAnchoringType; /* unknown property attribute: ? */
@property (nonatomic, retain) PXPhotosDetailsContext *context; /* unknown property attribute: ? */
@property (nonatomic, retain) PXPeopleWidgetDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double extraSpaceNeededAtContentBottom; /* unknown property attribute: ? */
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool hasContentForCurrentInput; /* unknown property attribute: ? */
@property (setter=_setHasLoadedContentData:, nonatomic) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInEditMode; /* unknown property attribute: ? */
@property (nonatomic) bool isSummaryMode;
@property (nonatomic, readonly) NSString *localizedCaption; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *localizedDisclosureTitle; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *localizedSubtitle; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *localizedTitle; /* unknown property attribute: ? */
@property (nonatomic) struct CGSize { double x1; double x2; } maxVisibleSizeInEditMode; /* unknown property attribute: ? */
@property (getter=isSelecting, nonatomic) bool selecting; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager; /* unknown property attribute: ? */
@property (nonatomic) bool showFooter;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier; /* unknown property attribute: ? */
@property (nonatomic, retain) PXWidgetSpec *spec; /* unknown property attribute: ? */
@property (getter=hasStartedLoadingDataSource, nonatomic) bool startedLoadingDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool supportsSelection; /* unknown property attribute: ? */
@property (nonatomic) double targetPrefetchWidth;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long viewType;
@property (nonatomic, readonly) bool wantsFocus; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool wantsNoSpaceAfterContentBottom; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetEditingDelegate> *widgetEditingDelegate; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetInteractionDelegate> *widgetInteractionDelegate; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate; /* unknown property attribute: ? */

+ (id)_deferredDataSourceLoadingQueue;

- (void).cxx_destruct;
- (bool)_calculateLayoutInfosForWidth:(double)arg1 cellSize:(struct CGSize { double x1; double x2; }*)arg2 interitemSpacing:(double*)arg3;
- (void)_handleTap:(id)arg1;
- (void)_loadContainerView;
- (unsigned long long)_numberOfVisibleFacesForWidth:(double)arg1;
- (void)_prepareDataSource;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_realContentInset;
- (void)_resetControllerLayoutInfosForWidth:(double)arg1;
- (void)_setHasLoadedContentData:(bool)arg1;
- (struct CGSize { double x1; double x2; })_sizeForItemWithWidth:(double)arg1 withInterItemSpacing:(double)arg2;
- (double)cellMinInteritemSpacing;
- (double)cellMinLineSpacing;
- (struct CGSize { double x1; double x2; })cellSize;
- (id)collectionViewController;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)contentSizeCategoryChanged:(id)arg1;
- (id)contentView;
- (long long)contentViewAnchoringType;
- (id)context;
- (id)dataSource;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasContentForCurrentInput;
- (bool)hasLoadedContentData;
- (bool)hasStartedLoadingDataSource;
- (id)initWithViewType:(unsigned long long)arg1;
- (bool)isSummaryMode;
- (bool)isUserInteractionEnabled;
- (void)loadContentData;
- (id)localizedTitle;
- (void)memberTappedAtIndexPath:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forPeopleStripController:(id)arg3;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)peopleDataSource:(id)arg1 didAddMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSource:(id)arg1 didRemoveMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didUpdateMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setCellMinInteritemSpacing:(double)arg1;
- (void)setCellMinLineSpacing:(double)arg1;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCollectionViewController:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsSummaryMode:(bool)arg1;
- (void)setShowFooter:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setStartedLoadingDataSource:(bool)arg1;
- (void)setTargetPrefetchWidth:(double)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setViewType:(unsigned long long)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (void)setWidgetUnlockDelegate:(id)arg1;
- (bool)showFooter;
- (struct CGSize { double x1; double x2; })sizeForItem;
- (id)spec;
- (double)targetPrefetchWidth;
- (id)traitCollection;
- (void)unloadContentData;
- (unsigned long long)viewType;
- (id)widgetDelegate;
- (id)widgetUnlockDelegate;

@end

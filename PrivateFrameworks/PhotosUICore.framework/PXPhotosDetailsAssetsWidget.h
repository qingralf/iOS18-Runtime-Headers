/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsAssetsWidget : NSObject <PXActionPerformerDelegate, PXAssetsSceneDelegate, PXChangeObserver, PXEngineDrivenAssetsTilingLayoutDelegate, PXOneUpPresentationDelegate, PXPhotosDetailsInlinePlaybackControllerDelegate, PXScrollViewControllerObserver, PXSwipeSelectionManagerDelegate, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXUIPlayButtonTileDelegate, PXUIWidget, UIDragInteractionDelegate, UIGestureRecognizerDelegate> {
    PXUIAssetsScene * __assetsScene;
    bool  __autoPlayVideoInOneUp;
    bool  __curate;
    PXPhotosDataSourceStressTest * __currentDataSourceStressTest;
    NSSet * __draggingAssetReferences;
    PXAssetReference * __focusedAssetReference;
    NSSet * __hiddenAssetReferences;
    PXAssetReference * __highlightedAssetReference;
    PXPhotosDetailsInlinePlaybackController * __inlinePlaybackController;
    PXSectionedLayoutEngine * __layoutEngine;
    PXLayoutGenerator * __layoutGenerator;
    PXPhotosDetailsLoadCoordinationToken * __loadCoordinationToken;
    PXPhotoKitUIMediaProvider * __mediaProvider;
    PXAssetReference * __navigatedAssetReference;
    PXPhotosDataSource * __photosDataSource;
    UIPinchGestureRecognizer * __pinchGesture;
    PXUITapGestureRecognizer * __pressGesture;
    bool  __showCurationButton;
    PXPhotosDetailsAssetsSpecManager * __specManager;
    PXSwipeSelectionManager * __swipeSelectionManager;
    PXUITapGestureRecognizer * __tapGesture;
    PXBasicUIViewTileAnimator * __tileAnimator;
    PXTilingController * __tilingController;
    PXTouchingUIGestureRecognizer * __touchGesture;
    bool  __transitionWithoutAnimation;
    struct CGPoint { 
        double x; 
        double y; 
    }  __visibleOriginScrollTarget;
    PXPhotosDetailsContext * _context;
    PXPhotoKitAssetsDataSourceManager * _dataSourceManager;
    bool  _didLogCuratedAssetCount;
    bool  _didLogUncuratedAssetCount;
    <UIDragSession> * _dragSession;
    <PXPhotosDetailsAssetsWidgetEventTracker> * _eventTracker;
    bool  _faceModeEnabled;
    bool  _hasLoadedContentData;
    NSDate * _loadStartDate;
    PXOneUpPresentation * _oneUpPresentation;
    bool  _selecting;
    PXSectionedSelectionManager * _selectionManager;
    PXWidgetSpec * _spec;
    NSMutableSet * _tilesInUse;
    bool  _userInteractionEnabled;
    <PXWidgetDelegate> * _widgetDelegate;
    <PXPhotosDetailsAssetsWidgetOneUpDelegate> * _widgetOneUpDelegate;
}

@property (nonatomic, readonly) PXUIAssetsScene *_assetsScene;
@property (nonatomic, readonly) bool _autoPlayVideoInOneUp;
@property (setter=_setCurate:, nonatomic) bool _curate;
@property (setter=_setCurrentDataSourceStressTest:, nonatomic, retain) PXPhotosDataSourceStressTest *_currentDataSourceStressTest;
@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *_dataSourceManager;
@property (setter=_setDraggingAssetReferences:, nonatomic, retain) NSSet *_draggingAssetReferences;
@property (setter=_setFocusedAssetReference:, nonatomic, retain) PXAssetReference *_focusedAssetReference;
@property (setter=_setHiddenAssetReferences:, nonatomic, retain) NSSet *_hiddenAssetReferences;
@property (setter=_setHighlightedAssetReference:, nonatomic, retain) PXAssetReference *_highlightedAssetReference;
@property (nonatomic, readonly) PXPhotosDetailsInlinePlaybackController *_inlinePlaybackController;
@property (setter=_setLayoutEngine:, nonatomic, retain) PXSectionedLayoutEngine *_layoutEngine;
@property (setter=_setLayoutGenerator:, nonatomic, retain) PXLayoutGenerator *_layoutGenerator;
@property (setter=_setLoadCoordinationToken:, nonatomic, retain) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken;
@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (nonatomic, readonly) PXAssetReference *_navigatedAssetReference;
@property (setter=_setPhotosDataSource:, nonatomic, retain) PXPhotosDataSource *_photosDataSource;
@property (nonatomic, readonly) UIPinchGestureRecognizer *_pinchGesture;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_pressGesture;
@property (nonatomic, readonly) PXSectionedSelectionManager *_selectionManager;
@property (setter=_setShowCurationButton:, nonatomic) bool _showCurationButton;
@property (nonatomic, readonly) PXPhotosDetailsAssetsSpecManager *_specManager;
@property (nonatomic, readonly) PXSwipeSelectionManager *_swipeSelectionManager;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapGesture;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *_touchGesture;
@property (setter=_setTransitionWithoutAnimation:, nonatomic) bool _transitionWithoutAnimation;
@property (setter=_setVisibleOriginScrollTarget:, nonatomic) struct CGPoint { double x1; double x2; } _visibleOriginScrollTarget;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXAssetActionManager *assetActionManager; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long contentLayoutStyle; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXTilingController *contentTilingController; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long contentViewAnchoringType; /* unknown property attribute: ? */
@property (nonatomic, retain) PXPhotosDetailsContext *context; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool cursorInteractionEnabled; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didLogCuratedAssetCount;
@property (nonatomic) bool didLogUncuratedAssetCount;
@property (nonatomic, retain) <UIDragSession> *dragSession;
@property (nonatomic, readonly) <PXPhotosDetailsAssetsWidgetEventTracker> *eventTracker;
@property (nonatomic, readonly) double extraSpaceNeededAtContentBottom; /* unknown property attribute: ? */
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool hasContentForCurrentInput; /* unknown property attribute: ? */
@property (setter=_setHasLoadedContentData:, nonatomic) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInEditMode; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *localizedCaption; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *localizedDisclosureTitle; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *localizedSubtitle; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *localizedTitle; /* unknown property attribute: ? */
@property (nonatomic) struct CGSize { double x1; double x2; } maxVisibleSizeInEditMode; /* unknown property attribute: ? */
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory; /* unknown property attribute: ? */
@property (nonatomic, retain) PXOneUpPresentation *oneUpPresentation; /* unknown property attribute: ? */
@property (getter=isSelecting, nonatomic) bool selecting; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier; /* unknown property attribute: ? */
@property (nonatomic, retain) PXWidgetSpec *spec; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool supportsSelection; /* unknown property attribute: ? */
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool wantsFocus; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool wantsNoSpaceAfterContentBottom; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetEditingDelegate> *widgetEditingDelegate; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetInteractionDelegate> *widgetInteractionDelegate; /* unknown property attribute: ? */
@property (nonatomic) <PXPhotosDetailsAssetsWidgetOneUpDelegate> *widgetOneUpDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate; /* unknown property attribute: ? */

+ (void)_refreshSortDescriptorsInPhotosDataSource:(id)arg1 withPeople:(id)arg2;

- (void).cxx_destruct;
- (bool)_addAssetReferencesToDrag:(id)arg1;
- (id)_assetActionManagerForAssetsReference:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_assetIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)_assetReferenceAtPoint:(struct CGPoint { double x1; double x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)_assetsScene;
- (bool)_autoPlayVideoInOneUp;
- (bool)_canDragAssetReferences:(id)arg1;
- (bool)_canDragOut;
- (void)_configureLayout:(id)arg1;
- (id)_createNewLayout;
- (bool)_curate;
- (id)_curationButtonTitle;
- (id)_currentDataSourceStressTest;
- (id)_dataSourceManager;
- (id)_dragItemForAssetReference:(id)arg1;
- (id)_draggingAssetReferences;
- (id)_extendedTraitCollection;
- (void)_fallBackByTogglingCurationIfNeeded;
- (id)_focusedAssetReference;
- (void)_handleTapOnAssetReference:(id)arg1 autoPlayVideo:(bool)arg2 activity:(unsigned long long)arg3;
- (void)_handleTapOnFocusedAssetReferenceWithActivity:(unsigned long long)arg1;
- (id)_hiddenAssetReferences;
- (id)_highlightedAssetReference;
- (id)_imageTileForDragItem:(id)arg1;
- (id)_inlinePlaybackController;
- (void)_invalidateLayoutGenerator;
- (bool)_isLocationWithinCurrentLayoutBounds:(struct CGPoint { double x1; double x2; })arg1;
- (id)_layoutEngine;
- (id)_layoutGenerator;
- (id)_loadCoordinationToken;
- (void)_loadTilingController;
- (void)_logAssetCountsIfNecessary;
- (id)_mediaProvider;
- (id)_navigatedAssetReference;
- (void)_performTilingChangeWithoutAnimationTransition:(id /* block */)arg1;
- (id)_photosDataSource;
- (id)_pinchGesture;
- (void)_presentConfidentialityWarning;
- (id)_pressGesture;
- (id)_regionOfInterestForAssetReference:(id)arg1;
- (id)_selectionManager;
- (void)_setCurate:(bool)arg1;
- (void)_setCurrentDataSourceStressTest:(id)arg1;
- (void)_setDraggingAssetReferences:(id)arg1;
- (void)_setFocusedAssetReference:(id)arg1;
- (void)_setHasLoadedContentData:(bool)arg1;
- (void)_setHiddenAssetReferences:(id)arg1;
- (void)_setHighlightedAssetReference:(id)arg1;
- (void)_setLayoutEngine:(id)arg1;
- (void)_setLayoutGenerator:(id)arg1;
- (void)_setLoadCoordinationToken:(id)arg1;
- (void)_setNavigatedAssetReference:(id)arg1 autoPlayVideo:(bool)arg2;
- (void)_setPhotosDataSource:(id)arg1;
- (void)_setShowCurationButton:(bool)arg1;
- (void)_setTransitionWithoutAnimation:(bool)arg1;
- (void)_setVisibleOriginScrollTarget:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_showCurationButton;
- (id)_specManager;
- (id)_subtitle;
- (id)_swipeSelectionManager;
- (id)_tapGesture;
- (id)_tileAnimator;
- (id)_tilingController;
- (id)_title;
- (void)_toggleCuration;
- (id)_touchGesture;
- (bool)_transitionWithoutAnimation;
- (void)_updateDraggingAssetReferencesWithDataSource:(id)arg1;
- (void)_updateFocusedAssetReference;
- (void)_updateHasLoadedContentData;
- (void)_updateLayoutEngineIfNeeded;
- (void)_updateShowCurationButton;
- (void)_updateTilingLayoutIfNeeded;
- (void)_userDidSelectCurationButton;
- (struct CGPoint { double x1; double x2; })_visibleOriginScrollTarget;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (bool)allowUserInteractionWithSubtitle;
- (id)assetActionManager;
- (void)assetsScene:(id)arg1 didTransitionToDataSource:(id)arg2;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (id)assetsScene:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)assetsScene:(id)arg1 willTransitionToDataSource:(id)arg2;
- (id)bestCursorTileForLiftingAtPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 forCoordinateSpace:(id)arg2;
- (long long)contentLayoutStyle;
- (id)contentTilingController;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (id)context;
- (bool)cursorInteractionEnabled;
- (id)dataSourceManager;
- (void)dealloc;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (bool)didLogCuratedAssetCount;
- (bool)didLogUncuratedAssetCount;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragSession;
- (double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 forAspectRatio:(double)arg3;
- (double)engineDrivenLayout:(id)arg1 zPositionForItemAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)environmentDidUpdateFocusInContext:(id)arg1;
- (id)eventTracker;
- (id)genericPreviewViewController;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handlePress:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleTouch:(id)arg1;
- (bool)hasLoadedContentData;
- (id)imageViewBasicTileForPreviewingAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (bool)isFaceModeEnabled;
- (bool)isSelecting;
- (bool)isUserInteractionEnabled;
- (void)loadContentData;
- (id)localizedDisclosureTitle;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (struct CGSize { double x1; double x2; })minimumItemSizeForPlaybackInController:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)oneUpPresentation;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)oneUpPresentationPhotosDetailsContext:(id)arg1;
- (bool)oneUpPresentationShouldAutoPlay:(id)arg1;
- (void)playButtonTileWasTapped:(id)arg1;
- (void)presentOneUpForAssetReference:(id)arg1 animated:(bool)arg2;
- (id)presentationEnvironmentForActionPerformer:(id)arg1;
- (id)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(id)arg2;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (id)selectionManager;
- (void)setContext:(id)arg1;
- (void)setDidLogCuratedAssetCount:(bool)arg1;
- (void)setDidLogUncuratedAssetCount:(bool)arg1;
- (void)setDragSession:(id)arg1;
- (void)setFaceModeEnabled:(bool)arg1;
- (void)setOneUpPresentation:(id)arg1;
- (void)setSelecting:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (void)setWidgetOneUpDelegate:(id)arg1;
- (bool)shouldEnablePlaybackForController:(id)arg1;
- (void)spaceBarWasPressed;
- (id)spec;
- (bool)supportsFaceMode;
- (bool)supportsSelection;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeSelectionManager:(id)arg1 shouldBeginSelectionAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)undoManagerForActionPerformer:(id)arg1;
- (void)userDidSelectDisclosureControl;
- (void)userDidSelectSubtitle;
- (id)widgetDelegate;
- (id)widgetOneUpDelegate;

@end

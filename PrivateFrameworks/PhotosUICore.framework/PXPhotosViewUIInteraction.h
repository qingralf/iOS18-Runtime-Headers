/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosViewUIInteraction : PXPhotosViewInteraction <PXAssetCollectionActionPerformerDelegate, PXAssetsDataSourceManagerObserver, PXOneUpPresentationDelegate, PXPhotosDragControllerDelegate, PXScrollViewControllerObserver, PXSwipeSelectionManagerDelegate, PXTouchingUIGestureRecognizerDelegate, UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate> {
    UIContextMenuInteraction * _contextMenuInteraction;
    id /* block */  _currentTouchAction;
    UITapGestureRecognizer * _doubleTapGesture;
    PXPhotosDragController * _dragController;
    <UIViewControllerInteractiveTransitioning> * _edgeSwipeDismissalInteraction;
    UIScreenEdgePanGestureRecognizer * _edgeSwipeGesture;
    NSSet * _hiddenAssetReferences;
    UIHoverGestureRecognizer * _hoverGesture;
    UILongPressGestureRecognizer * _longPressGesture;
    PXAssetReference * _navigatedAssetReference;
    PXAssetsDataSourceManager * _navigatedAssetSectionDataSourceManager;
    PXOneUpPresentation * _oneUpPresentation;
    UIPinchGestureRecognizer * _pinchGesture;
    UITapGestureRecognizer * _pressGesture;
    PXSwipeSelectionManager * _swipeSelectionManager;
    UITapGestureRecognizer * _tapGesture;
    UILongPressGestureRecognizer * _touchGesture;
    PXTouchingUIGestureRecognizer * _touchingGesture;
    <PXPhotosViewUIInteractionDelegate> * _uiInteractionDelegate;
}

@property (nonatomic, readonly) bool canToggleSelectMode;
@property (nonatomic, readonly) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic, readonly) id /* block */ currentTouchAction;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UITapGestureRecognizer *doubleTapGesture;
@property (nonatomic, readonly) PXPhotosDragController *dragController;
@property (nonatomic, readonly) <UIViewControllerInteractiveTransitioning> *edgeSwipeDismissalInteraction;
@property (nonatomic, readonly) UIScreenEdgePanGestureRecognizer *edgeSwipeGesture;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *hiddenAssetReferences;
@property (nonatomic, readonly) UIHoverGestureRecognizer *hoverGesture;
@property (nonatomic, readonly) NSArray *keyCommandsForSelectionExtension;
@property (nonatomic, readonly) PXPhotosLayout *layout;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory; /* unknown property attribute: ? */
@property (nonatomic, retain) PXAssetReference *navigatedAssetReference;
@property (nonatomic, retain) PXAssetsDataSourceManager *navigatedAssetSectionDataSourceManager;
@property (nonatomic, retain) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGesture;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) UITapGestureRecognizer *pressGesture;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSwipeSelectionManager *swipeSelectionManager;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGesture;
@property (nonatomic, readonly) id targetForKeyCommands;
@property (nonatomic, readonly) UILongPressGestureRecognizer *touchGesture;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *touchingGesture;
@property (nonatomic) <PXPhotosViewUIInteractionDelegate> *uiInteractionDelegate;
@property (nonatomic, readonly) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (bool)_commitPreviewForContextMenuInteraction:(id)arg1;
- (id)_contextMenuInteraction:(id)arg1 accessoriesForMenuWithConfiguration:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (id)_createActionManagerForNavigatedAssetReferenceUsingSectionDataSource:(bool)arg1;
- (id)_createContextMenuActionManagerForNavigatedPreviewAssetReference;
- (id)_createContextMenuActionManagerForSelection;
- (id)_createSelectionManagerForNavigatedAssetSection;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleHover:(id)arg1;
- (bool)_handleHoverWithHitTestResult:(id)arg1;
- (void)_handleHoverWithHitTestResults:(id)arg1 hoverGesture:(id)arg2;
- (void)_handlePinch:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handleTap:(id)arg1;
- (bool)_handleTapWithHitTestResult:(id)arg1 keyModifierFlags:(long long)arg2;
- (void)_handleTouch:(id)arg1;
- (void)_handleTouching:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_indexPathForAssetAtLocation:(struct CGPoint { double x1; double x2; })arg1 withPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 forSwipeSelectionManager:(id)arg3;
- (bool)_pickNavigatedAssetReference;
- (void)_setupGestures;
- (id)_targetedPreviewForSecondaryAssetReference:(id)arg1;
- (void)_tearDownGestures;
- (void)_updateContextMenuInteraction;
- (void)_updateScrolledToStates:(id)arg1;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (double)actionPerformerBottomPaddingForPresentingToast:(id)arg1;
- (id)actionPerformerHostViewControllerForPresentingToast:(id)arg1;
- (bool)allowsActionsForContextMenuInteraction:(id)arg1;
- (bool)allowsPreviewCommittingForContextMenuInteraction:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (bool)canStartContextMenuInteraction:(id)arg1;
- (bool)canToggleSelectMode;
- (id)contextMenuInteraction;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id /* block */)currentTouchAction;
- (id)discoverabilityTitleForActionType:(id)arg1;
- (id)doubleTapGesture;
- (id)dragController;
- (id)dragController:(id)arg1 draggableAssetReferenceAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)dragController:(id)arg1 draggedAssetReferencesDidChange:(id)arg2;
- (void)dragController:(id)arg1 dropTargetAssetReferenceDidChange:(id)arg2;
- (id)dragController:(id)arg1 dropTargetAssetReferenceForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)dragController:(id)arg1 isDragSessionActiveDidChange:(bool)arg2;
- (id)dragController:(id)arg1 itemProviderForAssetReference:(id)arg2;
- (id)dragController:(id)arg1 regionOfInterestForAssetReference:(id)arg2 image:(id*)arg3;
- (id)dragController:(id)arg1 scrollViewForAssetReference:(id)arg2;
- (bool)dragController:(id)arg1 shouldResizeCancelledPreviewForAssetReference:(id)arg2;
- (bool)dragController:(id)arg1 shouldSelectRearrangedAssetReferences:(id)arg2;
- (id)dragControllerAssetReferenceForBeginningSession:(id)arg1;
- (id)dragControllerUndoManager:(id)arg1;
- (id)dragControllerViewControllerForPresentation:(id)arg1;
- (id)edgeSwipeDismissalInteraction;
- (id)edgeSwipeGesture;
- (bool)ensureSelectMode;
- (void)ensureSwipeDismissalInteraction;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (id)hiddenAssetReferences;
- (id)hostViewControllerForActionPerformer:(id)arg1;
- (id)hoverGesture;
- (id)keyCommandsForSelectionExtension;
- (id)longPressGesture;
- (id)navigatedAssetReference;
- (id)navigatedAssetSectionDataSourceManager;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)oneUpPresentation;
- (id)oneUpPresentation:(id)arg1 accessoriesForContextMenuInteraction:(id)arg2 configuration:(id)arg3;
- (bool)oneUpPresentation:(id)arg1 allowsActionsForContextMenuInteraction:(id)arg2;
- (bool)oneUpPresentation:(id)arg1 allowsMultiSelectMenuForInteraction:(id)arg2;
- (bool)oneUpPresentation:(id)arg1 allowsPreviewCommittingForContextMenuInteraction:(id)arg2;
- (bool)oneUpPresentation:(id)arg1 canStartPreviewingForContextMenuInteraction:(id)arg2;
- (bool)oneUpPresentation:(id)arg1 commitPreviewForContextMenuInteraction:(id)arg2;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 presentingScrollViewForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 previewForDismissingToSecondaryItemWithIdentifier:(id)arg2 configuration:(id)arg3;
- (id)oneUpPresentation:(id)arg1 previewForHighlightingSecondaryItemWithIdentifier:(id)arg2 configuration:(id)arg3;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (id)oneUpPresentation:(id)arg1 secondaryIdentifiersForConfiguration:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentation:(id)arg1 styleForContextMenuInteraction:(id)arg2 configuration:(id)arg3;
- (void)oneUpPresentation:(id)arg1 willEndPreviewingForContextMenuInteraction:(id)arg2 configuration:(id)arg3;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationActionManager:(id)arg1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)oneUpPresentationPrivacyController:(id)arg1;
- (id)oneUpPresentationSearchQueryMatchInfo:(id)arg1;
- (bool)oneUpPresentationShouldPreventShowInAllPhotosAction:(id)arg1;
- (bool)oneUpPresentationWantsShowInLibraryButton:(id)arg1;
- (void)performActionWithType:(id)arg1;
- (id)pinchGesture;
- (bool)presentOneUpForAssetReference:(id)arg1 configurationHandler:(id /* block */)arg2;
- (bool)presentOneUpForAssetReference:(id)arg1 configurationHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)presentationEnvironmentForActionPerformer:(id)arg1;
- (id)presentingViewController;
- (id)pressGesture;
- (id)regionOfInterestForAssetReference:(id)arg1;
- (id)regionOfInterestForAssetReference:(id)arg1 image:(id*)arg2;
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage {}**)arg2 fallbackMediaProvider:(id)arg3 shouldSnapshot:(bool)arg4;
- (id)scrollView;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerContentInsetDidChange:(id)arg1;
- (void)scrollViewControllerDidChange;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)setContextMenuInteraction:(id)arg1;
- (void)setCurrentTouchAction:(id /* block */)arg1;
- (void)setHiddenAssetReferences:(id)arg1;
- (void)setNavigatedAssetReference:(id)arg1;
- (void)setNavigatedAssetSectionDataSourceManager:(id)arg1;
- (void)setOneUpPresentation:(id)arg1;
- (void)setUiInteractionDelegate:(id)arg1;
- (id)swipeSelectionManager;
- (void)swipeSelectionManager:(id)arg1 extendSelectionInDirection:(unsigned long long)arg2;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeSelectionManager:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (void)swipeSelectionManagerDidAutoScroll:(id)arg1;
- (bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (id)tapGesture;
- (id)targetForKeyCommands;
- (id)targetedPreviewForAssetReference:(id)arg1;
- (void)toggleSelectMode;
- (id)touchGesture;
- (id)touchingGesture;
- (void)touchingUIGestureRecognizerDidBeginTouching:(id)arg1;
- (void)touchingUIGestureRecognizerDidEndTouching:(id)arg1;
- (id)uiInteractionDelegate;
- (id)undoManager;
- (id)undoManagerForActionPerformer:(id)arg1;
- (void)viewDidChange;
- (void)willEndPreviewingForContextMenuInteraction:(id)arg1;

@end

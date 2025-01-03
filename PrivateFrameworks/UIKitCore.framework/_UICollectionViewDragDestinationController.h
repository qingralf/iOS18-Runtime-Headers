/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewDragDestinationController : NSObject <UIDropInteractionDelegate_Private> {
    UICollectionView * _collectionView;
    _UICollectionViewDragAndDropController * _delegate;
    UIDropInteraction * _dropInteraction;
    _UIDragDestinationControllerDropProposalState * _dropProposalState;
    unsigned long long  _dropSuspensionCount;
    CADisplayLink * _reorderDisplayLink;
    _UIDragDestinationControllerReorderingState * _reorderingState;
    _UIDragDestinationControllerSessionState * _sessionState;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginOrResumeDropSession:(id)arg1;
- (void)_cancelCurrentInteractiveReorder;
- (void)_cancelInteractiveReorderingIfNeeded;
- (void)_commitCurrentDragAndDropSession;
- (void)_commitCurrentInteractiveReordering;
- (id)_computeNextItemAttributesStartingFromItemAttributes:(id)arg1 withCurrentDragLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_configureInteraction;
- (void)_configureReorderingDisplayLinkIfNeeded;
- (id)_dragDestinationDelegateActual;
- (id)_dragDestinationDelegateProxy;
- (id)_dropDelegateActual;
- (id)_dropDelegateProxy;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_effectiveDropProposalForProposal:(id)arg1;
- (void)_endInteractiveReorderingIfNeeded;
- (bool)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)arg1 proposedNextItemAttributes:(id)arg2;
- (bool)_isLocalInteractiveMove;
- (bool)_isMultiItemSource;
- (void)_pauseReorderingDisplayLink;
- (id)_queryClientForPreviewParametersForItemAtIndexPath:(id)arg1;
- (void)_reorderingDisplayLinkDidTick;
- (void)_resumeReorderingDisplayLink;
- (bool)_shouldQueryDropActionForIndexPath:(id)arg1;
- (void)_updateDropProposalByQueryingClientIfNeeded:(id)arg1 indicatorLayoutAttributes:(id)arg2;
- (void)dealloc;
- (id)description;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (bool)hasPerformedReordering;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUImageAnalysisInteraction : NSObject <PUAssetViewModelChangeObserver, PXEventCoalescerObserver, PXVKImageAnalysisInteractionDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalActionInfoEdgeInsets;
    PUAssetViewModel * _assetViewModel;
    PUBrowsingViewModel * _browsingViewModel;
    <UICoordinateSpace> * _contentCoordinateSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    UILabel * _debugLabel;
    <PUImageAnalysisInteractionDelegate> * _delegate;
    UIView * _hostView;
    <PXVKImageAnalysisInteraction> * _interaction;
    id /* block */  _interactionCreator;
    bool  _interactionIsResetAndControlledByVKC;
    bool  _isDrivingLivePhotoPlayback;
    NSTimer * _pptVKAnalysisWaitingTimer;
    bool  _shouldResetInteractionWhenNotDrivingLivePhotoPlayback;
    PXEventCoalescer * _sizeChangeCoalescer;
    PXUpdater * _updater;
    long long  _vkOverlayUpdateToken;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalActionInfoEdgeInsets;
@property (nonatomic, readonly) bool allowsVKRemoveBackground;
@property (nonatomic) PUAssetViewModel *assetViewModel;
@property (nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic) <UICoordinateSpace> *contentCoordinateSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) UILabel *debugLabel;
@property (nonatomic) <PUImageAnalysisInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasActiveTextSelection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *hostView;
@property (nonatomic, readonly) bool imageInteractionHasAnalysisAndSubjectLiftingEnabled;
@property (nonatomic, readonly) <PXVKImageAnalysisInteraction> *interaction;
@property (nonatomic, readonly) id /* block */ interactionCreator;
@property (nonatomic) bool interactionIsResetAndControlledByVKC;
@property (nonatomic) bool isDrivingLivePhotoPlayback;
@property (nonatomic, readonly) bool isImageSubjectAnalysisAvailable;
@property (nonatomic, readonly) bool isImageSubjectAnalyzingFinished;
@property (nonatomic, readonly) bool isSubjectInteractionInProgress;
@property (nonatomic, readonly) bool isVisualIntelligenceOverlayInitialized;
@property (nonatomic, retain) NSTimer *pptVKAnalysisWaitingTimer;
@property (nonatomic) bool shouldResetInteractionWhenNotDrivingLivePhotoPlayback;
@property (nonatomic, retain) PXEventCoalescer *sizeChangeCoalescer;
@property (nonatomic, readonly) bool subjectHighlightActive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic) long long vkOverlayUpdateToken;

+ (double)interactionResetInterval;
+ (double)maxFocusAbsoluteValueForInteraction;

- (void).cxx_destruct;
- (bool)_allowsSubjectLifting;
- (void)_handleAssetViewModelChange:(id)arg1;
- (void)_handleBrowsingViewModelChange:(id)arg1;
- (void)_invalidateInteraction;
- (void)_ppt_fireVKAnalysisWaitingTimer;
- (void)_ppt_resetVKAnalysisWaitingTimer;
- (void)_resetInteraction;
- (void)_scheduleUpdate;
- (void)_updateAdditionalActionInfoEdgeInsets;
- (void)_updateContentsRect;
- (void)_updateInteraction;
- (void)_updateInteractionView;
- (void)_updateStatusCornerState;
- (bool)actionInfoItemExistsAtLocation:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalActionInfoEdgeInsets;
- (bool)allowsVKRemoveBackground;
- (id)assetViewModel;
- (void)beginImageSubjectAnalysisIfNecessary;
- (id)browsingViewModel;
- (void)coalescerBeganPendingEvent:(id)arg1;
- (id)contentCoordinateSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contentImageForImageAnalysisInteraction:(id)arg1;
- (id)contentViewForImageAnalysisInteraction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRectForImageAnalysisInteraction:(id)arg1;
- (bool)dataDetectorExistsAtLocation:(id)arg1;
- (void)dealloc;
- (id)debugLabel;
- (id)delegate;
- (bool)hasActiveTextSelection;
- (id)hostView;
- (void)imageAnalysisInteraction:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)imageAnalysisInteraction:(id)arg1 livePhotoShouldPlay:(bool)arg2;
- (void)imageAnalysisInteraction:(id)arg1 liveTextButtonDidChangeToVisible:(bool)arg2;
- (bool)imageAnalysisInteraction:(id)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2 forAnalysisType:(unsigned long long)arg3;
- (bool)imageAnalysisInteraction:(id)arg1 shouldShowLookupForItemFromCallout:(id)arg2;
- (void)imageAnalysisInteractionDidBeginSubjectAnalysis:(id)arg1;
- (void)imageAnalysisInteractionDidCompleteSubjectAnalysis:(id)arg1;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id)arg1;
- (void)imageAnalysisInteractionSubjectInteractionInProgressDidChange:(id)arg1;
- (bool)imageInteractionHasAnalysisAndSubjectLiftingEnabled;
- (bool)imageSubjectExistsAtLocation:(id)arg1;
- (id)init;
- (id)initWithInteractionCreator:(id /* block */)arg1;
- (id)interaction;
- (id /* block */)interactionCreator;
- (bool)interactionIsResetAndControlledByVKC;
- (bool)interactiveItemExistsAtLocation:(id)arg1;
- (bool)isDrivingLivePhotoPlayback;
- (bool)isImageSubjectAnalysisAvailable;
- (bool)isImageSubjectAnalyzingFinished;
- (bool)isShowingLivePhotoForImageAnalysisInteraction:(id)arg1;
- (bool)isSubjectInteractionInProgress;
- (bool)isVisualIntelligenceOverlayInitialized;
- (void)outputEventSignaledForCoalescer:(id)arg1;
- (id)pptVKAnalysisWaitingTimer;
- (void)ppt_notifyWhenVKAnalysisIsReadyWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)arg1;
- (void)setAdditionalActionInfoEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAssetViewModel:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)setContentCoordinateSpace:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDebugLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostView:(id)arg1;
- (void)setInteractionIsResetAndControlledByVKC:(bool)arg1;
- (void)setIsDrivingLivePhotoPlayback:(bool)arg1;
- (void)setPptVKAnalysisWaitingTimer:(id)arg1;
- (void)setShouldResetInteractionWhenNotDrivingLivePhotoPlayback:(bool)arg1;
- (void)setSizeChangeCoalescer:(id)arg1;
- (void)setVkOverlayUpdateToken:(long long)arg1;
- (bool)shouldResetInteractionWhenNotDrivingLivePhotoPlayback;
- (id)sizeChangeCoalescer;
- (bool)subjectHighlightActive;
- (bool)textExistsAtLocation:(id)arg1;
- (id)updater;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (bool)visualImageInteractionEnabled;
- (bool)visualSearchExistsAtLocation:(id)arg1;
- (long long)vkOverlayUpdateToken;

@end
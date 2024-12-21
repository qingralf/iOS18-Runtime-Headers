/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUVFXRetouchOverlay : UIView <CAAnimationDelegate, PUVFXBrushViewDelegate> {
    PUVFXBrushView * _brushView;
    CIContext * _ciContext;
    NUComposition * _composition;
    UIView * _constrainingView;
    NSArray * _imageGenerators;
    PIInpaintMaskContext * _inpaintCtx;
    bool  _isBrushing;
    <PUVFXCleanupOverlayDelegate> * _overlayDelegate;
    NSObject<OS_dispatch_queue> * _queue;
    _TtC15PhotosUIPrivate27PUVFXDimmingBackgroundLayer * _rootLayer;
    NSDictionary * _settings;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PUVFXCleanupOverlayDelegate> *overlayDelegate;
@property (readonly) Class superclass;

+ (id)_blurredEdgeImageWithImage:(id)arg1 settings:(id)arg2;
+ (double)_dragCoefficient;

- (void).cxx_destruct;
- (void)_addNotifications;
- (void)_asyncCIRenderWithFlush:(id /* block */)arg1;
- (void)_configureEmitter:(id)arg1 withSettings:(id)arg2;
- (void)_configureOverrides:(id)arg1 withSettings:(id)arg2;
- (void)_createAndAddLayers;
- (void)_createDeclutterMaskForComposition:(id)arg1;
- (id)_createOutlineImage:(id)arg1 settings:(id)arg2;
- (id)_createRadialGradientWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_createSubjectExclusionMaskForComposition:(id)arg1;
- (void)_delayedScreenParamsDidChange:(id)arg1;
- (void)_didMoveToSuperview;
- (void)_didUndoRedo:(id)arg1;
- (void)_layoutSubviews;
- (double)_maxEDRForDisplay;
- (void)_powerStateDidChange:(id)arg1;
- (void)_removeNotifications;
- (id)_scaleCIImage:(id)arg1 toFitSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_screenParamsDidChange:(id)arg1;
- (void)_snapshotAvailable:(id)arg1;
- (id)_syncGetSourceImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_thermalStateDidChange:(id)arg1;
- (id)brushView;
- (void)didEndBrushing;
- (void)didMoveToSuperview;
- (void)didRenderComposition:(id)arg1;
- (void)didResetComposition:(id)arg1;
- (void)didStartBrushing;
- (id)initWithComposition:(id)arg1 maskContext:(id)arg2 constrainingView:(id)arg3 isHDR:(bool)arg4 overlayDelegate:(id)arg5;
- (void)layoutSubviews;
- (id)overlayDelegate;
- (void)prepareForRevertToOriginal;
- (void)removeFromSuperview;
- (void)selectPoint:(struct CGPoint { double x1; double x2; })arg1 withMask:(id)arg2 composition:(id)arg3;
- (void)setBrushPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOverlayDelegate:(id)arg1;
- (void)showControlsInViewController:(id)arg1;
- (void)undimMasks;
- (void)viewDidMoveToSuperview;

@end
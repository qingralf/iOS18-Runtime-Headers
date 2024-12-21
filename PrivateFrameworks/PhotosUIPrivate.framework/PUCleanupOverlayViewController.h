/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUCleanupOverlayViewController : UIViewController <PUCleanupGestureTouchTypeDelegate, UIGestureRecognizerDelegate, UIPointerInteractionDelegate> {
    NUMutableBrushStroke * _brushStroke;
    PIInpaintMask * _brushStrokeExclusionMask;
    PUCleanupToolBrushView * _brushView;
    unsigned long long  _cleanupMode;
    UIHoverGestureRecognizer * _hoverGestureRecognizer;
    bool  _isHDR;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    NUMediaView * _mediaView;
    UIPointerInteraction * _mediaViewPointerInteraction;
    <PUCleanupOverlayViewControllerDelegate> * _overlayControllerDelegate;
    PUCleanupOverlayView * _overlayView;
    ImmediatePanGestureRecognizer * _panGestureRecognizer;
    UITapGestureRecognizer * _tapGestureRecognizer;
    long long  _touchType;
    PUVFXBrushView * _vfxBrushView;
}

@property (nonatomic, retain) NUMutableBrushStroke *brushStroke;
@property (nonatomic, retain) PIInpaintMask *brushStrokeExclusionMask;
@property (nonatomic, retain) PUCleanupToolBrushView *brushView;
@property (nonatomic) unsigned long long cleanupMode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIHoverGestureRecognizer *hoverGestureRecognizer;
@property (nonatomic) bool isHDR;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) NUMediaView *mediaView;
@property (nonatomic, retain) UIPointerInteraction *mediaViewPointerInteraction;
@property (nonatomic) <PUCleanupOverlayViewControllerDelegate> *overlayControllerDelegate;
@property (nonatomic, retain) PUCleanupOverlayView *overlayView;
@property (nonatomic, retain) ImmediatePanGestureRecognizer *panGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) long long touchType;
@property (nonatomic, retain) PUVFXBrushView *vfxBrushView;

- (void).cxx_destruct;
- (id)brushStroke;
- (id)brushStrokeExclusionMask;
- (id)brushView;
- (unsigned long long)cleanupMode;
- (void)createBrushView;
- (void)enableBrushSizeFeedback:(bool)arg1;
- (void)fadeOutBrushStrokeWithDuration:(double)arg1;
- (id)hoverGestureRecognizer;
- (void)hovered:(id)arg1;
- (id)initWithMediaView:(id)arg1 isHDR:(bool)arg2;
- (bool)isHDR;
- (void)loadView;
- (id)longPressGestureRecognizer;
- (void)longPressed:(id)arg1;
- (id)mediaView;
- (void)mediaViewIsReady;
- (id)mediaViewPointerInteraction;
- (id)overlayControllerDelegate;
- (id)overlayView;
- (id)panGestureRecognizer;
- (void)panned:(id)arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)removeBrushView;
- (void)setBrushStroke:(id)arg1;
- (void)setBrushStrokeExclusionMask:(id)arg1;
- (void)setBrushView:(id)arg1;
- (void)setCleanupMode:(unsigned long long)arg1;
- (void)setHoverGestureRecognizer:(id)arg1;
- (void)setIsHDR:(bool)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setMediaView:(id)arg1;
- (void)setMediaViewPointerInteraction:(id)arg1;
- (void)setOverlayControllerDelegate:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTouchType:(long long)arg1;
- (void)setVfxBrushView:(id)arg1;
- (id)tapGestureRecognizer;
- (void)tapped:(id)arg1;
- (long long)touchType;
- (void)updateBrushSizeFeedback;
- (void)updateViewConstraints;
- (id)vfxBrushView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
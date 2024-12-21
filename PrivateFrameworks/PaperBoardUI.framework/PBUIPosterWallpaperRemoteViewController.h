/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI
 */

@interface PBUIPosterWallpaperRemoteViewController : UIViewController <BSDescriptionProviding, PBUIFakeBlurImageProviding, PBUIFakeBlurViewRegistering, PBUIPosterComponentDelegate, PBUIWallpaperConfigurationManagerDelegate, PBUIWallpaperLegibilityProviding, PBUIWallpaperPresenting> {
    long long  _activeVariant;
    PBUIPosterActiveVariantImageProvider * _activeVariantProvider;
    BSCompoundAssertion * _animationSuspendedAssertion;
    UIView * _containerView;
    NSHashTable * _effectViews;
    PBUIExternalDisplayConfiguration * _externalDisplayConfiguration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerLock;
    NSHashTable * _observers;
    PBUIPosterPortalImageProvider * _portalImageProvider;
    <PBUIWallpaperReachabilityCoordinating> * _reachabilityCoordinator;
    NSMutableSet * _stateCaptureHandles;
    PBUIPosterWallpaperViewController * _viewController;
    PBUIWallpaperConfigurationManager * _wallpaperConfigurationManager;
    <PBUIWallpaperPresentingDelegate> * _wallpaperPresentingDelegate;
    NSHashTable * _wallpaperScaleAssertions;
}

@property (nonatomic) long long activeVariant;
@property (nonatomic, readonly) PBUIHomeVariantStyleState *currentHomeVariantStyleState;
@property (nonatomic, readonly) struct { long long x1; long long x2; double x3; } currentHomescreenStyleTransitionState;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double homescreenWallpaperScale;
@property (nonatomic, readonly) double lockscreenWallpaperScale;
@property (nonatomic, readonly) double minimumHomescreenWallpaperScale;
@property (nonatomic, readonly) double minimumLockscreenWallpaperScale;
@property (nonatomic, retain) <PBUIWallpaperReachabilityCoordinating> *reachabilityCoordinator;
@property (nonatomic, readonly) unsigned long long significantEventsCounter; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, retain) PBUIWallpaperConfigurationManager *wallpaperConfigurationManager;
@property (nonatomic) <PBUIWallpaperPresentingDelegate> *wallpaperPresentingDelegate;

+ (bool)supportsLandscapeWallpaperContents;

- (void).cxx_destruct;
- (void)_addStateCaptureHandlers;
- (bool)_canShowWhileLocked;
- (id)_observers;
- (void)_registerFakeBlurView:(id)arg1;
- (void)_unregisterFakeBlurView:(id)arg1;
- (void)_updateAnimationSuspended;
- (void)_updateFallbackView;
- (void)_updateWallpaperScaleWithAnimationFactory:(id)arg1;
- (id)_wallpaperScaleAssertionForVariant:(long long)arg1 scale:(double)arg2;
- (double)_wallpaperScaleForVariant:(long long)arg1;
- (id)acquireDuckHomeScreenWallpaperDimAssertionWithReason:(id)arg1;
- (long long)activeVariant;
- (void)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 forVariant:(long long)arg2;
- (id)averageColorForVariant:(long long)arg1;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVariant:(long long)arg2;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3;
- (void)cancelInProcessAnimations;
- (double)contrastForVariant:(long long)arg1;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVariant:(long long)arg2;
- (id)createWallpaperFloatingViewForReason:(id)arg1 ignoreReplica:(bool)arg2;
- (id)currentHomeVariantStyleState;
- (struct { long long x1; long long x2; double x3; })currentHomescreenStyleTransitionState;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)fetchWallpaperProminentColor:(id /* block */)arg1;
- (bool)homeScreenPosterMirrorsLock;
- (double)homescreenWallpaperScale;
- (id)imageForWallpaperStyle:(inout long long*)arg1 variant:(long long)arg2 traitCollection:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isHomeScreenWallpaperDimmed;
- (id)legibilitySettingsForVariant:(long long)arg1;
- (double)lockscreenWallpaperScale;
- (double)minimumHomescreenWallpaperScale;
- (double)minimumLockscreenWallpaperScale;
- (id)newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3;
- (id)newImageProviderView;
- (void)noteDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)noteHomeVariantStyleStateMayHaveUpdated;
- (void)noteWillAnimateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)parallaxEnabledForVariant:(long long)arg1;
- (double)parallaxFactorForVariant:(long long)arg1;
- (void)posterComponent:(id)arg1 didUpdateHideDimmingLayer:(bool)arg2;
- (void)posterComponent:(id)arg1 didUpdateLegibilitySettings:(id)arg2;
- (void)posterComponent:(id)arg1 didUpdatePreferredProminentColor:(id)arg2;
- (id)posterComponentExternalDisplayConfiguration:(id)arg1;
- (bool)posterHandlesWakeAnimation;
- (bool)posterHidesDimmingLayer;
- (unsigned long long)posterSignificantEventsCounter;
- (id)reachabilityCoordinator;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forVariant:(long long)arg2;
- (bool)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3;
- (id)requireWallpaperRasterizationWithReason:(id)arg1;
- (id)requireWallpaperWithReason:(id)arg1;
- (id)scenesForBacklightSession;
- (id)scenesForInactiveEnvironmentSession;
- (void)setActiveVariant:(long long)arg1;
- (void)setActiveVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(id /* block */)arg4;
- (void)setAssociatedPosterConfiguration:(id)arg1 withAnimationSettings:(id)arg2;
- (void)setConfiguration:(id)arg1 withAnimationSettings:(id)arg2;
- (void)setExternalDisplayConfiguration:(id)arg1;
- (id)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;
- (id)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;
- (void)setReachabilityCoordinator:(id)arg1;
- (void)setWallpaperConfigurationManager:(id)arg1;
- (id)setWallpaperFloatingLayerContainerView:(id)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
- (void)setWallpaperObscured:(bool)arg1;
- (void)setWallpaperPresentingDelegate:(id)arg1;
- (bool)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;
- (bool)setWallpaperStyleTransitionState:(struct { long long x1; long long x2; double x3; })arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutorotate;
- (unsigned long long)significantEventsCounterForPosterWithIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedInterfaceOrientations;
- (id)suspendWallpaperAnimationForReason:(id)arg1;
- (void)triggerPosterSignificantEvent;
- (void)triggerPosterTapEvent:(id)arg1;
- (void)triggerSceneUpdate;
- (bool)updateCurrentPosterWithUpdates:(id)arg1 error:(out id*)arg2;
- (bool)updateImageProviderView:(id)arg1 withImage:(id)arg2;
- (void)updateWallpaperAnimationWithIconFlyInTension:(double)arg1 friction:(double)arg2;
- (void)updateWallpaperAnimationWithProgress:(double)arg1;
- (void)updateWallpaperAnimationWithWakeSourceIsSwipeToUnlock:(bool)arg1;
- (bool)userTapEventsRequested;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)wallpaperConfigurationManager;
- (void)wallpaperConfigurationManager:(id)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2;
- (id)wallpaperPresentingDelegate;
- (double)zoomFactorForVariant:(long long)arg1;

@end
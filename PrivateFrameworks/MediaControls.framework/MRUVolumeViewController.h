/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUVolumeViewController : UIViewController <CCUIContentModuleContentViewController, CCUIGroupRendering, MPVolumeDisplaying, MRUAudioModuleControllerObserver> {
    MRUAudioModuleController * _audioModuleController;
    double  _compactContinuousCornerRadius;
    unsigned long long  _contentRenderingMode;
    <MRUVolumeViewControllerDelegate> * _delegate;
    bool  _pendingExpanded;
    bool  _primaryGlyphShouldBeTinted;
    bool  _primaryInteractionEnabled;
    bool  _secondaryInteractionEnabled;
}

@property (nonatomic, readonly) MRUAudioModuleController *audioModuleController;
@property (nonatomic) double compactContinuousCornerRadius; /* unknown property attribute: ? */
@property (nonatomic, retain) CCUIModuleContentMetrics *contentMetrics; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long contentRenderingMode; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) INIntent *defaultConfigurationIntent; /* unknown property attribute: ? */
@property (nonatomic) <MRUVolumeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long gridSizeClass; /* unknown property attribute: ? */
@property (getter=isGroupRenderingRequired, nonatomic, readonly) bool groupRenderingRequired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long implicitlyExpandedGridSizeClasses; /* unknown property attribute: ? */
@property (getter=isOnScreen, nonatomic, readonly) bool onScreen; /* unknown property attribute: ? */
@property (getter=isOnScreenForVolumeDisplay, nonatomic, readonly) bool onScreenForVolumeDisplay; /* unknown property attribute: ? */
@property (nonatomic) bool pendingExpanded;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth; /* unknown property attribute: ? */
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius; /* unknown property attribute: ? */
@property (nonatomic) bool prefersExpandedContentSizeMatchesGridSize; /* unknown property attribute: ? */
@property (nonatomic) bool primaryGlyphShouldBeTinted;
@property (nonatomic) bool primaryInteractionEnabled;
@property (nonatomic, readonly) bool promptsForUserConfiguration; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool providesOwnPlatter; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSArray *punchOutRenderingViews;
@property (getter=isResizing, nonatomic) bool resizing; /* unknown property attribute: ? */
@property (nonatomic) bool secondaryInteractionEnabled;
@property (nonatomic, readonly) bool shouldPerformClickInteraction; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool shouldPerformHoverInteraction; /* unknown property attribute: ? */
@property (nonatomic, readonly) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic) long long userVisibilityStatus; /* unknown property attribute: ? */
@property (nonatomic, retain) MRUVolumeView *view;
@property (nonatomic, retain) MRUVolumeView *viewIfLoaded;
@property (nonatomic, readonly) NSString *volumeAudioCategory; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool wantsConfigurationIntent; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)audioModuleController;
- (void)audioModuleController:(id)arg1 hearingServiceController:(id)arg2 didChangePrimaryAmplification:(float)arg3;
- (void)audioModuleController:(id)arg1 hearingServiceController:(id)arg2 didChangePrimaryHearingAidEnabled:(bool)arg3;
- (void)audioModuleController:(id)arg1 spatialAudioController:(id)arg2 didChangeAvailableSpatialModes:(id)arg3;
- (void)audioModuleController:(id)arg1 systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg2;
- (void)audioModuleController:(id)arg1 systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg2;
- (void)audioModuleController:(id)arg1 volumeController:(id)arg2 didChangeVolumeControlCapabilities:(unsigned int)arg3 effectiveVolumeValue:(float)arg4 forType:(long long)arg5;
- (double)compactContinuousCornerRadius;
- (unsigned long long)contentRenderingMode;
- (void)dealloc;
- (void)decreaseTouchUpInside:(id)arg1;
- (id)delegate;
- (void)didTransitionToExpandedContentMode:(bool)arg1;
- (void)environmentSliderValueDidChange:(id)arg1;
- (void)increaseTouchUpInside:(id)arg1;
- (id)initWithAudioModuleController:(id)arg1;
- (bool)isGroupRenderingRequired;
- (bool)isOnScreen;
- (void)loadView;
- (bool)pendingExpanded;
- (double)preferredExpandedContentHeight;
- (double)preferredExpandedContentWidth;
- (bool)primaryGlyphShouldBeTinted;
- (bool)primaryInteractionEnabled;
- (void)primarySliderValueDidChange:(id)arg1;
- (bool)providesOwnPlatter;
- (id)punchOutRenderingViews;
- (bool)secondaryInteractionEnabled;
- (void)secondarySliderValueDidChange:(id)arg1;
- (void)setCompactContinuousCornerRadius:(double)arg1;
- (void)setContentRenderingMode:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingExpanded:(bool)arg1;
- (void)setPrimaryGlyphShouldBeTinted:(bool)arg1;
- (void)setPrimaryInteractionEnabled:(bool)arg1;
- (void)setSecondaryInteractionEnabled:(bool)arg1;
- (bool)shouldExpandModuleOnTouch:(id)arg1;
- (id)stylingProvider;
- (void)updateEnvironmentSliderValueAnimated:(bool)arg1;
- (void)updatePrimarySliderVolumeValueAfterDelay;
- (void)updatePrimarySliderVolumeValueAnimated:(bool)arg1;
- (void)updateSecondarySliderVolumeValueAnimated:(bool)arg1;
- (void)updateSliderAsset;
- (void)updateSliderInteractionEnabled;
- (void)updateSliderTint;
- (void)updateVisibility;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)volumeAudioCategory;
- (void)willTransitionToExpandedContentMode:(bool)arg1;
- (id)windowSceneForVolumeDisplay;

@end
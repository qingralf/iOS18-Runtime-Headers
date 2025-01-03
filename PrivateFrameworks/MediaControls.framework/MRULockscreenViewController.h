/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRULockscreenViewController : UIViewController <MRUArtworkViewObserver, MRUCallMonitorObserver, MRUMediaSuggestionsViewControllerDelegate, MRUNowPlayingControllerObserver, MRUNowPlayingTransportControlsViewDelegate, MRUNowPlayingVolumeControlsViewDelegate, UIGestureRecognizerDelegate, _MCStateDumpPropertyListTransformable> {
    <MRULockscreenViewControllerDelegate> * _delegate;
    bool  _dimmed;
    MRUHapticViewController * _hapticViewController;
    <BSInvalidatable> * _hardwareVolumeControlAssertion;
    bool  _hasPendingTraitCollectionUpdates;
    MPMediaControls * _mediaControls;
    MRUNowPlayingController * _nowPlayingController;
    bool  _onScreen;
    NSNumber * _pendingDimmed;
    bool  _pendingTimelineInvalidation;
    MRUVisualStylingProvider * _pendingVisualStylingProvider;
    bool  _showArtworkView;
    unsigned long long  _stateHandle;
    MRUVisualStylingProvider * _stylingProvider;
    MRUMediaSuggestionsViewController * _suggestionsViewController;
    MRUWaveformController * _waveformController;
    MRUWaveformViewController * _waveformViewController;
}

@property (nonatomic, readonly) MRUArtworkView *artworkView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <MRULockscreenViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic, retain) MRUHapticViewController *hapticViewController;
@property (nonatomic, retain) <BSInvalidatable> *hardwareVolumeControlAssertion;
@property (nonatomic) bool hasPendingTraitCollectionUpdates;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isShowingMediaSuggestions;
@property (nonatomic, retain) MPMediaControls *mediaControls;
@property (nonatomic, readonly) MRUNowPlayingController *nowPlayingController;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, retain) NSNumber *pendingDimmed;
@property (nonatomic) bool pendingTimelineInvalidation;
@property (nonatomic, retain) MRUVisualStylingProvider *pendingVisualStylingProvider;
@property (nonatomic, readonly) NSArray *restrictedRects;
@property (nonatomic) bool showArtworkView;
@property (nonatomic) unsigned long long stateHandle;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, retain) MRUMediaSuggestionsViewController *suggestionsViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRULockscreenView *view;
@property (nonatomic, retain) MRULockscreenView *viewIfLoaded;
@property (nonatomic, retain) MRUWaveformController *waveformController;
@property (nonatomic, retain) MRUWaveformViewController *waveformViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_setStylingProvider:(id)arg1;
- (id)_stateDumpObject;
- (id)_timelinesForDateInterval:(id)arg1;
- (void)_updateWithFrameSpecifier:(id)arg1;
- (id)artworkView;
- (void)artworkView:(id)arg1 didChangeArtworkImage:(id)arg2;
- (id)backlightSceneEnvironment;
- (void)callMonitorDidUpdateOnCall:(id)arg1 isOnCall:(bool)arg2;
- (void)createHapticViewController;
- (void)createNowPlayingController;
- (void)createSuggestionsViewController;
- (void)createWaveformViewController;
- (void)dealloc;
- (id)delegate;
- (void)didSelectArtworkView:(id)arg1;
- (void)didSelectLabelView:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleHapticEnabledStatusChangedNotification:(id)arg1;
- (id)hapticViewController;
- (id)hardwareVolumeControlAssertion;
- (bool)hasPendingTraitCollectionUpdates;
- (void)invalidateAllTimelinesForReason:(id)arg1;
- (bool)isDimmed;
- (bool)isOnScreen;
- (bool)isShowingMediaSuggestions;
- (void)loadView;
- (long long)lockScreenInternalRoutePickerOverrideWithDefaultStyle:(long long)arg1;
- (bool)lockScreenPresentsOverrideRoutePicker;
- (id)mediaControls;
- (void)mediaSuggestionsViewController:(id)arg1 didSelectSuggestion:(id)arg2 completion:(id /* block */)arg3;
- (id)nowPlayingController;
- (void)nowPlayingController:(id)arg1 endpointController:(id)arg2 didChangeRoute:(id)arg3;
- (void)nowPlayingController:(id)arg1 mediaSuggestionsController:(id)arg2 didChangeMediaSuggestions:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeArtwork:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeBundleID:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeTimeControls:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeTransportControls:(id)arg3;
- (void)nowPlayingController:(id)arg1 tvRemoteController:(id)arg2 didChangeShowTVRemote:(bool)arg3;
- (bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;
- (id)pendingDimmed;
- (bool)pendingTimelineInvalidation;
- (id)pendingVisualStylingProvider;
- (void)registerHapticObserver;
- (id)restrictedRects;
- (void)schedulePendingTraitCollectionUpdates;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setHapticViewController:(id)arg1;
- (void)setHardwareVolumeControlAssertion:(id)arg1;
- (void)setHasPendingTraitCollectionUpdates:(bool)arg1;
- (void)setMediaControls:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setPendingDimmed:(id)arg1;
- (void)setPendingTimelineInvalidation:(bool)arg1;
- (void)setPendingVisualStylingProvider:(id)arg1;
- (void)setShowArtworkView:(bool)arg1;
- (void)setShowArtworkView:(bool)arg1 completion:(id /* block */)arg2;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setSuggestionsViewController:(id)arg1;
- (void)setWaveformController:(id)arg1;
- (void)setWaveformViewController:(id)arg1;
- (bool)showArtworkView;
- (unsigned long long)stateHandle;
- (id)stylingProvider;
- (id)suggestionsViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transportControlsView:(id)arg1 didSelectRoutingButton:(id)arg2;
- (void)transportControlsView:(id)arg1 didSelectTVRemoteButton:(id)arg2;
- (void)updateArtwork;
- (void)updateDimmed;
- (void)updateEverything;
- (void)updateLayoutDependantProperties;
- (void)updateLayoutDependantPropertiesWithCompletion:(id /* block */)arg1;
- (void)updateLayoutWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateNowPlayingInfo;
- (void)updatePreferredContentSize;
- (void)updateRestrictedRects;
- (void)updateRouteLabel;
- (void)updateRoutingButton;
- (void)updateRoutingButtonAnimated:(bool)arg1;
- (void)updateSuggestions;
- (void)updateTimeControls;
- (void)updateTimeControlsForPresentationInterval:(id)arg1;
- (void)updateTransportControls;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (void)updateVolumeControls;
- (void)updateWaveformVisibility;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)volumeControlsView:(id)arg1 volumeCapabiltiesDidChange:(unsigned int)arg2;
- (void)volumeControlsView:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)waveformController;
- (id)waveformViewController;

@end

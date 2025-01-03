/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUNowPlayingViewController : UIViewController <MRUArtworkViewObserver, MRUCallMonitorObserver, MRUMediaSuggestionsViewControllerDelegate, MRUNowPlayingControllerObserver, MRUNowPlayingTransportControlsViewDelegate, MRUNowPlayingVolumeControlsViewDelegate, MRURoutingViewControllerDelegate, _MCStateDumpPropertyListTransformable> {
    id /* block */  _configureRoutingButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    long long  _context;
    MRUNowPlayingController * _controller;
    id /* block */  _coordinatedDismissalBlock;
    <MRUNowPlayingViewControllerDelegate> * _delegate;
    bool  _dimmed;
    <BSInvalidatable> * _hardwareVolumeControlAssertion;
    bool  _hasPendingTraitCollectionUpdates;
    long long  _layout;
    MPMediaControls * _mediaControls;
    bool  _onScreen;
    NSNumber * _pendingDimmed;
    bool  _pendingTimelineInvalidation;
    MRUVisualStylingProvider * _pendingVisualStylingProvider;
    <MPAVOutputDevicePlaybackDataSource> * _playbackDataSource;
    bool  _playing;
    long long  _routeControlsPresentation;
    MRURoutingViewController * _routingViewController;
    bool  _showArtworkView;
    unsigned long long  _stateHandle;
    MRUVisualStylingProvider * _stylingProvider;
    MRUMediaSuggestionsViewController * _suggestionsViewController;
    bool  _supportsHorizontalLayout;
    MRUVolumeGroupCoordinator * _volumeGroupCoordinator;
}

@property (nonatomic, readonly) MRUArtworkView *artworkView;
@property (nonatomic, copy) id /* block */ configureRoutingButton;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic) long long context;
@property (nonatomic, retain) MRUNowPlayingController *controller;
@property (nonatomic, copy) id /* block */ coordinatedDismissalBlock;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <MRUNowPlayingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic, retain) <BSInvalidatable> *hardwareVolumeControlAssertion;
@property (nonatomic) bool hasPendingTraitCollectionUpdates;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isShowingMediaSuggestions;
@property (nonatomic) long long layout;
@property (nonatomic, retain) MPMediaControls *mediaControls;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, retain) NSNumber *pendingDimmed;
@property (nonatomic) bool pendingTimelineInvalidation;
@property (nonatomic, retain) MRUVisualStylingProvider *pendingVisualStylingProvider;
@property (nonatomic) <MPAVOutputDevicePlaybackDataSource> *playbackDataSource;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, readonly) NSArray *restrictedRects;
@property (nonatomic, readonly) long long routeControlsPresentation;
@property (nonatomic, readonly) MRURoutingViewController *routingViewController;
@property (nonatomic, readonly) bool shouldShowMediaSuggestions;
@property (nonatomic) bool showArtworkView;
@property (nonatomic) unsigned long long stateHandle;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, retain) MRUMediaSuggestionsViewController *suggestionsViewController;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsHorizontalLayout;
@property (nonatomic, retain) MRUNowPlayingView *view;
@property (nonatomic, retain) MRUNowPlayingView *viewIfLoaded;
@property (nonatomic, retain) MRUVolumeGroupCoordinator *volumeGroupCoordinator;

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
- (id /* block */)configureRoutingButton;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (long long)context;
- (id)contextString;
- (id)controller;
- (id /* block */)coordinatedDismissalBlock;
- (void)createRoutingViewController;
- (void)createSuggestionsViewController;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)destination;
- (void)didSelectArtworkView:(id)arg1;
- (void)didSelectLabelView:(id)arg1;
- (void)didSelectQuickControl:(id)arg1;
- (void)didSelectRoutingButton:(id)arg1;
- (id)hardwareVolumeControlAssertion;
- (bool)hasPendingTraitCollectionUpdates;
- (id)initWithController:(id)arg1 routeControlsPresentation:(long long)arg2;
- (id)initWithRouteUID:(id)arg1;
- (id)initWithRouteUID:(id)arg1 client:(id)arg2 player:(id)arg3;
- (void)initiateQueueHandoffTansitionWithCoordinator:(id)arg1;
- (void)invalidateAllTimelinesForReason:(id)arg1;
- (bool)isDimmed;
- (bool)isOnScreen;
- (bool)isPlaying;
- (bool)isShowingMediaSuggestions;
- (void)launchNowPlayingApp;
- (long long)layout;
- (void)loadView;
- (id)mediaControls;
- (void)mediaSuggestionsViewController:(id)arg1 didSelectSuggestion:(id)arg2 completion:(id /* block */)arg3;
- (void)nowPlayingController:(id)arg1 didChangeQuickControlItem:(id)arg2;
- (void)nowPlayingController:(id)arg1 endpointController:(id)arg2 didChangeRoute:(id)arg3;
- (void)nowPlayingController:(id)arg1 mediaSuggestionsController:(id)arg2 didChangeMediaSuggestions:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeArtwork:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeBundleID:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeTimeControls:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeTransportControls:(id)arg3;
- (void)nowPlayingController:(id)arg1 queueHandoffCoordinator:(id)arg2 didChangeState:(long long)arg3;
- (void)nowPlayingController:(id)arg1 tvRemoteController:(id)arg2 didChangeShowTVRemote:(bool)arg3;
- (bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;
- (id)pendingDimmed;
- (bool)pendingTimelineInvalidation;
- (id)pendingVisualStylingProvider;
- (id)playbackDataSource;
- (void)presentRoutingControlsFromSourceView:(id)arg1;
- (id)restrictedRects;
- (long long)routeControlsPresentation;
- (id)routingViewController;
- (void)routingViewController:(id)arg1 didSelectRoutingViewItem:(id)arg2;
- (void)routingViewControllerDidUpdateItems:(id)arg1;
- (void)schedulePendingTraitCollectionUpdates;
- (void)setConfigureRoutingButton:(id /* block */)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContext:(long long)arg1;
- (void)setController:(id)arg1;
- (void)setCoordinatedDismissalBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setHardwareVolumeControlAssertion:(id)arg1;
- (void)setHasPendingTraitCollectionUpdates:(bool)arg1;
- (void)setLayout:(long long)arg1;
- (void)setMediaControls:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setPendingDimmed:(id)arg1;
- (void)setPendingTimelineInvalidation:(bool)arg1;
- (void)setPendingVisualStylingProvider:(id)arg1;
- (void)setPlaybackDataSource:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setRoutingViewController:(id)arg1;
- (void)setShowArtworkView:(bool)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setSuggestionsViewController:(id)arg1;
- (void)setSupportsHorizontalLayout:(bool)arg1;
- (void)setVolumeGroupCoordinator:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldShowMediaSuggestions;
- (bool)showArtworkView;
- (bool)showRouteLabel;
- (unsigned long long)stateHandle;
- (id)stylingProvider;
- (id)suggestionsViewController;
- (bool)supportsHorizontalLayout;
- (void)trackStartedShowingMediaSuggestions;
- (void)trackSuggestionSelected:(id)arg1 atIndex:(unsigned long long)arg2 error:(id)arg3;
- (void)trackSuggestionsDisplayed:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transportControlsView:(id)arg1 didSelectRoutingButton:(id)arg2;
- (void)transportControlsView:(id)arg1 didSelectTVRemoteButton:(id)arg2;
- (void)updateArtwork;
- (void)updateContentAnimated:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateDimmed;
- (void)updateLayout;
- (void)updateNowPlayingInfo;
- (void)updateQuickControl;
- (void)updateRouteLabel;
- (void)updateRoutingButton;
- (void)updateRoutingButtonAnimated:(bool)arg1;
- (void)updateRoutingContentEdgeInsets;
- (void)updateRoutingDiscoveryMode;
- (void)updateSuggestionContext;
- (void)updateSuggestions;
- (void)updateTimeControls;
- (void)updateTimeControlsForPresentationInterval:(id)arg1;
- (void)updateTransportControls;
- (void)updateVisibility;
- (void)updateVolumeControls;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)volumeControlsView:(id)arg1 volumeCapabiltiesDidChange:(unsigned int)arg2;
- (void)volumeControlsView:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)volumeGroupCoordinator;

@end

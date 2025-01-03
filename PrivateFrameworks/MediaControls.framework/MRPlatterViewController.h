/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRPlatterViewController : UIViewController <MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate, MTVisualStylingRequiring, MediaControlsActionsDelegate, MediaControlsCollectionItemViewController, MediaControlsEndpointControllerDelegate, MediaControlsMasterVolumeSliderDelegate, MediaControlsPanelViewControllerDelegate, UIGestureRecognizerDelegate, _MCStateDumpPropertyListTransformable> {
    double  __continuousCornerRadius;
    bool  _allowsNowPlayingAppLaunch;
    MPArtworkCatalog * _artworkCatalog;
    MSVTimer * _artworkTimer;
    UIView * _backgroundView;
    UIView * _contentView;
    <MRPlatterViewControllerDelegate> * _delegate;
    NSArray * _displayElements;
    FBSDisplayLayoutMonitor * _displayMonitor;
    MediaControlsEndpointController * _endpointController;
    NSString * _explicitString;
    long long  _failedArtworkRetryCount;
    bool  _failedToLoadArtwork;
    MPVolumeGroupSliderCoordinator * _groupSliderCoordinator;
    bool  _isListeningForResponse;
    NSString * _label;
    MediaControlsLanguageOptionsViewController * _languageOptionsViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastKnownSize;
    MPMediaControls * _mediaControls;
    MediaControlsHeaderView * _nowPlayingHeaderView;
    bool  _onScreen;
    MediaControlsParentContainerView * _parentContainerView;
    NSString * _placeholderDeviceIdentifier;
    NSString * _placeholderString;
    MPAVEndpointRoute * _route;
    NSString * _routeUID;
    MediaControlsRoutingCornerView * _routingCornerView;
    id /* block */  _routingCornerViewTappedBlock;
    MPAVRoutingViewController * _routingViewController;
    NSMutableArray * _secondaryStringComponents;
    bool  _selected;
    long long  _selectedMode;
    SFShareAudioViewController * _shareAudioViewController;
    unsigned long long  _stateHandle;
    long long  _style;
    unsigned long long  _supportedModes;
    bool  _transitioning;
    MediaControlsTransitioningDelegate * _transitioningDelegate;
    MRMediaControlsVideoPickerFooterView * _videoPickerFooterView;
    MRMediaControlsVideoPickerHeaderView * _videoPickerHeaderView;
    MTVisualStylingProvider * _visualStylingProvider;
    MediaControlsVolumeContainerView * _volumeContainerView;
}

@property (setter=_setContinuousCornerRadius:, nonatomic) double _continuousCornerRadius;
@property (nonatomic) bool allowsNowPlayingAppLaunch;
@property (nonatomic, retain) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, retain) MSVTimer *artworkTimer;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <MRPlatterViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceUnlocked, nonatomic, readonly) bool deviceUnlocked;
@property (nonatomic, retain) NSArray *displayElements;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *displayMonitor;
@property (nonatomic, readonly) UIView *effectiveFooterView;
@property (nonatomic, readonly) UIView *effectiveHeaderView;
@property (nonatomic, retain) MediaControlsEndpointController *endpointController;
@property (nonatomic, copy) NSString *explicitString;
@property (nonatomic, readonly) long long failedArtworkRetryCount;
@property (nonatomic) bool failedToLoadArtwork;
@property (nonatomic, retain) MPVolumeGroupSliderCoordinator *groupSliderCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isListeningForResponse;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) MediaControlsLanguageOptionsViewController *languageOptionsViewController;
@property (nonatomic) struct CGSize { double x1; double x2; } lastKnownSize;
@property (nonatomic, retain) MPMediaControls *mediaControls;
@property (nonatomic, retain) MediaControlsHeaderView *nowPlayingHeaderView;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, retain) MediaControlsParentContainerView *parentContainerView;
@property (nonatomic, retain) NSString *placeholderDeviceIdentifier;
@property (nonatomic, retain) NSString *placeholderString;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic, retain) MPAVEndpointRoute *route;
@property (nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly) NSString *routeUID;
@property (nonatomic, retain) MediaControlsRoutingCornerView *routingCornerView;
@property (nonatomic, copy) id /* block */ routingCornerViewTappedBlock;
@property (nonatomic, retain) MPAVRoutingViewController *routingViewController;
@property (nonatomic, retain) NSMutableArray *secondaryStringComponents;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) long long selectedMode;
@property (nonatomic, retain) SFShareAudioViewController *shareAudioViewController;
@property (nonatomic, readonly) bool shouldDisplayPlatter;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedModes;
@property (getter=isTransitioning, nonatomic) bool transitioning;
@property (nonatomic, retain) MediaControlsTransitioningDelegate *transitioningDelegate;
@property (nonatomic, retain) MRMediaControlsVideoPickerFooterView *videoPickerFooterView;
@property (nonatomic, retain) MRMediaControlsVideoPickerHeaderView *videoPickerHeaderView;
@property (nonatomic, retain) MediaControlsVolumeContainerView *volumeContainerView;

+ (id)coverSheetPlatterViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)_canToggleRoutingPicker;
- (double)_continuousCornerRadius;
- (void)_dismissShareAudioViewController;
- (bool)_isExpanded;
- (void)_platterViewControllerReceivedInteraction:(id)arg1;
- (void)_presentRoutingViewControllerFromCoverSheet;
- (void)_prewarmTVRemoteIfNeeded;
- (id)_route;
- (void)_routingCornerViewReceivedTap:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setRoutingPickerVisible:(bool)arg1 animated:(bool)arg2;
- (bool)_shouldUseViewServiceToPresentTVRemote;
- (void)_showPlaceholderArtwork;
- (void)_showShareAudioViewController;
- (id)_stateDumpObject;
- (id)_tvAirplayIdentifier;
- (id)_tvMediaRemoteIdentifier;
- (void)_updateConfiguration;
- (void)_updateControlCenterMetadata:(id)arg1 sectionMetadata:(id)arg2;
- (void)_updateHeaderUI;
- (void)_updateOnScreenForStyle:(long long)arg1;
- (void)_updatePlaceholderArtwork;
- (void)_updateRouteNameLabel;
- (void)_updateRoutingCornerView;
- (void)_updateRoutingIndicators;
- (void)_updateSecondaryStringFormat;
- (void)_updateStyle;
- (bool)allowsNowPlayingAppLaunch;
- (id)artworkCatalog;
- (id)artworkTimer;
- (id)backgroundView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForRoutingViewController:(id)arg1;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToParentViewController:(id)arg1;
- (id)displayElements;
- (id)displayMonitor;
- (id)effectiveFooterView;
- (id)effectiveHeaderView;
- (id)endpointController;
- (void)endpointController:(id)arg1 didLoadNewResponse:(id)arg2;
- (void)endpointControllerDidChangeState:(id)arg1;
- (void)endpointControllerDidUpdateRoutingAvailability:(id)arg1;
- (void)endpointControllerRouteDidUpdate:(id)arg1;
- (id)explicitString;
- (long long)failedArtworkRetryCount;
- (bool)failedToLoadArtwork;
- (void)footerViewButtonPressed:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)groupSliderCoordinator;
- (void)headerViewButtonPressed:(id)arg1;
- (void)headerViewLaunchNowPlayingAppButtonPressed:(id)arg1;
- (id)initWithActiveRouteType:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRouteUID:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (bool)isDeviceUnlocked;
- (bool)isListeningForResponse;
- (bool)isOnScreen;
- (bool)isSelected;
- (bool)isTransitioning;
- (id)label;
- (id)languageOptionsViewController;
- (struct CGSize { double x1; double x2; })lastKnownSize;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)loadView;
- (long long)lockScreenInternalRoutePickerOverrideWithDefaultStyle:(long long)arg1;
- (bool)lockScreenPresentsOverrideRoutePicker;
- (id)mediaControls;
- (id)nowPlayingHeaderView;
- (id)parentContainerView;
- (id)placeholderDeviceIdentifier;
- (id)placeholderString;
- (void)presentLanguageOptions;
- (void)presentRatingActionSheet:(id)arg1 sourceView:(id)arg2;
- (void)presentTVRemote;
- (id)requiredVisualStyleCategories;
- (id)route;
- (id)routeName;
- (id)routeUID;
- (id)routingCornerView;
- (id /* block */)routingCornerViewTappedBlock;
- (id)routingViewController;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)routingViewController:(id)arg1 didSelectRoutingViewItem:(id)arg2;
- (void)routingViewController:(id)arg1 willDisplayCell:(id)arg2;
- (void)routingViewController:(id)arg1 willDisplayHeaderView:(id)arg2;
- (id)secondaryStringComponents;
- (long long)selectedMode;
- (void)setAllowsNowPlayingAppLaunch:(bool)arg1;
- (void)setArtworkCatalog:(id)arg1;
- (void)setArtworkTimer:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayElements:(id)arg1;
- (void)setDisplayMonitor:(id)arg1;
- (void)setEndpointController:(id)arg1;
- (void)setExplicitString:(id)arg1;
- (void)setFailedToLoadArtwork:(bool)arg1;
- (void)setGroupSliderCoordinator:(id)arg1;
- (void)setIsListeningForResponse:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLanguageOptionsViewController:(id)arg1;
- (void)setLastKnownSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMediaControls:(id)arg1;
- (void)setNowPlayingHeaderView:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setParentContainerView:(id)arg1;
- (void)setPlaceholderDeviceIdentifier:(id)arg1;
- (void)setPlaceholderString:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRoutingCornerView:(id)arg1;
- (void)setRoutingCornerViewTappedBlock:(id /* block */)arg1;
- (void)setRoutingViewController:(id)arg1;
- (void)setSecondaryStringComponents:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedMode:(long long)arg1;
- (void)setSelectedMode:(long long)arg1 animated:(bool)arg2;
- (void)setShareAudioViewController:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSupportedModes:(unsigned long long)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)setVideoPickerFooterView:(id)arg1;
- (void)setVideoPickerHeaderView:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (void)setVolumeContainerView:(id)arg1;
- (id)shareAudioViewController;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldDisplayPlatter;
- (bool)shouldEnableSyncingForSlider:(id)arg1;
- (bool)shouldShowTVRemoteButton;
- (bool)slider:(id)arg1 shouldCancelSnapWithTouch:(id)arg2;
- (bool)slider:(id)arg1 syncStateWillChangeFromState:(long long)arg2 toState:(long long)arg3;
- (long long)style;
- (unsigned long long)supportedModes;
- (id)transitioningDelegate;
- (id)videoPickerFooterView;
- (id)videoPickerHeaderView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (id)volumeContainerView;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withCoordinator:(id)arg2;

@end

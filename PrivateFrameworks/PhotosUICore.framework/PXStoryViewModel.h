/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXStoryViewModel : PXObservable <PXChangeObserver, PXInfoProvider, PXInfoUpdaterObserver, PXNetworkStatusObserver, PXSettingsKeyObserver, PXStoryDiagnosticHUDContentProvider, PXStoryDiagnosticHUDDataSource, PXStoryMutableViewModel, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider, PXVisualDiagnosticsProvider> {
    PXStoryViewAccessibilityHUDContentProvider * _accessibilityHUDContentProvider;
    <PXStoryViewActionPerformer> * _actionPerformer;
    unsigned long long  _allowedChromeItems;
    PXStoryAudioSessionController * _audioSessionController;
    NSTimer * _autoHideChromeTimer;
    NSTimer * _autoHideMuteToggleButtonTimer;
    long long  _axStoredPlayState;
    bool  _axStoredPlayStateHasStoredPlayState;
    long long  _axStoredPlayStateLastViewModeOnUpdate;
    double  _bottomGradientLegibilityOverlayOpacity;
    PXStoryViewBufferingController * _bufferingController;
    double  _bufferingIndicatorVisibilityFraction;
    bool  _canShowMuteToggleButtonWhenChromeIsHidden;
    bool  _canToggleSelectMode;
    unsigned long long  _chromeItems;
    unsigned long long  _chromeItemsToBeDisplayedExternally;
    PXStoryViewChromeTitleInfo * _chromeTitleInfo;
    double  _chromeVisibilityFraction;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentPlaybackTime;
    PXStoryViewChromeTitleConfiguration * _customGeneralChromeTitleConfiguration;
    long long  _desiredPlayState;
    NSMapTable * _diagnosticHUDContentProvidersByType;
    long long  _diagnosticHUDType;
    bool  _didSelectAnyRelated;
    NSAttributedString * _displaySubtitle;
    NSAttributedString * _displayTitle;
    NSError * _displayedError;
    unsigned long long  _edgeToHighlight;
    <PXStoryErrorReporter> * _errorReporter;
    PXStoryErrorRepository * _errorRepository;
    NSMutableSet * _exportOperationIdentifiers;
    PXExtendedTraitCollection * _extendedTraitCollection;
    double  _fadeOutOverlayVisibilityFraction;
    bool  _hasAnyError;
    bool  _hasBeenActiveOnce;
    long long  _highlightedRelatedIndex;
    NSString * _identifier;
    bool  _isActionMenuOpen;
    bool  _isActive;
    bool  _isAllowedToPlayAnyMusicOrSound;
    bool  _isAnyMenuOpen;
    bool  _isAtPlaybackEnd;
    bool  _isAtPlaybackStart;
    bool  _isHUDVisible;
    bool  _isInSelectMode;
    bool  _isMuted;
    bool  _isPerformingAnyExportOperation;
    bool  _isPerformingCrossfadeTransitionToRelated;
    bool  _isPerformingViewControllerTransition;
    bool  _isReadingFromPhotosGridViewModel;
    bool  _isRelatedOverlayScrolledIntoView;
    bool  _isScrubbing;
    bool  _isUserPerformingRemoteGesture;
    NSDate * _lastMainModelChangeDate;
    long long  _lastMutedChangeReason;
    NSDate * _lastSkipSegmentActionDate;
    PXStoryPausableLoadingCoordinator * _loadingCoordinator;
    <PXDisplayAsset> * _mainAsset;
    <PXDisplayAssetCollection> * _mainAssetCollection;
    NSObject<OS_dispatch_queue> * _mainAssetInfoUpdateQueue;
    NSDateFormatter * _mainAssetInfoUpdateQueue_titleDateFormatter;
    PXInfoUpdater * _mainAssetInfoUpdater;
    PXStoryConfiguration * _mainConfiguration;
    PXStoryModel * _mainModel;
    double  _maximumIndividualTopChromeItemVisibilityFraction;
    PXMediaProvider * _mediaProvider;
    id  _modelChangeOrigin;
    PXStoryModel * _modelCoveredByRelated;
    PXStoryMusicPlayer * _musicPlayer;
    PXStoryMuteStateController * _muteStateController;
    double  _muteToggleButtonVisibilityFraction;
    bool  _needsStatusBarVisible;
    NSMutableSet * _openMenuIdentifiers;
    double  _outroFractionCompleted;
    PXStoryOverlayController * _overlayController;
    PXStoryPacingController * _pacingController;
    bool  _pausingPlaybackShowsChrome;
    PXStoryPersistenceController * _persistenceController;
    PXPhotosViewInteraction * _photosGridViewInteraction;
    PXPhotosViewModel * _photosGridViewModel;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playbackDuration;
    double  _playbackEndDarkening;
    double  _playbackFractionCompleted;
    NSObject<PXAnonymousViewController> * _presentingViewController;
    PXApplicationDisabledIdleTimerToken * _preventedDisplaySleepToken;
    NSMutableSet * _recentlyUsedAppleMusicSongIDs;
    NSMutableSet * _recentlyUsedFlexSongIDs;
    NSArray * _relatedConfigurations;
    PXStoryRelatedController * _relatedController;
    NSArray * _relatedModels;
    double  _relatedOverlayVisibilityFraction;
    PXStoryViewResourcesPreloadingController * _resourcesPreloadingController;
    PXStoryResourcesPreloadingCoordinator * _resourcesPreloadingCoordinator;
    UIImpactFeedbackGenerator * _scrubberFeedbackGenerator;
    struct { 
        long long firstSegmentIdentifier; 
        double secondSegmentMixFactor; 
        long long secondSegmentIdentifier; 
    }  _scrubberPosition;
    double  _scrubberVisibilityFraction;
    long long  _selectedRelatedIndex;
    bool  _shouldAutoHideChrome;
    bool  _shouldAutoHideMuteToggleButton;
    bool  _shouldAutoReplayPreference;
    bool  _shouldCountDownToUpNext;
    bool  _shouldPreventDisplaySleep;
    bool  _shouldShowErrorIndicator;
    bool  _shouldSimplifyUIForAccessibility;
    bool  _showSongInTitleWhenPaused;
    double  _solidLegibilityOverlayOpacity;
    PXStorySongController * _songController;
    NSObject<OS_dispatch_queue> * _storyQueue;
    double  _styleSwitcherVisibilityFraction;
    bool  _swipeDownDismissalPreviewEnabled;
    double  _swipeDownDismissalPreviewFraction;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } initialLocation; 
        struct CGPoint { 
            double x; 
            double y; 
        } location; 
        struct CGPoint { 
            double x; 
            double y; 
        } velocity; 
        <UICoordinateSpace> *coordinateSpace; 
        double initialTimestamp; 
        double lastTimestamp; 
    }  _swipeDownInteractionState;
    bool  _swipeDownTriggeringDismissal;
    <PXStoryPacingTimeSource> * _timeSource;
    double  _topGradientLegibilityOverlayOpacity;
    PXUpdater * _updater;
    <PXUserDefaultsDataSource> * _userDefaults;
    PXStoryValidationController * _validationController;
    PXGItemPlacement * _viewControllerDismissalTargetPlacement;
    <PXStoryViewEnvironmentModel> * _viewEnvironmentModel;
    <PXStoryViewLayoutSpec> * _viewLayoutSpec;
    PXStoryViewLayoutSpecManager * _viewLayoutSpecManager;
    long long  _viewMode;
    PXStoryViewModeTransition * _viewModeTransition;
    double  _volume;
    PXVolumeController * _volumeController;
    bool  _wantsChromeVisible;
    bool  _wantsFeedbackAction;
    bool  _wantsPlaybackEndDarkening;
    bool  _wantsRelatedOverlayNavigationButtonsVisible;
    bool  _wantsRelatedOverlayScrollable;
    bool  _wantsRelatedOverlayVisible;
    bool  _wantsScrubberVisible;
    bool  _wantsSoloPlayback;
}

@property (nonatomic, readonly) unsigned long long HUDContentChangeDescriptor;
@property (nonatomic, readonly) PXObservable *HUDObservable;
@property (nonatomic, readonly) PXStoryRelatedController *HUDRelatedController;
@property (nonatomic, readonly) PXStoryModel *HUDStoryModel;
@property (nonatomic, readonly) unsigned long long HUDStoryModelChangeDescriptor;
@property (nonatomic, readonly) unsigned long long HUDVisibiltyChangeDescriptor;
@property (nonatomic, readonly) <PXStoryViewActionPerformer> *actionPerformer;
@property (nonatomic, readonly) unsigned long long allowedChromeItems;
@property (nonatomic, readonly) bool allowsRelated;
@property (nonatomic, readonly) PXStoryAudioSessionController *audioSessionController;
@property (nonatomic, retain) NSTimer *autoHideChromeTimer;
@property (nonatomic, retain) NSTimer *autoHideMuteToggleButtonTimer;
@property (nonatomic, readonly) double bottomGradientLegibilityOverlayOpacity;
@property (nonatomic, readonly) PXStoryViewBufferingController *bufferingController;
@property (nonatomic, readonly) double bufferingIndicatorVisibilityFraction;
@property (nonatomic, readonly) bool canShowMuteToggleButtonWhenChromeIsHidden;
@property (nonatomic, readonly) bool canToggleSelectMode;
@property (nonatomic, readonly) unsigned long long chromeItems;
@property (nonatomic, readonly) unsigned long long chromeItemsToBeDisplayedExternally;
@property (nonatomic, retain) PXStoryViewChromeTitleInfo *chromeTitleInfo;
@property (nonatomic, readonly) double chromeVisibilityFraction;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentPlaybackTime;
@property (nonatomic, readonly, copy) PXStoryViewChromeTitleConfiguration *customGeneralChromeTitleConfiguration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long desiredPlayState;
@property (nonatomic, readonly) NSString *diagnosticDescriptionForAllHUDTypes;
@property (nonatomic, readonly) NSMapTable *diagnosticHUDContentProvidersByType;
@property (nonatomic) long long diagnosticHUDType;
@property (nonatomic, readonly) bool didSelectAnyRelated;
@property (nonatomic, retain) NSAttributedString *displaySubtitle;
@property (nonatomic, retain) NSAttributedString *displayTitle;
@property (nonatomic, readonly) NSError *displayedError;
@property (nonatomic, readonly) unsigned long long edgeToHighlight;
@property (nonatomic, readonly) unsigned long long endBehavior;
@property (nonatomic, readonly) <PXStoryErrorReporter> *errorReporter;
@property (nonatomic, readonly) PXStoryErrorRepository *errorRepository;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, readonly) double fadeOutOverlayVisibilityFraction;
@property (nonatomic) bool hasAnyError;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long highlightedRelatedIndex;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isActionMenuOpen;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isAnyMenuOpen;
@property (nonatomic, readonly) bool isAtPlaybackEnd;
@property (nonatomic) bool isAtPlaybackStart;
@property (nonatomic) bool isHUDVisible;
@property (nonatomic, readonly) bool isInSelectMode;
@property (nonatomic, readonly) bool isMuted;
@property (nonatomic, readonly) bool isPerformingAnyExportOperation;
@property (nonatomic) bool isPerformingCrossfadeTransitionToRelated;
@property (nonatomic, readonly) bool isPerformingViewControllerTransition;
@property (nonatomic, readonly) bool isReadingFromPhotosGridViewModel;
@property (nonatomic, readonly) bool isRelatedOverlayScrolledIntoView;
@property (nonatomic, readonly) bool isScrubbing;
@property (nonatomic, readonly) bool isUserPerformingRemoteGesture;
@property (nonatomic, retain) NSDate *lastMainModelChangeDate;
@property (nonatomic, readonly) long long lastMutedChangeReason;
@property (nonatomic, readonly) NSDate *lastSkipSegmentActionDate;
@property (nonatomic, readonly) PXStoryPausableLoadingCoordinator *loadingCoordinator;
@property (nonatomic, retain) <PXDisplayAsset> *mainAsset;
@property (nonatomic, readonly) <PXDisplayAssetCollection> *mainAssetCollection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *mainAssetInfoUpdateQueue;
@property (nonatomic, readonly) NSDateFormatter *mainAssetInfoUpdateQueue_titleDateFormatter;
@property (nonatomic, readonly) PXInfoUpdater *mainAssetInfoUpdater;
@property (nonatomic, readonly) PXStoryConfiguration *mainConfiguration;
@property (nonatomic, readonly) PXStoryModel *mainModel;
@property (nonatomic, readonly) double maximumIndividualTopChromeItemVisibilityFraction;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) id modelChangeOrigin;
@property (nonatomic) PXStoryModel *modelCoveredByRelated;
@property (nonatomic, readonly) PXStoryMusicPlayer *musicPlayer;
@property (nonatomic, readonly) PXStoryMuteStateController *muteStateController;
@property (nonatomic, readonly) double muteToggleButtonVisibilityFraction;
@property (nonatomic, readonly) bool needsStatusBarVisible;
@property (nonatomic, readonly) double outroFractionCompleted;
@property (nonatomic, readonly) PXStoryOverlayController *overlayController;
@property (nonatomic, readonly) PXStoryPacingController *pacingController;
@property (nonatomic) bool pausingPlaybackShowsChrome;
@property (nonatomic, readonly) PXStoryPersistenceController *persistenceController;
@property (nonatomic, retain) PXPhotosViewInteraction *photosGridViewInteraction;
@property (nonatomic, readonly) PXPhotosViewModel *photosGridViewModel;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } playbackDuration;
@property (nonatomic, readonly) double playbackEndDarkening;
@property (nonatomic, readonly) double playbackFractionCompleted;
@property (nonatomic, readonly) NSObject<PXAnonymousViewController> *presentingViewController;
@property (nonatomic, retain) PXApplicationDisabledIdleTimerToken *preventedDisplaySleepToken;
@property (nonatomic, readonly) NSMutableSet *recentlyUsedAppleMusicSongIDs;
@property (nonatomic, readonly) NSMutableSet *recentlyUsedFlexSongIDs;
@property (nonatomic, readonly, copy) NSArray *relatedConfigurations;
@property (nonatomic, readonly) PXStoryRelatedController *relatedController;
@property (nonatomic, readonly, copy) NSArray *relatedModels;
@property (nonatomic, readonly) double relatedOverlayVisibilityFraction;
@property (nonatomic, readonly) PXStoryViewResourcesPreloadingController *resourcesPreloadingController;
@property (nonatomic, readonly) PXStoryResourcesPreloadingCoordinator *resourcesPreloadingCoordinator;
@property (nonatomic, readonly) UIImpactFeedbackGenerator *scrubberFeedbackGenerator;
@property (nonatomic, readonly) struct { long long x1; double x2; long long x3; } scrubberPosition;
@property (nonatomic, readonly) double scrubberVisibilityFraction;
@property (nonatomic, readonly) long long selectedRelatedIndex;
@property (nonatomic, readonly) bool shouldAutoHideChrome;
@property (nonatomic) bool shouldAutoHideMuteToggleButton;
@property (nonatomic) bool shouldAutoReplayPreference;
@property (nonatomic, readonly) bool shouldCountDownToUpNext;
@property (nonatomic, readonly) bool shouldPreventDisplaySleep;
@property (nonatomic, readonly) bool shouldShowErrorIndicator;
@property (nonatomic, readonly) bool shouldSimplifyUIForAccessibility;
@property (nonatomic, readonly) bool showSongInTitleWhenPaused;
@property (nonatomic) double solidLegibilityOverlayOpacity;
@property (nonatomic, readonly) PXStorySongController *songController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storyQueue;
@property (nonatomic, readonly) double styleSwitcherVisibilityFraction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool swipeDownDismissalPreviewEnabled;
@property (nonatomic, readonly) double swipeDownDismissalPreviewFraction;
@property (nonatomic, readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; id x4; double x5; double x6; } swipeDownInteractionState;
@property (nonatomic, readonly) bool swipeDownTriggeringDismissal;
@property (nonatomic, readonly) <PXStoryPacingTimeSource> *timeSource;
@property (nonatomic, readonly) double topGradientLegibilityOverlayOpacity;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) <PXUserDefaultsDataSource> *userDefaults;
@property (nonatomic, readonly) PXStoryValidationController *validationController;
@property (nonatomic, readonly, copy) PXGItemPlacement *viewControllerDismissalTargetPlacement;
@property (nonatomic, readonly) <PXStoryViewEnvironmentModel> *viewEnvironmentModel;
@property (nonatomic, readonly) <PXStoryViewLayoutSpec> *viewLayoutSpec;
@property (nonatomic, readonly) PXStoryViewLayoutSpecManager *viewLayoutSpecManager;
@property (nonatomic, readonly) long long viewMode;
@property (nonatomic, retain) PXStoryViewModeTransition *viewModeTransition;
@property (nonatomic, readonly) double volume;
@property (nonatomic, readonly) PXVolumeController *volumeController;
@property (nonatomic, readonly) bool wantsChromeVisible;
@property (nonatomic, readonly) bool wantsFeedbackAction;
@property (nonatomic, readonly) bool wantsPlaybackEndDarkening;
@property (nonatomic, readonly) bool wantsRelatedOverlayNavigationButtonsVisible;
@property (nonatomic, readonly) bool wantsRelatedOverlayScrollable;
@property (nonatomic, readonly) bool wantsRelatedOverlayVisible;
@property (nonatomic, readonly) bool wantsScrubberVisible;
@property (nonatomic) bool wantsSoloPlayback;

+ (void)registerViewModelDesiringSoloPlayback:(id)arg1;
+ (void)unregisterViewModelDesiringSoloPlayback:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)HUDContentChangeDescriptor;
- (id)HUDObservable;
- (id)HUDRelatedController;
- (id)HUDStoryModel;
- (unsigned long long)HUDStoryModelChangeDescriptor;
- (unsigned long long)HUDVisibiltyChangeDescriptor;
- (void)_accessibilityStatusDidChange;
- (void)_attachAccessibilityHUDIfNeeded;
- (void)_autoHideChrome;
- (void)_autoHideMuteToggleButton;
- (void)_cancelAutoHideChromeTimer;
- (void)_cancelMuteToggleButtonAutoHideTimer;
- (void)_changeMainModelToRelatedAtIndex:(long long)arg1 changeOrigin:(unsigned long long)arg2;
- (id)_gridEffectForAsset:(id)arg1 colorGradingEffect:(id)arg2 entityManager:(id)arg3;
- (id)_internalRecoveryOptions;
- (void)_invalidateAXStoredPlayState;
- (void)_invalidateCanToggleSelectMode;
- (void)_invalidateControllersActiveness;
- (void)_invalidateDesiredPlayState;
- (void)_invalidateDiagnosticHUDState;
- (void)_invalidateDisplayTitleAndSubtitle;
- (void)_invalidateErrorIndicator;
- (void)_invalidateHUDSettings;
- (void)_invalidateIsAnyMenuOpen;
- (void)_invalidateIsInSelectMode;
- (void)_invalidateIsPerformingAnyExportOperation;
- (void)_invalidateLegibilityOverlayOpacity;
- (void)_invalidateMainAsset;
- (void)_invalidateMainAssetCollection;
- (void)_invalidateMainModelControllers;
- (void)_invalidateMainModelProperties;
- (void)_invalidateOutroFractionCompleted;
- (void)_invalidatePhotosGridEffectProvider;
- (void)_invalidatePlaybackDuration;
- (void)_invalidatePlaybackFractionCompleted;
- (void)_invalidateRecentlyUsedSongs;
- (void)_invalidateShouldAutoHideChrome;
- (void)_invalidateShouldAutoHideMuteToggleButton;
- (void)_invalidateShouldPreventDisplaySleep;
- (void)_invalidateSongControllerFailedAssets;
- (void)_invalidateSpecManager;
- (void)_invalidateViewLayoutSpec;
- (void)_invalidateViewMode;
- (void)_invalidateViewModeTransition;
- (void)_invalidateViewModelControllers;
- (void)_invalidateWantsRelatedOverlayScrollable;
- (void)_invalidateWantsSoloPlayback;
- (id)_mainAssetInfoUpdateQueue_infoForAsset:(id)arg1;
- (void)_readFromPhotosGridViewModel:(id /* block */)arg1;
- (void)_registerForAccessibilityEvents;
- (void)_replayMusic;
- (void)_resetSelectedRelatedIndex;
- (void)_resetShouldAutoHideMuteToggleButton;
- (void)_scheduleMuteToggleButtonAutoHide;
- (void)_setMainModel:(id)arg1 changeOrigin:(unsigned long long)arg2;
- (void)_setNeedsUpdate;
- (void)_unregisterForAccessibilityEvents;
- (void)_updateAXStoredPlayState;
- (void)_updateCanToggleSelectMode;
- (void)_updateControllersActiveness;
- (void)_updateDesiredPlayState;
- (void)_updateDiagnosticHUDState;
- (void)_updateDisplayTitleAndSubtitle;
- (void)_updateErrorIndicator;
- (void)_updateHUDSettings;
- (void)_updateIsAnyMenuOpen;
- (void)_updateIsInSelectMode;
- (void)_updateIsPerformingAnyExportOperation;
- (void)_updateLegibilityOverlayOpacity;
- (void)_updateMainAsset;
- (void)_updateMainAssetCollection;
- (void)_updateMainModelControllers;
- (void)_updateMainModelProperties;
- (void)_updateOutroFractionCompleted;
- (void)_updatePhotosGridEffectProvider;
- (void)_updatePlaybackDuration;
- (void)_updatePlaybackFractionCompleted;
- (void)_updateRecentlyUsedSongs;
- (void)_updateScrubberFeedbackGeneratorWithShouldImpact:(bool)arg1 shouldPrepare:(bool)arg2;
- (void)_updateShouldAutoHideChrome;
- (void)_updateShouldAutoHideMuteToggleButton;
- (void)_updateShouldPreventDisplaySleep;
- (void)_updateSongControllerFailedAssets;
- (void)_updateSpecManager;
- (void)_updateViewLayoutSpec;
- (void)_updateViewMode;
- (void)_updateViewModeTransition;
- (void)_updateViewModelControllers;
- (void)_updateWantsRelatedOverlayScrollable;
- (void)_updateWantsSoloPlayback;
- (id)actionPerformer;
- (void)addInternalActionsTo:(id)arg1;
- (void)addVisualDiagnosticsToContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)allowedChromeItems;
- (bool)allowsRelated;
- (bool)assetCollectionForcesAutoReplay;
- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)audioSessionController;
- (id)autoHideChromeTimer;
- (id)autoHideMuteToggleButtonTimer;
- (void)autoPlayUpNext;
- (double)bottomGradientLegibilityOverlayOpacity;
- (id)bufferingController;
- (double)bufferingIndicatorVisibilityFraction;
- (bool)canShowMuteToggleButtonWhenChromeIsHidden;
- (bool)canToggleSelectMode;
- (bool)checkIfShouldPreventAdvancingAndReturnReason:(out id*)arg1;
- (unsigned long long)chromeItems;
- (unsigned long long)chromeItemsToBeDisplayedExternally;
- (id)chromeTitleInfo;
- (double)chromeVisibilityFraction;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentPlaybackTime;
- (id)customGeneralChromeTitleConfiguration;
- (void)cycleHUDType;
- (void)dealloc;
- (void)deselectAllGridItems;
- (long long)desiredPlayState;
- (id)diagnosticDescriptionForAllHUDTypes;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticHUDContentProviderForType:(long long)arg1;
- (id)diagnosticHUDContentProvidersByType;
- (long long)diagnosticHUDType;
- (id)diagnosticTextForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (void)didPerformChanges;
- (bool)didSelectAnyRelated;
- (id)displaySubtitle;
- (id)displayTitle;
- (id)displayedError;
- (unsigned long long)edgeToHighlight;
- (unsigned long long)endBehavior;
- (id)errorReporter;
- (id)errorRepository;
- (id)extendedTraitCollection;
- (double)fadeOutOverlayVisibilityFraction;
- (bool)hasAnyError;
- (void)hideMuteToggleButtonWhenChromeIsHidden;
- (long long)highlightedRelatedIndex;
- (id)identifier;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 extendedTraitCollection:(id)arg2 timeSource:(id)arg3 mediaProvider:(id)arg4;
- (bool)isActionMenuOpen;
- (bool)isActive;
- (bool)isAnyMenuOpen;
- (bool)isAtPlaybackEnd;
- (bool)isAtPlaybackStart;
- (bool)isHUDVisible;
- (bool)isInSelectMode;
- (bool)isMuted;
- (bool)isPerformingAnyExportOperation;
- (bool)isPerformingCrossfadeTransitionToRelated;
- (bool)isPerformingViewControllerTransition;
- (bool)isReadingFromPhotosGridViewModel;
- (bool)isRelatedOverlayScrolledIntoView;
- (bool)isScrubbing;
- (bool)isUserPerformingRemoteGesture;
- (id)lastMainModelChangeDate;
- (long long)lastMutedChangeReason;
- (id)lastSkipSegmentActionDate;
- (void)liveResizeDidEnd;
- (void)liveResizeWillStart;
- (id)loadingCoordinator;
- (id)mainAsset;
- (id)mainAssetCollection;
- (id)mainAssetInfoUpdateQueue;
- (id)mainAssetInfoUpdateQueue_titleDateFormatter;
- (id)mainAssetInfoUpdater;
- (id)mainConfiguration;
- (id)mainModel;
- (id)makeDefaultActionsMenu;
- (double)maximumIndividualTopChromeItemVisibilityFraction;
- (id)mediaProvider;
- (id)memoryDebugInfo;
- (id)modelChangeOrigin;
- (id)modelCoveredByRelated;
- (id)musicPlayer;
- (id)muteStateController;
- (double)muteToggleButtonVisibilityFraction;
- (bool)needsStatusBarVisible;
- (void)networkStatusMonitor:(id)arg1 didChangeBestAvailableNetworkType:(struct { unsigned long long x1; bool x2; bool x3; })arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (double)outroFractionCompleted;
- (id)overlayController;
- (id)pacingController;
- (bool)pausingPlaybackShowsChrome;
- (void)performChanges:(id /* block */)arg1;
- (id)persistenceController;
- (id)photosGridViewInteraction;
- (id)photosGridViewModel;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackDuration;
- (double)playbackEndDarkening;
- (double)playbackFractionCompleted;
- (id)presentingViewController;
- (id)preventedDisplaySleepToken;
- (id)recentlyUsedAppleMusicSongIDs;
- (id)recentlyUsedFlexSongIDs;
- (id)relatedConfigurations;
- (id)relatedController;
- (id)relatedModels;
- (double)relatedOverlayVisibilityFraction;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)resourcesPreloadingController;
- (id)resourcesPreloadingCoordinator;
- (void)rewindToBeginning:(bool)arg1;
- (void)rewindToBeginning:(bool)arg1 rewindMusic:(bool)arg2;
- (id)scrubberFeedbackGenerator;
- (struct { long long x1; double x2; long long x3; })scrubberPosition;
- (double)scrubberVisibilityFraction;
- (void)selectAllGridItems;
- (void)selectRelatedAtIndex:(long long)arg1;
- (long long)selectedRelatedIndex;
- (void)setActionPerformer:(id)arg1;
- (void)setAllowedChromeItems:(unsigned long long)arg1;
- (void)setAudioSessionController:(id)arg1;
- (void)setAutoHideChromeTimer:(id)arg1;
- (void)setAutoHideMuteToggleButtonTimer:(id)arg1;
- (void)setBottomGradientLegibilityOverlayOpacity:(double)arg1;
- (void)setBufferingController:(id)arg1;
- (void)setBufferingIndicatorVisibilityFraction:(double)arg1;
- (void)setCanShowMuteToggleButtonWhenChromeIsHidden:(bool)arg1;
- (void)setCanToggleSelectMode:(bool)arg1;
- (void)setChromeItems:(unsigned long long)arg1;
- (void)setChromeItemsToBeDisplayedExternally:(unsigned long long)arg1;
- (void)setChromeTitleInfo:(id)arg1;
- (void)setChromeVisibilityFraction:(double)arg1;
- (void)setCurrentPlaybackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCustomGeneralChromeTitleConfiguration:(id)arg1;
- (void)setDesiredPlayState:(long long)arg1;
- (void)setDiagnosticHUDContentProvider:(id)arg1 forType:(long long)arg2;
- (void)setDiagnosticHUDType:(long long)arg1;
- (void)setDidSelectAnyRelated:(bool)arg1;
- (void)setDisplaySubtitle:(id)arg1;
- (void)setDisplayTitle:(id)arg1;
- (void)setDisplayedError:(id)arg1;
- (void)setEdgeToHighlight:(unsigned long long)arg1;
- (void)setFadeOutOverlayVisibilityFraction:(double)arg1;
- (void)setHasAnyError:(bool)arg1;
- (void)setHighlightedRelatedIndex:(long long)arg1;
- (void)setIsActionMenuOpen:(bool)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsAnyMenuOpen:(bool)arg1;
- (void)setIsAtPlaybackEnd:(bool)arg1;
- (void)setIsAtPlaybackStart:(bool)arg1;
- (void)setIsHUDVisible:(bool)arg1;
- (void)setIsInSelectMode:(bool)arg1;
- (void)setIsPerformingAnyExportOperation:(bool)arg1;
- (void)setIsPerformingCrossfadeTransitionToRelated:(bool)arg1;
- (void)setIsPerformingViewControllerTransition:(bool)arg1;
- (void)setIsRelatedOverlayScrolledIntoView:(bool)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (void)setIsUserPerformingRemoteGesture:(bool)arg1;
- (void)setLastMainModelChangeDate:(id)arg1;
- (void)setLastSkipSegmentActionDate:(id)arg1;
- (void)setMainAsset:(id)arg1;
- (void)setMainAssetCollection:(id)arg1;
- (void)setMainConfiguration:(id)arg1;
- (void)setMaximumIndividualTopChromeItemVisibilityFraction:(double)arg1;
- (void)setMenuIsOpen:(bool)arg1 withIdentifier:(id)arg2;
- (void)setModelCoveredByRelated:(id)arg1;
- (void)setMusicPlayer:(id)arg1;
- (void)setMuteStateController:(id)arg1;
- (void)setMuteToggleButtonVisibilityFraction:(double)arg1;
- (void)setMuted:(bool)arg1 reason:(long long)arg2;
- (void)setNeedsStatusBarVisible:(bool)arg1;
- (void)setOutroFractionCompleted:(double)arg1;
- (void)setOverlayController:(id)arg1;
- (void)setPacingController:(id)arg1;
- (void)setPausingPlaybackShowsChrome:(bool)arg1;
- (void)setPerformingExportOperation:(bool)arg1 withIdentifier:(id)arg2;
- (void)setPersistenceController:(id)arg1;
- (void)setPhotosGridViewInteraction:(id)arg1;
- (void)setPhotosGridViewModel:(id)arg1;
- (void)setPlaybackDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPlaybackEndDarkening:(double)arg1;
- (void)setPlaybackFractionCompleted:(double)arg1;
- (void)setPreventedDisplaySleepToken:(id)arg1;
- (void)setRelatedConfigurations:(id)arg1;
- (void)setRelatedController:(id)arg1;
- (void)setRelatedModels:(id)arg1;
- (void)setRelatedOverlayVisibilityFraction:(double)arg1;
- (void)setResourcesPreloadingController:(id)arg1;
- (void)setScrubberPosition:(struct { long long x1; double x2; long long x3; })arg1;
- (void)setScrubberVisibilityFraction:(double)arg1;
- (void)setSelectedRelatedIndex:(long long)arg1;
- (void)setShouldAutoHideChrome:(bool)arg1;
- (void)setShouldAutoHideMuteToggleButton:(bool)arg1;
- (void)setShouldAutoReplayPreference:(bool)arg1;
- (void)setShouldCountDownToUpNext:(bool)arg1;
- (void)setShouldPreventDisplaySleep:(bool)arg1;
- (void)setShouldShowErrorIndicator:(bool)arg1;
- (void)setShouldSimplifyUIForAccessibility:(bool)arg1;
- (void)setShowSongInTitleWhenPaused:(bool)arg1;
- (void)setSolidLegibilityOverlayOpacity:(double)arg1;
- (void)setSongController:(id)arg1;
- (void)setStyleSwitcherVisibilityFraction:(double)arg1;
- (void)setSwipeDownDismissalPreviewEnabled:(bool)arg1;
- (void)setSwipeDownDismissalPreviewFraction:(double)arg1;
- (void)setSwipeDownInteractionState:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; id x4; double x5; double x6; })arg1;
- (void)setSwipeDownTriggeringDismissal:(bool)arg1;
- (void)setTopGradientLegibilityOverlayOpacity:(double)arg1;
- (void)setValidationController:(id)arg1;
- (void)setViewControllerDismissalTargetPlacement:(id)arg1;
- (void)setViewEnvironmentModel:(id)arg1;
- (void)setViewLayoutSpec:(id)arg1;
- (void)setViewMode:(long long)arg1;
- (void)setViewModeTransition:(id)arg1;
- (void)setVolume:(double)arg1;
- (void)setWantsChromeVisible:(bool)arg1;
- (void)setWantsPlaybackEndDarkening:(bool)arg1;
- (void)setWantsRelatedOverlayNavigationButtonsVisible:(bool)arg1;
- (void)setWantsRelatedOverlayScrollable:(bool)arg1;
- (void)setWantsRelatedOverlayVisible:(bool)arg1;
- (void)setWantsScrubberVisible:(bool)arg1;
- (void)setWantsSoloPlayback:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldAutoHideChrome;
- (bool)shouldAutoHideMuteToggleButton;
- (bool)shouldAutoReplayPreference;
- (bool)shouldCountDownToUpNext;
- (bool)shouldPreventDisplaySleep;
- (bool)shouldShowErrorIndicator;
- (bool)shouldSimplifyUIForAccessibility;
- (bool)showSongInTitleWhenPaused;
- (bool)skipToBeginningOfSegmentWithIdentifier:(long long)arg1;
- (bool)skipToSegmentWithOffset:(long long)arg1;
- (bool)skipToSegmentWithOffset:(long long)arg1 byTappingEdge:(bool)arg2;
- (double)solidLegibilityOverlayOpacity;
- (id)songController;
- (id)storyQueue;
- (double)styleSwitcherVisibilityFraction;
- (bool)swipeDownDismissalPreviewEnabled;
- (double)swipeDownDismissalPreviewFraction;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; id x4; double x5; double x6; })swipeDownInteractionState;
- (bool)swipeDownTriggeringDismissal;
- (void)temporarilyShowMuteToggleButtonWhenChromeIsHidden;
- (id)timeSource;
- (void)toggleAutoReplayPreference;
- (void)toggleChrome;
- (void)toggleHUD;
- (void)togglePlayback;
- (double)topGradientLegibilityOverlayOpacity;
- (id)updater;
- (id)userDefaults;
- (id)validationController;
- (id)viewControllerDismissalTargetPlacement;
- (id)viewEnvironmentModel;
- (id)viewLayoutSpec;
- (id)viewLayoutSpecManager;
- (long long)viewMode;
- (id)viewModeTransition;
- (double)volume;
- (id)volumeController;
- (bool)wantsChromeVisible;
- (bool)wantsFeedbackAction;
- (bool)wantsPlaybackEndDarkening;
- (bool)wantsRelatedOverlayNavigationButtonsVisible;
- (bool)wantsRelatedOverlayScrollable;
- (bool)wantsRelatedOverlayVisible;
- (bool)wantsScrubberVisible;
- (bool)wantsSoloPlayback;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationService : NSObject <GEOPListStateCapturing, MNNavigationServiceClientInterface> {
    MNUserOptions * _cachedUserOptions;
    MNNavigationClientProxy * _clientProxy;
    MNNavigationDetails * _details;
    NSMutableDictionary * _disabledCapabilities;
    MNObserverHashTable * _navigationObservers;
    <MNNavigationServiceProxy> * _proxy;
    NSSet * _realtimeUpdates;
    MNNavigationServiceRemoteProxy * _remoteProxy;
    unsigned long long  _stateCaptureHandle;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) MNGuidanceLaneInfo *activeLaneInfo;
@property (nonatomic, readonly) MNNavTrayGuidanceEvent *activeNavTrayGuidanceEvent;
@property (nonatomic, readonly) NSArray *alternateRoutes;
@property (nonatomic, readonly) GEOComposedRoute *alternateWalkingRoute;
@property (nonatomic, readonly) MNDisplayETAInfo *alternateWalkingRouteDisplayETAInfo;
@property (nonatomic, readonly) MNArrivalInfo *arrivalInfo;
@property (nonatomic, readonly) MNBatteryChargeInfo *batteryChargeInfo;
@property (retain) MNUserOptions *cachedUserOptions;
@property (nonatomic, readonly) GEODirectionsRequest *currentRequest;
@property (nonatomic, readonly) GEODirectionsResponse *currentResponse;
@property (nonatomic, readonly) NSString *currentVoiceLanguage;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long desiredNavigationType;
@property (nonatomic, readonly) int desiredTransportType;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) NSString *destinationName;
@property (retain) MNNavigationDetails *details;
@property (readonly) MNNavigationDetails *details;
@property (nonatomic, readonly) MNDisplayETAInfo *displayEtaInfo;
@property (nonatomic, readonly) unsigned long long displayedStepIndex;
@property (nonatomic, readonly) double distanceUntilManeuver;
@property (nonatomic, readonly) double distanceUntilSign;
@property (nonatomic) bool guidancePromptsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) bool isApproachingWaypoint;
@property (nonatomic, readonly) bool isDetour;
@property (nonatomic, readonly) bool isInNavigatingState;
@property (nonatomic, readonly) bool isInPreArrivalState;
@property (nonatomic, readonly) bool isResumingMultipointRoute;
@property (nonatomic, readonly) bool isTrackingCurrentLocation;
@property (nonatomic, readonly) MNLocation *lastLocation;
@property (getter=isNavigatingFromTrace, nonatomic, readonly) bool navigatingFromTrace;
@property (nonatomic, readonly) MNObserverHashTable *navigationObservers;
@property (nonatomic, retain) MNObserverHashTable *navigationObservers;
@property (nonatomic, readonly) int navigationState;
@property (nonatomic, readonly) int navigationTransportType;
@property (nonatomic, readonly) long long navigationType;
@property (nonatomic, readonly) GEOComposedWaypoint *nextWaypoint;
@property (nonatomic, readonly) GEOComposedWaypoint *origin;
@property (nonatomic, readonly) GEOComposedWaypoint *originalDestination;
@property (nonatomic, readonly) NSString *originalDestinationName;
@property (nonatomic, readonly) GEOComposedWaypoint *originalOrigin;
@property (nonatomic, readonly) GEOComposedRoute *originalRoute;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } originalRouteDivergenceCoordinate;
@property (nonatomic, readonly) unsigned long long reconnectionRouteIndex;
@property (nonatomic, readonly) MNRouteDistanceInfo *remainingDistanceInfo;
@property (nonatomic, readonly) GEOResumeRouteHandle *resumeRouteHandle;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) unsigned long long routeIndex;
@property (nonatomic, readonly) long long simulationType;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long targetLegIndex;
@property (nonatomic, readonly) double timeUntilManeuver;
@property (nonatomic, readonly) double timeUntilSign;
@property (nonatomic, readonly) NSArray *traceBookmarks;
@property (nonatomic, readonly) double traceDuration;
@property (nonatomic) bool traceIsPlaying;
@property (nonatomic, readonly) NSString *tracePath;
@property (nonatomic) double tracePosition;
@property (nonatomic, readonly) long long upcomingAnchorPointIndex;
@property (nonatomic, readonly) MNVehicleParkingInfo *vehicleParkingInfo;
@property (nonatomic, readonly) unsigned long long voiceGuidanceLevel;

+ (unsigned long long)_hashForProtocol:(id)arg1;
+ (unsigned long long)clientInterfaceHash;
+ (unsigned long long)daemonInterfaceHash;
+ (id)sharedService;
+ (bool)supportsNavigation;

- (void).cxx_destruct;
- (id)_clientProxy;
- (void)_navigationServiceCallback_DidChangeVoiceGuidanceLevel:(id)arg1;
- (void)_navigationServiceCallback_DidEndNavigation:(id)arg1;
- (void)_navigationServiceCallback_DidReceiveRoutingServiceError:(id)arg1;
- (void)_navigationServiceCallback_DidUpdateArrivalInfo:(id)arg1;
- (void)_navigationServiceCallback_DidUpdateBackgroundWalkingRoute:(id)arg1;
- (void)_navigationServiceCallback_DidUpdateDisplayETA:(id)arg1;
- (void)_navigationServiceCallback_DidUpdateMatchedLocation:(id)arg1;
- (void)_navigationServiceCallback_DidUpdateNavTrayGuidance:(id)arg1;
- (void)_navigationServiceCallback_DidUpdateResumeRouteHandle:(id)arg1;
- (void)_navigationServiceCallback_DidUpdateStepIndex:(id)arg1;
- (void)_navigationServiceCallback_DidUpdateTargetLegIndex:(id)arg1;
- (void)_navigationServiceCallback_DidUpdateUpcomingAnchorPointIndex:(id)arg1;
- (void)_navigationServiceCallback_DidUpdateVehicleParkingInfo:(id)arg1;
- (void)_navigationServiceCallback_ShouldEnableIdleTimer:(id)arg1;
- (void)_navigationServiceCallback_WillEndNavigation:(id)arg1;
- (void)_navigationServiceCallback_WillStartNavigation:(id)arg1;
- (void)_resetDetails;
- (void)_updateWithCallback:(id)arg1;
- (id)activeLaneInfo;
- (id)activeNavTrayGuidanceEvent;
- (void)advanceToNextLeg;
- (unsigned long long)alternateRouteIndexForRoute:(id)arg1;
- (id)alternateRoutes;
- (id)alternateWalkingRoute;
- (id)alternateWalkingRouteDisplayETAInfo;
- (id)arrivalInfo;
- (id)batteryChargeInfo;
- (id)batteryChargeInfoForRoute:(id)arg1;
- (id)cachedUserOptions;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)changeOfflineMode:(unsigned char)arg1;
- (void)changeTransportType:(int)arg1 route:(id)arg2;
- (void)changeUserOptions:(id)arg1;
- (void)closeForClient:(id)arg1;
- (id)currentRequest;
- (id)currentResponse;
- (id)currentVoiceLanguage;
- (void)dealloc;
- (id)description;
- (long long)desiredNavigationType;
- (int)desiredTransportType;
- (id)destination;
- (id)destinationName;
- (id)details;
- (void)disableNavigationCapability:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (id)displayETAInfoForRoute:(id)arg1;
- (id)displayEtaInfo;
- (unsigned long long)displayedStepIndex;
- (double)distanceUntilManeuver;
- (double)distanceUntilSign;
- (void)enableNavigationCapability:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (id)etaRouteForRoute:(id)arg1;
- (void)forceReroute;
- (bool)guidancePromptsEnabled;
- (int)headingOrientation;
- (id)initPrivate;
- (void)insertWaypoint:(id)arg1;
- (bool)isApproachingWaypoint;
- (bool)isDetour;
- (bool)isInNavigatingState;
- (bool)isInPreArrivalState;
- (bool)isNavigatingFromTrace;
- (bool)isOpenForClient:(id)arg1;
- (bool)isResumingMultipointRoute;
- (bool)isTrackingCurrentLocation;
- (id)lastLocation;
- (id)navigationObservers;
- (void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(bool)arg2;
- (void)navigationServiceProxy:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationServiceProxy:(id)arg1 didDismissTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationServiceProxy:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didProcessSpeechEvent:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didReceiveTransitAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didRerouteWithRoute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationServiceProxy:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didSendNavigationServiceCallback:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationServiceProxy:(id)arg1 hideJunctionViewForId:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 showJunctionView:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationServiceProxy:(id)arg1 updateSignsWithARInfo:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 usePersistentDisplay:(bool)arg2;
- (void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 willProcessSpeechEvent:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 willRequestRealtimeUpdatesForRouteIDs:(id)arg2;
- (void)navigationServiceProxyBeginGuidanceUpdate:(id)arg1;
- (void)navigationServiceProxyDidArrive:(id)arg1;
- (void)navigationServiceProxyDidCancelReroute:(id)arg1;
- (void)navigationServiceProxyDidEnterPreArrivalState:(id)arg1;
- (void)navigationServiceProxyDidFinishLocationUpdate:(id)arg1;
- (void)navigationServiceProxyEndGuidanceUpdate:(id)arg1;
- (void)navigationServiceProxyHideSecondaryStep:(id)arg1;
- (void)navigationServiceProxyWillPauseNavigation:(id)arg1;
- (void)navigationServiceProxyWillReroute:(id)arg1;
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1;
- (int)navigationState;
- (int)navigationTransportType;
- (long long)navigationType;
- (id)nextWaypoint;
- (void)openForClient:(id)arg1;
- (id)origin;
- (id)originalDestination;
- (id)originalDestinationName;
- (id)originalOrigin;
- (id)originalRoute;
- (struct { unsigned int x1; float x2; })originalRouteDivergenceCoordinate;
- (void)pauseRealtimeUpdates;
- (id)realtimeUpdatesForAllRoutes;
- (id)realtimeUpdatesForRoutes:(id)arg1;
- (unsigned long long)reconnectionRouteIndex;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)remainingDistanceInfo;
- (id)remainingDistanceInfoForRoute:(id)arg1;
- (void)removeWaypointAtIndex:(unsigned long long)arg1;
- (void)repeatCurrentGuidance:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlert:(id /* block */)arg1;
- (void)rerouteWithWaypoints:(id)arg1;
- (void)resumeOriginalDestination;
- (void)resumeRealtimeUpdates;
- (id)resumeRouteHandle;
- (id)route;
- (unsigned long long)routeIndex;
- (void)setCachedUserOptions:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setGuidanceType:(unsigned long long)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setIsDisplayingNavigationTray:(bool)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setNavigationObservers:(id)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)setSimulationPosition:(double)arg1;
- (void)setSimulationSpeedMultiplier:(double)arg1;
- (void)setSimulationSpeedOverride:(double)arg1;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setVoiceGuidanceLevelOverride:(unsigned long long)arg1;
- (long long)simulationType;
- (bool)startNavigationWithDetails:(id)arg1 error:(out id*)arg2;
- (unsigned long long)state;
- (unsigned long long)stepIndex;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigationWithReason:(unsigned long long)arg1;
- (void)switchToDestinationRoute;
- (void)switchToRoute:(id)arg1;
- (unsigned long long)targetLegIndex;
- (id)ticketForDirectionsRequest:(id)arg1;
- (double)timeUntilManeuver;
- (double)timeUntilSign;
- (id)traceBookmarks;
- (double)traceDuration;
- (bool)traceIsPlaying;
- (id)tracePath;
- (double)tracePosition;
- (void)unregisterObserver:(id)arg1;
- (long long)upcomingAnchorPointIndex;
- (void)updateDestination:(id)arg1;
- (id)userOptions;
- (id)vehicleParkingInfo;
- (void)vibrateForPrompt:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (unsigned long long)voiceGuidanceLevel;

@end

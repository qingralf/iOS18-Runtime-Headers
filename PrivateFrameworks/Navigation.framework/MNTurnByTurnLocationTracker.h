/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTurnByTurnLocationTracker : MNLocationTracker <GEOPListStateCapturing, MNArrivalUpdaterDelegate, MNTrafficIncidentAlertUpdaterDelegate, Navigation.MNOfflineCoordinatorDelegate> {
    MNArrivalUpdater * _arrivalUpdater;
    unsigned long long  _consecutiveOffRouteCount;
    bool  _isNavigatingInLowGuidance;
    unsigned long long  _lastArrivalLegIndex;
    MNLocation * _lastKnownGoodLocationOnRoute;
    GEONavigationMapMatcher * _mapMatcher;
    unsigned long long  _numOfflineAttempts;
    unsigned long long  _numOnlineAttempts;
    _TtC10Navigation20MNOfflineCoordinator * _offlineCoordinator;
    struct { 
        double latitude; 
        double longitude; 
    }  _originCoordinate;
    GEOPathMatcher * _pathMatcher;
    GEODirectionsServiceRequest * _pendingRequest;
    MNLocation * _previousRerouteLocation;
    NSMutableArray * _rerouteDates;
    unsigned long long  _rerouteReason;
    NSDate * _startDate;
    unsigned long long  _stateCaptureHandle;
    MNTrafficIncidentAlertUpdater * _trafficIncidentAlertUpdater;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MNLocation *lastKnownGoodLocationOnRoute;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowRerouteForLocation:(id)arg1;
- (bool)_allowRerouteForLocation:(id)arg1 outError:(out id*)arg2;
- (bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (void)_cancelPendingRerouteRequest;
- (void)_changeOfflineMode:(unsigned char)arg1 reason:(unsigned long long)arg2 requestParameters:(id)arg3 errorHandler:(id /* block */)arg4;
- (int)_detectedMotionForLocation:(id)arg1;
- (void)_handleOffRouteForLocation:(id)arg1;
- (void)_handleSuccessfulRerouteRequest:(id)arg1 response:(id)arg2 waypoints:(id)arg3;
- (void)_handleWaypointRerouteForLocation:(id)arg1;
- (bool)_isLocation:(id)arg1 nearOrigin:(id)arg2;
- (bool)_isRoadFeatureInOppositeDirection:(id)arg1 ofCoordinate:(struct { double x1; double x2; })arg2 course:(double)arg3;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2;
- (unsigned long long)_modifiedStepIndexForMatchResult:(id)arg1 matchType:(unsigned long long)arg2;
- (id)_newMapMatcherForRoute:(id)arg1;
- (unsigned long long)_offRouteRequestType;
- (id)_overrideLocationForLocation:(id)arg1;
- (void)_requestRerouteWithReason:(unsigned long long)arg1 requestHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)_requestRerouteWithReason:(unsigned long long)arg1 requestParameters:(id)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (bool)_rerouteReasonSupportsDowngradingToOffline:(unsigned long long)arg1;
- (id)_rerouteRequestParametersForLocation:(id)arg1 transportType:(int)arg2;
- (id)_routeAttributesFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (int)_routeHintTypeForTransportType:(int)arg1;
- (void)_sendRouteHintForLocation:(id)arg1;
- (void)_setIsNavigatingInLowGuidance:(bool)arg1;
- (bool)_shouldAdvanceGuidanceToRouteMatch:(id)arg1;
- (id)_trafficIncidentAlertUpdater;
- (bool)_tryOnlineOfflineSwitchingWithRequestParameters:(id)arg1 rerouteReason:(unsigned long long)arg2 error:(id)arg3 errorHandler:(id /* block */)arg4;
- (void)_updateForArrivalAtLegIndex:(unsigned long long)arg1;
- (void)_updateForDepartureFromLegIndex:(unsigned long long)arg1 withReason:(unsigned long long)arg2;
- (void)_updateForLocation:(id)arg1;
- (void)_updateForNewRoute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)_updateForNewTrafficIncidentAlerts:(id)arg1;
- (void)_updateForNewTransportType:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)_updateForSelectedNewRoute:(id)arg1 alternateRoutes:(id)arg2;
- (void)_updateStateForLocation:(id)arg1;
- (void)_updateSwitchTransportTypeForLocation:(id)arg1;
- (void)advanceToNextLeg;
- (void)arrivalUpdater:(id)arg1 didArriveAtEndOfLegIndex:(unsigned long long)arg2;
- (void)arrivalUpdater:(id)arg1 didDepartFromLegIndex:(unsigned long long)arg2 withReason:(unsigned long long)arg3;
- (void)arrivalUpdater:(id)arg1 didEnterPreArrivalStateForLegIndex:(unsigned long long)arg2;
- (void)arrivalUpdater:(id)arg1 didTimeoutAtLegIndex:(unsigned long long)arg2 withReason:(unsigned long long)arg3;
- (void)arrivalUpdater:(id)arg1 didUpdateArrivalInfo:(id)arg2;
- (void)arrivalUpdater:(id)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;
- (void)arrivalUpdater:(id)arg1 shouldShowChargingInfoForWaypoint:(id)arg2;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)changeOfflineMode:(unsigned char)arg1;
- (void)changeTransportType:(int)arg1 route:(id)arg2;
- (void)dealloc;
- (void)forceOnRoute:(id)arg1 atLocation:(id)arg2;
- (void)forceRerouteWithReason:(unsigned long long)arg1;
- (bool)hasArrivedAtFinalDestination;
- (id)initForTestingWithRoute:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (void)insertWaypoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isRerouting;
- (id)lastKnownGoodLocationOnRoute;
- (void)offlineCoordinatorDidDetectOnline:(id)arg1;
- (void)removeWaypointAtIndex:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;
- (void)rerouteWithWaypoints:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setNavigationSessionState:(id)arg1;
- (void)startTrackingWithInitialLocation:(id)arg1 targetLegIndex:(unsigned long long)arg2;
- (void)stopTracking;
- (void)switchToDestinationRoute;
- (void)traceJumpedInTime;
- (void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(bool)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 forAlert:(id)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;
- (void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;
- (void)updateDestination:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateForETAUResponse:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)updateRequestForETAUpdate:(id)arg1;

@end

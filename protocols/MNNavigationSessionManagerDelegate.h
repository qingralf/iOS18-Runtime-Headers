/* Generated by RuntimeBrowser.
 */

@protocol MNNavigationSessionManagerDelegate <NSObject>

@required

- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didArriveAtWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didDismissTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didEnterPreArrivalStateForWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didFailRerouteWithError:(NSError *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didProcessSpeechEvent:(GEOComposedGuidanceEvent *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didReceiveTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didReceiveTransitAlert:(MNTransitAlert *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didReceiveTransitUpdates:(NSSet *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didRerouteWithRoute:(MNActiveRouteInfo *)arg2 location:(MNLocation *)arg3 withAlternateRoutes:(NSArray *)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didResumeNavigatingFromWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didSendNavigationServiceCallback:(MNNavigationServiceCallbackParameters *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteInfo *)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateETAResponseForRoute:(MNActiveRouteInfo *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdatePreviewRoutes:(NSArray *)arg2 withSelectedRouteIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateRouteWithNewRideSelection:(MNActiveRouteInfo *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateTracePlaybackDetails:(MNTracePlaybackDetails *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 hideJunctionViewForId:(NSUUID *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 hideLaneDirectionsForId:(NSUUID *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 newGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 proceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 shouldEndWithReason:(unsigned long long)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 showJunctionView:(MNGuidanceJunctionViewInfo *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 showLaneDirections:(MNGuidanceLaneInfo *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 triggerHaptics:(int)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 updateSignsWithARInfo:(NSArray *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 updateSignsWithInfo:(MNGuidanceSignInfo *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 updatedGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 usePersistentDisplay:(bool)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 willProcessSpeechEvent:(GEOComposedGuidanceEvent *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 willSendTransitUpdateRequestForRouteIDs:(NSSet *)arg2;
- (void)navigationSessionManagerBeginGuidanceUpdate:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerDidArrive:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerDidCancelReroute:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerDidEnterPreArrivalState:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerDidFinishLocationUpdate:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerEndGuidanceUpdate:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerHideSecondaryStep:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerWillPause:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerWillReroute:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerWillResumeFromPause:(MNNavigationSessionManager *)arg1;

@end
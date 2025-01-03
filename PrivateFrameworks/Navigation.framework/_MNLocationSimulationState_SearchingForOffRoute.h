/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface _MNLocationSimulationState_SearchingForOffRoute : _MNLocationSimulationState_FollowingRoute {
    NSMutableArray * _candidateRoads;
    NSMutableSet * _checkedRoads;
    GEOMapFeatureAccess * _mapFeatureAccess;
    GEOComposedRoute * _routeToOffRouteLocation;
    bool  _shouldStartSearchOnNextLocation;
}

- (void).cxx_destruct;
- (void)_findFirstJunction:(id /* block */)arg1;
- (void)_findOffRouteLocationWithMatchedSegments:(id)arg1 stepFinishedHandler:(id /* block */)arg2;
- (void)_findRouteToOffRouteLocation;
- (void)_findRouteToOffRouteLocation:(id)arg1 stepFinishedHandler:(id /* block */)arg2;
- (struct { double x1; double x2; double x3; })_nextOffRouteTarget;
- (id)_routeToFollow;
- (id)nextSimulatedLocationWithElapsedTime:(double)arg1;
- (void)onEnterState;
- (long long)type;
- (void)updateWithRouteInfo:(id)arg1 rerouteReason:(unsigned long long)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsServiceRequestBuilder : NSObject {
    GEODirectionsServiceRequestParameters * _parameters;
    unsigned long long  _type;
    NSArray * _waypoints;
}

+ (id)builderForRequestType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_geoWaypointTypedForWaypoint:(id)arg1 voiceLanguage:(id)arg2;
- (void)_logBuiltDirectionsRequest:(id)arg1;
- (id)_parameters;
- (void)_populateMiscFieldsInDirectionsRequest:(id)arg1;
- (void)_populateOriginalWaypointRouteInDirectionsRequest:(id)arg1;
- (void)_populateRouteAttributesInDirectionsRequest:(id)arg1;
- (void)_populateWaypointTypedInDirectionsRequest:(id)arg1;
- (unsigned long long)_type;
- (id)_waypoints;
- (id)_waypointsFromCurrentLocationAndRoute;
- (id)_waypointsFromRequestParameters;
- (id)buildDirectionsRequestWithParameters:(id)arg1;
- (int)directionsRequestFeedbackPurpose;
- (id)geoOriginalWaypointRoute;
- (id)initWithType:(unsigned long long)arg1;
- (int)originalWaypointRoutePurpose;
- (void)setMiscFieldsInDirectionsRequest:(id)arg1;
- (bool)shouldAllowTimepoint;
- (bool)shouldUseFullLegForOriginalWaypointRoute;
- (id)typedWaypointsForDirectionsRequest;
- (void)verifyWaypointsForDirectionsRequest:(id)arg1;
- (id)waypointsForRoute;

@end
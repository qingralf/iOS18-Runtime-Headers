/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteInfo : NSObject {
    NSArray * _anchorpoints;
    NSArray * _debugAnnotations;
    VKRouteEtaDescription * _etaDescription;
    NSArray * _exitSignAnnotations;
    bool  _hasFocus;
    GEOComposedRoute * _route;
    VKRouteRangeAnnotationInfo * _routeEtaAnnotation;
    NSArray * _routeLegEtaAnnotations;
    NSArray * _routeNameAnnotations;
    NSArray * _trafficAnnotations;
    NSArray * _travelDirectionAnnotations;
    NSArray * _waypoints;
}

@property (nonatomic, readonly) NSArray *anchorpoints;
@property (nonatomic, retain) NSArray *debugAnnotations;
@property (nonatomic, retain) VKRouteEtaDescription *etaDescription;
@property (nonatomic, readonly) NSArray *exitSignAnnotations;
@property (nonatomic) bool hasFocus;
@property (nonatomic, readonly) bool hasRouteEta;
@property (nonatomic, readonly) bool hasRouteLegEtas;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, retain) NSArray *routeLegEtaAnnotations;
@property (nonatomic, retain) NSArray *routeNameAnnotations;
@property (nonatomic, readonly) NSArray *trafficAnnotations;
@property (nonatomic, retain) NSArray *travelDirectionAnnotations;
@property (nonatomic, readonly) NSArray *waypoints;

- (void).cxx_destruct;
- (void)_assignIndexPositions;
- (void)_decodeVisualInfos:(id)arg1 withRouteEtaType:(long long)arg2 into:(id)arg3 needsDescription:(bool)arg4;
- (bool)_isHikingRoute;
- (bool)_isReRoute;
- (void)_processAnchorpoints:(id)arg1;
- (void)_processWaypoints:(id)arg1;
- (id)anchorpoints;
- (id)debugAnnotations;
- (id)etaDescription;
- (id)exitSignAnnotations;
- (bool)hasFocus;
- (bool)hasRouteEta;
- (bool)hasRouteLegEtas;
- (id)initWithAnchorPoint:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2;
- (id)route;
- (id)routeLegEtaAnnotations;
- (id)routeNameAnnotations;
- (void)setDebugAnnotations:(id)arg1;
- (void)setEtaDescription:(id)arg1;
- (void)setHasFocus:(bool)arg1;
- (void)setRouteLegEtaAnnotations:(id)arg1;
- (void)setRouteNameAnnotations:(id)arg1;
- (void)setTravelDirectionAnnotations:(id)arg1;
- (id)trafficAnnotations;
- (id)travelDirectionAnnotations;
- (void)visitAnnotations:(id /* block */)arg1;
- (id)waypointForWaypoint:(id)arg1;
- (id)waypointInfoForWaypoint:(id)arg1;
- (id)waypoints;

@end

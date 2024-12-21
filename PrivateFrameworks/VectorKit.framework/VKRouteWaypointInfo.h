/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteWaypointInfo : NSObject {
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _adjacentRouteCoordinate;
    NSString * _annotationText;
    GEOComposedWaypointDisplayInfo * _displayInfo;
    bool  _isAtEnd;
    bool  _isAtStart;
    bool  _isOnSelectedRoute;
    unsigned long long  _legIndex;
    bool  _needsTextUpdate;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _polylineCoordinate;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _routeCoordinate;
    unsigned char  _type;
    GEOComposedWaypoint * _waypoint;
    unsigned long long  _waypointIndex;
    unsigned char  _when;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; } adjacentRouteCoordinate;
@property (nonatomic, readonly) NSString *annotationText;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } coordinate;
@property (nonatomic) bool isAtEnd;
@property (nonatomic) bool isAtStart;
@property (nonatomic) bool isOnSelectedRoute;
@property (nonatomic, readonly) unsigned long long legIndex;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool needsTextUpdate;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } polylineCoordinate;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } routeCoordinate;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) GEOComposedWaypoint *waypoint;
@property (nonatomic) unsigned long long waypointIndex;
@property (nonatomic) unsigned char when;

+ (id)newRouteWaypointForAnchorpoint:(id)arg1 legIndex:(unsigned long long)arg2 routeCoordinate:(struct { double x1; double x2; double x3; })arg3 adjacentRouteCoordinate:(struct { double x1; double x2; double x3; })arg4 polylineCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg5;
+ (id)newRouteWaypointForWaypoint:(id)arg1 displayInfo:(id)arg2 legIndex:(unsigned long long)arg3 routeCoordinate:(struct { double x1; double x2; double x3; })arg4 adjacentRouteCoordinate:(struct { double x1; double x2; double x3; })arg5 polylineCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg6;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_anchorpoint;
- (bool)_isAnchorpoint;
- (struct { double x1; double x2; double x3; })adjacentRouteCoordinate;
- (id)annotationText;
- (struct { double x1; double x2; double x3; })coordinate;
- (id)initWithWaypoint:(id)arg1 displayInfo:(id)arg2 legIndex:(unsigned long long)arg3 routeCoordinate:(struct { double x1; double x2; double x3; })arg4 adjacentRouteCoordinate:(struct { double x1; double x2; double x3; })arg5 polylineCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg6 waypointType:(unsigned char)arg7;
- (bool)isAtEnd;
- (bool)isAtStart;
- (bool)isOnSelectedRoute;
- (unsigned long long)legIndex;
- (unsigned long long)muid;
- (id)name;
- (bool)needsTextUpdate;
- (struct PolylineCoordinate { unsigned int x1; float x2; })polylineCoordinate;
- (struct { double x1; double x2; double x3; })routeCoordinate;
- (void)setIsAtEnd:(bool)arg1;
- (void)setIsAtStart:(bool)arg1;
- (void)setIsOnSelectedRoute:(bool)arg1;
- (void)setNeedsTextUpdate:(bool)arg1;
- (void)setWaypointIndex:(unsigned long long)arg1;
- (void)setWhen:(unsigned char)arg1;
- (id)styleAttributes;
- (unsigned char)type;
- (id)waypoint;
- (unsigned long long)waypointIndex;
- (unsigned char)when;

@end
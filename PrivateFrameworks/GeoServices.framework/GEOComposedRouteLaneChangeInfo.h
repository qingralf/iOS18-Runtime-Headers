/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteLaneChangeInfo : NSObject <NSSecureCoding> {
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _endCoordinate;
    unsigned long long  _laneCount;
    struct GEOPolylineCoordinateRange { 
        struct { 
            unsigned int index; 
            float offset; 
        } start; 
        struct { 
            unsigned int index; 
            float offset; 
        } end; 
    }  _routeCoordinateRange;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _startCoordinate;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; } endCoordinate;
@property (nonatomic, readonly) unsigned long long laneCount;
@property (nonatomic, readonly) struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; } routeCoordinateRange;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } startCoordinate;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; })endCoordinate;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoLaneChangeInfo:(id)arg1 pathIndex:(unsigned long long)arg2 coordinates:(id)arg3 distanceOffset:(double)arg4;
- (unsigned long long)laneCount;
- (struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })routeCoordinateRange;
- (struct { double x1; double x2; double x3; })startCoordinate;

@end

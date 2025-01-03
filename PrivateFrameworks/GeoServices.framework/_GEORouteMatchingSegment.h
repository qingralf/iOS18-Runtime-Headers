/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORouteMatchingSegment : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _endCoordinate;
    float  _endRouteCoordinateOffset;
    struct { 
        double latitude; 
        double longitude; 
    }  _startCoordinate;
    unsigned int  _startPointIndex;
    float  _startRouteCoordinateOffset;
    GEOComposedRouteStep * _step;
}

- (void).cxx_destruct;
- (id)description;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOCandidateRouteMatch : NSObject <NSCopying> {
    double  _courseDelta;
    double  _courseMatchScore;
    double  _courseWeight;
    double  _distanceAlongRouteFromPreviousMatch;
    double  _distanceFromRoute;
    double  _distanceMatchScore;
    double  _distanceTraveledMatchScore;
    double  _distanceTraveledWeight;
    double  _distanceWeight;
    bool  _isGoodMatch;
    struct { 
        double latitude; 
        double longitude; 
    }  _locationCoordinate;
    double  _maxCourseDelta;
    double  _maxDistance;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
    double  _score;
    NSArray * _scoreInfos;
    _GEORouteMatchingSegment * _segment;
    unsigned long long  _stepIndex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithRoute:(id)arg1;

@end

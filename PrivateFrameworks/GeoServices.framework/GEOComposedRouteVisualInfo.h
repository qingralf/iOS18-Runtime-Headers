/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteVisualInfo : NSObject <NSSecureCoding> {
    <GEOServerFormattedString> * _detail;
    GEOComposedString * _detailString;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _endCoordinate;
    <GEOTransitArtworkDataSource> * _icon;
    NSArray * _laneChangeInfos;
    GEOComposedString * _phoneticName;
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
    NSString * _shieldText;
    int  _shieldType;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _startCoordinate;
    GEOStyleAttributes * _styleAttributes;
    <GEOServerFormattedString> * _title;
    GEOComposedString * _titleString;
    unsigned long long  _type;
}

@property (nonatomic, readonly) <GEOServerFormattedString> *detail;
@property (nonatomic, readonly) GEOComposedString *detailString;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } endCoordinate;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *icon;
@property (nonatomic, readonly) NSArray *laneChangeInfos;
@property (nonatomic, readonly) GEOComposedString *phoneticName;
@property (nonatomic, readonly) struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; } routeCoordinateRange;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) int shieldType;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } startCoordinate;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) <GEOServerFormattedString> *title;
@property (nonatomic, readonly) GEOComposedString *titleString;
@property (nonatomic, readonly) unsigned long long type;

+ (id)_infosForRouteLineStyleInfos:(id)arg1 pathIndex:(unsigned long long)arg2 coordinates:(id)arg3 updateable:(bool)arg4;
+ (id)cameraInfosForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2 updateable:(bool)arg3;
+ (id)cameraInfosForRoute:(id)arg1 etaRoute:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)visualInfosForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2 updateable:(bool)arg3;
+ (id)visualInfosForRoute:(id)arg1 etaRoute:(id)arg2;
+ (id)visualInfosForRouteLabelsForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_typeForStyleAttribute:(id)arg1;
- (id)description;
- (id)detail;
- (id)detailString;
- (void)encodeWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; })endCoordinate;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoNameInfo:(id)arg1 routeLegRange:(id)arg2 pathIndex:(unsigned long long)arg3 coordinates:(id)arg4;
- (id)initWithGeoRouteLineStyleInfo:(id)arg1 pathIndex:(unsigned long long)arg2 coordinates:(id)arg3 distanceOffset:(double)arg4;
- (id)initWithType:(unsigned long long)arg1 title:(id)arg2 detail:(id)arg3 routeCoordinate:(struct { unsigned int x1; float x2; })arg4 locationCoordinate:(struct { double x1; double x2; double x3; })arg5;
- (id)initWithType:(unsigned long long)arg1 title:(id)arg2 detail:(id)arg3 routeCoordinateRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg4 startLocationCoordinate:(struct { double x1; double x2; double x3; })arg5 endLocationCoordinate:(struct { double x1; double x2; double x3; })arg6;
- (id)laneChangeInfos;
- (id)phoneticName;
- (struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })routeCoordinateRange;
- (id)shieldText;
- (int)shieldType;
- (struct { double x1; double x2; double x3; })startCoordinate;
- (id)styleAttributes;
- (id)title;
- (id)titleString;
- (unsigned long long)type;

@end
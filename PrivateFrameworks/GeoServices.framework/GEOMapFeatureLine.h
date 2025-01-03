/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureLine : NSObject <NSCopying> {
    unsigned long long  _coordinateCount;
    struct { double x1; double x2; double x3; } * _coordinates3d;
    bool  _isFlipped;
    double  _length;
    struct { double x1; double x2; } * _tempCoordinates2d;
}

@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) struct { double x1; double x2; }*coordinates;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; }*coordinates3d;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } firstCoordinate;
@property (nonatomic, readonly) struct { double x1; double x2; } firstCoordinate2D;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } lastCoordinate;
@property (nonatomic, readonly) struct { double x1; double x2; } lastCoordinate2D;
@property (nonatomic, readonly) double length;

- (id)_containingTile;
- (float*)_elevationsForSection:(unsigned long long)arg1 outCount:(out unsigned long long*)arg2;
- (id)_formattedProtobufEnum:(id)arg1;
- (struct GeoCodecsVectorTilePoint { float x1; float x2; }*)_tilePointsForSection:(unsigned long long)arg1 outCount:(out unsigned long long*)arg2;
- (struct { double x1; double x2; double x3; })closestCoordinateFromCoordinate:(struct { double x1; double x2; double x3; })arg1 outDistance:(out double*)arg2;
- (double)closestDistance2DFromCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (unsigned long long)coordinateCount;
- (struct { double x1; double x2; }*)coordinates;
- (struct { double x1; double x2; double x3; }*)coordinates3d;
- (id)coordinatesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct { double x1; double x2; double x3; })firstCoordinate;
- (struct { double x1; double x2; })firstCoordinate2D;
- (id)init;
- (struct { double x1; double x2; double x3; })lastCoordinate;
- (struct { double x1; double x2; })lastCoordinate2D;
- (double)length;

@end

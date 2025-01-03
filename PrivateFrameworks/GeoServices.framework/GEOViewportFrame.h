/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOViewportFrame : NSObject {
    double  _altitude;
    float  _distance;
    bool  _hasViewTargetBounds;
    float  _heading;
    double  _latitude;
    double  _longitude;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _maxViewTargetBounds;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _minViewTargetBounds;
    float  _pitch;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) float distance;
@property (nonatomic, readonly) bool hasViewTargetBounds;
@property (nonatomic, readonly) float heading;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } maxViewTargetBounds;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } minViewTargetBounds;
@property (nonatomic, readonly) float pitch;

- (double)altitude;
- (float)distance;
- (bool)hasViewTargetBounds;
- (float)heading;
- (id)initWithAltitude:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 heading:(float)arg4 pitch:(float)arg5 distance:(float)arg6 minViewTargetBounds:(struct { double x1; double x2; double x3; })arg7 maxViewTargetBounds:(struct { double x1; double x2; double x3; })arg8 hasViewTargetBounds:(bool)arg9;
- (id)initWithGEOPDViewportFrame:(id)arg1;
- (double)latitude;
- (double)longitude;
- (struct { double x1; double x2; double x3; })maxViewTargetBounds;
- (struct { double x1; double x2; double x3; })minViewTargetBounds;
- (float)pitch;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLTripSegmentLocation : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude;
    double  _altitudeAccuracy;
    double  _course;
    double  _courseAccuracy;
    double  _horizontalAccuracy;
    double  _latitude;
    int  _locType;
    int  _locTypeStart;
    int  _locTypeStop;
    double  _longitude;
    int  _mapsFormOfWay;
    int  _mapsRoadClass;
    double  _rawLatitude;
    double  _rawLongitude;
    int  _rawReferenceFrame;
    unsigned long long  _reconstructionType;
    int  _referenceFrame;
    int  _signalEnvironmentType;
    double  _speed;
    double  _speedAccuracy;
    NSDate * _timestamp;
}

@property (nonatomic) double altitude;
@property (nonatomic) double altitudeAccuracy;
@property (nonatomic) double course;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) int locType;
@property (nonatomic) int locTypeStart;
@property (nonatomic) int locTypeStop;
@property (nonatomic) double longitude;
@property (nonatomic) int mapsFormOfWay;
@property (nonatomic) int mapsRoadClass;
@property (nonatomic) double rawLatitude;
@property (nonatomic) double rawLongitude;
@property (nonatomic, readonly) int rawReferenceFrame;
@property (nonatomic) unsigned long long reconstructionType;
@property (nonatomic, readonly) int referenceFrame;
@property (nonatomic) int signalEnvironmentType;
@property (nonatomic) double speed;
@property (nonatomic) double speedAccuracy;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (double)altitude;
- (double)altitudeAccuracy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (double)courseAccuracy;
- (void)dealloc;
- (double)distanceFromLatitude:(double)arg1 longitude:(double)arg2;
- (double)distanceFromLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)horizontalAccuracy;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3;
- (id)initWithTime:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 altitude:(double)arg9 altitudeAccuracy:(double)arg10 locType:(int)arg11;
- (id)initWithTime:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 altitude:(double)arg9 altitudeAccuracy:(double)arg10 locType:(int)arg11 referenceFrame:(int)arg12;
- (id)initWithTime:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 altitude:(double)arg9 altitudeAccuracy:(double)arg10 locType:(int)arg11 referenceFrame:(int)arg12 signalEnvironmentType:(int)arg13;
- (bool)isCourseValid;
- (bool)isDenseUrbanSignalEnvironment;
- (bool)isFoliageSignalEnvironment;
- (bool)isGPSLocationType;
- (bool)isGoodGPSFix;
- (bool)isGoodGPSFixWithGoodCourse;
- (bool)isInertialIntegrated;
- (bool)isLinearInterpolated;
- (bool)isLoiLocationType;
- (bool)isMapMatched;
- (bool)isOriginalLocationType;
- (bool)isRuralSignalEnvironment;
- (bool)isSpeedValid;
- (bool)isUrbanSignalEnvironment;
- (bool)isWiFiLocationType;
- (double)latitude;
- (int)locType;
- (int)locTypeStart;
- (int)locTypeStop;
- (double)longitude;
- (int)mapsFormOfWay;
- (int)mapsRoadClass;
- (double)rawLatitude;
- (double)rawLongitude;
- (int)rawReferenceFrame;
- (unsigned long long)reconstructionType;
- (int)referenceFrame;
- (void)setAltitude:(double)arg1;
- (void)setAltitudeAccuracy:(double)arg1;
- (void)setCourse:(double)arg1;
- (void)setCourseAccuracy:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLocType:(int)arg1;
- (void)setLocTypeStart:(int)arg1;
- (void)setLocTypeStop:(int)arg1;
- (void)setLocationReconstructionType:(unsigned long long)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMapsFormOfWay:(int)arg1;
- (void)setMapsRoadClass:(int)arg1;
- (void)setRawLatitude:(double)arg1;
- (void)setRawLatitude:(double)arg1 longitude:(double)arg2 referenceFrame:(int)arg3;
- (void)setRawLongitude:(double)arg1;
- (void)setReconstructionType:(unsigned long long)arg1;
- (void)setSignalEnvironmentType:(int)arg1;
- (void)setSpeed:(double)arg1;
- (void)setSpeedAccuracy:(double)arg1;
- (void)setStartLocationType:(int)arg1;
- (void)setStartLocationType:(int)arg1 andStopLocationType:(int)arg2;
- (void)setStopLocationType:(int)arg1;
- (int)signalEnvironmentType;
- (double)speed;
- (double)speedAccuracy;
- (id)timestamp;
- (void)updateAltitude:(double)arg1 andAltitudeAccuracy:(double)arg2;
- (void)updateCourse:(double)arg1 andCourseAccuracy:(double)arg2;
- (void)updateLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(double)arg3 referenceFrame:(int)arg4;
- (void)updateSpeed:(double)arg1 andSpeedAccuracy:(double)arg2;

@end

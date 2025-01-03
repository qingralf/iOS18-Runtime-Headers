/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface CinematicFramingSessionInputMetadata : NSObject <NSSecureCoding> {
    float  _additionalCameraRotation;
    float  _additionalInputCameraRotation;
    float  _additionalOutputCameraRotation;
    float  _aspectRatio;
    NSArray * _bodyDetections;
    NSDictionary * _calibrationDictionary;
    bool  _calibrationDistortionCoefficientsSupported;
    bool  _calibrationValidMaxRadiusSupported;
    int  _cameraOrientation;
    NSDictionary * _detectedObjectsInfo;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _deviceToCameraSpaceTransform;
    NSArray * _faceDetections;
    bool  _frontCameraHas180DegreesRotation;
    float  _gravityX;
    float  _gravityY;
    float  _gravityZ;
    bool  _hasDeviceToCameraSpaceTransform;
    bool  _hasGravity;
    NSString * _portType;
    int  _sensorID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property (nonatomic) float additionalCameraRotation;
@property (nonatomic) float additionalInputCameraRotation;
@property (nonatomic) float additionalOutputCameraRotation;
@property (nonatomic, readonly) float aspectRatio;
@property (nonatomic, readonly) NSArray *bodyDetections;
@property (nonatomic, readonly) NSDictionary *calibrationDataDictionary;
@property (nonatomic) int cameraOrientation;
@property (nonatomic, readonly) NSDictionary *detectedObjectsInfo;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } deviceToCameraSpaceTransform;
@property (nonatomic, readonly) NSArray *faceDetections;
@property (nonatomic) bool frontCameraHas180DegreesRotation;
@property (nonatomic, readonly) float gravityX;
@property (nonatomic, readonly) float gravityY;
@property (nonatomic, readonly) float gravityZ;
@property (nonatomic, readonly) bool hasDeviceToCameraSpaceTransform;
@property (nonatomic, readonly) bool hasGravity;
@property (nonatomic, copy) NSString *portType;
@property (nonatomic, readonly) int sensorID;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_parseDetectedObjectsInfoWithFilteredFaceIDs:(id)arg1 filteredBodyIDs:(id)arg2;
- (id)_validateCalibrationDictionary:(id)arg1;
- (float)additionalCameraRotation;
- (float)additionalInputCameraRotation;
- (float)additionalOutputCameraRotation;
- (float)aspectRatio;
- (id)bodyDetections;
- (id)calibrationDataDictionary;
- (int)cameraOrientation;
- (id)detectedObjectsInfo;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })deviceToCameraSpaceTransform;
- (void)encodeWithCoder:(id)arg1;
- (id)faceDetections;
- (bool)frontCameraHas180DegreesRotation;
- (float)gravityX;
- (float)gravityY;
- (float)gravityZ;
- (bool)hasDeviceToCameraSpaceTransform;
- (bool)hasGravity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectedObjectsInfo:(id)arg1 calibrationData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 aspectRatio:(float)arg4;
- (id)initWithDetectedObjectsInfo:(id)arg1 calibrationData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 aspectRatio:(float)arg4 sensorID:(int)arg5;
- (id)initWithDetectedObjectsInfo:(id)arg1 calibrationData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 aspectRatio:(float)arg4 sensorID:(int)arg5 filteredFaceIDs:(id)arg6 filteredBodyIDs:(id)arg7;
- (id)initWithDetectedObjectsInfo:(id)arg1 calibrationData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 aspectRatio:(float)arg4 sensorID:(int)arg5 filteredFaceIDs:(id)arg6 filteredBodyIDs:(id)arg7 calibrationDistortionCoefficientsSupported:(bool)arg8 calibrationValidMaxRadiusSupported:(bool)arg9;
- (id)portType;
- (int)sensorID;
- (void)setAdditionalCameraRotation:(float)arg1;
- (void)setAdditionalInputCameraRotation:(float)arg1;
- (void)setAdditionalOutputCameraRotation:(float)arg1;
- (void)setCameraOrientation:(int)arg1;
- (void)setDeviceToCameraSpaceTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setFrontCameraHas180DegreesRotation:(bool)arg1;
- (void)setGravityX:(float)arg1 y:(float)arg2 z:(float)arg3;
- (void)setPortType:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end

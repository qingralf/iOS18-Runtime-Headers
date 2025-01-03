/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARImageData : NSObject <ARDaemonSecureCoding, ARDictionaryCoding, ARImageSensorData, ARQATraceable, NSCopying> {
    float  _ISO;
    ADCameraCalibration * _adCameraCalibration;
    AVCameraCalibrationData * _calibrationData;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    long long  _cameraPosition;
    NSString * _cameraType;
    NSDate * _captureDate;
    AVCaptureDevice * _captureDevice;
    long long  _captureFramesPerSecond;
    unsigned long long  _captureLens;
    double  _currentCaptureTimestamp;
    AVDepthData * _depthData;
    double  _depthDataTimestamp;
    long long  _deviceOrientation;
    NSDictionary * _exifData;
    double  _exposureDuration;
    float  _exposureTargetOffset;
    NSMutableDictionary * _extrinsicsMap;
    ARFaceData * _faceData;
    bool  _highResolution;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    ARImageData * _latestUltraWideImage;
    unsigned long long  _lensType;
    bool  _mirrored;
    struct __CVBuffer { } * _pixelBuffer;
    ARPointCloud * _pointCloud;
    void _radialDistortion;
    bool  _secondary;
    float  _signalToNoiseRatio;
    void _tangentialDistortion;
    float  _temperature;
    NSDictionary * _tiffData;
    double  _timestamp;
    double  _timestampOfSynchronizedWideImageData;
    struct __CVBuffer { } * _visionData;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionTransform;
}

@property (nonatomic) float ISO;
@property (nonatomic, retain) ADCameraCalibration *adCameraCalibration;
@property (nonatomic, retain) AVCameraCalibrationData *calibrationData;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic) long long cameraPosition;
@property (nonatomic, retain) NSString *cameraType;
@property (nonatomic, copy) NSDate *captureDate;
@property (nonatomic, retain) AVCaptureDevice *captureDevice;
@property (nonatomic) long long captureFramesPerSecond;
@property (nonatomic) unsigned long long captureLens;
@property (nonatomic) double currentCaptureTimestamp;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) AVDepthData *depthData;
@property (nonatomic) double depthDataTimestamp;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic, copy) NSDictionary *exifData;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureTargetOffset;
@property (nonatomic, retain) NSMutableDictionary *extrinsicsMap;
@property (nonatomic, retain) ARFaceData *faceData;
@property (readonly) unsigned long long hash;
@property (getter=isHighResolution, nonatomic) bool highResolution;
@property (nonatomic) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic, retain) ARImageData *latestUltraWideImage;
@property (nonatomic) unsigned long long lensType;
@property (getter=isMirrored, nonatomic) bool mirrored;
@property (nonatomic, readonly) ARImageData *originalImage;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, retain) ARPointCloud *pointCloud;
@property (nonatomic) void radialDistortion;
@property (getter=isSecondary, nonatomic) bool secondary;
@property (nonatomic) float signalToNoiseRatio;
@property (readonly) Class superclass;
@property (nonatomic) void tangentialDistortion;
@property (nonatomic) float temperature;
@property (nonatomic, readonly, copy) NSDictionary *tiffData;
@property (nonatomic) double timestamp;
@property (nonatomic) double timestampOfSynchronizedWideImageData;
@property (nonatomic, readonly) NSDictionary *tracingEntry;
@property (nonatomic) struct __CVBuffer { }*visionData;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionTransform;

+ (id)captureDateFromPresentationTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 session:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)ISO;
- (id)adCameraCalibration;
- (void)addExtrinsicMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 toDeviceType:(id)arg2;
- (void)addExtrinsicMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 toDeviceType:(id)arg2;
- (id)calibrationData;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (long long)cameraPosition;
- (id)cameraType;
- (id)captureDate;
- (id)captureDevice;
- (long long)captureFramesPerSecond;
- (unsigned long long)captureLens;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentCaptureTimestamp;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)depthData;
- (double)depthDataTimestamp;
- (id)description;
- (long long)deviceOrientation;
- (id)encodeToDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)exifData;
- (double)exposureDuration;
- (float)exposureTargetOffset;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsicMatrix4x4ToDeviceType:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsicMatrixToDeviceType:(id)arg1;
- (id)extrinsicsMap;
- (id)faceData;
- (unsigned long long)hash;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 intrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg6 exif:(id)arg7;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 intrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg6 exif:(id)arg7 tiff:(id)arg8 captureLens:(unsigned long long)arg9;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isHighResolution;
- (bool)isMirrored;
- (bool)isSecondary;
- (id)latestUltraWideImage;
- (unsigned long long)lensType;
- (bool)matchesPixelBufferPointerRecursively:(void*)arg1;
- (id)originalImage;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)pointCloud;
- (void)radialDistortion;
- (void)setAdCameraCalibration:(id)arg1;
- (void)setCalibrationData:(id)arg1;
- (void)setCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCameraType:(id)arg1;
- (void)setCaptureDate:(id)arg1;
- (void)setCaptureDevice:(id)arg1;
- (void)setCaptureFramesPerSecond:(long long)arg1;
- (void)setCaptureLens:(unsigned long long)arg1;
- (void)setCurrentCaptureTimestamp:(double)arg1;
- (void)setDepthData:(id)arg1;
- (void)setDepthDataTimestamp:(double)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setExifData:(id)arg1;
- (void)setExposureDuration:(double)arg1;
- (void)setExposureTargetOffset:(float)arg1;
- (void)setExtrinsicsMap:(id)arg1;
- (void)setFaceData:(id)arg1;
- (void)setHighResolution:(bool)arg1;
- (void)setISO:(float)arg1;
- (void)setImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setLatestUltraWideImage:(id)arg1;
- (void)setLensType:(unsigned long long)arg1;
- (void)setMirrored:(bool)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setPointCloud:(id)arg1;
- (void)setRadialDistortion;
- (void)setSecondary:(bool)arg1;
- (void)setSignalToNoiseRatio:(float)arg1;
- (void)setTangentialDistortion;
- (void)setTemperature:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTimestampOfSynchronizedWideImageData:(double)arg1;
- (void)setVisionData:(struct __CVBuffer { }*)arg1;
- (void)setVisionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (float)signalToNoiseRatio;
- (void)tangentialDistortion;
- (float)temperature;
- (id)tiffData;
- (double)timestamp;
- (double)timestampOfSynchronizedWideImageData;
- (id)tracingEntry;
- (struct __CVBuffer { }*)visionData;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionTransform;

@end

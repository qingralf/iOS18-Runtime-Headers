/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Visage.framework/Visage
 */

@interface VGCaptureData : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _allFaces;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraToDeviceTransform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _chromaticAdaptationMatrix;
    struct __CVBuffer { } * _depth;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _depthIntrinsics;
    unsigned long long  _enrollmentPhase;
    VGFaceMetadata * _face;
    NSDictionary * _faceTrackingResult;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _mcamLeftChromaticAdaptationMatrix;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _mcamLeftColorIntrinsics;
    struct __CVBuffer { } * _mcamLeftColorRGB;
    struct __CVBuffer { } * _mcamLeftColorRGBChromaticAdaptationReverted;
    struct __CVBuffer { } * _mcamLeftColorYuv;
    struct __CVBuffer { } * _mcamLeftColorYuvChromaticAdaptationReverted;
    struct __CVBuffer { } * _mcamLeftDepth;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _mcamLeftDepthIntrinsics;
    VGFaceMetadata * _mcamLeftFaceMetadata;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _mcamLeftToDeviceTransform;
    IOSurface * _mcamLeftYuvHighRes;
    IOSurface * _mcamLeftYuvHighResChromaticAdaptationReverted;
    IOSurface * _mcamLeftYuvHighResUndistortionLut;
    bool  _mirrored;
    struct __CVBuffer { } * _rgbRectified;
    VGSkeleton * _skeleton;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _videoIntrinsics;
    IOSurface * _yuvHighRes;
    IOSurface * _yuvHighResChromaticAdaptationReverted;
    IOSurface * _yuvHighResUndistortionLut;
    struct __CVBuffer { } * _yuvRectified;
}

@property (nonatomic, retain) NSArray *allFaces;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraToDeviceTransform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } chromaticAdaptationMatrix;
@property (nonatomic) struct __CVBuffer { }*depth;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } depthIntrinsics;
@property (nonatomic) unsigned long long enrollmentPhase;
@property (nonatomic, retain) VGFaceMetadata *face;
@property (nonatomic, retain) NSDictionary *faceTrackingResult;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } mcamLeftChromaticAdaptationMatrix;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } mcamLeftColorIntrinsics;
@property (nonatomic) struct __CVBuffer { }*mcamLeftColorRGB;
@property (nonatomic, readonly) struct __CVBuffer { }*mcamLeftColorRGBChromaticAdaptationReverted;
@property (nonatomic) struct __CVBuffer { }*mcamLeftColorYuv;
@property (nonatomic, readonly) struct __CVBuffer { }*mcamLeftColorYuvChromaticAdaptationReverted;
@property (nonatomic) struct __CVBuffer { }*mcamLeftDepth;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } mcamLeftDepthIntrinsics;
@property (nonatomic, readonly) VGFaceMetadata *mcamLeftFaceMetadata;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } mcamLeftToDeviceTransform;
@property (nonatomic, retain) IOSurface *mcamLeftYuvHighRes;
@property (nonatomic, readonly) IOSurface *mcamLeftYuvHighResChromaticAdaptationReverted;
@property (nonatomic, retain) IOSurface *mcamLeftYuvHighResUndistortionLut;
@property (nonatomic) bool mirrored;
@property (nonatomic) struct __CVBuffer { }*rgbRectified;
@property (nonatomic, retain) VGSkeleton *skeleton;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } videoIntrinsics;
@property (nonatomic, retain) IOSurface *yuvHighRes;
@property (nonatomic, readonly) IOSurface *yuvHighResChromaticAdaptationReverted;
@property (nonatomic, retain) IOSurface *yuvHighResUndistortionLut;
@property (nonatomic) struct __CVBuffer { }*yuvRectified;

+ (struct __CVBuffer { }*)_createColorFromYCbCr:(struct __CVBuffer { }*)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_dataToMatrix33:(id)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_dataToMatrix44:(id)arg1;
+ (id)_matrix33ToData:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (id)_matrix44ToData:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)computeYuvHighResChromaticAdaptationReverted:(id)arg1 chromaticAdaptationMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allFaces;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraToDeviceTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })chromaticAdaptationMatrix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __CVBuffer { }*)depth;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })depthIntrinsics;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)enrollmentPhase;
- (id)face;
- (id)faceTrackingResult;
- (id)getFaceCaptureData;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })mcamLeftChromaticAdaptationMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })mcamLeftColorIntrinsics;
- (struct __CVBuffer { }*)mcamLeftColorRGB;
- (struct __CVBuffer { }*)mcamLeftColorRGBChromaticAdaptationReverted;
- (struct __CVBuffer { }*)mcamLeftColorYuv;
- (struct __CVBuffer { }*)mcamLeftColorYuvChromaticAdaptationReverted;
- (struct __CVBuffer { }*)mcamLeftDepth;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })mcamLeftDepthIntrinsics;
- (id)mcamLeftFaceMetadata;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })mcamLeftToDeviceTransform;
- (id)mcamLeftYuvHighRes;
- (id)mcamLeftYuvHighResChromaticAdaptationReverted;
- (id)mcamLeftYuvHighResUndistortionLut;
- (bool)mirrored;
- (struct __CVBuffer { }*)rgbRectified;
- (void)saveAtPath:(id)arg1;
- (void)setAllFaces:(id)arg1;
- (void)setCameraToDeviceTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setChromaticAdaptationMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setDepth:(struct __CVBuffer { }*)arg1;
- (void)setDepthIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setEnrollmentPhase:(unsigned long long)arg1;
- (void)setFace:(id)arg1;
- (void)setFaceTrackingResult:(id)arg1;
- (void)setMcamLeftChromaticAdaptationMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setMcamLeftColorIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setMcamLeftColorRGB:(struct __CVBuffer { }*)arg1;
- (void)setMcamLeftColorYuv:(struct __CVBuffer { }*)arg1;
- (void)setMcamLeftDepth:(struct __CVBuffer { }*)arg1;
- (void)setMcamLeftDepthIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setMcamLeftToDeviceTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setMcamLeftYuvHighRes:(id)arg1;
- (void)setMcamLeftYuvHighResUndistortionLut:(id)arg1;
- (void)setMirrored:(bool)arg1;
- (void)setRgbRectified:(struct __CVBuffer { }*)arg1;
- (void)setSkeleton:(id)arg1;
- (void)setTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setYuvHighRes:(id)arg1;
- (void)setYuvHighResUndistortionLut:(id)arg1;
- (void)setYuvRectified:(struct __CVBuffer { }*)arg1;
- (id)skeleton;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })videoIntrinsics;
- (id)yuvHighRes;
- (id)yuvHighResChromaticAdaptationReverted;
- (id)yuvHighResUndistortionLut;
- (struct __CVBuffer { }*)yuvRectified;

@end

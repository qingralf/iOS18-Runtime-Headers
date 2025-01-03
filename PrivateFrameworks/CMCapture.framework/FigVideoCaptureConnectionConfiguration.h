/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    bool  _attachMetadataToVideoBuffers;
    bool  _cameraIntrinsicMatrixDeliveryEnabled;
    bool  _coreMediaFaceTrackingEnabled;
    bool  _deviceOrientationCorrectionEnabled;
    bool  _livePhotoMetadataWritingEnabled;
    bool  _mirroringEnabled;
    int  _orientation;
    int  _outputFormat;
    int  _outputHeight;
    int  _outputWidth;
    bool  _physicalMirroringForMovieRecordingEnabled;
    int  _retainedBufferCount;
    bool  _stereoVideoCaptureEnabled;
    bool  _videoGreenGhostMitigationEnabled;
    int  _videoStabilizationMethod;
    int  _videoStabilizationType;
    bool  _zoomSmoothingEnabled;
}

@property (nonatomic) bool attachMetadataToVideoBuffers;
@property (nonatomic) bool cameraIntrinsicMatrixDeliveryEnabled;
@property (nonatomic) bool coreMediaFaceTrackingEnabled;
@property (nonatomic) bool deviceOrientationCorrectionEnabled;
@property (readonly) bool irisSDOFEnabled;
@property (readonly) bool irisVISEnabled;
@property (readonly) int irisVISMethod;
@property (nonatomic) bool livePhotoMetadataWritingEnabled;
@property (nonatomic) bool mirroringEnabled;
@property (nonatomic, readonly) struct { int x1; int x2; } nonRotatedOutputDimensions;
@property (nonatomic) int orientation;
@property (nonatomic) int outputFormat;
@property (nonatomic) int outputHeight;
@property (nonatomic) int outputWidth;
@property (nonatomic) bool physicalMirroringForMovieRecordingEnabled;
@property (readonly) bool portraitAutoSuggestEnabled;
@property (readonly) bool previewDepthDataDeliveryEnabled;
@property (readonly) bool previewDepthFilterRenderingEnabled;
@property (readonly) bool previewFilterRenderingEnabled;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) bool stereoVideoCaptureEnabled;
@property (readonly) struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; } transform;
@property (nonatomic) bool videoGreenGhostMitigationEnabled;
@property (nonatomic) int videoStabilizationMethod;
@property (nonatomic) bool zoomSmoothingEnabled;

+ (bool)cameraIntrinsicMatrixDeliveryEnabled:(id)arg1 doingFaceTracking:(bool)arg2;
+ (id)videoStabilizationMethods:(id)arg1 includeIris:(bool)arg2;

- (bool)attachMetadataToVideoBuffers;
- (bool)cameraIntrinsicMatrixDeliveryEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (bool)coreMediaFaceTrackingEnabled;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })depthDataTransform;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })depthDataTransformWithSourceDimensions;
- (id)description;
- (bool)deviceOrientationCorrectionEnabled;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)irisSDOFEnabled;
- (bool)irisVISEnabled;
- (int)irisVISMethod;
- (bool)isEqual:(id)arg1;
- (bool)livePhotoMetadataWritingEnabled;
- (bool)mirroringEnabled;
- (struct { int x1; int x2; })nonRotatedOutputDimensions;
- (int)orientation;
- (int)outputFormat;
- (int)outputHeight;
- (int)outputWidth;
- (bool)physicalMirroringForMovieRecordingEnabled;
- (bool)portraitAutoSuggestEnabled;
- (bool)previewDepthDataDeliveryEnabled;
- (bool)previewDepthFilterRenderingEnabled;
- (bool)previewFilterRenderingEnabled;
- (bool)requiresScalingForInputTransForm:(struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })arg1 nodeName:(id)arg2;
- (int)retainedBufferCount;
- (void)setAttachMetadataToVideoBuffers:(bool)arg1;
- (void)setCameraIntrinsicMatrixDeliveryEnabled:(bool)arg1;
- (void)setCoreMediaFaceTrackingEnabled:(bool)arg1;
- (void)setDeviceOrientationCorrectionEnabled:(bool)arg1;
- (void)setLivePhotoMetadataWritingEnabled:(bool)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOutputFormat:(int)arg1;
- (void)setOutputHeight:(int)arg1;
- (void)setOutputWidth:(int)arg1;
- (void)setPhysicalMirroringForMovieRecordingEnabled:(bool)arg1;
- (void)setRetainedBufferCount:(int)arg1;
- (void)setStereoVideoCaptureEnabled:(bool)arg1;
- (void)setVideoGreenGhostMitigationEnabled:(bool)arg1;
- (void)setVideoStabilizationMethod:(int)arg1;
- (void)setVideoStabilizationType:(int)arg1;
- (void)setZoomSmoothingEnabled:(bool)arg1;
- (bool)stereoVideoCaptureEnabled;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })transform;
- (bool)videoGreenGhostMitigationEnabled;
- (int)videoStabilizationMethod;
- (int)videoStabilizationType;
- (bool)zoomSmoothingEnabled;

@end

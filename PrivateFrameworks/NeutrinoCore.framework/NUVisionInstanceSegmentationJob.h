/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVisionInstanceSegmentationJob : NUVisionBasedRenderJob {
    VNGenerateImageSegmentationRequest * _visionRequest;
    _NUVisionInstanceSegmentationResult * _visionResult;
}

@property (nonatomic, readonly) NSArray *targetSamplePoints;
@property (getter=isUsingTargetSamplePoints, nonatomic, readonly) bool usingTargetSamplePoints;
@property (nonatomic, retain) VNGenerateImageSegmentationRequest *visionRequest;
@property (nonatomic, retain) _NUVisionInstanceSegmentationResult *visionResult;

- (void).cxx_destruct;
- (id)_calculateInstancePropertiesForObservation:(id)arg1 context:(id)arg2 observationOrientation:(long long)arg3 observationScale:(struct CGSize { double x1; double x2; })arg4;
- (struct { long long x1; long long x2; })idealModelSize;
- (bool)isUsingTargetSamplePoints;
- (bool)prepare:(out id*)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (bool)runMainRequest:(id)arg1 onImage:(id)arg2 orientation:(long long)arg3 scale:(struct CGSize { double x1; double x2; })arg4 renderer:(id)arg5 error:(out id*)arg6;
- (id)scalePolicy;
- (void)setVisionRequest:(id)arg1;
- (void)setVisionResult:(id)arg1;
- (id)targetSamplePoints;
- (id)visionRequest;
- (id)visionResult;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore
 */

@interface VisionCoreISPInferenceNetworkPostProcessingInput : NSObject {
    VisionCoreNamedObjects * _inferenceOutputNamedObjects;
    struct __CVBuffer { } * _inputImageBuffer;
    unsigned int  _inputImageOrientation;
}

@property (nonatomic, readonly) VisionCoreNamedObjects *inferenceOutputNamedObjects;
@property (nonatomic, readonly) struct __CVBuffer { }*inputImageBuffer;
@property (nonatomic, readonly) unsigned int inputImageOrientation;

- (void).cxx_destruct;
- (void)dealloc;
- (id)inferenceOutputNamedObjects;
- (id)initWithInputImageBuffer:(struct __CVBuffer { }*)arg1 inputImageOrientation:(unsigned int)arg2 inferenceOutputNamedObjects:(id)arg3;
- (struct __CVBuffer { }*)inputImageBuffer;
- (unsigned int)inputImageOrientation;

@end

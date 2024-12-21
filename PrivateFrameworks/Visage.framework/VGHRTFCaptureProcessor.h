/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Visage.framework/Visage
 */

@interface VGHRTFCaptureProcessor : NSObject {
    VGHRTFSessionConfig * _config;
    VGHRTFEarCaptureProcessor * _earCapture;
    VGHRTFEarPCACaptureProcessor * _earPCACapture;
    VGHRTFFaceCaptureProcessor * _faceCapture;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _faceCaptureFinished;
    VGHRTFFaceCaptureUpdateData * _faceResults;
    NSString * _modelsRootPath;
    bool  _singleStepEnrollment;
    VGHRTFCaptureUpdateData * _updateData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1 error:(id*)arg2;
- (id)processCaptureData:(id)arg1 faceData:(id)arg2 error:(id*)arg3;
- (id)processSingleStepCaptureData:(id)arg1 faceData:(id)arg2 error:(id*)arg3;

@end
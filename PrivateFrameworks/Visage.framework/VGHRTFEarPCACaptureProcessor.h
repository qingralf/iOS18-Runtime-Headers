/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Visage.framework/Visage
 */

@interface VGHRTFEarPCACaptureProcessor : NSObject {
    VGEarPCACaptureOptions * _earCaptureOptions;
    struct unique_ptr<vg::hrtf::Rectify, std::default_delete<vg::hrtf::Rectify>> { 
        struct __compressed_pair<vg::hrtf::Rectify *, std::default_delete<vg::hrtf::Rectify>> { 
            struct Rectify {} *__value_; 
        } __ptr_; 
    }  _rectify;
    VGEarPCAFrameSelector * _selector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)defaultUpdateData;
- (id)initWithDebugDataPath:(id)arg1 withModelsRootPath:(id)arg2;
- (id)processCaptureData:(id)arg1 faceData:(id)arg2;

@end

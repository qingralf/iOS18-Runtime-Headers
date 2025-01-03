/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Visage.framework/Visage
 */

@interface VGEarPCAFrameSelector : NSObject {
    struct unique_ptr<vg::ear_detection::EarPCADetector, std::default_delete<vg::ear_detection::EarPCADetector>> { 
        struct __compressed_pair<vg::ear_detection::EarPCADetector *, std::default_delete<vg::ear_detection::EarPCADetector>> { 
            struct EarPCADetector {} *__value_; 
        } __ptr_; 
    }  _earPCADetector;
    unsigned int  _frameCount;
    bool  _hasPreviousLandmarks;
    struct EarFrameGroup { 
        struct array<EarFrame, 3UL> { 
            struct EarFrame { 
                VGCaptureData *captureData; 
                struct EarPose { 
                    int side; 
                    struct float4x4 { 
                        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
                    } pose; 
                    struct optional<float> { 
                        union { 
                            BOOL __null_state_; 
                            float __val_; 
                        } ; 
                        bool __engaged_; 
                    } faceYawAngle; 
                    float yawAngle; 
                    float pitchAngle; 
                    void*box; 
                } pose; 
            } __elems_[3]; 
        } _frames; 
        float _area; 
    }  _leftEarGroup;
    unsigned int  _leftFrameCount;
    VGEarPCACaptureOptions * _options;
    unsigned long long  _previousFrameTimestampMS;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _previousLandmarksCoords;
    struct EarFrameGroup { 
        struct array<EarFrame, 3UL> { 
            struct EarFrame { 
                VGCaptureData *captureData; 
                struct EarPose { 
                    int side; 
                    struct float4x4 { 
                        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
                    } pose; 
                    struct optional<float> { 
                        union { 
                            BOOL __null_state_; 
                            float __val_; 
                        } ; 
                        bool __engaged_; 
                    } faceYawAngle; 
                    float yawAngle; 
                    float pitchAngle; 
                    void*box; 
                } pose; 
            } __elems_[3]; 
        } _frames; 
        float _area; 
    }  _rightEarGroup;
    unsigned int  _rightFrameCount;
    bool  _selectionCompleted;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)addPoseWithCaptureData:(id)arg1 faceYaw:(id)arg2;
- (id)currentState;
- (float)getMotionBlurScoreFromLandmarks:(struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })arg1 isEarDetected:(bool)arg2 frameTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)initWithOptions:(id)arg1;
- (struct vector<EarFrame, std::allocator<EarFrame>> { struct EarFrame {} *x1; struct EarFrame {} *x2; struct __compressed_pair<EarFrame *, std::allocator<EarFrame>> { struct EarFrame {} *x_3_1_1; } x3; })leftEarEnrolledPoses;
- (struct vector<EarFrame, std::allocator<EarFrame>> { struct EarFrame {} *x1; struct EarFrame {} *x2; struct __compressed_pair<EarFrame *, std::allocator<EarFrame>> { struct EarFrame {} *x_3_1_1; } x3; })posesFromGroup:(const void*)arg1;
- (unsigned int)requiredPosesCount;
- (struct vector<EarFrame, std::allocator<EarFrame>> { struct EarFrame {} *x1; struct EarFrame {} *x2; struct __compressed_pair<EarFrame *, std::allocator<EarFrame>> { struct EarFrame {} *x_3_1_1; } x3; })rightEarEnrolledPoses;

@end

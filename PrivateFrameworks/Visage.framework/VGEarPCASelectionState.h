/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Visage.framework/Visage
 */

@interface VGEarPCASelectionState : NSObject {
    bool  _completed;
    int  _detectionError;
    bool  _failed;
    bool  _leftEarCompleted;
    NSDictionary * _leftEarRollAngleCaptured;
    NSDictionary * _leftEarRollAngleCapturedPoses;
    NSDictionary * _leftEarYawAngleCaptured;
    NSDictionary * _leftEarYawAngleCapturedPoses;
    unsigned int  _leftFrameCount;
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
    }  _pose;
    float  _progress;
    bool  _rightEarCompleted;
    NSDictionary * _rightEarRollAngleCaptured;
    NSDictionary * _rightEarRollAngleCapturedPoses;
    NSDictionary * _rightEarYawAngleCaptured;
    NSDictionary * _rightEarYawAngleCapturedPoses;
    unsigned int  _rightFrameCount;
}

@property (nonatomic) bool completed;
@property (nonatomic) int detectionError;
@property (nonatomic) bool failed;
@property (nonatomic) bool leftEarCompleted;
@property (nonatomic, readonly) NSDictionary *leftEarRollAngleCaptured;
@property (nonatomic, retain) NSDictionary *leftEarRollAngleCapturedPoses;
@property (nonatomic, readonly) NSDictionary *leftEarYawAngleCaptured;
@property (nonatomic, retain) NSDictionary *leftEarYawAngleCapturedPoses;
@property (nonatomic) unsigned int leftFrameCount;
@property (nonatomic) struct EarPose { int x1; struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; } pose; /* unknown property attribute:  std::allocator<float>>=^f}}} */
@property (nonatomic) float progress;
@property (nonatomic) bool rightEarCompleted;
@property (nonatomic, readonly) NSDictionary *rightEarRollAngleCaptured;
@property (nonatomic, retain) NSDictionary *rightEarRollAngleCapturedPoses;
@property (nonatomic, readonly) NSDictionary *rightEarYawAngleCaptured;
@property (nonatomic, retain) NSDictionary *rightEarYawAngleCapturedPoses;
@property (nonatomic) unsigned int rightFrameCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)completed;
- (int)detectionError;
- (bool)failed;
- (bool)leftEarCompleted;
- (id)leftEarRollAngleCaptured;
- (id)leftEarRollAngleCapturedPoses;
- (id)leftEarYawAngleCaptured;
- (id)leftEarYawAngleCapturedPoses;
- (unsigned int)leftFrameCount;
- (struct EarPose { int x1; struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; struct optional<float> { union { BOOL x_1_2_1; float x_1_2_2; } x_3_1_1; bool x_3_1_2; } x3; float x4; float x5; struct vector<float, std::allocator<float>> { float *x_6_1_1; float *x_6_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_6_1_3; } x6; struct vector<float, std::allocator<float>> { float *x_7_1_1; float *x_7_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_7_1_3; } x7; })pose;
- (float)progress;
- (bool)rightEarCompleted;
- (id)rightEarRollAngleCaptured;
- (id)rightEarRollAngleCapturedPoses;
- (id)rightEarYawAngleCaptured;
- (id)rightEarYawAngleCapturedPoses;
- (unsigned int)rightFrameCount;
- (void)setCompleted:(bool)arg1;
- (void)setDetectionError:(int)arg1;
- (void)setFailed:(bool)arg1;
- (void)setLeftEarCompleted:(bool)arg1;
- (void)setLeftEarRollAngleCapturedPoses:(id)arg1;
- (void)setLeftEarYawAngleCapturedPoses:(id)arg1;
- (void)setLeftFrameCount:(unsigned int)arg1;
- (void)setPose:(struct EarPose { int x1; struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; struct optional<float> { union { BOOL x_1_2_1; float x_1_2_2; } x_3_1_1; bool x_3_1_2; } x3; float x4; float x5; struct vector<float, std::allocator<float>> { float *x_6_1_1; float *x_6_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_6_1_3; } x6; struct vector<float, std::allocator<float>> { float *x_7_1_1; float *x_7_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_7_1_3; } x7; })arg1;
- (void)setProgress:(float)arg1;
- (void)setRightEarCompleted:(bool)arg1;
- (void)setRightEarRollAngleCapturedPoses:(id)arg1;
- (void)setRightEarYawAngleCapturedPoses:(id)arg1;
- (void)setRightFrameCount:(unsigned int)arg1;

@end
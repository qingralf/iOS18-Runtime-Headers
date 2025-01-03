/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Hands.framework/Hands
 */

@interface MonoPoseEstimatorInput : NSObject {
    NSData * _boneScale;
    NSData * _boneScaleStdDev;
    NSData * _debug1;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _intrinsics;
    NSData * _latents;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _localizer;
    NSData * _pose;
    NSData * _poseStdDev;
    NSData * _uvdJoints;
    NSData * _uvdJointsStdDev;
    NSData * _wristRotation;
    NSData * _wristRotationStdDev;
}

@property (nonatomic, retain) NSData *boneScale;
@property (nonatomic, retain) NSData *boneScaleStdDev;
@property (nonatomic, retain) NSData *debug1;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsics;
@property (nonatomic, retain) NSData *latents;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } localizer;
@property (nonatomic, retain) NSData *pose;
@property (nonatomic, retain) NSData *poseStdDev;
@property (nonatomic, retain) NSData *uvdJoints;
@property (nonatomic, retain) NSData *uvdJointsStdDev;
@property (nonatomic, retain) NSData *wristRotation;
@property (nonatomic, retain) NSData *wristRotationStdDev;

- (void).cxx_destruct;
- (id)boneScale;
- (id)boneScaleStdDev;
- (id)debug1;
- (id)initWithPose:(id)arg1 poseStdDev:(id)arg2 wristRotation:(id)arg3 wristRotationStdDev:(id)arg4 boneScale:(id)arg5 boneScaleStdDev:(id)arg6 uvdJoints:(id)arg7 uvdJointsStdDev:(id)arg8 latents:(id)arg9 debug1:(id)arg10;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsics;
- (id)latents;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })localizer;
- (id)pose;
- (id)poseStdDev;
- (void)setBoneScale:(id)arg1;
- (void)setBoneScaleStdDev:(id)arg1;
- (void)setDebug1:(id)arg1;
- (void)setIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setLatents:(id)arg1;
- (void)setLocalizer:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setPose:(id)arg1;
- (void)setPoseStdDev:(id)arg1;
- (void)setUvdJoints:(id)arg1;
- (void)setUvdJointsStdDev:(id)arg1;
- (void)setWristRotation:(id)arg1;
- (void)setWristRotationStdDev:(id)arg1;
- (id)uvdJoints;
- (id)uvdJointsStdDev;
- (id)wristRotation;
- (id)wristRotationStdDev;

@end

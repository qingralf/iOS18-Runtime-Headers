/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStereoVideoCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    int  _cameraPosture;
    float  _percentageOfFramesWithAggressiveFocusDistance;
    float  _percentageOfFramesWithAggressiveLuxLevel;
    float  _stereoVideoCaptureDuration;
    bool  _stereoVideoCaptureEnabled;
    int  _stereoVideoCaptureStatus;
    int  _videoOrientation;
}

@property (nonatomic) int cameraPosture;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float percentageOfFramesWithAggressiveFocusDistance;
@property (nonatomic) float percentageOfFramesWithAggressiveLuxLevel;
@property (nonatomic) float stereoVideoCaptureDuration;
@property (nonatomic) bool stereoVideoCaptureEnabled;
@property (nonatomic) int stereoVideoCaptureStatus;
@property (readonly) Class superclass;
@property (nonatomic) int videoOrientation;

- (int)cameraPosture;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (float)percentageOfFramesWithAggressiveFocusDistance;
- (float)percentageOfFramesWithAggressiveLuxLevel;
- (void)reset;
- (void)setCameraPosture:(int)arg1;
- (void)setPercentageOfFramesWithAggressiveFocusDistance:(float)arg1;
- (void)setPercentageOfFramesWithAggressiveLuxLevel:(float)arg1;
- (void)setStereoVideoCaptureDuration:(float)arg1;
- (void)setStereoVideoCaptureEnabled:(bool)arg1;
- (void)setStereoVideoCaptureStatus:(int)arg1;
- (void)setVideoOrientation:(int)arg1;
- (float)stereoVideoCaptureDuration;
- (bool)stereoVideoCaptureEnabled;
- (int)stereoVideoCaptureStatus;
- (int)videoOrientation;

@end
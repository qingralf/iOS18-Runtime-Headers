/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMUpdateCaptureButtonControlsCommand : CAMCaptureCommand {
    long long  __captureMode;
    long long  __devicePosition;
    bool  __recording;
}

@property (nonatomic, readonly) long long _captureMode;
@property (nonatomic, readonly) long long _devicePosition;
@property (nonatomic, readonly) bool _recording;

- (long long)_captureMode;
- (long long)_devicePosition;
- (bool)_recording;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithRecording:(bool)arg1 captureMode:(long long)arg2 devicePosition:(long long)arg3;

@end

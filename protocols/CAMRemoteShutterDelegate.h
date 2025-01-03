/* Generated by RuntimeBrowser.
 */

@protocol CAMRemoteShutterDelegate <NSObject>

@required

- (void)remoteShutter:(CAMRemoteShutterController *)arg1 focusOn:(struct CGPoint { double x1; double x2; })arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setCaptureDevice:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setFlashMode:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setHDRMode:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setIrisMode:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setMode:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setSharedLibraryMode:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setZoomAmount:(double)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setZoomFactor:(double)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 takePhotoWithCountdown:(unsigned long long)arg2;
- (bool)remoteShutterBeginBurstCapture:(CAMRemoteShutterController *)arg1;
- (void)remoteShutterCancelCountdown:(CAMRemoteShutterController *)arg1;
- (bool)remoteShutterEndBurstCapture:(CAMRemoteShutterController *)arg1;
- (bool)remoteShutterPauseCapture:(CAMRemoteShutterController *)arg1;
- (bool)remoteShutterResumeCapture:(CAMRemoteShutterController *)arg1;
- (bool)remoteShutterShouldSuspendApp:(CAMRemoteShutterController *)arg1;
- (bool)remoteShutterStartCapture:(CAMRemoteShutterController *)arg1;
- (bool)remoteShutterStopCapture:(CAMRemoteShutterController *)arg1;

@end

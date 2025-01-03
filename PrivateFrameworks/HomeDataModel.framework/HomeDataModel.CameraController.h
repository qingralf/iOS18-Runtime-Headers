/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeDataModel.framework/HomeDataModel
 */

@interface HomeDataModel.CameraController : SwiftNativeNSObject <HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate, HMCameraUserSettingsDelegate> {
    void cameraProfile;
    void isStartingStream;
    void isStoppingStream;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  previousSnapshotCallTime;
    void snapshotTimer;
    void state;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  updates;
}

@property (nonatomic, readonly) NSString *description;

- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraUserSettingsDidUpdate:(id)arg1;
- (id)description;
- (id)init;

@end

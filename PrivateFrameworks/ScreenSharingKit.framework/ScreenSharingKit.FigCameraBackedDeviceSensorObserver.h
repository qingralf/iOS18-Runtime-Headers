/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenSharingKit.framework/ScreenSharingKit
 */

@interface ScreenSharingKit.FigCameraBackedDeviceSensorObserver : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sensorsInUse;
    void cameraViewfinder;
    void cameraViewfinderDelegateQueue;
}

- (void).cxx_destruct;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (void)dealloc;
- (id)init;

@end

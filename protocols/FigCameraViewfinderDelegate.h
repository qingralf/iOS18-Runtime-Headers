/* Generated by RuntimeBrowser.
 */

@protocol FigCameraViewfinderDelegate <NSObject>

@required

- (void)cameraViewfinder:(FigCameraViewfinder *)arg1 viewfinderSessionDidBegin:(FigCameraViewfinderSession *)arg2;
- (void)cameraViewfinder:(FigCameraViewfinder *)arg1 viewfinderSessionDidEnd:(FigCameraViewfinderSession *)arg2;

@optional

- (void)cameraViewfinder:(FigCameraViewfinder *)arg1 viewfinderSessionWillBegin:(FigCameraViewfinderSession *)arg2;

@end
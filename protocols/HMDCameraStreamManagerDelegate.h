/* Generated by RuntimeBrowser.
 */

@protocol HMDCameraStreamManagerDelegate <NSObject>

@required

- (void)streamManagerDidNetworkDeteriorate:(HMDCameraStreamManager *)arg1;
- (void)streamManagerDidNetworkImprove:(HMDCameraStreamManager *)arg1;
- (void)streamManagerDidReceiveFirstFrame:(HMDCameraStreamManager *)arg1;
- (void)streamManagerDidStartRelay:(HMDCameraStreamManager *)arg1;
- (void)streamManagerDidStartStream:(HMDCameraStreamManager *)arg1;
- (void)streamManagerDidStopStream:(HMDCameraStreamManager *)arg1 error:(NSError *)arg2;
- (void)streamManagerDidUpdateConfiguration:(HMDCameraStreamManager *)arg1;

@end

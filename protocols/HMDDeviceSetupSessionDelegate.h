/* Generated by RuntimeBrowser.
 */

@protocol HMDDeviceSetupSessionDelegate <NSObject>

@required

- (void)setupSession:(HMDDeviceSetupSession *)arg1 didCloseWithError:(NSError *)arg2;
- (void)setupSession:(HMDDeviceSetupSession *)arg1 didReceiveAccessoryWithUUID:(NSUUID *)arg2;

@end

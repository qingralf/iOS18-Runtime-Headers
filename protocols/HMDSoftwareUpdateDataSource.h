/* Generated by RuntimeBrowser.
 */

@protocol HMDSoftwareUpdateDataSource <NSObject>

@required

- (NSNotificationCenter *)notificationCenterForSoftwareUpdate:(HMDSoftwareUpdate *)arg1;
- (void)updateGenerationCounterWithReason:(NSString *)arg1 sourceUUID:(NSUUID *)arg2 shouldNotifyClients:(bool)arg3;

@end

/* Generated by RuntimeBrowser.
 */

@protocol SCDADelegate <NSObject>

@optional

- (void)scdaAdvertisingDidBegin:(SCDACoordinator *)arg1;
- (void)scdaAdvertisingDidEnd:(SCDACoordinator *)arg1;
- (void)scdaAdvertisingWillBeginWithDelay:(float)arg1 advertisingInterval:(float)arg2;
- (void)scdaCoordinatorDidHandleEmergency:(SCDACoordinator *)arg1;
- (void)scdaCoordinatorWillHandleEmergency:(SCDACoordinator *)arg1;
- (void)scdaListeningDidBegin:(SCDACoordinator *)arg1;
- (void)scdaListeningDidEnd:(SCDACoordinator *)arg1;
- (void)scdaShouldAbortAnotherDeviceBetter:(SCDACoordinator *)arg1;
- (void)scdaShouldContinue:(SCDACoordinator *)arg1;
- (void)scdaShouldHandleEmergency:(SCDACoordinator *)arg1;
- (void)scdaShouldUnduck:(SCDACoordinator *)arg1;
- (void)scdaWillEndSession:(SCDASession *)arg1;
- (void)scdaWillStartWithSession:(SCDASession *)arg1;

@end
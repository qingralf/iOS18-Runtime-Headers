/* Generated by RuntimeBrowser.
 */

@protocol HDSPSleepNotificationPublisher <NSObject>

@required

- (void)publishNotificationForEvent:(HKSPSleepEvent *)arg1;
- (void)tearDownNotificationForEventIdentifier:(NSString *)arg1;
- (void)tearDownNotifications;

@end

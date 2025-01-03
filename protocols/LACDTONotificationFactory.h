/* Generated by RuntimeBrowser.
 */

@protocol LACDTONotificationFactory <NSObject>

@required

- (<LACUNNotification> *)newSecurityDelayRequiredNotification;
- (<LACUNNotification> *)securityDelayEndedNotificationForPendingEvaluation:(id <LACDTOPendingPolicyEvaluation>)arg1 after:(double)arg2 validity:(double)arg3;

@end

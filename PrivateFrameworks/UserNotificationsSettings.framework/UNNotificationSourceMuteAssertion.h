/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
 */

@interface UNNotificationSourceMuteAssertion : UNNotificationMuteAssertion {
    NSDate * _expirationDate;
}

+ (id)sourceMuteAssertionUntilDate:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpirationDate:(id)arg1;
- (bool)isActiveForThreadIdentifier:(id)arg1 currentDate:(id)arg2;

@end

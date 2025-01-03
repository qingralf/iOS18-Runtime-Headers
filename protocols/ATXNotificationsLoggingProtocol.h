/* Generated by RuntimeBrowser.
 */

@protocol ATXNotificationsLoggingProtocol

@required

- (void)activeSuggestionsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)logNotificationDeliveryUI:(unsigned long long)arg1 notificationUUIDs:(NSArray *)arg2;
- (void)logNotificationEvent:(long long)arg1 notification:(ATXUserNotification *)arg2;
- (void)logNotificationEvent:(long long)arg1 notification:(ATXUserNotification *)arg2 reason:(unsigned long long)arg3;
- (void)logNotificationEvent:(long long)arg1 notification:(ATXUserNotification *)arg2 reason:(unsigned long long)arg3 interactionUI:(unsigned long long)arg4;
- (void)logNotificationGroupEvent:(long long)arg1 eventIdentifier:(NSUUID *)arg2;
- (void)logNotificationGroupEvent:(long long)arg1 eventIdentifier:(NSUUID *)arg2 timestamp:(NSDate *)arg3;
- (void)logRealTimeTuningOutcome:(unsigned long long)arg1 withBundleId:(NSString *)arg2;
- (void)logSuggestionEvent:(long long)arg1 suggestionType:(long long)arg2 suggestionIdentifier:(NSUUID *)arg3 timestamp:(NSDate *)arg4;

@end

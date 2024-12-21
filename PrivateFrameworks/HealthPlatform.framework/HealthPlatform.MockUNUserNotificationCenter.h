/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthPlatform.framework/HealthPlatform
 */

@interface HealthPlatform.MockUNUserNotificationCenter : UNUserNotificationCenter {
    void customNotificationSettings;
    void mockNotificationState;
}

- (void).cxx_destruct;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)deliveredNotifications;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)arg1;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)getPendingNotificationRequestsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 queue:(id)arg2;
- (id)notificationSettings;
- (id)pendingNotificationRequests;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1;

@end
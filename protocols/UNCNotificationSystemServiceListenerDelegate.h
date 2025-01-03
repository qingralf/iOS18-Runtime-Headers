/* Generated by RuntimeBrowser.
 */

@protocol UNCNotificationSystemServiceListenerDelegate <NSObject, UNCNotificationCommonServiceServerProtocol>

@required

- (NSNumber *)badgeNumberForBundleIdentifier:(NSString *)arg1;
- (void)categoryRepositoryDidChangeCategoriesForBundleIdentifier:(NSString *)arg1;
- (bool)isApplicationForeground:(NSString *)arg1;
- (void)notificationRepositoryDidDiscoverContentOnFirstUnlockForBundleIdentifier:(NSString *)arg1;
- (void)notificationRepositoryDidPerformUpdates:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)pendingNotificationRepositoryDidPerformUpdates:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (bool)setBadgeNumber:(NSNumber *)arg1 forBundleIdentifier:(NSString *)arg2;
- (bool)setBadgeString:(NSString *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)topicRepositoryDidChangeTopicsForBundleIdentifier:(NSString *)arg1;
- (void)willPresentNotification:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: UNSNotificationRecord *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*

@end

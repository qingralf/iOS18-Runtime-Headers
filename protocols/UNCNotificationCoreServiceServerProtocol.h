/* Generated by RuntimeBrowser.
 */

@protocol UNCNotificationCoreServiceServerProtocol <NSObject, UNCNotificationCommonServiceServerProtocol>

@required

- (NSArray<__NSString__> *)allBundleIdentifiersForNotifications;
- (NSNumber *)badgeNumberForBundleIdentifier:(NSString *)arg1;
- (UNSNotificationRecord *)notificationRecordForIdentifier:(NSString *)arg1 bundleIdentifier:(NSString *)arg2;
- (NSArray<__UNSNotificationRecord__> *)notificationRecordsForBundleIdentifier:(NSString *)arg1;
- (oneway void)notificationRepositoryDidPerformUpdates:(NSArray<__UNCNotificationRecordUpdate__> *)arg1 forBundleIdentifier:(NSString *)arg2;
- (oneway void)removeAllNotificationRecordsForBundleIdentifier:(NSString *)arg1;
- (oneway void)removeInvalidNotificationRecordsForBundleIdentifier:(NSString *)arg1;
- (oneway void)removeNotificationRecordsWithNonPushTriggerForBundleIdentifier:(NSString *)arg1;
- (oneway void)removeSimilarNotificationRecords:(NSArray<__UNSNotificationRecord__> *)arg1 forBundleIdentifier:(NSString *)arg2;
- (oneway void)removeStoreForBundleIdentifier:(NSString *)arg1;
- (oneway void)saveNotificationRecord:(void *)arg1 targetRevisionNumber:(void *)arg2 shouldRepost:(void *)arg3 forBundleIdentifier:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: UNSNotificationRecord *, NSNumber *, NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (oneway void)saveNotificationRequest:(UNNotificationRequest *)arg1 shouldRepost:(NSNumber *)arg2 apsMessageTimestamp:(NSDate *)arg3 forBundleIdentifier:(NSString *)arg4;
- (oneway void)setBadgeCount:(void *)arg1 forBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setBadgeNumber:(void *)arg1 forBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setBadgeString:(void *)arg1 forBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

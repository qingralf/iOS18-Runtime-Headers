/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsCore.framework/UserNotificationsCore
 */

@interface UNCLocalNotificationRepository : NSObject <UNCNotificationRepository> {
    <UNCBadgeService> * _badgeService;
    NSObject<OS_dispatch_queue> * _badgeServiceQueue;
    <UNSNotificationCategoryRepository> * _categoryRepository;
    <UNCNotificationRepositoryDelegate> * _delegate;
    UNCBundleLibrarian * _librarian;
    UNCKeyedObservable * _observable;
    NSObject<OS_dispatch_queue> * _queue;
    UNCKeyedDataStoreRepository * _repository;
    <UNCNotificationRepositorySettingsProvider> * _settingsProvider;
    NSMutableSet * _unlimitedBodyBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <UNCNotificationRepositoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UNCNotificationRepositorySettingsProvider> *settingsProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_badgeNumberForBundleIdentifier:(id)arg1;
- (void)_badge_queue_setBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_logNotification:(id)arg1 forBundleIdentifier:(id)arg2;
- (long long)_maxObjectsPerKey;
- (id)_notificationsForObjects:(id)arg1;
- (id)_queue_notificationRecordForIdentifier:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_notificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 replacementNotifications:(id)arg3 removedNotifications:(id)arg4 shouldRepost:(bool)arg5 shouldSync:(bool)arg6 forBundleIdentifier:(id)arg7;
- (void)_queue_notifyObserversWithReceipt:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_performMigration;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_performMigrationForPushStore;
- (void)_queue_performMigrationForPushStoreAtPath:(id)arg1;
- (void)_queue_performMigrationForUserNotificationsStore;
- (void)_queue_performValidation;
- (void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_removeNotificationRecordsForIdentifiers:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_removeNotificationRecordsPassingTest:(id /* block */)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeNotificationRecordsWithNonPushTriggerForBundleIdentifier:(id)arg1;
- (void)_queue_removeSimilarNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)_queue_saveNotificationRecord:(id)arg1 targetRevisionNumber:(id)arg2 shouldRepost:(bool)arg3 withOptions:(unsigned long long)arg4 forBundleIdentifier:(id)arg5;
- (void)_queue_triggerInvalidationForFirstUnlock;
- (void)_setBadgeCount:(long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_setBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)_shouldPersistNotificationRecord:(id)arg1 forBundleSettings:(id)arg2 perTopicSettings:(id)arg3;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (id)badgeNumberForBundleIdentifier:(id)arg1;
- (void)contentProtectionStateChangedForFirstUnlock:(bool)arg1;
- (id)delegate;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 librarian:(id)arg3 categoryRepository:(id)arg4 badgeService:(id)arg5;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3 categoryRepository:(id)arg4 badgeService:(id)arg5;
- (id)notificationRecordForIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (id)notificationRecordsForBundleIdentifier:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)performMigration;
- (void)performValidation;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)removeAllNotificationRecordsForBundleIdentifierSync:(id)arg1;
- (void)removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)removeNotificationRecordsForIdentifiers:(id)arg1 bundleIdentifier:(id)arg2;
- (void)removeNotificationRecordsPassingTest:(id /* block */)arg1 forBundleIdentifier:(id)arg2;
- (void)removeNotificationRecordsWithNonPushTriggerForBundleIdentifier:(id)arg1;
- (void)removeNotificationRepository;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeSimilarNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (void)removeStoreForBundleIdentifier:(id)arg1;
- (void)saveNotificationRecord:(id)arg1 shouldRepost:(bool)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)saveNotificationRecord:(id)arg1 targetRevisionNumber:(id)arg2 shouldRepost:(bool)arg3 forBundleIdentifier:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)saveNotificationRequest:(id)arg1 shouldRepost:(bool)arg2 apsMessageTimestamp:(id)arg3 forBundleIdentifier:(id)arg4;
- (void)saveNotificationRequest:(id)arg1 shouldRepost:(bool)arg2 withMessage:(id)arg3 forBundleIdentifier:(id)arg4;
- (void)setBadgeCount:(long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setSettingsProvider:(id)arg1;
- (id)settingsProvider;

@end

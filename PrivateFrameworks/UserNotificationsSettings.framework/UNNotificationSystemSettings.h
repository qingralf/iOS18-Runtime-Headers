/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
 */

@interface UNNotificationSystemSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _announcementCarPlaySetting;
    long long  _announcementHeadphonesSetting;
    long long  _announcementSetting;
    unsigned long long  _modifiedSettings;
    long long  _notificationListDisplayStyleSetting;
    long long  _remoteNotificationsSetting;
    long long  _scheduledDeliverySetting;
    long long  _scheduledDeliveryShowNextSummarySetting;
    NSArray * _scheduledDeliveryTimes;
    long long  _showPreviewsSetting;
    long long  _summarizationSetting;
}

@property (nonatomic, readonly) long long announcementCarPlaySetting;
@property (nonatomic, readonly) long long announcementHeadphonesSetting;
@property (nonatomic, readonly) long long announcementSetting;
@property (nonatomic, readonly) unsigned long long modifiedSettings;
@property (nonatomic, readonly) long long notificationListDisplayStyleSetting;
@property (nonatomic, readonly) long long remoteNotificationsSetting;
@property (nonatomic, readonly) long long scheduledDeliverySetting;
@property (nonatomic, readonly) long long scheduledDeliveryShowNextSummarySetting;
@property (nonatomic, readonly, copy) NSArray *scheduledDeliveryTimes;
@property (nonatomic, readonly) long long showPreviewsSetting;
@property (nonatomic, readonly) long long spokenNotificationSetting;
@property (nonatomic, readonly) long long summarizationSetting;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringForNotificationListDisplayStyleSetting:(long long)arg1;
- (id)_stringForScheduledDeliveryTimes:(id)arg1;
- (id)_stringforAnnouncementCarPlaySetting:(long long)arg1;
- (long long)announcementCarPlaySetting;
- (long long)announcementHeadphonesSetting;
- (long long)announcementSetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShowPreviewsSetting:(long long)arg1 announcementSetting:(long long)arg2 announcementHeadphonesSetting:(long long)arg3 announcementCarPlaySetting:(long long)arg4 scheduledDeliverySetting:(long long)arg5 scheduledDeliveryTimes:(id)arg6 scheduledDeliveryShowNextSummarySetting:(long long)arg7 notificationListDisplayStyleSetting:(long long)arg8;
- (id)initWithShowPreviewsSetting:(long long)arg1 announcementSetting:(long long)arg2 announcementHeadphonesSetting:(long long)arg3 announcementCarPlaySetting:(long long)arg4 scheduledDeliverySetting:(long long)arg5 scheduledDeliveryTimes:(id)arg6 scheduledDeliveryShowNextSummarySetting:(long long)arg7 notificationListDisplayStyleSetting:(long long)arg8 remoteNotificationsSetting:(long long)arg9 summarizationSetting:(long long)arg10 modifiedSettings:(unsigned long long)arg11;
- (id)initWithShowPreviewsSetting:(long long)arg1 announcementSetting:(long long)arg2 announcementHeadphonesSetting:(long long)arg3 announcementCarPlaySetting:(long long)arg4 scheduledDeliverySetting:(long long)arg5 scheduledDeliveryTimes:(id)arg6 scheduledDeliveryShowNextSummarySetting:(long long)arg7 notificationListDisplayStyleSetting:(long long)arg8 summarizationSetting:(long long)arg9;
- (id)initWithShowPreviewsSetting:(long long)arg1 announcementSetting:(long long)arg2 announcementHeadphonesSetting:(long long)arg3 announcementCarPlaySetting:(long long)arg4 scheduledDeliverySetting:(long long)arg5 scheduledDeliveryTimes:(id)arg6 scheduledDeliveryShowNextSummarySetting:(long long)arg7 notificationListDisplayStyleSetting:(long long)arg8 summarizationSetting:(long long)arg9 modifiedSettings:(unsigned long long)arg10;
- (bool)isEqual:(id)arg1;
- (unsigned long long)modifiedSettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)notificationListDisplayStyleSetting;
- (long long)remoteNotificationsSetting;
- (long long)scheduledDeliverySetting;
- (long long)scheduledDeliveryShowNextSummarySetting;
- (id)scheduledDeliveryTimes;
- (long long)showPreviewsSetting;
- (long long)spokenNotificationSetting;
- (long long)summarizationSetting;

@end
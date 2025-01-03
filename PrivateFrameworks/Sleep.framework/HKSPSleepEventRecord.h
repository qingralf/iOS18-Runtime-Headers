/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
 */

@interface HKSPSleepEventRecord : NSObject <BSDescriptionProviding, HKSPDictionarySerializable, HKSPObject, HKSPOnboardingModel, HKSPXPCObject, NAEquatable, NAHashable, NSCopying, NSMutableCopying> {
    NSDate * _goodMorningDismissedDate;
    NSDate * _lastModifiedDate;
    long long  _sleepCoachingOnboardingCompletedVersion;
    NSDate * _sleepCoachingOnboardingFirstCompletedDate;
    long long  _sleepTrackingOnboardingCompletedVersion;
    NSDate * _sleepTrackingOnboardingFirstCompletedDate;
    long long  _sleepWindDownShortcutsOnboardingCompletedVersion;
    NSDate * _sleepWindDownShortcutsOnboardingFirstCompletedDate;
    <HKSPSyncAnchor> * _syncAnchor;
    unsigned long long  _version;
    NSDate * _wakeUpAlarmDismissedDate;
    NSDate * _wakeUpAlarmSnoozedUntilDate;
    NSDate * _wakeUpConfirmedUntilDate;
    NSDate * _wakeUpEarlyNotificationConfirmedDate;
    NSDate * _wakeUpOverriddenDate;
}

@property (getter=isAnySleepCoachingOnboardingCompleted, nonatomic, readonly) bool anySleepCoachingOnboardingCompleted;
@property (getter=isAnySleepTrackingOnboardingCompleted, nonatomic, readonly) bool anySleepTrackingOnboardingCompleted;
@property (getter=isAnySleepWindDownShortcutsOnboardingCompleted, nonatomic, readonly) bool anySleepWindDownShortcutsOnboardingCompleted;
@property (getter=isConsolidatedSleepCoachingOnboardingCompleted, nonatomic, readonly) bool consolidatedSleepCoachingOnboardingCompleted;
@property (getter=isConsolidatedSleepTrackingOnboardingCompleted, nonatomic, readonly) bool consolidatedSleepTrackingOnboardingCompleted;
@property (getter=isCurrentSleepCoachingOnboardingCompleted, nonatomic, readonly) bool currentSleepCoachingOnboardingCompleted;
@property (getter=isCurrentSleepTrackingOnboardingCompleted, nonatomic, readonly) bool currentSleepTrackingOnboardingCompleted;
@property (getter=isCurrentSleepWindDownShortcutsOnboardingCompleted, nonatomic, readonly) bool currentSleepWindDownShortcutsOnboardingCompleted;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *goodMorningDismissedDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCurrentSleepCoachingOnboardingCompleted;
@property (nonatomic, readonly) bool isCurrentSleepTrackingOnboardingCompleted;
@property (nonatomic, readonly) bool isCurrentSleepWindDownShortcutsOnboardingCompleted;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long sleepCoachingOnboardingCompletedVersion;
@property (nonatomic, readonly) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (nonatomic, readonly, copy) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (nonatomic, readonly) long long sleepTrackingOnboardingCompletedVersion;
@property (nonatomic, readonly) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (nonatomic, readonly, copy) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (nonatomic, readonly) long long sleepWindDownShortcutsOnboardingCompletedVersion;
@property (nonatomic, readonly, copy) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (nonatomic, readonly) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKSPSyncAnchor> *syncAnchor;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly, copy) NSDate *wakeUpAlarmDismissedDate;
@property (nonatomic, readonly, copy) NSDate *wakeUpAlarmSnoozedUntilDate;
@property (nonatomic, readonly, copy) NSDate *wakeUpConfirmedUntilDate;
@property (nonatomic, readonly, copy) NSDate *wakeUpEarlyNotificationConfirmedDate;
@property (nonatomic, readonly, copy) NSDate *wakeUpOverriddenDate;

+ (void)_appendDateDescriptionIfRelevant:(id)arg1 withName:(id)arg2 toBuilder:(id)arg3;
+ (id)allProperties;
+ (id)propertiesForEquivalence;
+ (id)significantProperties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_migrateForCoder:(id)arg1;
- (bool)_needsMigrationForCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)goodMorningDismissedDate;
- (unsigned long long)hash;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAnySleepCoachingOnboardingCompleted;
- (bool)isAnySleepTrackingOnboardingCompleted;
- (bool)isAnySleepWindDownShortcutsOnboardingCompleted;
- (bool)isConsolidatedSleepCoachingOnboardingCompleted;
- (bool)isConsolidatedSleepTrackingOnboardingCompleted;
- (bool)isCurrentSleepCoachingOnboardingCompleted;
- (bool)isCurrentSleepTrackingOnboardingCompleted;
- (bool)isCurrentSleepWindDownShortcutsOnboardingCompleted;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOnboardingModel:(id)arg1;
- (bool)isEquivalentTo:(id)arg1;
- (id)lastModifiedDate;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectWithSyncAnchor:(id)arg1;
- (long long)sleepCoachingOnboardingCompletedVersion;
- (id)sleepCoachingOnboardingFirstCompletedDate;
- (long long)sleepTrackingOnboardingCompletedVersion;
- (id)sleepTrackingOnboardingFirstCompletedDate;
- (long long)sleepWindDownShortcutsOnboardingCompletedVersion;
- (id)sleepWindDownShortcutsOnboardingFirstCompletedDate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)syncAnchor;
- (unsigned long long)version;
- (id)wakeUpAlarmDismissedDate;
- (id)wakeUpAlarmSnoozedUntilDate;
- (id)wakeUpConfirmedUntilDate;
- (id)wakeUpEarlyNotificationConfirmedDate;
- (id)wakeUpOverriddenDate;

@end

/* Generated by RuntimeBrowser.
 */

@protocol HKSPOnboardingModel

@required

- (id)copy;
- (bool)isCurrentSleepCoachingOnboardingCompleted;
- (bool)isCurrentSleepTrackingOnboardingCompleted;
- (bool)isCurrentSleepWindDownShortcutsOnboardingCompleted;
- (bool)isEqualToOnboardingModel:(id <HKSPOnboardingModel>)arg1;
- (long long)sleepCoachingOnboardingCompletedVersion;
- (NSDate *)sleepCoachingOnboardingFirstCompletedDate;
- (long long)sleepTrackingOnboardingCompletedVersion;
- (NSDate *)sleepTrackingOnboardingFirstCompletedDate;
- (long long)sleepWindDownShortcutsOnboardingCompletedVersion;
- (NSDate *)sleepWindDownShortcutsOnboardingFirstCompletedDate;

@end
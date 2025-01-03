/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor
 */

@interface SMMobileSMSPreferencesUtilities : NSObject

+ (id)_copyDuetExpertPreferencesValueForKey:(id)arg1;
+ (id)_copyMobileSMSPreferencesValueForKey:(id)arg1;
+ (id)_criticalAlertPreference;
+ (void)_setHasUserCompletedOnboarding:(id)arg1;
+ (void)_setMobileSMSPreferencesValue:(id)arg1 forKey:(id)arg2;
+ (void)_setShareAllLocations:(id)arg1;
+ (void)_syncSiriLockScreenSuggestionsPrefIfNeeded;
+ (void)_syncSiriLockScreenSuggestionsPrefWithValue:(bool)arg1;
+ (void)clearCriticalAlertUserPreference;
+ (void)clearHasUserCompletedOnboarding;
+ (void)clearShareAllLocations;
+ (long long)criticalAlertPreference;
+ (id)duetExpertStore;
+ (bool)hasUserCompletedOnboarding;
+ (bool)isLockScreenSuggestionsAllowed;
+ (bool)isMobileSMSPreferencesLockScreenSuggestionsAllowed;
+ (bool)isUserOnBoardedForCriticalAlert;
+ (id)legacyStore;
+ (void)migrateIfNeeded;
+ (void)setCriticalAlertPreference:(long long)arg1;
+ (void)setHasUserCompletedOnboarding:(bool)arg1;
+ (void)setShareAllLocations:(bool)arg1;
+ (bool)shareAllLocations;
+ (id)store;
+ (void)syncSiriLockScreenSuggestionsPrefs;

@end

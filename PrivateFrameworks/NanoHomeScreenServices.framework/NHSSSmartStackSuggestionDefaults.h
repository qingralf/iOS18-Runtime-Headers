/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoHomeScreenServices.framework/NanoHomeScreenServices
 */

@interface NHSSSmartStackSuggestionDefaults : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_observers;
    NSMapTable * _lock_scheduledTimers;
    NSUserDefaults * _lock_userDefaults;
}

@property (nonatomic) bool clearWidgetAlertAcknowledged;
@property (nonatomic, readonly) double defaultMuteForHourDuration;
@property (nonatomic, readonly) double defaultMuteForTodayDuration;
@property (nonatomic) bool soundDetectionButtonDismissedOnce;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cleanUpExpiredMutePreferences;
- (id)_compositeKeyWithContainerBundleIdentifier:(id)arg1 extensionBundleIdentifier:(id)arg2 kind:(id)arg3;
- (void)_mainQueue_notifyObserversDefaultsDidChange;
- (void)_observeChangesToUserDefaults;
- (void)_requestUserDefaultsSyncForKey:(id)arg1;
- (void)_scheduleTimerToUnmuteWidgetForKey:(id)arg1 onDate:(id)arg2;
- (void)_scheduleTimersToUnmuteWidgets;
- (void)addObserver:(id)arg1;
- (bool)appSuggestionsEnabledForContainerBundleIdentifier:(id)arg1;
- (bool)clearWidgetAlertAcknowledged;
- (double)defaultMuteForHourDuration;
- (double)defaultMuteForTodayDuration;
- (bool)globalSuggestionsEnabled;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;
- (void)setAppSuggestionsEnabled:(bool)arg1 forContainerBundleIdentifier:(id)arg2;
- (void)setClearWidgetAlertAcknowledged:(bool)arg1;
- (void)setGlobalSuggestionsEnabled:(bool)arg1;
- (void)setSoundDetectionButtonDismissedOnce:(bool)arg1;
- (void)setWidgetSuggestionsEnabled:(bool)arg1 forContainerBundleIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 kind:(id)arg4;
- (void)setWidgetSuggestionsUnmuteDate:(id)arg1 forContainerBundleIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 kind:(id)arg4;
- (bool)soundDetectionButtonDismissedOnce;
- (bool)widgetSuggestionsEnabledForContainerBundleIdentifier:(id)arg1 extensionBundleIdentifier:(id)arg2 kind:(id)arg3;
- (id)widgetSuggestionsUnmuteDateForContainerBundleIdentifier:(id)arg1 extensionBundleIdentifier:(id)arg2 kind:(id)arg3;

@end
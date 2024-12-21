/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYAnalyticsEventAppearance : NSObject {
    BYPreferencesController * _buddyPreferencesExcludedFromBackup;
    bool  _shouldRemoveAnalyticsEventPayloadFromPreferences;
}

@property (retain) BYPreferencesController *buddyPreferencesExcludedFromBackup;
@property bool shouldRemoveAnalyticsEventPayloadFromPreferences;

- (void).cxx_destruct;
- (void)_analyticsManagerDidProduceLazyEvents;
- (id)_biomeEvent;
- (id)_eventPayload;
- (id)_eventPayloadFromPreferences;
- (id)_eventPayloadFromPreferencesIfComplete;
- (id)buddyPreferencesExcludedFromBackup;
- (void)didChooseAppearanceModeName:(id)arg1 forDisposition:(unsigned long long)arg2;
- (void)didChooseToSetUpForChild:(bool)arg1;
- (id)initWithAnalyticsManager:(id)arg1 buddyPreferencesExcludedFromBackup:(id)arg2;
- (void)setBuddyPreferencesExcludedFromBackup:(id)arg1;
- (void)setChildAge:(id)arg1;
- (void)setShouldRemoveAnalyticsEventPayloadFromPreferences:(bool)arg1;
- (bool)shouldRemoveAnalyticsEventPayloadFromPreferences;

@end
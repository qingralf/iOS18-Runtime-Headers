/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCMutableNotificationOptions : NCNotificationOptions

@property (nonatomic) bool addToLockScreenWhenUnlocked;
@property (nonatomic, copy) NSSet *alertSuppressionContexts;
@property (nonatomic) bool alertsWhenLocked;
@property (nonatomic) bool allowActionsForCarPlay;
@property (nonatomic, copy) NSString *alternateActionLabel;
@property (nonatomic) bool canPlaySound;
@property (nonatomic) bool canShowSummary;
@property (nonatomic) bool canTurnOnDisplay;
@property (nonatomic) bool coalescesWhenLocked;
@property (nonatomic) unsigned long long contentPreviewSetting;
@property (nonatomic) bool dismissAutomatically;
@property (nonatomic) bool dismissAutomaticallyForCarPlay;
@property (nonatomic) bool displaysActionsInline;
@property (nonatomic) bool hideClearActionInList;
@property (nonatomic) bool hideCloseActionForCarPlay;
@property (nonatomic) bool lauchUsingSiriForCarPlayDefaultAction;
@property (nonatomic) unsigned long long lockScreenPersistence;
@property (nonatomic) unsigned long long lockScreenPriority;
@property (getter=isNumberOfLinesInfinite, nonatomic) bool numberOfLinesInfinite;
@property (nonatomic) bool overridesDowntime;
@property (nonatomic) bool overridesPocketMode;
@property (nonatomic) bool overridesQuietMode;
@property (nonatomic) bool playMediaWhenRaised;
@property (nonatomic) bool preemptsPresentedNotification;
@property (nonatomic) bool preventsAutomaticLock;
@property (nonatomic) unsigned long long realertCount;
@property (nonatomic) bool requestsFullScreenPresentation;
@property (nonatomic) bool revealsAdditionalContentIfNoDefaultAction;
@property (nonatomic) bool revealsAdditionalContentOnPresentation;
@property (nonatomic) bool screenCaptureProhibited;
@property (nonatomic) bool shouldAnnounceForCarPlay;
@property (nonatomic) bool silencedByMenuButtonPress;
@property (nonatomic, copy) NSString *speechLanguage;
@property (nonatomic) bool suppressPresentationInAmbient;
@property (nonatomic) bool suppressesAlertsWhenAppIsActive;
@property (nonatomic) bool suppressesBodyWhenLocked;
@property (nonatomic) bool suppressesSubtitleWhenLocked;
@property (nonatomic) bool suppressesTitleWhenLocked;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAddToLockScreenWhenUnlocked:(bool)arg1;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)setAlertsWhenLocked:(bool)arg1;
- (void)setAllowActionsForCarPlay:(bool)arg1;
- (void)setAlternateActionLabel:(id)arg1;
- (void)setCanPlaySound:(bool)arg1;
- (void)setCanShowSummary:(bool)arg1;
- (void)setCanTurnOnDisplay:(bool)arg1;
- (void)setCoalescesWhenLocked:(bool)arg1;
- (void)setContentPreviewSetting:(unsigned long long)arg1;
- (void)setDismissAutomatically:(bool)arg1;
- (void)setDismissAutomaticallyForCarPlay:(bool)arg1;
- (void)setDisplaysActionsInline:(bool)arg1;
- (void)setHideClearActionInList:(bool)arg1;
- (void)setHideCloseActionForCarPlay:(bool)arg1;
- (void)setLauchUsingSiriForCarPlayDefaultAction:(bool)arg1;
- (void)setLockScreenPersistence:(unsigned long long)arg1;
- (void)setLockScreenPriority:(unsigned long long)arg1;
- (void)setNumberOfLinesInfinite:(bool)arg1;
- (void)setOverridesDowntime:(bool)arg1;
- (void)setOverridesPocketMode:(bool)arg1;
- (void)setOverridesQuietMode:(bool)arg1;
- (void)setPlayMediaWhenRaised:(bool)arg1;
- (void)setPreemptsPresentedNotification:(bool)arg1;
- (void)setPreventsAutomaticLock:(bool)arg1;
- (void)setRealertCount:(unsigned long long)arg1;
- (void)setRequestsFullScreenPresentation:(bool)arg1;
- (void)setRevealsAdditionalContentIfNoDefaultAction:(bool)arg1;
- (void)setRevealsAdditionalContentOnPresentation:(bool)arg1;
- (void)setScreenCaptureProhibited:(bool)arg1;
- (void)setShouldAnnounceForCarPlay:(bool)arg1;
- (void)setSilencedByMenuButtonPress:(bool)arg1;
- (void)setSpeechLanguage:(id)arg1;
- (void)setSuppressPresentationInAmbient:(bool)arg1;
- (void)setSuppressesAlertsWhenAppIsActive:(bool)arg1;
- (void)setSuppressesBodyWhenLocked:(bool)arg1;
- (void)setSuppressesSubtitleWhenLocked:(bool)arg1;
- (void)setSuppressesTitleWhenLocked:(bool)arg1;

@end

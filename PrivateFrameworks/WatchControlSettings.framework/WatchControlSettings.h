/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchControlSettings.framework/WatchControlSettings
 */

@interface WatchControlSettings : NSObject {
    NSObject<OS_dispatch_queue> * _localObserverQueue;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
}

@property (nonatomic, retain) NSArray *actionMenuFavorites;
@property (nonatomic) bool actionMenuLargerSize;
@property (nonatomic) long long actionMenuPosition;
@property (nonatomic) unsigned long long autoFocusNavigationSpeed;
@property (nonatomic) bool automaticDigitalCrownEnablementInWaterLock;
@property (nonatomic) bool automationServerEnabled;
@property (nonatomic) unsigned long long defaultAutoScrollSpeed;
@property (nonatomic) bool disablePPGDataSource;
@property (nonatomic) bool dwellControlEnabled;
@property (nonatomic) bool dwellControlShakeToStart;
@property (nonatomic) unsigned long long dwellControlTimerAction;
@property (nonatomic, readonly) NSArray *eligibleGreyActivationGestures;
@property (nonatomic) bool falsePositiveLoggingEnabled;
@property (nonatomic) bool featureEnabled;
@property (nonatomic) long long focusMovementStyle;
@property (nonatomic) long long focusRingColor;
@property (nonatomic) bool focusRingHighContrastEnabled;
@property (nonatomic) long long greyActivationGesture;
@property (nonatomic) bool greyQuickActionAutoScrollNotificationsEnabled;
@property (nonatomic) bool greyQuickActionsEnabled;
@property (nonatomic) bool hasShownInitialOnboarding;
@property (nonatomic) bool inputSourcesRequireFocusRing;
@property (nonatomic) float motionPointerActivationDuration;
@property (nonatomic, readonly) float motionPointerActivationDurationMax;
@property (nonatomic, readonly) float motionPointerActivationDurationMin;
@property (nonatomic) unsigned long long motionPointerMovementTolerance;
@property (nonatomic) float motionPointerSensitivity;
@property (nonatomic, readonly) float motionPointerSensitivityMax;
@property (nonatomic, readonly) float motionPointerSensitivityMin;
@property (nonatomic) bool playDetectedGestureHapticFeedback;
@property (nonatomic) bool receivedActivationGesture;
@property (nonatomic) bool requestToShowPracticeGrey;
@property (nonatomic) bool showDetectedGestureBanner;
@property (nonatomic) bool showGestureRecognizerIndicator;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_updateInputSourceType:(unsigned long long)arg1 enable:(bool)arg2;
- (id)accessibilityDomainAccessor;
- (bool)accessibilityDomainBoolForKey:(id)arg1;
- (id)actionMenuFavorites;
- (bool)actionMenuLargerSize;
- (long long)actionMenuPosition;
- (void)addSettingsObserver:(id)arg1;
- (unsigned long long)autoFocusNavigationSpeed;
- (bool)automaticDigitalCrownEnablementInWaterLock;
- (bool)automationServerEnabled;
- (void)dealloc;
- (unsigned long long)defaultAutoScrollSpeed;
- (void)disableActiveGreySupportClients;
- (void)disableAllGreySupportFeatures;
- (void)disableInputSourceType:(unsigned long long)arg1;
- (bool)disablePPGDataSource;
- (bool)dwellControlEnabled;
- (bool)dwellControlShakeToStart;
- (unsigned long long)dwellControlTimerAction;
- (id)eligibleGreyActivationGestures;
- (void)enableInputSourceType:(unsigned long long)arg1;
- (id)enabledGreyFeatures;
- (id)enabledInputSourceTypes;
- (bool)falsePositiveLoggingEnabled;
- (bool)featureEnabled;
- (long long)focusMovementStyle;
- (long long)focusRingColor;
- (bool)focusRingHighContrastEnabled;
- (long long)greyActivationGesture;
- (id)greyEventActionCustomizations;
- (id)greyEventCustomActionCustomizations;
- (bool)greyQuickActionAutoScrollNotificationsEnabled;
- (bool)greyQuickActionsEnabled;
- (bool)hasGreySupportFeatureEnabled;
- (bool)hasShownInitialOnboarding;
- (void)informLocalObservers;
- (void)informObservers;
- (bool)inputSourcesRequireFocusRing;
- (bool)isVoiceOverGreySupportOn;
- (bool)isZoomGreySupportOn;
- (float)motionPointerActivationDuration;
- (float)motionPointerActivationDurationMax;
- (float)motionPointerActivationDurationMin;
- (id)motionPointerEdgeActionCustomizations;
- (unsigned long long)motionPointerMovementTolerance;
- (float)motionPointerSensitivity;
- (float)motionPointerSensitivityMax;
- (float)motionPointerSensitivityMin;
- (bool)playDetectedGestureHapticFeedback;
- (bool)quickActionsV2Enabled;
- (id)quickActionsV2State;
- (bool)receivedActivationGesture;
- (void)removeCustomActionForGreyEvent:(long long)arg1;
- (void)removeSettingsObserver:(id)arg1;
- (bool)requestToShowPracticeGrey;
- (void)resetGreyEventActionCustomizations;
- (void)resetMotionPointerEdgeActionCustomizations;
- (void)setAccessibilityDomainBool:(bool)arg1 forKey:(id)arg2;
- (void)setAction:(unsigned long long)arg1 forGreyEvent:(long long)arg2;
- (void)setAction:(unsigned long long)arg1 forMotionPointerEdge:(long long)arg2;
- (void)setActionMenuFavorites:(id)arg1;
- (void)setActionMenuLargerSize:(bool)arg1;
- (void)setActionMenuPosition:(long long)arg1;
- (void)setAutoFocusNavigationSpeed:(unsigned long long)arg1;
- (void)setAutomaticDigitalCrownEnablementInWaterLock:(bool)arg1;
- (void)setAutomationServerEnabled:(bool)arg1;
- (void)setCustomActionType:(long long)arg1 withCustomActionIdentifier:(id)arg2 forGreyEvent:(long long)arg3;
- (void)setDefaultAutoScrollSpeed:(unsigned long long)arg1;
- (void)setDisablePPGDataSource:(bool)arg1;
- (void)setDwellControlEnabled:(bool)arg1;
- (void)setDwellControlShakeToStart:(bool)arg1;
- (void)setDwellControlTimerAction:(unsigned long long)arg1;
- (void)setFalsePositiveLoggingEnabled:(bool)arg1;
- (void)setFeatureEnabled:(bool)arg1;
- (void)setFocusMovementStyle:(long long)arg1;
- (void)setFocusRingColor:(long long)arg1;
- (void)setFocusRingHighContrastEnabled:(bool)arg1;
- (void)setGreyActivationGesture:(long long)arg1;
- (void)setGreyQuickActionAutoScrollNotificationsEnabled:(bool)arg1;
- (void)setGreyQuickActionsEnabled:(bool)arg1;
- (void)setHasShownInitialOnboarding:(bool)arg1;
- (void)setInputSourcesRequireFocusRing:(bool)arg1;
- (void)setMotionPointerActivationDuration:(float)arg1;
- (void)setMotionPointerMovementTolerance:(unsigned long long)arg1;
- (void)setMotionPointerSensitivity:(float)arg1;
- (void)setPlayDetectedGestureHapticFeedback:(bool)arg1;
- (void)setQuickActionsV2State:(id)arg1;
- (void)setReceivedActivationGesture:(bool)arg1;
- (void)setRequestToShowPracticeGrey:(bool)arg1;
- (void)setShowDetectedGestureBanner:(bool)arg1;
- (void)setShowGestureRecognizerIndicator:(bool)arg1;
- (void)setVoiceOverHandGestures:(bool)arg1;
- (void)setWatchControlHandGeturesEnabled:(bool)arg1;
- (void)setZoomDomainBool:(bool)arg1 forKey:(id)arg2;
- (void)setZoomHandGestures:(bool)arg1;
- (bool)showDetectedGestureBanner;
- (bool)showGestureRecognizerIndicator;
- (bool)voiceOverGreySupportEnabled;
- (bool)voiceOverHandGesturesEnabled;
- (id)watchControlDomainAccessor;
- (bool)watchControlGreySupportEnabled;
- (bool)watchControlHandGesturesEnabled;
- (id)zoomDomainAccessor;
- (bool)zoomDomainBoolForKey:(id)arg1;
- (bool)zoomGreySupportEnabled;
- (bool)zoomHandGesturesEnabled;

@end
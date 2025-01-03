/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SiriActivationService : NSObject <SASBulletinManagerDelegate, SASHeaterDelegate, SASLockStateMonitorDelegate, SASMyriadControllerDelegate, SASPresentationManagerDelegate, SASRequestOptionsBuilderDataSource, SASStateChangeListener> {
    NSTimer * _B188ActivationTimer;
    NSMutableDictionary * _activationAssertions;
    SASActivePresentationInstrumentationSender * _activationEventInstrumentationSender;
    double  _activationTimestamp;
    AFPreferences * _afPreferences;
    UAFAssetUtilities * _assetUtilities;
    NSMutableDictionary * _avExternalButtonEvents;
    SASBluetoothEndpointUtility * _bluetoothEndpointUtil;
    SASBulletinManager * _bulletinManager;
    bool  _buttonDownHasOccurredSinceActivation;
    NSMutableDictionary * _buttonEventListeners;
    id /* block */  _buttonTrigger;
    bool  _canActivateFromDirectActionSource;
    id /* block */  _didDismissForAssesmentModeStartedCompeltion;
    SASHeater * _heater;
    SASLockStateMonitor * _lockStateMonitor;
    SASMyriadController * _myriadController;
    bool  _pocketStateFetchingInProgressForHeadsetActivation;
    NSString * _preheatedPresentation;
    SASPresentationManager * _presentationManager;
    SASRemoteRequestManager * _remoteRequestManager;
    AFSiriTether * _siriTether;
    bool  _siriTetherIsAttached;
    NSMutableDictionary * _sources;
    SASSystemState * _systemState;
    SASTestingInputController * _testingInputController;
    NSObject<OS_dispatch_queue> * _voiceTriggerDispatchQueue;
    int  _voiceTriggerNotifyToken;
    bool  _voiceTriggerNotifyTokenIsValid;
    bool  _xcTestingActive;
}

@property (nonatomic, retain) NSMutableDictionary *activationAssertions;
@property (nonatomic) double activationTimestamp;
@property (nonatomic, retain) AFPreferences *afPreferences;
@property (nonatomic, retain) UAFAssetUtilities *assetUtilities;
@property (nonatomic, retain) NSMutableDictionary *avExternalButtonEvents;
@property (nonatomic, retain) SASBluetoothEndpointUtility *bluetoothEndpointUtil;
@property (nonatomic, retain) SASBulletinManager *bulletinManager;
@property (nonatomic) bool buttonDownHasOccurredSinceActivation;
@property (nonatomic, retain) NSMutableDictionary *buttonEventListeners;
@property (nonatomic) bool canActivateFromDirectActionSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didDismissForAssesmentModeStartedCompeltion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASHeater *heater;
@property (nonatomic, retain) SASLockStateMonitor *lockStateMonitor;
@property (getter=_pocketStateFetchingInProgressForHeadsetActivation, setter=_setPocketStateFetchingInProgressForHeadsetActivation:, nonatomic) bool pocketStateFetchingInProgressForHeadsetActivation;
@property (nonatomic, retain) SASPresentationManager *presentationManager;
@property (nonatomic, retain) SASRemoteRequestManager *remoteRequestManager;
@property (nonatomic, retain) AFSiriTether *siriTether;
@property (nonatomic) bool siriTetherIsAttached;
@property (nonatomic, retain) NSMutableDictionary *sources;
@property (readonly) Class superclass;
@property (nonatomic, retain) SASSystemState *systemState;
@property (nonatomic, retain) SASTestingInputController *testingInputController;
@property (nonatomic) bool voiceTriggerNotifyTokenIsValid;
@property (nonatomic) bool xcTestingActive;

+ (id)new;
+ (id)service;

- (void).cxx_destruct;
- (void)_B188ActivationEvent:(long long)arg1 context:(id)arg2 options:(id)arg3;
- (void)_activatePresentationWithIdentifier:(long long)arg1 requestOptions:(id)arg2 analyticsContext:(id)arg3;
- (void)_attachToTether;
- (bool)_buttonIsAVExternalButton:(long long)arg1;
- (bool)_buttonIsTVMicrophoneButton:(long long)arg1;
- (bool)_canActivateForRequest:(id)arg1;
- (void)_cancelActivationPreparationForSetup;
- (void)_cancelPendingActivationEventWithReason:(unsigned long long)arg1;
- (void)_defrost;
- (void)_dismissSiri:(id)arg1;
- (bool)_eyesFreeRedesignOnlySteeringWheelEnabled;
- (void)_handleDesignModeRequest;
- (void)_handlePocketStateFetchForScreenWakeForPresentationIdentifier:(long long)arg1;
- (void)_handleTapSynthesisIfNeededForButtonIdentifier:(long long)arg1 buttonUpTimestamp:(double)arg2;
- (id)_init;
- (bool)_isEyesFreeEligibleWithRequest:(id)arg1;
- (bool)_isInitialRequest;
- (bool)_isSAEEnabled;
- (bool)_isVoiceActivationMaskNecessaryWithRequestOptions:(id)arg1;
- (void)_logActivationToPowerLogWithReason:(long long)arg1;
- (bool)_logCancelledActivationWithButtonIdentifier:(long long)arg1 duration:(double)arg2 targetDuration:(double)arg3;
- (void)_notifyListenersOfButtonDownWithButtonIdentifier:(long long)arg1 atTimestamp:(double)arg2;
- (void)_notifyListenersOfButtonLongPressWithButtonIdentifier:(long long)arg1 atTimestamp:(double)arg2;
- (void)_notifyListenersOfButtonUpWithButtonIdentifier:(long long)arg1 atTimestamp:(double)arg2;
- (void)_notifySourcesOfCanActivateFromDirectActionSourceChange:(bool)arg1;
- (void)_notifySourcesOfPresentationStateChange:(id)arg1;
- (bool)_pocketStateFetchingInProgressForHeadsetActivation;
- (void)_preheatPresentation;
- (void)_recordTimeIfNeededForButtonIdentifier:(long long)arg1 buttonDownTimestamp:(double)arg2;
- (void)_registerForVoiceTrigger;
- (long long)_requestState;
- (void)_setPocketStateFetchingInProgressForHeadsetActivation:(bool)arg1;
- (bool)_shouldHandlePocketStateFetchForRequestOptions:(id)arg1;
- (bool)_shouldRejectActivationWithButtonIdentifier:(long long)arg1 activationAssertions:(id)arg2;
- (bool)_shouldRejectNewActivations:(long long)arg1;
- (bool)_shouldShowHintGlowWithRequest:(id)arg1;
- (bool)_siriIsEnabled;
- (id)_uiPresentationIdentifierWithActivation:(id)arg1 activationPresentation:(long long)arg2;
- (void)_unregisterForVoiceTrigger;
- (void)_updateCanActivateFromDirectActionSource;
- (id)_updateRequestOptionsWithTestingContextFromActivationRequest:(id)arg1 requestOptions:(id)arg2;
- (id)activationAssertions;
- (void)activationRequestFromBluetoothKeyboardActivation:(long long)arg1;
- (void)activationRequestFromBreadcrumb;
- (void)activationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (void)activationRequestFromContinuityWithContext:(id)arg1;
- (void)activationRequestFromContinuousConversationHearstWithContext:(id)arg1;
- (void)activationRequestFromContinuousConversationJarvisWithContext:(id)arg1;
- (void)activationRequestFromContinuousConversationWithContext:(id)arg1;
- (void)activationRequestFromDirectActionEventWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)activationRequestFromRemotePresentationBringUpWithContext:(id)arg1;
- (void)activationRequestFromSimpleActivation:(long long)arg1;
- (void)activationRequestFromSpotlightWithContext:(id)arg1;
- (oneway void)activationRequestFromTestRunnerWithContext:(id)arg1;
- (void)activationRequestFromTestingWithContext:(id)arg1;
- (void)activationRequestFromTostadaWithContext:(id)arg1;
- (void)activationRequestFromVocalShortcutWithContext:(id)arg1;
- (void)activationRequestFromVoiceTrigger;
- (void)activationRequestFromVoiceTriggerWithContext:(id)arg1;
- (double)activationTimestamp;
- (id)afPreferences;
- (id)allBulletins;
- (void)assessmentModeChangedToIsActive:(bool)arg1 completion:(id /* block */)arg2;
- (id)assetUtilities;
- (id)avExternalButtonEvents;
- (id)bluetoothEndpointUtil;
- (id)bulletinForIdentifier:(id)arg1;
- (id)bulletinManager;
- (void)bulletinManagerDidChangeBulletins:(id)arg1;
- (id)bulletinsOnLockScreen;
- (void)buttonDownFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2 context:(id)arg3;
- (bool)buttonDownHasOccurredSinceActivation;
- (id)buttonEventListeners;
- (void)buttonLongPressFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (void)buttonLongPressFromButtonIdentifier:(long long)arg1 deviceIdentifier:(id)arg2 context:(id)arg3;
- (void)buttonTapFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2 context:(id)arg3;
- (void)buttonUpFromButtonIdentifier:(long long)arg1 deviceIdentifier:(id)arg2 timestamp:(double)arg3 context:(id)arg4;
- (void)callStateChangedToIsActive:(bool)arg1 isOutgoing:(bool)arg2;
- (bool)canActivateFromDirectActionSource;
- (void)cancelPrewarmForFirstTapOfQuickTypeToSiriGesture;
- (void)cancelPrewarmFromButtonIdentifier:(long long)arg1;
- (void)deactivationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 options:(id)arg3;
- (void)dealloc;
- (void)didChangeLockState:(unsigned long long)arg1;
- (id /* block */)didDismissForAssesmentModeStartedCompeltion;
- (void)dismissSiriWithOptions:(id)arg1;
- (bool)handleActivationRequest:(id)arg1;
- (bool)handleActivationRequest:(id)arg1 systemState:(id)arg2;
- (id)heater;
- (void)heater:(id)arg1 cancelledPreparationWithButtonIdentifier:(long long)arg2 duration:(double)arg3 targetDuration:(double)arg4;
- (void)heaterSuggestsPreheating:(id)arg1;
- (id)init;
- (bool)isConnectedTo188;
- (id)lockStateMonitor;
- (void)pongWithPresentationIdentifier:(long long)arg1;
- (id)presentationManager;
- (void)presentationManager:(id)arg1 didChangeAggregateState:(id)arg2;
- (void)presentationManager:(id)arg1 didEncounterError:(long long)arg2;
- (long long)presentationWithActivationPriority;
- (bool)presentationsAreIdleAndQuiet;
- (void)prewarmForFirstTapOfQuickTypeToSiriGesture;
- (void)prewarmFromButtonIdentifier:(long long)arg1 longPressInterval:(double)arg2;
- (void)registerActivationAssertion:(id)arg1 withIdentifier:(id)arg2;
- (void)registerActivationSource:(id)arg1 withIdentifier:(id)arg2;
- (void)registerButtonEventListenerServer:(id)arg1 identifier:(id)arg2;
- (void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2;
- (id)remoteRequestManager;
- (unsigned long long)requestOptionsBuilder:(id)arg1 currentLockStateForActivation:(id)arg2;
- (bool)requestOptionsBuilder:(id)arg1 isAcousticIdAllowedWithActiviation:(id)arg2;
- (bool)requestOptionsBuilder:(id)arg1 isPredictedRecordRouteIsZLLWithActiviation:(id)arg2;
- (bool)requestOptionsBuilder:(id)arg1 isRequestInitialWithActiviation:(id)arg2;
- (bool)requestOptionsBuilder:(id)arg1 isSiriCarBluetoothRequest:(id)arg2;
- (id)requestOptionsBuilder:(id)arg1 optionsForOverriding:(id)arg2 withActiviation:(id)arg3;
- (bool)requestOptionsBuilder:(id)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(id)arg2;
- (id)requestOptionsBuilder:(id)arg1 uiPresentationIdentifierWithActivation:(id)arg2 activationPresentation:(long long)arg3;
- (void)scdaShouldAbort:(id)arg1;
- (void)scdaShouldContinue:(id)arg1;
- (void)setActivationAssertions:(id)arg1;
- (void)setActivationTimestamp:(double)arg1;
- (void)setAfPreferences:(id)arg1;
- (void)setAssetUtilities:(id)arg1;
- (void)setAvExternalButtonEvents:(id)arg1;
- (void)setBluetoothEndpointUtil:(id)arg1;
- (void)setBulletinManager:(id)arg1;
- (void)setButtonDownHasOccurredSinceActivation:(bool)arg1;
- (void)setButtonEventListeners:(id)arg1;
- (void)setCanActivateFromDirectActionSource:(bool)arg1;
- (void)setDidDismissForAssesmentModeStartedCompeltion:(id /* block */)arg1;
- (void)setHeater:(id)arg1;
- (void)setHintGlowAssertionFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (void)setLockStateMonitor:(id)arg1;
- (void)setPresentationManager:(id)arg1;
- (void)setRemoteRequestManager:(id)arg1;
- (void)setSiriTether:(id)arg1;
- (void)setSiriTetherIsAttached:(bool)arg1;
- (void)setSources:(id)arg1;
- (void)setSystemState:(id)arg1;
- (void)setTestingInputController:(id)arg1;
- (void)setVoiceTriggerNotifyTokenIsValid:(bool)arg1;
- (void)setXcTestingActive:(bool)arg1;
- (void)siriPresentationDidUpdateState:(id)arg1;
- (void)siriPresentationDismissedWithIdentifier:(long long)arg1;
- (void)siriPresentationDisplayedWithIdentifier:(long long)arg1;
- (void)siriPresentationFailureWithIdentifier:(long long)arg1 error:(id)arg2;
- (void)siriPresentationWillDismissWithIdentifier:(long long)arg1;
- (id)siriTether;
- (bool)siriTetherIsAttached;
- (id)sources;
- (void)speechRequestStateDidChange:(long long)arg1;
- (id)systemState;
- (id)testingInputController;
- (void)unregisterActivationAssertionWithIdentifier:(id)arg1;
- (void)unregisterActivationSourceIdentifier:(id)arg1;
- (void)unregisterButtonEventListenerWithIdentifier:(id)arg1;
- (void)unregisterSiriPresentationIdentifier:(long long)arg1;
- (void)updatePredicatedRecordRoute;
- (bool)voiceTriggerNotifyTokenIsValid;
- (bool)xcTestingActive;

@end

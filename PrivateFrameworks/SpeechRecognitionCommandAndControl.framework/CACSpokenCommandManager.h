/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

@interface CACSpokenCommandManager : NSObject <CACAXNotificationObserverDelegate, CACTouchEventObserverDelegate, UNUserNotificationCenterDelegate> {
    NSArray * _activeApplications;
    FBSApplicationLibrary * _appLibrary;
    FBSALOToken * _applicationAddedObservationToken;
    FBSALOToken * _applicationRemovedObservationToken;
    NSTimer * _assetPurgabilityTimer;
    int  _attentionAwarePreviousDictationRecognizerMode;
    long long  _attentionAwareStatus;
    CACAXNotificationObserver * _axNotificationObserver;
    NSDictionary * _builtInLocalizedCommandStrings;
    NSObject<OS_dispatch_queue> * _commandExecutionDispatchQueue;
    NSString * _commandRecognitionLogPath;
    NSMutableArray * _commandsToIgnore;
    NSString * _currentAttentionAwarenessAction;
    CACSpokenCommand * _currentNextPreviousResolverSpokenCommand;
    int  _currentRecognitionResetMode;
    CACSpokenCommand * _currentRepeatingSpokenCommand;
    int  _dictationRecognizerMode;
    CACDisambiguationHandler * _disambiguationHandler;
    bool  _displayIsOff;
    NSObject<OS_dispatch_queue> * _elementFetchingQueue;
    NSDictionary * _externalContextOverrideTable;
    double  _fetchingTransactionID;
    AXElement * _focusedElement;
    bool  _forceAllCommandsToBeActive;
    NSMutableDictionary * _identifierBasedLanguageModelCache;
    bool  _initialListenRequestWasSuccessful;
    bool  _isAttentionAwareClientRunning;
    bool  _isListening;
    bool  _isRunning;
    CACLabeledElementsCollection * _labeledScreenElementsCollection;
    double  _lastDictationInsertionTimeStamp;
    unsigned int  _lastSyncdInteractionLevel;
    double  _nextFetchDelayFactor;
    NSDictionary * _nextResolverRelationships;
    NSObject<OS_dispatch_queue> * _nonScannerElementFetchingQueue;
    NSMutableDictionary * _oldRXLangaugeObjects;
    NSMutableArray * _pendingCommandToExecute;
    NSObject<OS_dispatch_queue> * _perAppElementFetchingQueue;
    NSArray * _presentationElements;
    NSString * _previousLeadingTextString;
    NSDictionary * _previousResolverRelationships;
    bool  _previousStatusFocusOnSecureField;
    CACTextInsertionSpecifier * _previousTextInsertionSpecifier;
    bool  _recognitionModeOverriddenForDictation;
    int  _recognitionModePriorToDictation;
    NSString * _recognizedCommandIdentifier;
    NSMutableArray * _recognizedCommandsReadyForDispatch;
    NSMutableDictionary * _recognizerInteractionLevels;
    double  _recognizerSyncTransactionID;
    NSObject<OS_dispatch_queue> * _recognizerSynchronizationDispatchQueue;
    NSMutableArray * _recognizers;
    long long  _repeatingSpokenCommandRemainingCount;
    bool  _shouldPreserveDisambiguationHandler;
    CACTextInsertionSpecifier * _stagedTextInsertionSpecifier;
    double  _startedListeningTimeStamp;
    bool  _suspendCommandDispatching;
    id /* block */  _synchronousRemoteRequestCompletionBlock;
    bool  _telephonyInterruptedListening;
    NSArray * _topLevelAndNonScannerElements;
    NSArray * _topLevelElements;
    CACTouchEventObserver * _touchEventObserver;
    NSString * _transientOverlayType;
    bool  _userIsTouching;
    bool  _usingAutomationMode;
}

@property (nonatomic, retain) FBSApplicationLibrary *appLibrary;
@property (nonatomic, retain) FBSALOToken *applicationAddedObservationToken;
@property (nonatomic, retain) FBSALOToken *applicationRemovedObservationToken;
@property (nonatomic, retain) CACAXNotificationObserver *axNotificationObserver;
@property (readonly) NSString *commandRecognitionLogPath;
@property (retain) NSMutableArray *commandsToIgnore;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property int dictationRecognizerMode;
@property (retain) CACDisambiguationHandler *disambiguationHandler;
@property (readonly) bool forceAllCommandsToBeActive;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAttentionAwareClientRunning;
@property (nonatomic, readonly) bool isFetchingElements;
@property (readonly) CACLabeledElementsCollection *labeledScreenElementsCollection;
@property (nonatomic, readonly) double lastDictationInsertionTimeStamp;
@property (retain) CACTextInsertionSpecifier *previousTextInsertionSpecifier;
@property (retain) NSString *recognizedCommandIdentifier;
@property (retain) NSObject<OS_dispatch_queue> *recognizerSynchronizationDispatchQueue;
@property (nonatomic) bool shouldPreserveDisambiguationHandler;
@property (retain) CACTextInsertionSpecifier *stagedTextInsertionSpecifier;
@property (readonly) Class superclass;
@property (nonatomic) bool telephonyInterruptedListening;
@property (nonatomic, retain) CACTouchEventObserver *touchEventObserver;
@property (retain) NSString *transientOverlayType;
@property (readonly) bool userIsTouching;
@property (readonly) bool usingAutomationMode;

+ (id)_allCommandIdentifiers;
+ (id)_allCommandsTable;
+ (id)capitalizedStringFromString:(id)arg1;
+ (id)commandPropertiesForIdentifier:(id)arg1;
+ (bool)doesEvaluatorKey:(id)arg1 matchValue:(id)arg2;
+ (id)hardwareEvaluatorKeys;
+ (id)sharedCACSpokenCommandManager;

- (void).cxx_destruct;
- (id)_allElementsIncludingNonScanner;
- (void)_appendSpokenCommand:(id)arg1 toLogAtPath:(id)arg2;
- (id)_arrayFromExternalContextOverrideForBuiltInIdentifier:(id)arg1;
- (void)_attentionAwareSettingChanged;
- (bool)_attentionIsLostWithListeningOffAction;
- (void)_cancelSynchronousRemoteRecognition;
- (bool)_chamoisSupportEnabledForVoiceControl;
- (void)_clearPreviousTextInsertionSpecifierBasedOnExecutedCommand:(id)arg1;
- (void)_closeAllRecognizers;
- (void)_createCommandRecognizersIfNecessary;
- (id)_descriptionForAXTextUnit:(unsigned long long)arg1;
- (void)_executeNextRepeatWithCompletionBlock:(id /* block */)arg1;
- (void)_fetchElements;
- (id)_fetchPresentationElements;
- (void)_flushBuiltInLMIdentifierTable;
- (void)_handleLanguageChange;
- (void)_handlePendingCommands;
- (void)_intializeBuiltInLMIdentifierTableIfNecessary;
- (bool)_isNumberOnlyString:(id)arg1 lessThanOrEqualToValue:(long long)arg2;
- (bool)_isSystemSleeping;
- (void)_markAsDirtyForBuiltInLMIdentifier:(id)arg1;
- (void)_microphoneTurnedOff;
- (void)_microphoneTurnedOffAfterInteruption;
- (void)_microphoneTurnedOn;
- (void)_microphoneTurnedOnAfterInteruption;
- (id)_nextResolverRelationships;
- (void)_notifyStatusChanged:(long long)arg1;
- (bool)_popInteractionLevel:(unsigned int)arg1 referencingObject:(id)arg2;
- (id)_previousResolverRelationships;
- (bool)_pushInteractionLevel:(unsigned int)arg1 referencingObject:(id)arg2;
- (void)_pushLeadingContextToSpeechRecognitionSystem;
- (void)_pushSecureFieldStatusToSpeechRecognitionSystem;
- (void)_rebuildCommandRecognizers;
- (void)_rebuildCustomCommandRecognizers;
- (void)_resetInteractionLevel;
- (void)_resetRecognitionSystems;
- (void)_scheduleFetchElementsWithDelay:(double)arg1;
- (void)_scheduleFetchElementsWithDelay:(double)arg1 andReason:(id)arg2;
- (bool)_shouldBeListening;
- (void)_startListening;
- (void)_startSynchronousRemoteRecognitionWithCompletionBlock:(id /* block */)arg1;
- (void)_stopListening;
- (id)_stringInRecognitionLocaleFormatFromIntegerValue:(long long)arg1;
- (void)_supressKeyboardDictation:(bool)arg1 withReason:(id)arg2;
- (id)_telephonyQueue;
- (bool)_telephonyRequiresAirPods;
- (id)_templateSpokenCommandWithIdentifier:(id)arg1;
- (void)_updateAssetPurgeability;
- (void)_updateLanguageModelForBuiltInLMIdentifier:(id)arg1;
- (void)_updateMostRecentLaunchTime;
- (void)_waitUntilElementsAreNumbered;
- (id)activeApplications;
- (id)activeCommandIdentifiers;
- (id)activeCommandsForLocaleIdentifier:(id)arg1;
- (id)activeOverlayType;
- (id)allCommandsForLocaleIdentifier:(id)arg1;
- (id)allCustomCommandsDetail;
- (id)appLibrary;
- (id)applicationAddedObservationToken;
- (id)applicationRemovedObservationToken;
- (void)attemptGrabbingMic:(id)arg1;
- (void)attentionAwareGained;
- (void)attentionAwareInterrupted;
- (void)attentionAwareInterruptionEnded;
- (void)attentionAwareLost;
- (id)axNotificationObserver;
- (void)beginExecutingRepeatingSpokenCommandNumberOfTimes:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)beginObservingApplications;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestDictationRecognizerModeImageRectForView:(id)arg1;
- (void)cancelAnyTransientOverlay;
- (void)carPlayConnectedDidChange;
- (id)commandRecognitionLogPath;
- (id)commandsToIgnore;
- (id)contextSummary;
- (id)copySupportedCommandWithIdentifier:(id)arg1;
- (unsigned int)currentInteractionLevel;
- (unsigned int)currentInteractionLevelPassingBackTopReferencingObject:(id*)arg1;
- (void)dealloc;
- (double)delayForNotification:(int)arg1;
- (int)dictationRecognizerMode;
- (void)didBeginTouches;
- (void)didEndTouches;
- (void)didFindCloseSpokenCommandIdentifiers:(id)arg1;
- (void)didFinishExecutingSpokenCommand:(id)arg1;
- (void)didObserveFirstTouchDownForObserver:(id)arg1;
- (void)didObserveLastTouchUpForObserver:(id)arg1;
- (id)disambiguationHandler;
- (void)dispatchPendingCommand;
- (void)displayMessageAndQuitVoiceControl;
- (void)displayRetryMessage;
- (void)displayRetryMessageAndRetryGrabbingMic;
- (bool)doesCurrentLanguageSupportInterWordSpaces;
- (bool)doesFocusedElementRequireSecureInput;
- (bool)elementIsOccluded:(id)arg1 occludedAppScenes:(id)arg2;
- (void)enterDictatedString:(id)arg1;
- (void)enterSleepInteractionLevel;
- (void)exitSleepInteractionLevel;
- (id)focusedElement;
- (bool)forceAllCommandsToBeActive;
- (void)forceElementFetch;
- (void)forceElementFetchWithReason:(id)arg1;
- (void)forceSynchronizeRecognizersForBuiltInLMIdentifier:(id)arg1;
- (id)groupedCommandsForLocaleIdentifier:(id)arg1;
- (void)handleCommandWithIdentifier:(id)arg1;
- (void)handleRecognizedCommand:(id)arg1;
- (void)handleSRSystemBeginUtteranceWithID:(unsigned long long)arg1;
- (void)handleSRSystemServerError;
- (id)inCallServiceApplication;
- (void)insertDictatedAttributedString:(id)arg1;
- (void)insertDictatedString:(id)arg1;
- (bool)isActiveOverlayType:(id)arg1;
- (bool)isAttentionAwareClientRunning;
- (bool)isFetchingElements;
- (bool)isListening;
- (bool)isNextPreviousResolverSpokenCommandEmojiBased;
- (bool)isSynchronizingRecognizers;
- (id)labeledElementsFromScreen;
- (id)labeledElementsFromScreenWithTitle:(id)arg1;
- (id)labeledElementsFromScreenWithTrait:(unsigned long long)arg1;
- (id)labeledScreenElementsCollection;
- (id)languageModelForBuiltInLMIdentifier:(id)arg1;
- (double)lastDictationInsertionTimeStamp;
- (id)leadingTextForCurrentSelection;
- (id)nameOfAXNotification:(int)arg1;
- (void)notifyUserOfCommandFailureUsingSound;
- (void)notifyUserOfCommandFailureWithTitle:(id)arg1 description:(id)arg2;
- (void)observer:(id)arg1 didObserveNotification:(int)arg2 notificationData:(void*)arg3;
- (void)performOnRecognizerSynchronizationDispatchQueueIfRunning:(id /* block */)arg1;
- (id)previousTextInsertionSpecifier;
- (id)primaryStringForCommandIdentifier:(id)arg1;
- (id)recognizedCommandIdentifier;
- (id)recognizerSynchronizationDispatchQueue;
- (void)registerSignPostBeginProcessingForSpeechRecognizer:(id)arg1 message:(id)arg2;
- (void)registerSignPostEndProcessingForSpeechRecognizer:(id)arg1 message:(id)arg2;
- (id)resolvedNextSpokenCommand;
- (id)resolvedPreviousSpokenCommand;
- (void)run;
- (struct __RXLanguageObject { }*)rxLanguageObjectForBuiltInLMIdentifier:(id)arg1;
- (id)screenElements;
- (id)screenElementsForEscape;
- (id)screenElementsForScrolling;
- (void)setAppLibrary:(id)arg1;
- (void)setApplicationAddedObservationToken:(id)arg1;
- (void)setApplicationRemovedObservationToken:(id)arg1;
- (void)setAxNotificationObserver:(id)arg1;
- (void)setCommandsToIgnore:(id)arg1;
- (void)setDictationRecognizerMode:(int)arg1;
- (void)setDisambiguationHandler:(id)arg1;
- (void)setNextFetchDelayFactor:(double)arg1;
- (void)setNextPreviousResolverSpokenCommand:(id)arg1;
- (void)setPreviousTextInsertionSpecifier:(id)arg1;
- (void)setRecognizedCommandIdentifier:(id)arg1;
- (void)setRecognizerSynchronizationDispatchQueue:(id)arg1;
- (void)setRepeatingSpokenCommand:(id)arg1;
- (void)setScreenElements:(id)arg1 presentationElements:(id)arg2 activeApplications:(id)arg3 focusedTextAreaElement:(id)arg4;
- (void)setShouldPreserveDisambiguationHandler:(bool)arg1;
- (void)setStagedTextInsertionSpecifier:(id)arg1;
- (void)setTelephonyInterruptedListening:(bool)arg1;
- (void)setTouchEventObserver:(id)arg1;
- (void)setTransientOverlayType:(id)arg1;
- (bool)shouldIgnoreCommand:(id)arg1;
- (bool)shouldPreserveDisambiguationHandler;
- (bool)showUIAsListening;
- (id)stagedTextInsertionSpecifier;
- (void)startListening;
- (void)startRecordingGesture;
- (void)stopAnyRepeatingSpokenCommand;
- (void)stopListening;
- (void)stopObservingApplications;
- (id)stopRecordingGesture;
- (void)suspendCommandDispatching:(bool)arg1;
- (void)synchronizeRecognizersWithReason:(id)arg1;
- (id)synchronousRecognitionOfString:(id)arg1 timeoutInterval:(double)arg2;
- (id)synchronousRecognitionUsingCommandIdentifier:(id)arg1 parameters:(id)arg2 timeoutInterval:(double)arg3;
- (bool)telephonyInterruptedListening;
- (id)touchEventObserver;
- (id)transientOverlayType;
- (void)updateScreenElementsWithNonScannerElements:(id)arg1;
- (void)updateStatusIndicatorView;
- (bool)userIsTouching;
- (bool)usingAutomationMode;
- (void)willTerminate;
- (void)willUpdateElementsSignificantly;

@end

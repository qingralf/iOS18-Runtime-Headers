/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFAppIntentExecutionAction : WFAction <LNActionExecutorDelegate, WFDynamicEnumerationDataSource, WFLinkActionProtocol, WFStandaloneShortcutAction> {
    LNActionConfigurationContext * _actionConfigurationContext;
    INAppIntentDescriptor * _appIntentDescriptor;
    LNAttribution * _attribution;
    long long  _authenticationPolicy;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    LNAppIntentConnectionPolicy * _connectionPolicy;
    LNConnectionPolicySignals * _connectionPolicySignals;
    NSMutableDictionary * _dependentParameterIdentifiers;
    bool  _didRunOpensIntent;
    NSSet * _fetchingDisplayRepresentationParameterKeys;
    LNFullyQualifiedActionIdentifier * _fullyQualifiedLinkActionIdentifier;
    LNSystemContext * _linkSystemContext;
    LNActionMetadata * _metadata;
    NSDictionary * _outputDictionary;
    NSMutableDictionary * _parameterIdentifiersNeedingValues;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _policyLock;
    NSString * _preferredExtensionBundleIdentifier;
    NSObject<OS_dispatch_queue> * _processingParametersQueue;
    bool  _shouldSkipLoadingDefaultValue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _signalsLock;
    LNUndoContext * _undoContext;
}

@property (nonatomic, readonly) LNActionConfigurationContext *actionConfigurationContext;
@property (nonatomic, readonly) bool actionIsExecutedFromAnotherDevice;
@property (nonatomic, readonly) INAppIntentDescriptor *appIntentDescriptor;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, retain) LNAttribution *attribution;
@property (nonatomic) long long authenticationPolicy;
@property (nonatomic, readonly) LNConnection *connection;
@property (nonatomic, readonly) LNAppIntentConnectionPolicy *connectionPolicy;
@property (nonatomic, readonly) LNConnectionPolicySignals *connectionPolicySignals;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSMutableDictionary *dependentParameterIdentifiers;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRunOpensIntent;
@property (nonatomic, readonly) NSString *displayableAppBundleIdentifier;
@property (nonatomic, readonly) LNActionExecutorOptions *executorOptions;
@property (nonatomic, copy) NSSet *fetchingDisplayRepresentationParameterKeys;
@property (nonatomic, readonly) LNFullyQualifiedActionIdentifier *fullyQualifiedLinkActionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LNSystemContext *linkSystemContext;
@property (nonatomic, readonly) LNActionMetadata *metadata;
@property (nonatomic, retain) NSMutableDictionary *parameterIdentifiersNeedingValues;
@property (nonatomic, copy) NSString *preferredExtensionBundleIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingParametersQueue;
@property (nonatomic, readonly) long long runKind;
@property (nonatomic, readonly) bool shouldSkipLoadingDefaultValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) LNUndoContext *undoContext;

- (void).cxx_destruct;
- (id)actionConfigurationContext;
- (bool)actionIsExecutedFromAnotherDevice;
- (id)alertForLinkActionConfirmationWithActionMetadata:(id)arg1 dialogString:(id)arg2 request:(id)arg3;
- (void)alertForLinkActionConfirmationWithParameterMetadata:(id)arg1 dialogString:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)alertForLinkConfirmationDialogRequest:(id)arg1 preferredStyle:(long long)arg2 handler:(id /* block */)arg3;
- (id)appDescriptor;
- (id)appIntentDescriptor;
- (void)askForParameterValueForParameterName:(id)arg1 request:(id)arg2 dialogString:(id)arg3;
- (id)associatedAppBundleIdentifier;
- (id)attribution;
- (long long)authenticationPolicy;
- (id)backingActionIdentifiers;
- (id)bundleIdentifier;
- (void)completeLoadingPossibleStatesForEnumerationParameter:(id)arg1 result:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)configureParameter:(id)arg1;
- (void)confirmActionWithRequest:(id)arg1 dialogString:(id)arg2;
- (void)confirmContinueInAppWithRequest:(id)arg1 dialogString:(id)arg2;
- (void)confirmParameterValueForParameterName:(id)arg1 request:(id)arg2 dialogString:(id)arg3;
- (id)connection;
- (id)connectionPolicy;
- (id)connectionPolicySignals;
- (id)copyForProcessing;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1 result:(id)arg2;
- (id)dependentParameterIdentifiers;
- (bool)didRunOpensIntent;
- (void)disambiguateParameterForParameterName:(id)arg1 request:(id)arg2 dialogString:(id)arg3;
- (id)displayableAppBundleIdentifier;
- (id)displayableAppDescriptor;
- (id)entityMetadataForIdentifier:(id)arg1;
- (id)enumeration:(id)arg1 accessoryImageForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 localizedSubtitleLabelForPossibleState:(id)arg2;
- (bool)enumeration:(id)arg1 shouldStripSenstitiveContentFromValue:(id)arg2;
- (bool)enumerationShouldAlwaysReloadPossibleStates:(id)arg1;
- (void)executor:(id)arg1 environmentForViewSnippetWithCompletion:(id /* block */)arg2;
- (void)executor:(id)arg1 needsActionConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsAppProtectionUnlockWithCompletionHandler:(id /* block */)arg2;
- (void)executor:(id)arg1 needsConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsContinueInAppWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsDisambiguationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsValueWithRequest:(id)arg2;
- (void)executor:(id)arg1 preferredContentSizeForViewSnippetWithCompletion:(id /* block */)arg2;
- (bool)executor:(id)arg1 shouldRunShowOutputAction:(id)arg2;
- (id)executorOptions;
- (void)executorWillLaunchApplicationInForeground:(id)arg1;
- (id)externalMetricsActionIdentifier;
- (id)externalMetricsBundleIdentifier;
- (void)fetchMissingDisplayRepresentationValuesWithCompletionHandler:(id /* block */)arg1;
- (id)fetchingDisplayRepresentationParameterKeys;
- (void)finishRunningWithError:(id)arg1;
- (id)fullyQualifiedLinkActionIdentifier;
- (void)generateShortcutRepresentation:(id /* block */)arg1;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)arg1;
- (void)getLinkActionForArchivingFallingBackToDefaultValue:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)getLinkActionForArchivingWithCompletionHandler:(id /* block */)arg1;
- (void)getLinkActionWithProcessedParameters:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getLinkActionWithProcessedParameters:(id)arg1 forFocusConfiguration:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getLinkActionWithProcessedParameters:(id)arg1 forFocusConfiguration:(bool)arg2 fallingBackToDefaultValue:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)getValueForParameterData:(id)arg1 ofProcessedParameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getValueForParameterData:(id)arg1 ofProcessedParameters:(id)arg2 fallingBackToDefaultValue:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 definition:(id)arg3 serializedParameters:(id)arg4 appIntentDescriptor:(id)arg5 fullyQualifiedActionIdentifier:(id)arg6;
- (bool)isApprovedForPublicShortcutsDrawer;
- (bool)isProgressIndeterminate;
- (id)linkActionWithParameters:(id)arg1;
- (id)linkSystemContext;
- (void)loadDefaultResultForEnumeration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadDynamicResultForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadDynamicResultForEnumeration:(id)arg1 searchTerm:(id)arg2 optionsProviderReference:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 optionsProviderReference:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)localizedDefaultOutputNameWithContext:(id)arg1;
- (id)metadata;
- (bool)mightSuppressRunningProgress;
- (id)outputDictionary;
- (id)parameterIdentifiersNeedingValues;
- (id)parameterMetadataForIdentifier:(id)arg1;
- (id)parametersNeedingDisplayRepresentation;
- (bool)populatesInputFromInputParameter;
- (id)postProcessToolKitProcessedValue:(id)arg1 forParameter:(id)arg2;
- (id)preferredExtensionBundleIdentifier;
- (void)processEncodedValue:(id)arg1 withToolKitInvocation:(id)arg2 forParameter:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)processValueForParameter:(id)arg1 withToolKitInvocation:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)processingParametersQueue;
- (bool)progressIsPersistentInSystemApertureForExecutor:(id)arg1;
- (bool)requiresUnlock;
- (long long)runKind;
- (unsigned short)runSource;
- (id)sessionKitSessionInvocationType;
- (void)setAttribution:(id)arg1;
- (void)setAuthenticationPolicy:(long long)arg1;
- (void)setDidRunOpensIntent:(bool)arg1;
- (void)setFetchingDisplayRepresentationParameterKeys:(id)arg1;
- (void)setLinkSystemContext:(id)arg1;
- (void)setParameterIdentifiersNeedingValues:(id)arg1;
- (void)setPreferredExtensionBundleIdentifier:(id)arg1;
- (void)setUndoContext:(id)arg1;
- (bool)shouldAskForValuesWhileProcessingParameterStates;
- (bool)shouldLoadDefaultStateAsynchronouslyForEnumeration:(id)arg1;
- (bool)shouldLocalizeValueForSelector:(SEL)arg1;
- (bool)shouldSkipLoadingDefaultValue;
- (bool)shouldStripSensitiveContentFromParameterSerialization;
- (void)showChronoControlIfPossibleForIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)skipExecutingInSiri;
- (Class)toolkitValueClassForParameter:(id)arg1;
- (id)undoContext;
- (id)valueForParameterData:(id)arg1 withParameterState:(id)arg2;
- (bool)valueShouldStripSensitiveContent:(id)arg1;
- (bool)visibleForUse:(long long)arg1;
- (void)willBeginProcessingParameterStates;

@end

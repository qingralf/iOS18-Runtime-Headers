/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFAction : NSObject <NSCopying, NSItemProviderReading, NSItemProviderWriting, WFAppInstalledResourceDelegate, WFParameterEventObserver, WFUUIDProvider, WFVariableProvider> {
    <WFActionRemoteUserInterface> * _actionUserInterface;
    NSSet * _allowedOnceSmartPromptStates;
    INAppDescriptor * _appDescriptor;
    WFAppInstalledResource * _appResource;
    WFActionAuxiliaryButton * _auxiliaryButton;
    NSMutableDictionary * _cachedDefaultParameterStates;
    id /* block */  _completionHandler;
    WFContentAttributionTracker * _contentAttributionTracker;
    <WFContentPermissionRequestor> * _contentPermissionRequestor;
    NSArray * _currentGeneratedResourceNodes;
    NSArray * _currentUnevaluatedResourceNodes;
    NSMutableDictionary * _decodedParameterStates;
    WFActionDefinition * _definition;
    bool  _didRunRemotely;
    NSObject<OS_dispatch_queue> * _effectiveWorkQueue;
    NSMutableDictionary * _encodedSerializedParameters;
    NSHashTable * _eventObservers;
    NSMutableDictionary * _expandingParameters;
    <WFActionExtendedOperation> * _extendedOperation;
    NSString * _identifier;
    NSSet * _ignoredParameterKeysForProcessing;
    WFContentCollection * _input;
    NSArray * _inputContentClasses;
    bool  _inputParameterUnlocked;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    WFContentCollection * _output;
    NSArray * _outputContentClasses;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _parameterInitializationLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _parameterStateDeserializationLock;
    NSArray * _parameters;
    NSDictionary * _parametersByKey;
    NSDictionary * _processedParameters;
    NSProgress * _progress;
    WFResourceManager * _resourceManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resourceManagerLock;
    bool  _running;
    <WFActionRunningDelegate> * _runningDelegate;
    WFSessionKitAssertion * _sessionKitAssertion;
    bool  _skipsProcessingHiddenParameters;
    WFToolInvocation * _toolInvocation;
    <WFUserInterfaceHost> * _userInterface;
    <WFVariableDataSource> * _variableSource;
    NSString * _widgetSizeClass;
    NSObject<OS_dispatch_queue> * _workQueue;
    WFWorkflow * _workflow;
}

@property (nonatomic, copy) NSString *UUID;
@property (nonatomic, readonly) NSString *accessibilityName;
@property (nonatomic, retain) <WFActionRemoteUserInterface> *actionUserInterface;
@property (nonatomic, readonly) NSArray *additionalParameterSummaries;
@property (nonatomic, copy) NSSet *allowedOnceSmartPromptStates;
@property (nonatomic, readonly) ICApp *app;
@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSDictionary *appDefinition;
@property (nonatomic, retain) INAppDescriptor *appDescriptor;
@property (nonatomic, retain) WFAppInstalledResource *appResource;
@property (nonatomic, readonly) unsigned long long appearance;
@property (getter=isApprovedForPublicShortcutsDrawer, nonatomic, readonly) bool approvedForPublicShortcutsDrawer;
@property (nonatomic, readonly) NSAttributedString *attributedLocalizedName;
@property (nonatomic, retain) WFActionAuxiliaryButton *auxiliaryButton;
@property (nonatomic, readonly) NSArray *availableOutputActions;
@property (nonatomic, readonly) NSArray *availableVariableNames;
@property (nonatomic, readonly) bool blocksSnapping;
@property (nonatomic, readonly) NSMutableDictionary *cachedDefaultParameterStates;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (getter=isConstructorAction, nonatomic, readonly) bool constructorAction;
@property (nonatomic, readonly) WFContactStore *contactStore;
@property (nonatomic, retain) WFContentAttributionTracker *contentAttributionTracker;
@property (nonatomic, readonly) Class contentItemClass;
@property (nonatomic, retain) <WFContentPermissionRequestor> *contentPermissionRequestor;
@property (nonatomic, copy) NSArray *currentGeneratedResourceNodes;
@property (nonatomic, copy) NSArray *currentUnevaluatedResourceNodes;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSMutableDictionary *decodedParameterStates;
@property (nonatomic, readonly) WFLocalizationContext *defaultLocalizationContext;
@property (nonatomic, readonly, copy) WFActionDefinition *definition;
@property (nonatomic, readonly) bool deletesInput;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFActionDescriptionDefinition *descriptionDefinition;
@property (nonatomic) bool didRunRemotely;
@property (nonatomic, readonly) NSArray *disabledOnPlatforms;
@property (getter=isDiscontinued, nonatomic, readonly) bool discontinued;
@property (nonatomic, readonly) NSDictionary *displayableAppDefinition;
@property (nonatomic, readonly) INAppDescriptor *displayableAppDescriptor;
@property (nonatomic, readonly) bool displaysParameterSummary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *effectiveWorkQueue;
@property (nonatomic, readonly) NSMutableDictionary *encodedSerializedParameters;
@property (nonatomic, readonly) NSHashTable *eventObservers;
@property (nonatomic, readonly) NSMutableDictionary *expandingParameters;
@property (nonatomic, retain) <WFActionExtendedOperation> *extendedOperation;
@property (nonatomic, readonly, copy) NSString *externalMetricsActionIdentifier;
@property (nonatomic, readonly, copy) NSString *externalMetricsBundleIdentifier;
@property (nonatomic, readonly) NSString *fillingProvider;
@property (nonatomic, copy) NSString *groupingIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool highRisk;
@property (nonatomic, readonly) WFIcon *icon;
@property (nonatomic, readonly) NSString *iconBackgroundColorName;
@property (nonatomic, readonly) WFColor *iconColor;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *iconSymbolName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *ignoredParameterKeysForProcessing;
@property (nonatomic, readonly) long long initialSuggestionBehavior;
@property (nonatomic, readonly) WFContentCollection *input;
@property (nonatomic, readonly) NSArray *inputContentClasses;
@property (nonatomic, readonly) NSDictionary *inputDictionary;
@property (nonatomic, readonly) WFParameter *inputParameter;
@property (nonatomic, readonly) NSString *inputParameterKey;
@property (nonatomic) bool inputParameterUnlocked;
@property (nonatomic, readonly) bool inputPassthrough;
@property (nonatomic, readonly) bool inputRequired;
@property (nonatomic, readonly) bool inputTypeDeterminesOutputType;
@property (nonatomic, readonly) bool inputTypePassthrough;
@property (nonatomic, readonly) NSArray *inputTypes;
@property (nonatomic, readonly) bool inputsMultipleItems;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isProgressIndeterminate;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (getter=isLastAction, nonatomic, readonly) bool lastAction;
@property (nonatomic, readonly) NSString *localizedAttribution;
@property (nonatomic, readonly) NSString *localizedCategory;
@property (nonatomic, readonly) NSString *localizedDefaultDisambiguationPrompt;
@property (nonatomic, readonly) NSString *localizedDefaultOutputName;
@property (nonatomic, readonly) NSString *localizedDescriptionAttributionMarkdownString;
@property (nonatomic, readonly) NSString *localizedDescriptionInput;
@property (nonatomic, readonly) NSString *localizedDescriptionNote;
@property (nonatomic, readonly) NSString *localizedDescriptionRequires;
@property (nonatomic, readonly) NSString *localizedDescriptionResult;
@property (nonatomic, readonly) NSString *localizedDescriptionSummary;
@property (nonatomic, readonly) NSString *localizedDiscontinuedDescription;
@property (nonatomic, readonly) NSString *localizedFocusFilterDescription;
@property (nonatomic, readonly) NSAttributedString *localizedFooter;
@property (nonatomic, readonly, copy) NSString *localizedKeyParameterDisplayName;
@property (nonatomic, readonly) NSArray *localizedKeywords;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) bool locallyProcessesData;
@property (nonatomic, readonly, copy) NSString *metricsIdentifier;
@property (nonatomic, readonly) bool mightStartAudioRecording;
@property (nonatomic, readonly) bool mightSuppressRunningProgress;
@property (getter=isMissing, nonatomic, readonly) bool missing;
@property (nonatomic, readonly) bool neverSuggested;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } observersLock;
@property (nonatomic, retain) WFContentCollection *output;
@property (nonatomic, readonly) NSArray *outputContentClasses;
@property (nonatomic, readonly) NSDictionary *outputDictionary;
@property (nonatomic, readonly) unsigned long long outputDisclosureLevel;
@property (getter=isOutputExpandedInEditor, nonatomic) bool outputExpandedInEditor;
@property (nonatomic, readonly) WFIcon *outputIcon;
@property (nonatomic, readonly) bool outputIsRenamed;
@property (nonatomic, readonly) NSString *outputMeasurementUnitType;
@property (nonatomic, copy) NSString *outputName;
@property (nonatomic, readonly) NSArray *outputTypes;
@property (nonatomic, readonly) bool outputsMultipleItems;
@property (nonatomic, readonly) unsigned long long parameterCollapsingBehavior;
@property (nonatomic, readonly) NSArray *parameterDefinitions;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } parameterInitializationLock;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } parameterStateDeserializationLock;
@property (nonatomic, readonly) WFActionParameterSummary *parameterSummary;
@property (nonatomic, readonly) NSString *parameterSummaryString;
@property (nonatomic, readonly) NSArray *parameters;
@property (nonatomic, readonly, copy) NSDictionary *parametersByKey;
@property (nonatomic, readonly) bool populatesInputFromInputParameter;
@property (nonatomic, readonly) bool prefersActionAttribution;
@property (nonatomic, copy) NSDictionary *processedParameters;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) long long rateLimitDelay;
@property (nonatomic, readonly) long long rateLimitThreshold;
@property (nonatomic, readonly) long long rateLimitTimeout;
@property (nonatomic, readonly) NSArray *remoteExecuteOnPlatforms;
@property (nonatomic, readonly) NSArray *requiredResources;
@property (nonatomic, readonly) bool requiresPrivateOutputLogging;
@property (nonatomic, readonly) bool requiresRemoteExecution;
@property (nonatomic, readonly) bool requiresUnlock;
@property (getter=isResidentCompatible, nonatomic, readonly) bool residentCompatible;
@property (nonatomic, readonly) WFResourceManager *resourceManager;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } resourceManagerLock;
@property (getter=isRunning, nonatomic) bool running;
@property (nonatomic, readonly) <WFActionRunningDelegate> *runningDelegate;
@property (nonatomic, readonly) bool runningInToolKit;
@property (nonatomic, readonly) NSDictionary *serializedRepresentation;
@property (nonatomic, retain) WFSessionKitAssertion *sessionKitAssertion;
@property (nonatomic, readonly) WFActionSessionKitSessionConfiguration *sessionKitSessionConfiguration;
@property (nonatomic, readonly) NSDictionary *sessionKitSessionConfigurationDefinition;
@property (nonatomic, readonly) NSString *sessionKitSessionInvocationType;
@property (nonatomic, readonly) NSDictionary *sessionKitToastDurationsPerRunSourceDefinition;
@property (nonatomic, readonly) bool shouldBeIncludedInAppsList;
@property (nonatomic, readonly) bool skipsProcessingHiddenParameters;
@property (nonatomic, readonly) bool snappingPassthrough;
@property (nonatomic, readonly) NSArray *specifiedInputContentClasses;
@property (nonatomic, readonly) NSArray *specifiedOutputContentClasses;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedAppIdentifiers;
@property (nonatomic, retain) WFToolInvocation *toolInvocation;
@property (nonatomic, retain) <WFUserInterfaceHost> *userInterface;
@property (nonatomic, readonly) NSDictionary *userInterfaceClasses;
@property (nonatomic, readonly) NSArray *userInterfaceTypes;
@property (nonatomic, readonly) bool usesLegacyInputBehavior;
@property (nonatomic, retain) <WFVariableDataSource> *variableSource;
@property (nonatomic) long long widgetFamily;
@property (nonatomic, copy) NSString *widgetSizeClass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) NSArray *workflowInputClasses;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider; /* unknown property attribute: ? */

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)actionFromSerializedRepresentation:(id)arg1 actionRegistry:(id)arg2;
+ (id)actionsFromSerializedRepresentations:(id)arg1 actionRegistry:(id)arg2;
+ (id)colorForName:(id)arg1;
+ (id)iconCache;
+ (bool)outputIsExemptFromTaintTrackingInheritance;
+ (void)showImplicitChooseFromListWithInput:(id)arg1 userInterface:(id)arg2 workQueue:(id)arg3 cancelHandler:(id /* block */)arg4 selectionHandler:(id /* block */)arg5;
+ (id)tintedColorForName:(id)arg1;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (id)UUID;
- (void)_processParameterStates:(id)arg1 withInput:(id)arg2 skippingHiddenParameters:(bool)arg3 askForValuesIfNecessary:(bool)arg4 workQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)accessibilityName;
- (id)actionForAppIdentifier:(id)arg1;
- (id)actionProvidingVariableWithOutputUUID:(id)arg1;
- (id)actionUserInterface;
- (id)actionsProvidingVariableName:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)addVariableObserver:(id)arg1;
- (id)additionalParameterSummaries;
- (bool)allowSessionKitSessionsIfNeededWithConfiguration:(id)arg1 error:(id*)arg2;
- (bool)allowSessionKitSessionsIfNeededWithConfiguration:(id)arg1 isManualInvocation:(bool)arg2 error:(id*)arg3;
- (id)allowedOnceSmartPromptStates;
- (bool)allowsAnyURLDestinationWhenAddedToWorkflowByUser;
- (id)app;
- (id)appBundleIdentifier;
- (id)appDefinition;
- (id)appDescriptor;
- (void)appInstalledResource:(id)arg1 didUpdateAppDescriptor:(id)arg2;
- (id)appResource;
- (bool)appResourceRequiresAppInstall;
- (unsigned long long)appearance;
- (void)askForValuesOfParameters:(id)arg1 withDefaultStates:(id)arg2 prompts:(id)arg3 input:(id)arg4 workQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)attributedLocalizedName;
- (id)auxiliaryButton;
- (id)availableOutputActions;
- (id)availableVariableNames;
- (bool)blocksSnapping;
- (id)cachedDefaultParameterStates;
- (bool)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2;
- (bool)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2 includingCoercedTypes:(bool)arg3;
- (bool)canOfferSuggestionsForParameterWithKey:(id)arg1;
- (void)cancel;
- (void)checkUserInterfaceAndRun;
- (id)classesForTypeArray:(id)arg1 includeAllOutputTypes:(bool)arg2;
- (id /* block */)completionHandler;
- (void)configureParameter:(id)arg1;
- (void)configureResourcesForParameter:(id)arg1;
- (id)contactStore;
- (id)containedVariables;
- (id)containedVariablesOfClass:(Class)arg1;
- (bool)containsVariableOfType:(id)arg1;
- (id)contentAttributionTracker;
- (id)contentDestinationWithError:(id*)arg1;
- (Class)contentItemClass;
- (id)contentPermissionRequestor;
- (id)contextualActionsForSurface:(unsigned long long)arg1;
- (id)copyForDuplicating;
- (id)copyForProcessing;
- (id)copyParameterStates;
- (id)copyParameterStatesWithFallingBackToDefaultValue:(bool)arg1;
- (id)copyWithDefinition:(id)arg1 serializedParameters:(id)arg2;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAccompanyingActions;
- (id)createResourceManager;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (id)currentGeneratedResourceNodes;
- (id)currentUnevaluatedResourceNodes;
- (id)customOutputName;
- (id)debugDescription;
- (id)decodedParameterStates;
- (id)defaultLocalizationContext;
- (id)defaultParameterStateForKey:(id)arg1;
- (id)definition;
- (bool)deletesInput;
- (id)description;
- (id)descriptionDefinition;
- (id)descriptionInput;
- (bool)descriptionInputIncludesSupportingItemClasses;
- (id)deviceLockedError;
- (void)didChangeVariableName:(id)arg1 to:(id)arg2;
- (bool)didRunRemotely;
- (id)disabledOnPlatforms;
- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)arg1;
- (id)displayableAppDefinition;
- (id)displayableAppDescriptor;
- (bool)displaysParameterSummary;
- (id)effectiveWorkQueue;
- (id)encodedSerializedParameters;
- (void)enumerateObservers:(id /* block */)arg1;
- (id)eventObservers;
- (id)expandingParameters;
- (id)extendedOperation;
- (id)externalMetricsActionIdentifier;
- (id)externalMetricsBundleIdentifier;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fillingProvider;
- (void)finishRunningWithError:(id)arg1;
- (id)generateOutputUUIDForAction:(id)arg1;
- (id)generateUUIDIfNecessaryWithUUIDProvider:(id)arg1;
- (id)generatedResourceNodes;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (bool)getInputContentFromVariablesInParameterState:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)groupingIdentifier;
- (void)handleTestingEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasAvailableActionOutputVariables;
- (bool)hasAvailableVariables;
- (bool)hasChildren;
- (bool)highRisk;
- (id)icon;
- (id)iconBackgroundColorName;
- (id)iconColor;
- (id)iconName;
- (id)iconSymbolName;
- (void)iconUpdated;
- (id)identifier;
- (id)ignoredParameterKeysForProcessing;
- (bool)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (bool)ignoresOutputFromPreviousActionInWorkflow:(id)arg1;
- (id)inheritedInputVariableInWorkflow:(id)arg1;
- (id)inheritedInputVariableInWorkflow:(id)arg1 ignoringInputTypes:(bool)arg2;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (long long)initialSuggestionBehavior;
- (void)initializeParameters;
- (void)initializeParametersIfNecessary;
- (void)initializeParametersWithLock;
- (id)input;
- (id)inputContentClasses;
- (id)inputDictionary;
- (id)inputParameter;
- (id)inputParameterKey;
- (bool)inputParameterUnlocked;
- (bool)inputPassthrough;
- (bool)inputRequired;
- (id)inputSourceInWorkflow:(id)arg1;
- (bool)inputTypeDeterminesOutputType;
- (bool)inputTypePassthrough;
- (id)inputTypes;
- (bool)inputsMultipleItems;
- (bool)isApprovedForPublicShortcutsDrawer;
- (bool)isConstructorAction;
- (bool)isDeletable;
- (bool)isDisabledWhenRunOnDevice:(id)arg1;
- (bool)isDiscontinued;
- (bool)isLastAction;
- (bool)isMissing;
- (bool)isOutputExpandedInEditor;
- (bool)isProgressIndeterminate;
- (bool)isResidentCompatible;
- (bool)isRunning;
- (bool)isRunningInSiriUserInterface;
- (bool)isSubclassThatOverridesSelector:(SEL)arg1;
- (bool)isTesting;
- (bool)isVariableWithNameAvailable:(id)arg1;
- (bool)isVariableWithOutputUUIDAvailable:(id)arg1;
- (id)itemsBeingDeleted;
- (id)keyCommands;
- (bool)legacyBehaviorIgnoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (id)localizedAttribution;
- (id)localizedAttributionWithContext:(id)arg1;
- (id)localizedCategory;
- (id)localizedCategoryWithContext:(id)arg1;
- (id)localizedDefaultDisambiguationPrompt;
- (id)localizedDefaultOutputName;
- (id)localizedDefaultOutputNameWithContext:(id)arg1;
- (id)localizedDescriptionAttributionMarkdownString;
- (id)localizedDescriptionAttributionMarkdownStringWithContext:(id)arg1;
- (id)localizedDescriptionInput;
- (id)localizedDescriptionInputWithContext:(id)arg1;
- (id)localizedDescriptionNote;
- (id)localizedDescriptionNoteWithContext:(id)arg1;
- (id)localizedDescriptionRequires;
- (id)localizedDescriptionRequiresWithContext:(id)arg1;
- (id)localizedDescriptionResult;
- (id)localizedDescriptionResultWithContext:(id)arg1;
- (id)localizedDescriptionSummary;
- (id)localizedDescriptionSummaryWithContext:(id)arg1;
- (id)localizedDiscontinuedDescription;
- (id)localizedDiscontinuedDescriptionWithContext:(id)arg1;
- (id)localizedErrorWithLinkError:(id)arg1;
- (id)localizedFocusFilterDescription;
- (id)localizedFocusFilterDescriptionWithContext:(id)arg1;
- (id)localizedFooter;
- (id)localizedKeyParameterDisplayName;
- (id)localizedKeywords;
- (id)localizedKeywordsWithContext:(id)arg1;
- (id)localizedName;
- (id)localizedNameWithContext:(id)arg1;
- (bool)locallyProcessesData;
- (void)lockInputParameter;
- (void)logDataTransmissionForSmartPromptApprovalResult:(id)arg1;
- (void)matchContextualAction:(id)arg1 toContentCollection:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)metricsIdentifier;
- (bool)mightStartAudioRecording;
- (bool)mightSuppressRunningProgress;
- (id)minimumSupportedClientVersion;
- (id)missingAppError;
- (void)nameUpdated;
- (bool)neverSuggested;
- (void)notifyEventObserversParameterStateDidChangeForKey:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })observersLock;
- (id)output;
- (id)outputContentClasses;
- (void)outputDetailsUpdated;
- (id)outputDictionary;
- (unsigned long long)outputDisclosureLevel;
- (id)outputIcon;
- (bool)outputIsRenamed;
- (id)outputMeasurementUnitType;
- (id)outputName;
- (id)outputTypes;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (bool)outputsMultipleItems;
- (unsigned long long)parameterCollapsingBehavior;
- (void)parameterDefaultSerializedRepresentationDidChange:(id)arg1;
- (id)parameterDefinitions;
- (id)parameterForKey:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })parameterInitializationLock;
- (id)parameterKeysIgnoredForParameterSummary;
- (struct os_unfair_lock_s { unsigned int x1; })parameterStateDeserializationLock;
- (id)parameterStateForKey:(id)arg1;
- (id)parameterStateForKey:(id)arg1 fallingBackToDefaultValue:(bool)arg2;
- (void)parameterStateValidityCriteriaDidChange:(id)arg1;
- (id)parameterSummary;
- (id)parameterSummaryString;
- (id)parameterValueForKey:(id)arg1 ofClass:(Class)arg2;
- (id)parameters;
- (id)parametersByKey;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (void)performDataAccessChecksWithUserInterface:(id)arg1 contentItemCache:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performDataAndHardwareAccessChecksAndRun;
- (void)performDeletionAuthorizationChecksWithUserInterface:(id)arg1 contentItemCache:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performSmartPromptChecksWithUserInterface:(id)arg1 contentDestination:(id)arg2 contentItemCache:(id)arg3 isWebpageCoercion:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)populatedInputWithProcessedParameterValues:(id)arg1;
- (bool)populatesInputFromInputParameter;
- (id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2;
- (bool)prefersActionAttribution;
- (void)preloadDefaultParameterStatesIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (void)prepareToProcessWithCompletionHandler:(id /* block */)arg1;
- (void)presentSmartPromptAuthorizationWithConfiguration:(id)arg1 userInterface:(id)arg2 databaseApprovalResult:(id)arg3 contentDestination:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)previousAction;
- (id)prioritizedParameterKeysForRemoteExecution;
- (void)processEncodedValue:(id)arg1 withToolKitInvocation:(id)arg2 forParameter:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)processParameterStates:(id)arg1 withInput:(id)arg2 skippingHiddenParameters:(bool)arg3 askForValuesIfNecessary:(bool)arg4 workQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)processParametersWithoutAskingForValuesWithInput:(id)arg1 workQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)processParametersWithoutAskingForValuesWithInput:(id)arg1 workQueue:(id)arg2 fallingBackToDefaultValue:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)processValueForParameter:(id)arg1 withToolKitInvocation:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)processedParameters;
- (id)progress;
- (void)promptForAudioRecordingPermissionIfNeededWithCompletionBlock:(id /* block */)arg1;
- (id)providedVariableNames;
- (long long)rateLimitDelay;
- (long long)rateLimitThreshold;
- (long long)rateLimitTimeout;
- (void)recreateGeneratedResourcesIfNeeded;
- (void)recreateResourcesIfNeeded;
- (void)recreateUnevaluatedResourcesIfNeeded;
- (void)reloadAuxiliaryButton;
- (id)remoteExecuteOnPlatforms;
- (void)removeEventObserver:(id)arg1;
- (void)removeVariableObserver:(id)arg1;
- (void)requestInterfacePresentationWithCompletionHandler:(id /* block */)arg1;
- (void)requestUnlock:(id /* block */)arg1;
- (void)requestUnlockIfNeeded:(id /* block */)arg1;
- (id)requiredResources;
- (bool)requiresHandoffWhenRunWithUserInterfaceType:(id)arg1;
- (bool)requiresPrivateOutputLogging;
- (bool)requiresRemoteExecution;
- (bool)requiresUnlock;
- (bool)requiresUserInteractionWhenRunWithInput:(id)arg1;
- (void)resetOutput;
- (void)resolveAppDescriptorIfNecessary:(id /* block */)arg1;
- (id)resourceManager;
- (struct os_unfair_lock_s { unsigned int x1; })resourceManagerLock;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithInput:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 26: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)runWithInput:(id)arg1 error:(id*)arg2;
- (void)runWithInput:(id)arg1 userInterface:(id)arg2 runningDelegate:(id)arg3 variableSource:(id)arg4 workQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (id)runningDelegate;
- (bool)runningInStepWiseExecutor;
- (bool)runningInToolKit;
- (id)serializedParameterStateForKey:(id)arg1;
- (id)serializedParameters;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (id)serializedRepresentation;
- (id)sessionKitAssertion;
- (id)sessionKitSessionConfiguration;
- (id)sessionKitSessionConfigurationDefinition;
- (id)sessionKitSessionInvocationType;
- (id)sessionKitToastDurationsPerRunSourceDefinition;
- (void)setActionUserInterface:(id)arg1;
- (void)setAllowedOnceSmartPromptStates:(id)arg1;
- (void)setAppDescriptor:(id)arg1;
- (void)setAppResource:(id)arg1;
- (void)setAuxiliaryButton:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContentAttributionTracker:(id)arg1;
- (void)setContentPermissionRequestor:(id)arg1;
- (void)setCurrentGeneratedResourceNodes:(id)arg1;
- (void)setCurrentUnevaluatedResourceNodes:(id)arg1;
- (void)setDefaultCoercionOptionsOnContentCollection:(id)arg1;
- (void)setDefaultCoercionOptionsOnInputs;
- (void)setDidRunRemotely:(bool)arg1;
- (void)setEffectiveWorkQueue:(id)arg1;
- (void)setExtendedOperation:(id)arg1;
- (void)setGroupingIdentifier:(id)arg1;
- (void)setIgnoredParameterKeysForProcessing:(id)arg1;
- (void)setInputParameterUnlocked:(bool)arg1;
- (void)setOutput:(id)arg1;
- (void)setOutput:(id)arg1 onVariableSource:(id)arg2;
- (void)setOutputExpandedInEditor:(bool)arg1;
- (void)setOutputName:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (bool)setParameterStateToVariable:(id)arg1 forKey:(id)arg2;
- (void)setProcessedParameters:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setRunningDelegate:(id)arg1;
- (void)setSessionKitAssertion:(id)arg1;
- (void)setSupplementalParameterValue:(id)arg1 forKey:(id)arg2;
- (void)setToolInvocation:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setUserInterface:(id)arg1;
- (void)setVariableSource:(id)arg1;
- (void)setWidgetSizeClass:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)shouldAskForValuesWhileProcessingParameterStates;
- (bool)shouldBeConnectedToPreviousActionInWorkflow:(id)arg1 withOutputsConsumedByFollowingActions:(id)arg2;
- (bool)shouldBeIncludedInAppsList;
- (bool)shouldDisableSmartPromptChecks;
- (bool)shouldInsertExpandingParameterForParameter:(id)arg1;
- (bool)shouldLocalizeValueForSelector:(SEL)arg1;
- (bool)showsConnectorToPreviousActionInWorkflow:(id)arg1;
- (bool)showsImplicitChooseFromListWhenRunWithInput:(id)arg1;
- (bool)skipsProcessingHiddenParameters;
- (id)smartPromptSubtitleWithPreviousContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)snapInputParameterIfNecessary;
- (bool)snappingPassthrough;
- (id)specifiedInputContentClasses;
- (id)specifiedOutputContentClasses;
- (id)supplementalParameterValueForKey:(id)arg1 ofClass:(Class)arg2;
- (id)supportedAppIdentifiers;
- (bool)supportsUserInterfaceType:(id)arg1;
- (bool)synchronouslyHandleTestingEvent:(id)arg1 error:(id*)arg2;
- (id)systemEntityCollectionIdentifierForDisambiguatingParameterWithKey:(id)arg1;
- (bool)takeSessionKitAssertionIfNeededWithError:(id*)arg1;
- (id)toolInvocation;
- (Class)toolkitValueClassForParameter:(id)arg1;
- (id)typeDescriptionWithTypes:(id)arg1 explanationText:(id)arg2 multiple:(bool)arg3 optional:(bool)arg4;
- (id)unevaluatedResourceNodes;
- (id)unevaluatedResourceObjectsOfClass:(Class)arg1;
- (id)unevaluatedResourceObjectsOfClasses:(id)arg1;
- (void)unlockAppProtectionWithCompletionHandler:(id /* block */)arg1;
- (void)unlockInputParameter;
- (void)updateAppDescriptorInDatabaseWithSelectedApp:(id)arg1;
- (void)updateAppDescriptorWithSelectedApp:(id)arg1;
- (void)updateParameterSummaryIfNeeded:(id /* block */)arg1;
- (id)userInterface;
- (id)userInterfaceClasses;
- (id)userInterfaceTypes;
- (bool)usesCompactUnlockService;
- (bool)usesLegacyInputBehavior;
- (id)variableSource;
- (bool)visibleForUse:(long long)arg1;
- (id)visibleParametersForParameterSummary;
- (void)visibleParametersUpdated;
- (id)visibleParametersWithProcessing:(bool)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasAddedToWorkflowByUser:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (id)widgetSizeClass;
- (void)willBeAddedToWorkflow:(id)arg1;
- (void)willBeginProcessingParameterStates;
- (id)workQueue;
- (id)workflow;
- (id)workflowInputClasses;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (void)setWidgetFamily:(long long)arg1;
- (long long)widgetFamily;

@end
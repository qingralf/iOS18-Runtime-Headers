/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRecognitionSession : NSObject <CHRecognitionSessionTaskDelegate, CHRecognitionSessionTextInputTaskDelegate, NSSecureCoding> {
    NSMutableArray * __activeTasks;
    unsigned long long  __changeCoalescingIndex;
    NSHashTable * __changeObserversTable;
    NSMutableDictionary * __correctionRecognizersByLocalesKey;
    bool  __forceLocaleNumberFormat;
    bool  __hasUnprocessedChanges;
    NSObject<OS_dispatch_queue> * __highResponsivenessQueue;
    NSMutableArray * __inputDrawingClients;
    NSArray * __latestTextInputTargets;
    <CHLineWrapperProviding> * __lineWrapper;
    CHMathRecognizer * __mathRecognizer;
    NSObject<OS_dispatch_queue> * __observersQueue;
    NSMutableDictionary * __recognizersByLocaleID;
    NSObject<OS_dispatch_queue> * __sessionQueue;
    bool  __shouldForceFastGrouping;
    bool  __skipMathOperatorsInference;
    bool  __skipPopulatingStyleInventory;
    bool  __skipPrincipalLines;
    unsigned int  __taskQueueQoSClass;
    NSObject<OS_dispatch_queue> * __tasksWorkQueueBackground;
    NSObject<OS_dispatch_queue> * __tasksWorkQueueForeground;
    NSArray * __textRecognitionLocales;
    <CHSynthesizingText> * __textSynthesizer;
    CHTextInputQuery * _activeTextInputQuery;
    int  _autoCapitalizationMode;
    int  _autoCorrectionMode;
    int  _baseWritingDirection;
    CHRecognitionSessionResult * _cachedFastGroupingRecognitionResult;
    <CHRecognitionSessionDataSource> * _dataSource;
    bool  _disableMathTextSwapping;
    CHRecognitionSessionResult * _lastRecognitionResult;
    <CHCalculateDocumentProvider> * _latestCalculateDocumentProvider;
    <CHCanvasAttachmentProvider> * _latestCanvasAttachmentProvider;
    <CHStrokeProvider> * _latestStrokeProvider;
    NSOrderedSet * _latestStrokeProviderVisibleStrokes;
    bool  _leverageAllProvidedVariables;
    long long  _mode;
    CHRecognitionSessionResult * _partialRecognitionResult;
    NSArray * _preferredLocales;
    long long  _priority;
    long long  _recognitionEnvironment;
    NSMutableDictionary * _recognitionOptions;
    CHRecognitionSessionVersion * _sessionVersion;
    CHSessionStateTracker * _stateTracker;
    long long  _status;
    CHStrokeClassificationModel * _strokeClassificationModel;
    unsigned long long  _strokeGroupOrdering;
    CHGroupingModel * _strokeGroupingModel;
    bool  _strokeGroupingOnly;
}

@property (nonatomic) CHTextInputQuery *activeTextInputQuery;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) int baseWritingDirection;
@property (nonatomic) <CHRecognitionSessionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableMathTextSwapping;
@property (nonatomic) bool forceLocaleNumberFormat;
@property (readonly) unsigned long long hash;
@property (readonly) CHRecognitionSessionResult *lastRecognitionResult;
@property (setter=_setLastRecognitionResult:, retain) CHRecognitionSessionResult *lastRecognitionResult;
@property (readonly) <CHCalculateDocumentProvider> *latestCalculateDocumentProvider;
@property (setter=_setLatestCalculateDocumentProvider:, retain) <CHCalculateDocumentProvider> *latestCalculateDocumentProvider;
@property (setter=_setLatestCanvasAttachmentProvider:, retain) <CHCanvasAttachmentProvider> *latestCanvasAttachmentProvider;
@property (readonly) <CHStrokeProvider> *latestStrokeProvider;
@property (setter=_setLatestStrokeProvider:, retain) <CHStrokeProvider> *latestStrokeProvider;
@property (nonatomic) bool leverageAllProvidedVariables;
@property (nonatomic, copy) NSArray *locales;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, copy) NSArray *preferredLocales;
@property (nonatomic) long long priority;
@property (readonly) bool q_needsForegroundRecognition;
@property (readonly) bool q_wantsAutoRefine;
@property (nonatomic) long long recognitionEnvironment;
@property (nonatomic, readonly) NSData *sessionData;
@property (readonly) CHRecognitionSessionVersion *sessionVersion;
@property (setter=_setSessionVersion:, retain) CHRecognitionSessionVersion *sessionVersion;
@property (nonatomic) bool shouldForceFastGrouping;
@property (nonatomic) bool skipMathOperatorsInference;
@property (nonatomic) bool skipPopulatingStyleInventory;
@property (nonatomic) bool skipPrincipalLines;
@property (nonatomic, readonly) long long status;
@property (setter=_setStatus:, nonatomic) long long status;
@property (nonatomic) unsigned long long strokeGroupOrdering;
@property (nonatomic) bool strokeGroupingOnly;
@property (readonly) Class superclass;

+ (id)alignReflowableTokens:(id)arg1 resultTokens:(id)arg2 strokeIdentifiers:(id)arg3 outStrokeIdentifiers:(id*)arg4;
+ (double)autoRefineTriggerFactor;
+ (id)createMathRecognizerRunningRemote:(bool)arg1 priority:(long long)arg2;
+ (id)createRecognizerForLocale:(id)arg1 sessionMode:(long long)arg2 remote:(bool)arg3 priority:(long long)arg4;
+ (id)createRecognizerForLocales:(id)arg1 sessionMode:(long long)arg2 remote:(bool)arg3 priority:(long long)arg4;
+ (id)effectiveLocalesFromLocales:(id)arg1;
+ (bool)isLocaleSupported:(id)arg1;
+ (bool)shouldRunRecognitionLocallyWithEnvironment:(long long)arg1;
+ (id)strokeIdentifiersInFullContextForStrokeIdentifiers:(id)arg1 sortedStrokeGroups:(id)arg2 clusteredStrokeGroups:(id)arg3 unusedStrokeIdentifiers:(id*)arg4;
+ (id)strokeIdentifiersInProximalGroupsForStrokeIdentifiers:(id)arg1 sortedStrokeGroups:(id)arg2 clusteredStrokeGroups:(id)arg3 unusedStrokeIdentifiers:(id*)arg4;
+ (bool)supportsSecureCoding;
+ (void)updateStyleInventoryWithRemovedStrokeIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (void)_setLastRecognitionResult:(id)arg1;
- (void)_setLatestCalculateDocumentProvider:(id)arg1;
- (void)_setLatestCanvasAttachmentProvider:(id)arg1;
- (void)_setLatestStrokeProvider:(id)arg1;
- (void)_setSessionVersion:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (id)activeTextInputQuery;
- (int)autoCapitalizationMode;
- (int)autoCorrectionMode;
- (int)baseWritingDirection;
- (void)cancelOngoingRequests;
- (id)contextLookupResultsAtLocation:(struct CGPoint { double x1; double x2; })arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)contextLookupResultsWithSelectedStrokes:(id)arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)contextLookupResultsWithSelectionPath:(struct CGPath { }*)arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)contextualTextResultsForContextStrokes:(id)arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)dataSource;
- (void)dealloc;
- (bool)disableMathTextSwapping;
- (void)encodeWithCoder:(id)arg1;
- (id)evaluationResultForStrokeGroupIdentifier:(long long)arg1;
- (bool)forceLocaleNumberFormat;
- (id)indexableContent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (id)initWithMode:(long long)arg1 recognitionSessionResult:(id)arg2 dataSource:(id)arg3;
- (id)initWithMode:(long long)arg1 withVersion:(id)arg2;
- (id)lastRecognitionResult;
- (id)lastRecognitionResultWaitingForPendingTasks;
- (id)latestCalculateDocumentProvider;
- (id)latestCanvasAttachmentProvider;
- (id)latestStrokeProvider;
- (bool)leverageAllProvidedVariables;
- (id)lineWrapper;
- (bool)loadSessionData:(id)arg1 error:(id*)arg2;
- (id)locales;
- (id)mathRecognizer;
- (id)mathTranscriptionWithEvaluationResultForStrokeGroup:(id)arg1 outStrokeIdentifiers:(id*)arg2 outStrokes:(id*)arg3;
- (long long)mode;
- (id)preferredLocales;
- (long long)priority;
- (bool)q_needsForegroundRecognition;
- (bool)q_wantsAutoRefine;
- (void)rebuildRecognitionResults;
- (long long)recognitionEnvironment;
- (id)recognitionOptionForKey:(id)arg1;
- (id)recognizableDrawingForStrokeGroupQueryItem:(id)arg1;
- (id)recognizerForLocale:(id)arg1;
- (id)refinedTokensForContextStrokes:(id)arg1 styleControlParameter:(id)arg2 completion:(id /* block */)arg3 shouldCancel:(id /* block */)arg4;
- (id)refinedTokensForSingleLineContextStrokes:(id)arg1 styleControlParameter:(id)arg2 transcription:(id)arg3 completion:(id /* block */)arg4 shouldCancel:(id /* block */)arg5;
- (id)refinementOfContextStrokes:(id)arg1 styleControlParameter:(id)arg2 completion:(id /* block */)arg3 shouldCancel:(id /* block */)arg4;
- (id)reflowableTextLinesForContextStrokes:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 completion:(id /* block */)arg3 shouldCancel:(id /* block */)arg4;
- (void)registerChangeObserver:(id)arg1;
- (void)registerInputDrawingClient:(id)arg1;
- (id)sessionData;
- (id)sessionVersion;
- (void)setActive;
- (void)setActiveTextInputQuery:(id)arg1;
- (void)setAutoCapitalizationMode:(int)arg1;
- (void)setAutoCorrectionMode:(int)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDisableMathTextSwapping:(bool)arg1;
- (void)setForceLocaleNumberFormat:(bool)arg1;
- (void)setIdle;
- (void)setLeverageAllProvidedVariables:(bool)arg1;
- (void)setLocales:(id)arg1;
- (void)setNeedsRecognitionUpdate;
- (void)setNeedsRecognitionUpdateImmediately:(bool)arg1;
- (void)setPreferredLocales:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRecognitionEnvironment:(long long)arg1;
- (void)setShouldForceFastGrouping:(bool)arg1;
- (void)setSkipMathOperatorsInference:(bool)arg1;
- (void)setSkipPopulatingStyleInventory:(bool)arg1;
- (void)setSkipPrincipalLines:(bool)arg1;
- (void)setStrokeGroupOrdering:(unsigned long long)arg1;
- (void)setStrokeGroupingOnly:(bool)arg1;
- (bool)shouldForceFastGrouping;
- (bool)skipMathOperatorsInference;
- (bool)skipPopulatingStyleInventory;
- (bool)skipPrincipalLines;
- (long long)status;
- (unsigned long long)strokeGroupOrdering;
- (bool)strokeGroupingOnly;
- (id)strokePointTransformationsForContextStrokes:(id)arg1 parameters:(id)arg2 completionWithTelemetry:(id /* block */)arg3 shouldCancel:(id /* block */)arg4;
- (id)structuredContextualTextResultsWithTextResults:(id)arg1;
- (id)styleSampleOptionsForPoint:(struct CGPoint { double x1; double x2; })arg1 shouldCancel:(id /* block */)arg2;
- (id)synthesizeTokensForString:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 completion:(id /* block */)arg3 shouldCancel:(id /* block */)arg4;
- (id)synthesizeTokensForString:(id)arg1 replacingStrokes:(id)arg2 completion:(id /* block */)arg3 shouldCancel:(id /* block */)arg4;
- (id)textCorrectionRecognizerForLocales:(id)arg1;
- (id)textSynthesizer;
- (id)textSynthesizerWithLocaleFallback;
- (bool)textSynthesizerWithLocaleFallbackIsSupported;
- (id)tokenStrokeIdentifiersForContextStrokes:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 tokenizationLevel:(long long)arg3 completion:(id /* block */)arg4 shouldCancel:(id /* block */)arg5;
- (id)tokenStrokeIdentifiersWithCoveringStroke:(id)arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (void)unregisterChangeObserver:(id)arg1;
- (void)unregisterInputDrawingClient:(id)arg1;
- (void)updateRecognitionOptions:(id)arg1;
- (void)waitForPendingRecognitionTasks;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
 */

@interface DiagnosticCaseManager : NSObject <DiagnosticLiaisonDelegate, DiagnosticReportGeneratorDelegate> {
    NSMutableArray * _activeCases;
    NSMutableDictionary * _activeTransactions;
    unsigned int  _avgCasesPerDay;
    DiagnosticCaseStorageAnalytics * _caseStorageAnalytics;
    DiagnosticCaseSummaryAnalytics * _caseSummaryAnalytics;
    DiagnosticsController * _diagnosticsController;
    bool  _initializationComplete;
    DiagnosticLiaison * _liaison;
    NSMutableArray * _pendingStatisticsUpdateCases;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _reportGenerators;
    NSMutableSet * _reportOutlets;
    NSMutableArray * _requestedReportGenerators;
    long long  _saveCount;
    bool  _shouldPurgeStorageAfterSave;
    DiagnosticStatisticsManager * _statsManager;
    <DiagnosticCaseManagerStorageDelegate> * _storageDelegate;
    NSMutableArray * _totalCases;
    AnalyticsWorkspace * _workspace;
    NSMutableDictionary * activeIDSMessages;
    NSMutableDictionary * activeProbes;
    NSObject<OS_dispatch_source> * periodicTimer;
    NSMutableSet * sessionsWaitingToEnd;
}

@property (nonatomic, readonly, copy) NSMutableArray *activeCases;
@property (nonatomic) unsigned int avgCasesPerDay;
@property (nonatomic, readonly) ABCConfigurationManager *configManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DiagnosticsController *diagnosticsController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DiagnosticLiaison *liaison;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableDictionary *reportGenerators;
@property (nonatomic, readonly) DiagnosticStatisticsManager *statsManager;
@property (nonatomic) <DiagnosticCaseManagerStorageDelegate> *storageDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSMutableArray *totalCases;

+ (bool)isException:(id)arg1 containedInString:(id)arg2;
+ (bool)isString:(id)arg1 inExceptionList:(id)arg2;
+ (int)symptomDiagnosticErrorForDiagnosticCaseDampeningType:(short)arg1;

- (void).cxx_destruct;
- (void)_forceCloseDiagnosticCaseStorage;
- (id)_predicatesForCasesMatchingDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 process:(id)arg4 withinLast:(double)arg5;
- (void)_processActionsForPacketCaptureProbe:(id)arg1 session:(id)arg2;
- (unsigned long long)_processProbeActions:(id)arg1 session:(id)arg2;
- (void)_processRemoteIDSTriggers:(id)arg1 validFor:(double)arg2 signature:(id)arg3 sessionID:(id)arg4 reply:(id /* block */)arg5;
- (void)_processReportActions:(id)arg1 session:(id)arg2;
- (void)_processTriggerActions:(id)arg1 session:(id)arg2;
- (void)_saveAllCases;
- (void)_updateCaseStatisticsWithCase:(id)arg1;
- (id)_updateSignatureWithBuildVariantInfoAndFlags:(id)arg1;
- (id)activeCases;
- (void)addCaseReportOutlet:(id)arg1;
- (void)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(id /* block */)arg4;
- (int)addSignatureContentToCaseWithId:(id)arg1 key:(id)arg2 content:(id)arg3;
- (int)addToCaseWithId:(id)arg1 events:(id)arg2 payload:(id)arg3;
- (void)addToInternalStateDictionary:(id)arg1;
- (void)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 queue:(id)arg4 reply:(id /* block */)arg5;
- (void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 queue:(id)arg4 reply:(id /* block */)arg5;
- (void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (void)addTransactionForCaseID:(id)arg1;
- (bool)allowDampeningExceptionFor:(id)arg1;
- (unsigned int)avgCasesPerDay;
- (void)buildSpecificRestrictionsForSignature:(id)arg1 result:(id /* block */)arg2;
- (int)cancelCaseWithId:(id)arg1;
- (void)cancelProbesForSession:(id)arg1;
- (void)cancelSessionWithIdentifier:(id)arg1;
- (void)caseAllowanceForSignature:(id)arg1 timestamp:(id)arg2 result:(id /* block */)arg3;
- (id)caseStorageAnalytics;
- (id)caseStorageForCaseID:(id)arg1;
- (id)caseSummariesOfType:(id)arg1 fromIdentifier:(id)arg2 count:(unsigned long long)arg3;
- (id)caseSummariesWithIdentifiers:(id)arg1;
- (id)casesDiagnosedInTheLast:(double)arg1 from:(double)arg2 matchingDomain:(id)arg3;
- (id)casesMatchingDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 process:(id)arg4 withinLast:(double)arg5;
- (bool)closeCase:(id)arg1;
- (unsigned long long)collectDiagnosticExtensionLogsWithParameters:(id)arg1 options:(id)arg2 diagCase:(id)arg3 reply:(id /* block */)arg4;
- (id)configManager;
- (void)configureWithWorkspace:(id)arg1;
- (void)countOfCasesMatchingDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 process:(id)arg4 groupCaseIDIsPresent:(bool)arg5 withinLast:(double)arg6 reply:(id /* block */)arg7;
- (id)createDiagnosticCaseWithSignature:(id)arg1 flags:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5;
- (id)createTemporaryDiagnosticCaseStorageForUUID:(id)arg1;
- (long long)dailyCountLimitForDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 domainPredicates:(id)arg4;
- (unsigned int)dampeningFactorForSignature:(id)arg1 caseTime:(id)arg2 limit:(long long)arg3;
- (unsigned int)defaultDampeningFactorForSignature:(id)arg1 limit:(long long)arg2;
- (id)diagnosticCaseDictionariesFromIdentifier:(id)arg1 withEvents:(bool)arg2 count:(unsigned long long)arg3;
- (id)diagnosticCaseWithId:(id)arg1;
- (id)diagnosticsController;
- (bool)disableDampening;
- (void)endSession:(id)arg1 forced:(bool)arg2 onlyIfReady:(bool)arg3;
- (void)endSessionIfProbesCompletedFor:(id)arg1;
- (void)endSessionWithIdentifier:(id)arg1 forced:(bool)arg2;
- (void)endSessionWithIdentifier:(id)arg1 forced:(bool)arg2 onlyIfReady:(bool)arg3;
- (void)endSessions:(id)arg1 forced:(bool)arg2;
- (bool)finalizeDiagnosticCaseWithId:(id)arg1 closureType:(short)arg2 onlyIfReady:(bool)arg3;
- (void)forceCloseDiagnosticCaseStorage;
- (void)getHistoricalDiagnosicCaseDictionaryFromIdentifier:(id)arg1 withEvents:(bool)arg2 count:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (bool)hasOpenCases;
- (id)initWithWorkspace:(id)arg1 liaison:(id)arg2;
- (bool)isAdmissible:(id)arg1 dampenedBy:(short*)arg2;
- (bool)isAllowedTransientException:(id)arg1;
- (id)liaison;
- (void)listCaseSummariesOfType:(id)arg1 fromIdentifier:(id)arg2 count:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)listCaseSummariesWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (id)lookUpDiagnosticCaseStorageForUUID:(id)arg1;
- (void)payloadsForSignatures:(id)arg1 reply:(id /* block */)arg2;
- (void)periodicSessionManagement;
- (void)postProcessActionsForClosedCase:(id)arg1;
- (void)promoteTemporaryCase:(id)arg1;
- (id)queue;
- (void)recordDiagnosticCaseSummaryForCase:(id)arg1;
- (void)remoteTriggerDeliveryUpdateEvent:(id)arg1;
- (void)removeAllCases;
- (void)removeCaseStorageWithID:(id)arg1;
- (void)removeClosedCasesFromTotalCases;
- (void)removeTransactionForCaseID:(id)arg1;
- (void)removeTransientCasesWithSignature:(id)arg1 beforeTime:(double)arg2;
- (void)reportGeneratorEnded:(id)arg1 reportInfo:(id)arg2 error:(id)arg3;
- (id)reportGenerators;
- (void)requestGroupCaseIdentifierForSignature:(id)arg1 reply:(id /* block */)arg2;
- (bool)requestReportGenerator:(id)arg1 options:(id)arg2;
- (void)requestSnapshotWithSignature:(id)arg1 flags:(unsigned long long)arg2 events:(id)arg3;
- (void)resetAll;
- (void)resetAllForCustomerBuilds;
- (void)resetDiagnosticCaseStorage;
- (id)responseDictWithSuccess:(bool)arg1 sessionId:(id)arg2 reasonCode:(long long)arg3;
- (void)saveAllCases;
- (bool)sendReportsForCase:(id)arg1;
- (void)setAvgCasesPerDay:(unsigned int)arg1;
- (void)setStorageDelegate:(id)arg1;
- (void)setUpGeneralCaseReportGenerators;
- (void)shutdown;
- (void)startCollectingNextReportForDiagnosticCase:(id)arg1;
- (void)startPacketCaptureForSession:(id)arg1 duration:(id)arg2;
- (void)startPeriodicTimer;
- (void)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 triggerRemote:(bool)arg5 queue:(id)arg6 reply:(id /* block */)arg7;
- (void)startSessionWithSignature:(id)arg1 flags:(unsigned long long)arg2 preferredTimeout:(double)arg3 events:(id)arg4 payload:(id)arg5 actions:(id)arg6 reply:(id /* block */)arg7;
- (bool)statisticsRowForDiagnosticCase:(id)arg1 matchesWith:(id)arg2;
- (id)statsManager;
- (void)stopPeriodicTimer;
- (id)storageDelegate;
- (id)totalCases;
- (void)updateAverageCasesPerDay;
- (void)updateSignatureWithBundleIdentifier:(id)arg1 reply:(id /* block */)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
 */

@interface SUSettingsStatefulUIManager : NSObject <SUAutoInstallOperationDelegate, SUCoreFSMDelegate, SUManagerClientDelegate, SUNetworkObserver, SUSMKSoftwareUpdateServicesResponderDelegate> {
    SUSUIUpdateAgreementManager * _agreementManager;
    SUSettingsStatefulDescriptor * _alternateStatefulDescriptor;
    NSMutableSet * _auxiliaryOperations;
    float  _batteryLevel;
    NSArray * _betaPrograms;
    bool  _clearingSpaceForDownload;
    bool  _connectedToPowerSource;
    SUAutoInstallOperation * _currentAutoInstallOperation;
    SUDownload * _currentDownload;
    SUSettingsScanOperation * _currentFullScanOperation;
    SUSettingsScanOperation * _currentRefreshScanOperation;
    SDDevice * _currentSeedingDevice;
    unsigned long long  _currentState;
    SUSettingsUpdateOperation * _currentUpdateOperation;
    SUCoreDDMDeclaration * _ddmDeclaration;
    bool  _delayingUpdate;
    <SUSettingsStatefulUIManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateCallbackQueue;
    SDBetaProgram * _enrolledBetaProgram;
    SUSettingsStatefulErrorContextProvider * _errorContextProvider;
    SUSettingsStatefulDescriptor * _hiddenAlternateStatefulDescriptor;
    SUSettingsStatefulDescriptor * _hiddenPreferredStatefulDescriptor;
    bool  _hidingAlternateDescriptor;
    bool  _hidingPreferredDescriptor;
    bool  _isAutoUpdateScheduled;
    SUCoreLog * _log;
    SUCoreFSM * _managerFSM;
    unsigned long long  _mdmPathRestrictions;
    int  _networkType;
    SUSettingsStatefulUIOptions * _options;
    unsigned char  _originalCellFlag;
    unsigned char  _originalWifiFlag;
    bool  _performThirdPartyScan;
    SUSettingsSUPreferencesManager * _preferences;
    NSObject<OS_dispatch_queue> * _preferencesQueue;
    SUSettingsStatefulDescriptor * _preferredStatefulDescriptor;
    SURollbackDescriptor * _rollbackDescriptor;
    bool  _rollingBack;
    NSError * _scanError;
    SDBetaManager * _seedingBetaManager;
    NSDictionary * _stateTable;
    SUManagerClient * _suClient;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) SUSUIUpdateAgreementManager *agreementManager;
@property (retain) SUSettingsStatefulDescriptor *alternateStatefulDescriptor;
@property (nonatomic, retain) NSMutableSet *auxiliaryOperations;
@property (nonatomic) float batteryLevel;
@property (nonatomic, retain) NSArray *betaPrograms;
@property (getter=isClearingSpaceForDownload, nonatomic) bool clearingSpaceForDownload;
@property (nonatomic) bool connectedToPowerSource;
@property (nonatomic, retain) SUAutoInstallOperation *currentAutoInstallOperation;
@property (nonatomic, retain) SUDownload *currentDownload;
@property (retain) SUSettingsScanOperation *currentFullScanOperation;
@property (retain) SUSettingsScanOperation *currentRefreshScanOperation;
@property (nonatomic, retain) SDDevice *currentSeedingDevice;
@property unsigned long long currentState;
@property (retain) SUSettingsUpdateOperation *currentUpdateOperation;
@property (setter=setDDMDeclaration:, nonatomic, retain) SUCoreDDMDeclaration *ddmDeclaration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (getter=isDelayingUpdate, nonatomic) bool delayingUpdate;
@property <SUSettingsStatefulUIManagerDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SDBetaProgram *enrolledBetaProgram;
@property (nonatomic, retain) SUSettingsStatefulErrorContextProvider *errorContextProvider;
@property (readonly) unsigned long long hash;
@property (retain) SUSettingsStatefulDescriptor *hiddenAlternateStatefulDescriptor;
@property (retain) SUSettingsStatefulDescriptor *hiddenPreferredStatefulDescriptor;
@property bool hidingAlternateDescriptor;
@property bool hidingPreferredDescriptor;
@property (nonatomic) bool isAutoUpdateScheduled;
@property (nonatomic, retain) SUCoreLog *log;
@property (nonatomic, readonly) SUCoreFSM *managerFSM;
@property (nonatomic) unsigned long long mdmPathRestrictions;
@property (nonatomic) int networkType;
@property (nonatomic, retain) SUSettingsStatefulUIOptions *options;
@property (nonatomic) unsigned char originalCellFlag;
@property (nonatomic) unsigned char originalWifiFlag;
@property bool performThirdPartyScan;
@property (nonatomic, retain) SUSettingsSUPreferencesManager *preferences;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *preferencesQueue;
@property (retain) SUSettingsStatefulDescriptor *preferredStatefulDescriptor;
@property (nonatomic, retain) SURollbackDescriptor *rollbackDescriptor;
@property (getter=isRollingBack, nonatomic) bool rollingBack;
@property (retain) NSError *scanError;
@property (nonatomic, readonly) SDBetaManager *seedingBetaManager;
@property (nonatomic, readonly) NSDictionary *stateTable;
@property (nonatomic, readonly) SUManagerClient *suClient;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_generateStateTable;

- (void).cxx_destruct;
- (long long)actionUnknownAction:(id)arg1 error:(id*)arg2;
- (long long)action_CheckForAvailableUpdate:(id)arg1 error:(id*)arg2;
- (long long)action_RefreshScanResults:(id)arg1 error:(id*)arg2;
- (long long)action_ReportNoUpdateFound:(id)arg1 error:(id*)arg2;
- (long long)action_ReportRefreshScanResults:(id)arg1 error:(id*)arg2;
- (long long)action_ReportRefreshScanResultsFailed:(id)arg1 error:(id*)arg2;
- (long long)action_ReportScanFailed:(id)arg1 error:(id*)arg2;
- (long long)action_ReportUpdatesAvailable:(id)arg1 error:(id*)arg2;
- (long long)action_ThirdPartyScanDuringRefresh:(id)arg1 error:(id*)arg2;
- (id)agreementManager;
- (id)alternateStatefulDescriptor;
- (void)assignDescriptorOfType:(unsigned long long)arg1 fromSearchResults:(id)arg2;
- (void)assignRefreshScanResults:(id)arg1;
- (bool)assignScanRelatedMembersFromScanResults:(id)arg1;
- (void)autoInstallOperationDidConsent:(id)arg1;
- (void)autoInstallOperationIsReadyToInstall:(id)arg1 withResponse:(id /* block */)arg2;
- (void)autoInstallOperationPasscodePolicyDidChange:(id)arg1 passcodePolicyType:(unsigned long long)arg2;
- (void)autoInstallOperationWasCancelled:(id)arg1;
- (id)auxiliaryOperations;
- (id)baseDomain;
- (float)batteryLevel;
- (void)batteryLevelChanged:(id)arg1;
- (void)batteryStateChanged:(id)arg1;
- (void)beginUpdateOperationWithDescriptor:(id)arg1 operationDelegate:(id)arg2 delegateCallbackQueue:(id)arg3 operationTypeBlock:(id /* block */)arg4;
- (id)betaPrograms;
- (void)checkForAvailableUpdates;
- (void)checkForAvailableUpdatesWithRetriesCount:(unsigned char)arg1;
- (void)checkForUpdatesInBackground;
- (void)clearPastScanResults;
- (void)client:(id)arg1 clearingSpaceForDownload:(id)arg2 clearingSpace:(bool)arg3;
- (void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 downloadDidFinish:(id)arg2 withInstallPolicy:(id)arg3;
- (void)client:(id)arg1 downloadDidStart:(id)arg2;
- (void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
- (void)client:(id)arg1 downloadWasInvalidatedForNewUpdatesAvailable:(id)arg2;
- (void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 installDidStart:(id)arg2;
- (void)client:(id)arg1 scanRequestDidFinishForOptions:(id)arg2 results:(id)arg3 error:(id)arg4;
- (void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;
- (bool)connectedToPowerSource;
- (long long)convertFSMStateToUIState:(id)arg1;
- (id)createScanOperationOptions;
- (id)createUpdateOperationOptions;
- (id)currentAutoInstallOperation;
- (id)currentDownload;
- (id)currentFullScanOperation;
- (id)currentRefreshScanOperation;
- (id)currentSeedingDevice;
- (unsigned long long)currentState;
- (id)currentUpdateOperation;
- (id)ddmDeclaration;
- (void)dealloc;
- (id)delegate;
- (id)delegateCallbackQueue;
- (void)didBecomeActive:(id)arg1;
- (void)doEnrollInBetaUpdatesProgram:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)doesTargetedUpdateMatchDescriptor:(id)arg1;
- (bool)doesTargetedUpdateMatchDescriptorType:(unsigned long long)arg1;
- (void)downloadAndInstall:(id)arg1 completionHandler:(id /* block */)arg2 operationDelegate:(id)arg3 delegateCallbackQueue:(id)arg4;
- (void)downloadAndScheduleUpdate:(id)arg1 completionHandler:(id /* block */)arg2 operationDelegate:(id)arg3 delegateCallbackQueue:(id)arg4;
- (void)downloadUpdate:(id)arg1 completionHandler:(id /* block */)arg2 operationDelegate:(id)arg3 delegateCallbackQueue:(id)arg4;
- (void)enrollInBetaUpdatesProgram:(id)arg1 withPurgeConfirmation:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)enrolledBetaProgram;
- (id)errorContextProvider;
- (void)executeOperationOnDelegate:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (void)handleFailedFullScan:(id)arg1;
- (void)handleFullScanResults:(id)arg1;
- (void)handleRefreshScanResults:(id)arg1;
- (void)handleScanFinishedRollbackApplied:(id)arg1;
- (bool)hasSUPathRestrictions;
- (id)hiddenAlternateStatefulDescriptor;
- (id)hiddenPreferredStatefulDescriptor;
- (void)hideAlternateUpdate;
- (void)hideNonTargetedUpdateDescriptors;
- (void)hidePreferredUpdate;
- (bool)hidingAlternateDescriptor;
- (bool)hidingPreferredDescriptor;
- (id)initWithManagerClient:(id)arg1;
- (id)initWithManagerClient:(id)arg1 betaManager:(id)arg2 preferences:(id)arg3 options:(id)arg4;
- (id)initWithManagerClient:(id)arg1 options:(id)arg2;
- (void)installUpdate:(id)arg1 completionHandler:(id /* block */)arg2 operationDelegate:(id)arg3 delegateCallbackQueue:(id)arg4;
- (bool)isAutoUpdateScheduled;
- (bool)isClearingSpaceForDownload;
- (bool)isDelayingUpdate;
- (bool)isPerformingFullScan;
- (bool)isPerformingRefresh;
- (bool)isPerformingUpdate;
- (bool)isPreferredUpdatePromotedAsAlternate;
- (bool)isRollingBack;
- (bool)isTargetedUpdateScheduledForAutoInstall;
- (id)log;
- (id)managerFSM;
- (unsigned long long)mdmPathRestrictions;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (int)networkType;
- (id)options;
- (unsigned char)originalCellFlag;
- (unsigned char)originalWifiFlag;
- (long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id*)arg6;
- (void)performFullScan:(id)arg1;
- (void)performFullScanWithScanResults:(id)arg1 andScanError:(id)arg2;
- (void)performPostUpdateOperationRefresh:(bool)arg1 withDownload:(id)arg2 didScheduledUpdate:(bool)arg3 autoInstallOperation:(id)arg4 error:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)performRefreshScan:(id)arg1;
- (bool)performThirdPartyScan;
- (id)preferences;
- (id)preferencesQueue;
- (id)preferredStatefulDescriptor;
- (void)promoteTargetedUpdateToUserInitiatedStatus;
- (void)refreshBetaUpdates;
- (void)refreshBetaUpdates:(id /* block */)arg1;
- (void)refreshState;
- (void)refreshState:(bool)arg1;
- (void)revealHiddenAlteranteUpdate;
- (void)revealHiddenPreferredUpdate;
- (id)rollbackDescriptor;
- (id)rvGetCurrentNeRDInfo;
- (void)rvTriggerNeRDUpdate;
- (void)rvTriggerNeRDUpdate:(id)arg1;
- (id)scanError;
- (void)scheduleUpdate:(id)arg1 completionHandler:(id /* block */)arg2 operationDelegate:(id)arg3 delegateCallbackQueue:(id)arg4;
- (id)seedingBetaManager;
- (void)setAgreementManager:(id)arg1;
- (void)setAlternateStatefulDescriptor:(id)arg1;
- (void)setAuxiliaryOperations:(id)arg1;
- (void)setBatteryLevel:(float)arg1;
- (void)setBetaPrograms:(id)arg1;
- (void)setClearingSpaceForDownload:(bool)arg1;
- (void)setConnectedToPowerSource:(bool)arg1;
- (void)setCurrentAutoInstallOperation:(id)arg1;
- (void)setCurrentDownload:(id)arg1;
- (void)setCurrentFullScanOperation:(id)arg1;
- (void)setCurrentRefreshScanOperation:(id)arg1;
- (void)setCurrentSeedingDevice:(id)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setCurrentUpdateOperation:(id)arg1;
- (void)setDDMDeclaration:(id)arg1;
- (void)setDelayingUpdate:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateCallbackQueue:(id)arg1;
- (void)setEnrolledBetaProgram:(id)arg1;
- (void)setErrorContextProvider:(id)arg1;
- (void)setHiddenAlternateStatefulDescriptor:(id)arg1;
- (void)setHiddenPreferredStatefulDescriptor:(id)arg1;
- (void)setHidingAlternateDescriptor:(bool)arg1;
- (void)setHidingPreferredDescriptor:(bool)arg1;
- (void)setIsAutoUpdateScheduled:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setMdmPathRestrictions:(unsigned long long)arg1;
- (void)setNetworkType:(int)arg1;
- (void)setOptions:(id)arg1;
- (void)setOriginalCellFlag:(unsigned char)arg1;
- (void)setOriginalWifiFlag:(unsigned char)arg1;
- (void)setPerformThirdPartyScan:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPreferencesQueue:(id)arg1;
- (void)setPreferredStatefulDescriptor:(id)arg1;
- (void)setRollbackDescriptor:(id)arg1;
- (void)setRollingBack:(bool)arg1;
- (void)setScanError:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setupBatteryMonitoring;
- (void)setupFSM;
- (void)setupNetworkMonitoring;
- (void)setupObservers;
- (id)stateTable;
- (id)suClient;
- (id)targetedUpdateForDownload:(id)arg1;
- (id)targetedUpdateMatchingDescriptor:(id)arg1;
- (id)targetedUpdateStatefulDescriptor;
- (void)unenrollFromBetaUpdatesWithCompletion:(id /* block */)arg1;
- (void)unscheduleTargetedUpdateAutomaticInstallation;
- (void)updateDescriptorsUsingScanResults:(id)arg1 andWithConcreteError:(id)arg2;
- (void)updateStatePostDownloadOperation:(bool)arg1 withDownload:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)workQueue;

@end

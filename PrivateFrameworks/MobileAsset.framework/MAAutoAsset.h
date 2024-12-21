/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MAAutoAsset : NSObject <NSSecureCoding, SUCoreConnectClientDelegate> {
    NSDictionary * _assetAttributes;
    MAAutoAssetSelector * _assetSelector;
    NSString * _autoAssetClientName;
    NSObject<OS_dispatch_queue> * _completionDispatchQueue;
    NSString * _contentLockedReason;
    MAAutoAssetSelector * _contentLockedSelector;
    NSURL * _localContentURL;
    int  _locksOfContent;
    NSString * _updateCategoryDesiredByClient;
}

@property (nonatomic, retain) NSDictionary *assetAttributes;
@property (nonatomic, readonly, retain) MAAutoAssetSelector *assetSelector;
@property (nonatomic, readonly, retain) NSString *autoAssetClientName;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, retain) NSString *contentLockedReason;
@property (nonatomic, retain) MAAutoAssetSelector *contentLockedSelector;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *localContentURL;
@property (nonatomic) int locksOfContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSString *updateCategoryDesiredByClient;

// Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset

+ (id)assetSelectorForAssetTargetOSVersion:(id)arg1 forTargetBuildVersion:(id)arg2;
+ (void)cancelActivityForSelector:(id)arg1 completion:(id /* block */)arg2;
+ (id)cancelActivityForSelectorSync:(id)arg1;
+ (id)defaultDispatchQueue;
+ (void)determineIfAvailable:(id)arg1 forAssetSelector:(id)arg2 completion:(id /* block */)arg3;
+ (id)determineIfAvailableSync:(id)arg1 forAssetSelector:(id)arg2 discoveredAttributes:(id*)arg3 error:(id*)arg4;
+ (void)eliminateAllForAssetType:(id)arg1 completion:(id /* block */)arg2;
+ (id)eliminateAllForAssetTypeSync:(id)arg1;
+ (void)eliminateAllForSelector:(id)arg1 completion:(id /* block */)arg2;
+ (id)eliminateAllForSelectorSync:(id)arg1;
+ (void)eliminatePromotedNeverLockedForSelector:(id)arg1 completion:(id /* block */)arg2;
+ (id)eliminatePromotedNeverLockedForSelectorSync:(id)arg1;
+ (void)endAllPreviousLocksOfReason:(id)arg1 forAssetSelector:(id)arg2 completion:(id /* block */)arg3;
+ (void)endAllPreviousLocksOfReason:(id)arg1 forClientName:(id)arg2 forAssetSelector:(id)arg3 completion:(id /* block */)arg4;
+ (id)endAllPreviousLocksOfReasonSync:(id)arg1 forAssetSelector:(id)arg2;
+ (id)endAllPreviousLocksOfReasonSync:(id)arg1 forClientName:(id)arg2 forAssetSelector:(id)arg3;
+ (void)endAllPreviousLocksOfSelector:(id)arg1 completion:(id /* block */)arg2;
+ (void)endAllPreviousLocksOfSelector:(id)arg1 forClientName:(id)arg2 completion:(id /* block */)arg3;
+ (id)endAllPreviousLocksOfSelectorSync:(id)arg1;
+ (id)endAllPreviousLocksOfSelectorSync:(id)arg1 forClientName:(id)arg2;
+ (void)endPreviousLocksOfReason:(id)arg1 forAssetSelector:(id)arg2 removingLockCount:(long long)arg3 completion:(id /* block */)arg4;
+ (void)endPreviousLocksOfReason:(id)arg1 forClientName:(id)arg2 forAssetSelector:(id)arg3 removingLockCount:(long long)arg4 completion:(id /* block */)arg5;
+ (id)endPreviousLocksOfReasonSync:(id)arg1 forAssetSelector:(id)arg2 removingLockCount:(long long)arg3;
+ (id)endPreviousLocksOfReasonSync:(id)arg1 forClientName:(id)arg2 forAssetSelector:(id)arg3 removingLockCount:(long long)arg4;
+ (id)frameworkDispatchQueue;
+ (void)frameworkInstanceSetLogDomain;
+ (id)frameworkInstanceUUID;
+ (bool)hasStartupActivatedCompletedOnce;
+ (void)interestInContent:(id)arg1 forAssetSelector:(id)arg2 completion:(id /* block */)arg3;
+ (void)interestInContent:(id)arg1 forAssetSelector:(id)arg2 withInterestPolicy:(id)arg3 completion:(id /* block */)arg4;
+ (id)interestInContentSync:(id)arg1 forAssetSelector:(id)arg2;
+ (id)interestInContentSync:(id)arg1 forAssetSelector:(id)arg2 withInterestPolicy:(id)arg3;
+ (void)logMAAutoAssetVersion;
+ (void)stageCancelOperation:(id /* block */)arg1;
+ (id)stageCancelOperationSync;
+ (void)stageDetermineAllAvailable:(id)arg1 forTargetBuildVersion:(id)arg2 completion:(id /* block */)arg3;
+ (void)stageDetermineAllAvailableForUpdate:(id)arg1 completion:(id /* block */)arg2;
+ (id)stageDetermineAllAvailableForUpdateSync:(id)arg1 totalExpectedBytes:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)stageDetermineAllAvailableSync:(id)arg1 forTargetBuildVersion:(id)arg2 totalExpectedBytes:(unsigned long long*)arg3 error:(id*)arg4;
+ (void)stageDetermineGroupsAvailableForUpdate:(id)arg1 completion:(id /* block */)arg2;
+ (id)stageDetermineGroupsAvailableForUpdateSync:(id)arg1 totalExpectedBytes:(id*)arg2 error:(id*)arg3;
+ (void)stageDownloadAll:(long long)arg1 reportingProgress:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (unsigned long long)stageDownloadAllSync:(long long)arg1 assetsSuccessfullyStaged:(long long*)arg2 error:(id*)arg3 reportingProgress:(id /* block */)arg4;
+ (void)stageDownloadGroups:(id)arg1 awaitingAllGroups:(bool)arg2 withStagingTimeout:(long long)arg3 reportingProgress:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (id)stageDownloadGroupsSync:(id)arg1 awaitingAllGroups:(bool)arg2 withStagingTimeout:(long long)arg3 byGroupAssetsStaged:(id*)arg4 error:(id*)arg5 reportingProgress:(id /* block */)arg6;
+ (void)stageEraseAll:(id /* block */)arg1;
+ (id)stageEraseAllSync;
+ (void)stagePurgeAll:(id /* block */)arg1;
+ (id)stagePurgeAllSync;
+ (bool)supportsSecureCoding;
+ (long long)waitOnSemaphore:(id)arg1 withDaemonTriggeredTimeout:(long long)arg2;

- (void).cxx_destruct;
- (void)_cancelActivityForSelector:(id /* block */)arg1;
- (id)_cancelActivityForSelectorSync;
- (void)_eliminateAllForAssetType:(id /* block */)arg1;
- (id)_eliminateAllForAssetTypeSync;
- (void)_eliminateAllForSelector:(id /* block */)arg1;
- (id)_eliminateAllForSelectorSync;
- (void)_eliminatePromotedNeverLockedForSelector:(id /* block */)arg1;
- (id)_eliminatePromotedNeverLockedForSelectorSync;
- (void)_endAllPreviousLocksOfReason:(id)arg1 completion:(id /* block */)arg2;
- (id)_endAllPreviousLocksOfReasonSync:(id)arg1;
- (void)_endPreviousLocksOfReason:(id)arg1 removingLockCount:(long long)arg2 completion:(id /* block */)arg3;
- (id)_endPreviousLocksOfReasonSync:(id)arg1 removingLockCount:(long long)arg2;
- (void)_failedCancelActivity:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedCheckForNewer:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedContinueLockUsage:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedCurrentStatus:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedDetermineIfAvailable:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedEliminate:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedEndLockUsage:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedInterestInContent:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedLockContent:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedMapLockedContent:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedStageCancelOperation:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedStageDetermineAllAvailable:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedStageDetermineGroupsAvailableForUpdate:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedStageDownloadAll:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedStageDownloadGroups:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedStageEraseAll:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_failedStagePurgeAll:(long long)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id /* block */)arg4;
- (void)_lockContentStatusProgress:(id)arg1 lockForUseError:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)_newProxyObjectForLockProgressBlock:(id /* block */)arg1;
- (id)_newProxyObjectForStageProgressBlock:(id /* block */)arg1;
- (void)_stageCancelOperation:(id /* block */)arg1;
- (id)_stageCancelOperationSync;
- (void)_stageDetermineAllAvailable:(id)arg1 forTargetBuildVersion:(id)arg2 completion:(id /* block */)arg3;
- (void)_stageDetermineAllAvailableForUpdate:(id)arg1 completion:(id /* block */)arg2;
- (id)_stageDetermineAllAvailableForUpdateSync:(id)arg1 totalExpectedBytes:(unsigned long long*)arg2 error:(id*)arg3;
- (id)_stageDetermineAllAvailableSync:(id)arg1 forTargetBuildVersion:(id)arg2 totalExpectedBytes:(unsigned long long*)arg3 error:(id*)arg4;
- (void)_stageDetermineGroupsAvailableForUpdate:(id)arg1 completion:(id /* block */)arg2;
- (id)_stageDetermineGroupsAvailableForUpdateSync:(id)arg1 totalExpectedBytes:(id*)arg2 error:(id*)arg3;
- (void)_stageDownloadAll:(long long)arg1 reportingProgress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_stageDownloadAllStatusProgress:(id)arg1 stageProgressError:(id)arg2 progressBlock:(id /* block */)arg3;
- (unsigned long long)_stageDownloadAllSync:(long long)arg1 assetsSuccessfullyStaged:(long long*)arg2 error:(id*)arg3 reportingProgress:(id /* block */)arg4;
- (void)_stageDownloadGroups:(id)arg1 awaitingAllGroups:(bool)arg2 withStagingTimeout:(long long)arg3 reportingProgress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)_stageDownloadGroupsSync:(id)arg1 awaitingAllGroups:(bool)arg2 withStagingTimeout:(long long)arg3 byGroupAssetsStaged:(id*)arg4 error:(id*)arg5 reportingProgress:(id /* block */)arg6;
- (void)_stageEraseAll:(id /* block */)arg1;
- (id)_stageEraseAllSync;
- (void)_stagePurgeAll:(id /* block */)arg1;
- (id)_stagePurgeAllSync;
- (void)_successCancelActivity:(id /* block */)arg1;
- (void)_successCheckForNewer:(id)arg1 completion:(id /* block */)arg2;
- (void)_successContinueLockUsage:(id)arg1 completion:(id /* block */)arg2;
- (void)_successCurrentStatus:(id)arg1 completion:(id /* block */)arg2;
- (void)_successDetermineIfAvailable:(id)arg1 completion:(id /* block */)arg2;
- (void)_successEliminate:(id /* block */)arg1;
- (void)_successEndLockUsage:(id)arg1 completion:(id /* block */)arg2;
- (void)_successInterestInContent:(id)arg1 completion:(id /* block */)arg2;
- (void)_successLockContent:(id)arg1 dueToDesire:(id)arg2 sandboxExtension:(id)arg3 sandboxExtensionPath:(id)arg4 completion:(id /* block */)arg5;
- (void)_successMapLockedContent:(id)arg1 dueToDesire:(id)arg2 completion:(id /* block */)arg3;
- (void)_successStageCancelOperation:(id /* block */)arg1;
- (void)_successStageDetermineAllAvailable:(id)arg1 completion:(id /* block */)arg2;
- (void)_successStageDetermineGroupsAvailableForUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)_successStageDownloadAll:(id)arg1 completion:(id /* block */)arg2;
- (void)_successStageDownloadGroups:(id)arg1 completion:(id /* block */)arg2;
- (void)_successStageEraseAll:(id /* block */)arg1;
- (void)_successStagePurgeAll:(id /* block */)arg1;
- (id)assetAttribute:(id)arg1;
- (id)assetAttributes;
- (id)assetSelector;
- (id)autoAssetClientName;
- (void)checkForNewer:(id)arg1 withTimeout:(long long)arg2 completion:(id /* block */)arg3;
- (void)checkForNewer:(id)arg1 withUsagePolicy:(id)arg2 withTimeout:(long long)arg3 completion:(id /* block */)arg4;
- (id)checkForNewerSync:(id)arg1 withTimeout:(long long)arg2 discoveredAttributes:(id*)arg3 error:(id*)arg4;
- (id)checkForNewerSync:(id)arg1 withUsagePolicy:(id)arg2 withTimeout:(long long)arg3 discoveredAttributes:(id*)arg4 error:(id*)arg5;
- (id)completionDispatchQueue;
- (void)connectToServerFrameworkCompletion:(id /* block */)arg1;
- (void)connectionClosed;
- (id)contentLockedReason;
- (id)contentLockedSelector;
- (void)continueLockUsage:(id)arg1 completion:(id /* block */)arg2;
- (void)continueLockUsage:(id)arg1 withUsagePolicy:(id)arg2 completion:(id /* block */)arg3;
- (id)continueLockUsageSync:(id)arg1;
- (id)continueLockUsageSync:(id)arg1 withUsagePolicy:(id)arg2;
- (void)currentStatus:(id /* block */)arg1;
- (id)currentStatusSync:(id*)arg1;
- (id)description;
- (void)determineIfAvailable:(id)arg1 withTimeout:(long long)arg2 completion:(id /* block */)arg3;
- (id)determineIfAvailableSync:(id)arg1 withTimeout:(long long)arg2 discoveredAttributes:(id*)arg3 error:(id*)arg4;
- (void)encodeWithCoder:(id)arg1;
- (void)endLockUsage:(id)arg1 completion:(id /* block */)arg2;
- (id)endLockUsageSync:(id)arg1;
- (void)handleMessage:(id)arg1 reply:(id /* block */)arg2;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (id)initForClientName:(id)arg1 selectingAsset:(id)arg2 completingFromQueue:(id)arg3 error:(id*)arg4;
- (id)initForClientName:(id)arg1 selectingAsset:(id)arg2 error:(id*)arg3;
- (id)initForClientName:(id)arg1 selectingAsset:(id)arg2 usingDesiredPolicyCategory:(id)arg3 completingFromQueue:(id)arg4 error:(id*)arg5;
- (id)initForClientName:(id)arg1 selectingAsset:(id)arg2 usingDesiredPolicyCategory:(id)arg3 error:(id*)arg4;
- (id)initWithCoder:(id)arg1;
- (void)interestInContent:(id)arg1 completion:(id /* block */)arg2;
- (void)interestInContent:(id)arg1 withInterestPolicy:(id)arg2 completion:(id /* block */)arg3;
- (id)interestInContentSync:(id)arg1;
- (id)interestInContentSync:(id)arg1 withInterestPolicy:(id)arg2;
- (id)localContentURL;
- (void)lockContent:(id)arg1 withTimeout:(long long)arg2 completion:(id /* block */)arg3;
- (void)lockContent:(id)arg1 withTimeout:(long long)arg2 reportingProgress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)lockContent:(id)arg1 withUsagePolicy:(id)arg2 withTimeout:(long long)arg3 completion:(id /* block */)arg4;
- (void)lockContent:(id)arg1 withUsagePolicy:(id)arg2 withTimeout:(long long)arg3 reportingProgress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)lockContentSync:(id)arg1 withTimeout:(long long)arg2 lockedAssetSelector:(id*)arg3 newerInProgress:(id*)arg4 error:(id*)arg5;
- (id)lockContentSync:(id)arg1 withTimeout:(long long)arg2 lockedAssetSelector:(id*)arg3 newerInProgress:(id*)arg4 error:(id*)arg5 reportingProgress:(id /* block */)arg6;
- (id)lockContentSync:(id)arg1 withUsagePolicy:(id)arg2 withTimeout:(long long)arg3 lockedAssetSelector:(id*)arg4 newerInProgress:(id*)arg5 error:(id*)arg6;
- (id)lockContentSync:(id)arg1 withUsagePolicy:(id)arg2 withTimeout:(long long)arg3 lockedAssetSelector:(id*)arg4 newerInProgress:(id*)arg5 error:(id*)arg6 reportingProgress:(id /* block */)arg7;
- (int)locksOfContent;
- (void)mapLockedContent:(id)arg1 completion:(id /* block */)arg2;
- (id)mapLockedContentSync:(id)arg1 error:(id*)arg2;
- (void)setAssetAttributes:(id)arg1;
- (void)setContentLockedReason:(id)arg1;
- (void)setContentLockedSelector:(id)arg1;
- (void)setLocalContentURL:(id)arg1;
- (void)setLocksOfContent:(int)arg1;
- (id)summary;
- (id)updateCategoryDesiredByClient;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore

+ (void)SUCoreBorder_stageCancelOperation:(id /* block */)arg1;
+ (void)SUCoreBorder_stageDetermineGroupsAvailableForUpdate:(id)arg1 completion:(id /* block */)arg2;
+ (void)SUCoreBorder_stageDownloadGroups:(id)arg1 awaitingAllGroups:(bool)arg2 withStagingTimeout:(long long)arg3 reportingProgress:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)SUCoreBorder_stagePurgeAll:(id /* block */)arg1;
+ (void)_SUCoreBorder_stageCancelAtBegin:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_SUCoreBorder_stageCancelAtEnd:(id)arg1 operationError:(id)arg2 withCompletion:(id /* block */)arg3;
+ (void)_SUCoreBorder_stageDetermineResultAtBegin:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_SUCoreBorder_stageDetermineResultAtEnd:(id)arg1 assets:(id)arg2 bytes:(id)arg3 error:(id)arg4 withCompletion:(id /* block */)arg5;
+ (void)_SUCoreBorder_stageDownloadAtBegin:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_SUCoreBorder_stageDownloadAtEnd:(id)arg1 assets:(id)arg2 bytes:(id)arg3 error:(id)arg4 withCompletion:(id /* block */)arg5;
+ (void)_SUCoreBorder_stagePurgeAllAtBegin:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_SUCoreBorder_stagePurgeAllAtEnd:(id)arg1 operationError:(id)arg2 withCompletion:(id /* block */)arg3;
+ (void)_generateSimulatedResults:(id*)arg1 bytes:(id*)arg2;

@end
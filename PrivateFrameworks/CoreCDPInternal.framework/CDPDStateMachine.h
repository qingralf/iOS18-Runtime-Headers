/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDStateMachine : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate> {
    bool  _attemptedCDPEnable;
    NSObject<OS_dispatch_queue> * _cdpdStatemachineDefaultQueue;
    <CDPDCircleControl> * _circleController;
    NSXPCConnection * _connection;
    CDPContext * _context;
    CDPDEDPRecoveryController * _edpController;
    CDPInheritanceTrustController * _inheritanceTrustController;
    <CDPRPDLedger> * _ledger;
    CDPDLockAssertion * _lockAssertion;
    CDPDPCSController * _pcsController;
    <CDPDSecureBackupControl> * _secureBackupController;
    <CDPDSecureBackupDisableCapable> * _secureBackupDisableController;
    <CDPDSecureBackupEnableCapable> * _secureBackupEnableController;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (nonatomic) bool attemptedCDPEnable;
@property (nonatomic, retain) <CDPDCircleControl> *circleController;
@property (nonatomic, retain) CDPContext *context;
@property (nonatomic, retain) CDPDEDPRecoveryController *edpController;
@property (nonatomic, retain) CDPDLockAssertion *lockAssertion;
@property (nonatomic, retain) CDPDPCSController *pcsController;
@property (nonatomic, retain) <CDPDSecureBackupControl> *secureBackupController;
@property (nonatomic, retain) <CDPDSecureBackupEnableCapable> *secureBackupEnableController;
@property (nonatomic, retain) <CDPStateUIProviderInternal> *uiProvider;

- (void).cxx_destruct;
- (void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)arg1 localSecretType:(unsigned long long)arg2 useSecureBackupCachedSecret:(bool)arg3 circleJoinResult:(id)arg4 completion:(id /* block */)arg5;
- (void)_attemptBackupRecoveryWithLocalSecret:(id)arg1 type:(unsigned long long)arg2 useSecureBackupCachedSecret:(bool)arg3 circleJoinResult:(id)arg4 completion:(id /* block */)arg5;
- (void)_attemptBeneficiaryTrustWithInheritanceKey:(id)arg1 retryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_attemptCDPEnable:(id /* block */)arg1;
- (void)_authenticatedRepairCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (bool)_checkSecureBackupCachedSecretValue;
- (void)_confirmCDPEligibilityWithCompletion:(id /* block */)arg1;
- (void)_continuePerformEDPRepairWithResult:(id)arg1 completion:(id /* block */)arg2;
- (void)_continueRepairCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)_continueShouldPerformRepairWithOptionForceFetch:(bool)arg1 completion:(id /* block */)arg2;
- (void)_disableRecoveryKeyWithCompletion:(id /* block */)arg1;
- (bool)_eligibleForSilentAuthenticatedRepair;
- (bool)_eligibleToSkipAuth;
- (void)_enableCustodianRecoveryIfAvailableForContext:(id)arg1;
- (void)_enableKVSForAccount:(id)arg1 store:(id)arg2 completion:(id /* block */)arg3;
- (void)_enableSOSViews;
- (void)_enableSecureBackupWithCircleJoinResult:(id)arg1 completion:(id /* block */)arg2;
- (void)_enableSecureBackupWithJoinResult:(id)arg1 completion:(id /* block */)arg2;
- (void)_enrollOrDisableCDPAfterEnabledStateVerified:(id /* block */)arg1;
- (id)_errorForICSCCreationNotAttemptedWithResult:(id)arg1 cliqueStatus:(long long)arg2;
- (void)_fetchUserInfo;
- (void)_handleBeneficiaryTrustWithCompletion:(id /* block */)arg1;
- (void)_handleCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)_handleInteractiveRecoveryFlowWithCircleJoinResult:(id)arg1 completion:(id /* block */)arg2;
- (void)_handlePreflightError:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleiCDPStatusCheckError:(id)arg1 completion:(id /* block */)arg2;
- (void)_initDependenciesWithContext:(id)arg1;
- (void)_isEligibleForRecoveryTokenWithContext:(id)arg1 cdpStateMachineError:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isEligibleForSOSJoin;
- (bool)_isInSOSCircle;
- (void)_joinSOSAsynchronouslyFromHandleCloudDataProtectionIfRequired;
- (void)_joinSOSFromRepairCloudDataProtectionIfRequiredWithCompletion:(id /* block */)arg1;
- (bool)_localDeviceHasLocalSecret;
- (id)_makeCDPEntryEventWithContext:(id)arg1;
- (id)_makeEDPRepairStartEventWithContext:(id)arg1 cdpdAccount:(id)arg2;
- (id)_makeEscrowRecordControllerWithCurrentContext;
- (id)_makeICSCCreationMissingWhenExpectedEventWithContext:(id)arg1 error:(id)arg2;
- (id)_makeSOSCompatibilityModeEnableEvent:(bool)arg1 error:(id)arg2;
- (bool)_needsSOSRepair;
- (void)_performEDPRepairWithResult:(id)arg1 completion:(id /* block */)arg2;
- (void)_performInteractivelyAuthenticatedRepair:(id /* block */)arg1;
- (void)_performSilentlyAuthenticatedRepair:(id /* block */)arg1;
- (void)_populateBaseFinishEvent:(id)arg1 didSucceed:(bool)arg2 error:(id)arg3 shouldCompleteSignIn:(bool)arg4 context:(id)arg5 octagonCliqueStatus:(long long)arg6 cdpdAccount:(id)arg7;
- (id)_populateBaseStartEvent:(id)arg1 withContext:(id)arg2 cdpdAccount:(id)arg3;
- (void)_postEDPRepairFinishEventWithContext:(id)arg1 didSucceed:(bool)arg2 error:(id)arg3 shouldCompleteSignIn:(bool)arg4 octagonCliqueStatus:(long long)arg5 cdpdAccount:(id)arg6;
- (void)_postFollowUpForSecureBackupCacheInvalidationError;
- (void)_postRecoveryEnableSecureBackupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_predicateForRecordUpgradeCheck;
- (id)_predicateForRecordUpgradeCheckIgnoringBottled;
- (id)_predicateForRepair;
- (void)_preflightAccountStateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_promptForEDPRecoveryTokenWithCompletion:(id /* block */)arg1;
- (void)_recoverSecureBackupWithCircleJoinResult:(id)arg1 completion:(id /* block */)arg2;
- (id)_recoveryFlowControllerForKeychainSyncSystem:(long long)arg1 recoveryContext:(id)arg2;
- (void)_refreshAndAuthenticateWithContext:(id)arg1;
- (void)_resetAccountCDPStateWithCompletion:(id /* block */)arg1;
- (void)_shouldAttemptGuitarfishRepairWithCompletion:(id /* block */)arg1;
- (void)_shouldPerformAuthenticatedRepairWithOptionForceFetch:(bool)arg1 completion:(id /* block */)arg2;
- (bool)_shouldRejoinCircleAfterPerformingRPDType:(unsigned long long)arg1;
- (void)_updateCDPEnableEventWithError:(id)arg1 error:(id)arg2 didEnable:(bool)arg3;
- (void)_updateSOSCompatibilityMode;
- (bool)attemptedCDPEnable;
- (id)circleController;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(id /* block */)arg2;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (id)context;
- (id)contextForController:(id)arg1;
- (void)dealloc;
- (id)edpController;
- (void)handleCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 connection:(id)arg2;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 connection:(id)arg3;
- (id)lockAssertion;
- (id)pcsController;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(id /* block */)arg1;
- (void)promptForLocalSecretWithCompletion:(id /* block */)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)reportCDPEntryEventWithContext:(id)arg1;
- (void)reportEDPRepairStartEventWithContext:(id)arg1 cdpdAccount:(id)arg2;
- (void)resetAccountCDPStateWithCompletion:(id /* block */)arg1;
- (id)secureBackupController;
- (id)secureBackupEnableController;
- (id)secureChannelContextForController:(id)arg1;
- (void)setAttemptedCDPEnable:(bool)arg1;
- (void)setCircleController:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEdpController:(id)arg1;
- (void)setLockAssertion:(id)arg1;
- (void)setPcsController:(id)arg1;
- (void)setSecureBackupController:(id)arg1;
- (void)setSecureBackupEnableController:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (bool)shouldAllowCDPEnrollment;
- (void)shouldPerformRepairWithOptionForceFetch:(bool)arg1 completion:(id /* block */)arg2;
- (bool)synchronizeCircleViewsForSecureBackupContext:(id)arg1;
- (id)uiProvider;

@end

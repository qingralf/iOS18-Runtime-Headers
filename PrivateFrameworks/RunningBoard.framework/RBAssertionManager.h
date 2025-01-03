/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBAssertionManager : NSObject <RBAssertionManagerQueueDelegate, RBAssertionManaging, RBStateCapturing> {
    NSMutableSet * _acquiringAssertionIdentifiers;
    NSMutableSet * _assertionTargets;
    RBAssertionCollection * _assertions;
    <RBBundlePropertiesManaging> * _bundlePropertiesManager;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    <RBDaemonContextProviding> * _daemonContext;
    <RBAssertionManagerDelegate> * _delegate;
    <RBAssertionDescriptorValidating> * _descriptorValidator;
    RBAssertionManagerEventQueue * _eventQueue;
    NSCountedSet * _inFlightAssertionTargets;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inFlightOperationsLock;
    NSMutableSet * _inFlightTerminations;
    NSMutableSet * _invalidAssertions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _maxAssertionsPerOriginator;
    unsigned long long  _maxOperationsInFlight;
    NSMapTable * _originatorExitTimesByAssertion;
    <RBAssertionOriginatorPidPersisting> * _originatorPidStore;
    NSMutableDictionary * _originatorToInFlightOperationsCountMap;
    NSMutableDictionary * _pluginHoldsForAssertions;
    RBProcessIndex * _processIndex;
    NSMutableDictionary * _relativeStartTimesByTargetIdentity;
    NSMapTable * _savedEndowments;
    RBProcessMap * _stateMap;
    RBAssertionStateResolver * _stateResolver;
    RBSystemState * _systemState;
    <RBTimeProviding> * _timeProvider;
    NSObject<OS_dispatch_queue> * _workloop;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) RBSystemState *systemState;

+ (id)sharedWorkloop;

- (void).cxx_destruct;
- (void)_acquireAssertions:(id)arg1 invalidateIdentifiers:(id)arg2 forOriginatorProcess:(id)arg3 completionPolicy:(unsigned long long)arg4 acquisitionErrorsByIndex:(id)arg5 completeStage:(id /* block */)arg6;
- (void)_acquireUnderlyingAssertionForProcess:(id)arg1;
- (id)_concreteTargetForTarget:(id)arg1 allowAbstractTarget:(bool)arg2;
- (bool)_decreaseInFlightOperationsForOriginator:(id)arg1;
- (void)_decreaseInFlightOperationsForTargetIdentities:(id)arg1;
- (void)_dumpAssertions;
- (bool)_increaseInFlightOperationsForOriginator:(id)arg1 andSuspendIfNeeded:(id)arg2;
- (void)_increaseInFlightOperationsForTargetIdentities:(id)arg1;
- (bool)_invalidateAssertion:(id)arg1 sync:(bool)arg2;
- (void)_invalidateAssertionsWithContext:(id)arg1;
- (id)_lock_activateDelayedAssertionsForTargets:(id)arg1;
- (void)_lock_addAssertion:(id)arg1;
- (id)_lock_assertionCreationAttributeContextForTargetIdentity:(id)arg1 originator:(id)arg2;
- (bool)_lock_batchContextInvalidatesSynchronously:(id)arg1;
- (void)_lock_checkAssertionToInvalidateByCondition:(id)arg1 condition:(id)arg2 currentValue:(id)arg3 assertionsToInvalidate:(id)arg4;
- (void)_lock_clearStartTimesForUnbusyTargets:(id)arg1;
- (id)_lock_createAssertionForDescriptor:(id)arg1 originatorState:(id)arg2 acquisitionContext:(id)arg3 error:(id*)arg4;
- (id)_lock_createAssertionWithAcquisitionContext:(id)arg1 attributeContext:(id)arg2 concreteTarget:(id)arg3 targetIdentity:(id)arg4 originator:(id)arg5 error:(out id*)arg6;
- (id)_lock_createAssertionsForBatchContext:(id)arg1 originatorState:(id)arg2 errorsByIndex:(id)arg3;
- (id)_lock_deactivateAssertions:(id)arg1;
- (id)_lock_deactivateDelayedAssertionsForTargets:(id)arg1;
- (id)_lock_deactivateExistingAssertionsDelayedByIncomingAssertions:(id)arg1;
- (double)_lock_delayedStartTimeForAssertion:(id)arg1;
- (void)_lock_dumpAssertionsForTarget:(id)arg1;
- (bool)_lock_enforceAssertionLimitIfNecessaryForBatchContext:(id)arg1 originatorProcess:(id)arg2 error:(id*)arg3;
- (void)_lock_enqueueAssertionsForRemoval:(id)arg1;
- (void)_lock_finalizeRemovingAssertions:(id)arg1;
- (bool)_lock_hasStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg1;
- (unsigned long long)_lock_incomingAssertionCountForBatchContext:(id)arg1 originatorIdentifier:(id)arg2;
- (id)_lock_invalidateAssertionByConditions:(id)arg1 changedAssertions:(id*)arg2;
- (void)_lock_invalidateAssertions:(id)arg1 forceSync:(bool)arg2;
- (double)_lock_invalidationTimeForAssertion:(id)arg1;
- (void)_lock_notifyDelegateOfExcessiveAssertionsForOriginatorProcess:(id)arg1;
- (void)_lock_notifyDelegateOfInvalidatedAssertions:(id)arg1;
- (void)_lock_notifyDelegateOfProcessStateChangeSet:(id)arg1;
- (unsigned long long)_lock_numberOfStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg1;
- (double)_lock_originatorExitTimeForAssertion:(id)arg1;
- (bool)_lock_originatorHasExited:(id)arg1;
- (id)_lock_originatorIdentifiersInAssertions:(id)arg1;
- (double)_lock_relativeStartTimeForAssertion:(id)arg1;
- (void)_lock_removeAssertion:(id)arg1;
- (void)_lock_removeAssertions:(id)arg1 andUpdateChangedAssertions:(id)arg2;
- (void)_lock_removeInvalidAssertions;
- (void)_lock_removeStateForProcessIdentityIfNecessary:(id)arg1;
- (unsigned long long)_lock_resolvePreliminaryStatesForNonExistingProcessesWithAssertions:(id)arg1 completionPolicy:(unsigned long long)arg2;
- (id)_lock_savedEndowmentsForProcess:(id)arg1;
- (void)_lock_setState:(id)arg1 forProcessIdentity:(id)arg2;
- (void)_lock_setSystemState:(id)arg1;
- (id)_lock_sortedAssertionsForTarget:(id)arg1;
- (double)_lock_startTimeForAssertion:(id)arg1;
- (id)_lock_targetIdentitiesInAssertions:(id)arg1;
- (id)_lock_updateStatesDueToChangingAssertions:(id)arg1 invalidatedAssertions:(id)arg2;
- (bool)_lock_validateDescriptor:(id)arg1 originatorProcess:(id)arg2 originatorState:(id)arg3 concreteTarget:(id)arg4 targetProcess:(id)arg5 targetIdentity:(id)arg6 targetIdentifier:(id)arg7 targetState:(id)arg8 acquisitionContext:(id)arg9 error:(out id*)arg10;
- (bool)_lock_willExceedAssertionLimitForOriginatorProcess:(id)arg1 withIncomingCount:(unsigned long long)arg2;
- (double)_remainingRuntimeForProcessIdentity:(id)arg1;
- (void)_removeInvalidAssertions;
- (void)acquireAssertionWithContext:(id)arg1 completion:(id /* block */)arg2;
- (bool)addSavedEndowment:(id)arg1 forProcess:(id)arg2;
- (id)additionalRestrictionsForDomain:(id)arg1 andName:(id)arg2;
- (id)allEntitlements;
- (bool)areTargetPropertiesValidForContext:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;
- (id)assertionDescriptorsWithFlattenedAttributes:(bool)arg1;
- (id)assertionsForOriginator:(id)arg1;
- (id)attributesForDomain:(id)arg1 andName:(id)arg2 context:(id)arg3 withError:(id*)arg4;
- (id)captureState;
- (void)commitBatchWithContext:(id)arg1 completion:(id /* block */)arg2;
- (bool)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;
- (id)debugDescription;
- (id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
- (void)eventQueue:(id)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(id)arg2 expirationTime:(double)arg3;
- (void)eventQueue:(id)arg1 handleInvalidationEventForAssertion:(id)arg2;
- (void)eventQueue:(id)arg1 handleWarningEventForAssertion:(id)arg2;
- (double)eventQueue:(id)arg1 remainingRuntimeForProcessIdentity:(id)arg2;
- (double)eventQueue:(id)arg1 startTimeForAssertion:(id)arg2;
- (bool)hasAssertionWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 bundlePropertiesManager:(id)arg2 originatorPidStore:(id)arg3 assertionDescriptorValidator:(id)arg4 timeProvider:(id)arg5 daemonContext:(id)arg6 maxOperationsInFlight:(unsigned long long)arg7 maxAssertionsPerOriginator:(unsigned long long)arg8;
- (bool)invalidateAssertion:(id)arg1;
- (bool)invalidateAssertionFromOriginator:(id)arg1 sync:(bool)arg2 withIdentifier:(id)arg3;
- (bool)invalidateAssertionFromOriginator:(id)arg1 withIdentifier:(id)arg2;
- (bool)invalidateAssertionWithIdentifier:(id)arg1;
- (bool)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)arg1;
- (bool)isProcessForeground:(id)arg1;
- (id)limitationsForInstance:(id)arg1;
- (id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
- (void)periodicRunningProcessDump;
- (id)popPluginHoldForAssertion:(id)arg1;
- (void)processDidLaunch:(id)arg1;
- (void)processDidTerminate:(id)arg1;
- (id)processForIdentity:(id)arg1;
- (id)restrictionsForDomain:(id)arg1 andName:(id)arg2;
- (void)revalidateAssertionsForProcessIdentities:(id)arg1;
- (id)savedEndowmentsForProcess:(id)arg1;
- (id)stateCaptureTitle;
- (id)stateForIdentity:(id)arg1;
- (id)systemState;
- (id)targetEntitlementsForDomain:(id)arg1 andName:(id)arg2;

@end

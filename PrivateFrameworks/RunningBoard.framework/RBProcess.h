/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBProcess : NSObject <RBConcreteTargeting, RBSProcessIdentifier> {
    int  _appNapEligible;
    int  _appliedJetsamPriority;
    RBSAuditToken * _auditToken;
    <RBBundleProperties> * _bundleProperties;
    double  _cachedProcessStartTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    bool  _diagnosticsComplete;
    bool  _diagnosticsStarted;
    RBSProcessHandle * _handle;
    NSString * _homeDirectory;
    RBProcess * _hostProcess;
    RBSProcessIdentifier * _identifier;
    RBSProcessIdentity * _identity;
    RBSProcessInstance * _instance;
    RBSProcessExitStatus * _intendedExitStatus;
    int  _isTestApp;
    unsigned long long  _jetsamCoalitionID;
    bool  _jetsamCoalitionLeader;
    RBSProcessExitContext * _lastExitContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBProcessState * _lock_appliedState;
    RBProcessState * _lock_state;
    unsigned char  _manageFlags;
    NSDictionary * _managedEndpointByLaunchIdentifier;
    int  _memlimit;
    RBJetsamProperties * _memoryLimits;
    int  _pid;
    int  _pidversion;
    bool  _platformBinary;
    NSObject<OS_dispatch_source> * _procSource;
    double  _processStartTime;
    unsigned long long  _resourceCoalitionID;
    NSString * _shortDescription;
    bool  _suspended;
    bool  _systemPreventsIdleSleep;
    bool  _terminating;
    NSString * _tmpDirectory;
    NSString * _underlyingAssertion;
    bool  _usesSocketMonitoring;
    bool  _wasVisible;
}

@property (nonatomic, copy) RBSAuditToken *auditToken;
@property (getter=isBeingPtraced, nonatomic, readonly) bool beingPtraced;
@property (nonatomic, readonly) <RBBundleProperties> *bundleProperties;
@property (getter=isContainerized, nonatomic, readonly) bool containerized;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *environment;
@property (nonatomic, readonly, copy) RBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeDirectory;
@property (nonatomic, readonly) RBProcess *hostProcess;
@property (nonatomic, readonly, copy) RBSProcessIdentifier *identifier;
@property (nonatomic, readonly, copy) RBSProcessIdentity *identity;
@property (nonatomic, readonly, copy) RBSProcessInstance *instance;
@property (nonatomic, copy) RBSProcessExitStatus *intendedExitStatus;
@property (nonatomic) unsigned long long jetsamCoalitionID;
@property (getter=isJetsamCoalitionLeader, nonatomic) bool jetsamCoalitionLeader;
@property (getter=isJetsamManaged, nonatomic, readonly) bool jetsamManaged;
@property (nonatomic, retain) RBSProcessExitContext *lastExitContext;
@property (getter=isLifecycleManaged, nonatomic, readonly) bool lifecycleManaged;
@property (nonatomic, readonly) NSDictionary *managedEndpointByLaunchIdentifier;
@property (nonatomic, readonly, copy) RBJetsamProperties *memoryLimits;
@property (nonatomic, readonly) int pidversion;
@property (getter=isPlatformBinary, nonatomic, readonly) bool platformBinary;
@property (nonatomic, readonly) RBProcess *process;
@property (nonatomic, readonly) double processStartTime;
@property (getter=isReported, nonatomic, readonly) bool reported;
@property (nonatomic) unsigned long long resourceCoalitionID;
@property (nonatomic, readonly) NSString *shortDescription;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;
@property (getter=isSystem, nonatomic, readonly) bool system;
@property (getter=isTerminating, nonatomic) bool terminating;
@property (getter=isTestApp, nonatomic, readonly) bool testApp;
@property (nonatomic, readonly) NSString *tmpDirectory;
@property (nonatomic, readonly) NSString *underlyingAssertion;

+ (id)processStateApplicationQueue;
+ (id)testProcessWithPid:(int)arg1;
+ (id)testProcessWithPid:(int)arg1 andIdentity:(id)arg2;
+ (id)testProcessWithPid:(int)arg1 identity:(id)arg2 launchdProps:(id)arg3 andBundleProps:(id)arg4;

- (void).cxx_destruct;
- (void)_applyState:(id)arg1;
- (id)_initThinWithInstance:(id)arg1 auditToken:(id)arg2 bundleProperties:(id)arg3 jetsamProperties:(id)arg4 hostProcess:(id)arg5 properties:(id)arg6;
- (id)_initWithInstance:(id)arg1 auditToken:(id)arg2 bundleProperties:(id)arg3 jetsamProperties:(id)arg4 initialState:(id)arg5 hostProcess:(id)arg6 properties:(id)arg7 systemPreventsIdleSleep:(bool)arg8;
- (bool)_sendSignal:(int)arg1;
- (void)_systemPreventIdleSleepStateDidChange:(bool)arg1;
- (id)auditToken;
- (id)bundleProperties;
- (void)collectDiagnostic:(unsigned long long)arg1 description:(id)arg2 domain:(unsigned int)arg3 code:(unsigned long long)arg4 additionalPayload:(id)arg5 completion:(id /* block */)arg6;
- (id)createRBSTarget;
- (id)description;
- (id)environment;
- (id)handle;
- (id)homeDirectory;
- (id)hostProcess;
- (id)identifier;
- (id)identity;
- (id)init;
- (id)instance;
- (id)intendedExitStatus;
- (void)invalidate;
- (void)invokeHandlerOnProcessDeath:(id /* block */)arg1 onQueue:(id)arg2;
- (bool)isBeingPtraced;
- (bool)isContainerized;
- (bool)isJetsamCoalitionLeader;
- (bool)isJetsamManaged;
- (bool)isLifecycleManaged;
- (bool)isPlatformBinary;
- (bool)isReported;
- (bool)isSuspended;
- (bool)isSystem;
- (bool)isTerminating;
- (bool)isTestApp;
- (unsigned long long)jetsamCoalitionID;
- (id)lastExitContext;
- (id)managedEndpointByLaunchIdentifier;
- (bool)matchesProcess:(id)arg1;
- (id)memoryLimits;
- (int)pidversion;
- (id)process;
- (id)processPredicate;
- (double)processStartTime;
- (int)rbs_pid;
- (unsigned long long)resourceCoalitionID;
- (void)setAuditToken:(id)arg1;
- (void)setIntendedExitStatus:(id)arg1;
- (void)setJetsamCoalitionID:(unsigned long long)arg1;
- (void)setJetsamCoalitionLeader:(bool)arg1;
- (void)setLastExitContext:(id)arg1;
- (void)setProcessStartTime:(double)arg1;
- (void)setResourceCoalitionID:(unsigned long long)arg1;
- (void)setTerminating:(bool)arg1;
- (id)shortDescription;
- (bool)terminateWithContext:(id)arg1;
- (id)tmpDirectory;
- (id)underlyingAssertion;

@end

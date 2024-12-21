/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter
 */

@interface HMMTRFabricConnectionRequest : HMFObject <HMFTimerDelegate> {
    bool  _active;
    NSMutableOrderedSet * _activeIPConnectionRequests;
    NSMutableOrderedSet * _activeThreadConnectionRequests;
    NSMutableOrderedSet * _activeThreadWEDConnectionRequests;
    HMMTRAccessoryServerBrowser * _browser;
    NSNumber * _fabricID;
    unsigned char  _fabricIdleTime;
    HMFTimer * _idleTimer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableOrderedSet * _pendingConnectionRequests;
    bool  _systemCommissionerFabric;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) HMMTRAccessoryServerBrowser *browser;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *fabricID;
@property (nonatomic) unsigned char fabricIdleTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMFTimer *idleTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool systemCommissionerFabric;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_addToActiveIPConnections:(id)arg1;
- (void)_addToActiveThreadConnections:(id)arg1;
- (void)_addToActiveThreadWEDConnections:(id)arg1;
- (void)_addToPendingConnections:(id)arg1;
- (void)_calculateFabricIdleTime;
- (void)_connectPendingConnections;
- (bool)_hasActiveAccessoryConnections;
- (bool)_hasPendingAccessoryConnections;
- (void)_kickIdleTimer;
- (bool)_removeFromActiveIPConnections:(id)arg1;
- (bool)_removeFromActiveThreadConnections:(id)arg1;
- (bool)_removeFromActiveThreadWEDConnections:(id)arg1;
- (void)_removeFromPendingConnections:(id)arg1;
- (void)_restartConnectionIdleTimer:(double)arg1;
- (bool)_tryMergeIntoExistingConnection:(id)arg1;
- (void)_updateActiveThreadWEDConnectionsIdleTime:(unsigned char)arg1;
- (void)_updateConnectionIdleTime:(unsigned char)arg1;
- (void)abortAllOperationsWithReason:(id)arg1;
- (bool)abortOperationsForConnectionRequest:(id)arg1 reason:(id)arg2;
- (bool)active;
- (id)activeIPConnectionRequests;
- (id)activeThreadConnectionRequests;
- (id)activeThreadWEDConnectionRequests;
- (id)attributeDescriptions;
- (id)browser;
- (void)connectToAccessoryWhenAllowed:(id)arg1;
- (void)dispatchBlock:(id /* block */)arg1;
- (id)fabricID;
- (unsigned char)fabricIdleTime;
- (bool)hasPendingHighPriorityConnectionRequest;
- (unsigned long long)hash;
- (id)idleTimer;
- (id)initWithQueue:(id)arg1 browser:(id)arg2 fabricID:(id)arg3 systemCommissionerFabric:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (void)operationsCompletedForAccessoryConnectionRequest:(id)arg1;
- (id)pendingConnectionRequests;
- (id)privateDescription;
- (void)retryOperations;
- (void)setActive:(bool)arg1;
- (void)setFabricIdleTime:(unsigned char)arg1;
- (void)startOperations;
- (void)stopOperations;
- (void)suspendOperations;
- (bool)systemCommissionerFabric;
- (void)timerDidFire:(id)arg1;
- (void)updateAllConnectionIdleTimeoutsToMinimum;
- (id)workQueue;

@end
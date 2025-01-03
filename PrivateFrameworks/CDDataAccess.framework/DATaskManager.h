/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DATaskManager : NSObject {
    DAAccount * _account;
    <DATask> * _activeExclusiveTask;
    <DATask> * _activeModalTask;
    <DATask> * _activeQueuedTask;
    DAActivity * _daActivity;
    bool  _didLogSyncStart;
    NSMutableSet * _heldIndependentTasks;
    NSMutableSet * _independentTasks;
    NSMutableArray * _mQueuedTasks;
    NSTimer * _managerIdleTimer;
    unsigned long long  _maxConcurrentIndependentTasks;
    <DATask> * _modalHeldActiveQueuedTask;
    NSMutableSet * _modalHeldIndependentTasks;
    NSString * _powerAssertionGroupID;
    NSTimer * _powerLogIdleTimer;
    NSMutableArray * _queuedExclusiveTasks;
    NSMutableArray * _queuedIndependentTasks;
    NSMutableArray * _queuedModalTasks;
    int  _state;
    DATransaction * _transaction;
    NSTimer * _userInitiatedSyncTimer;
    NSTimer * _xpcTransactionTimer;
}

@property (nonatomic) DAAccount *account;
@property (nonatomic, retain) <DATask> *activeExclusiveTask;
@property (nonatomic, retain) <DATask> *activeModalTask;
@property (nonatomic, retain) <DATask> *activeQueuedTask;
@property (nonatomic, readonly) NSArray *allTasks;
@property (nonatomic) bool didLogSyncStart;
@property (nonatomic, retain) NSMutableSet *heldIndependentTasks;
@property (nonatomic, retain) NSMutableSet *independentTasks;
@property (nonatomic, retain) NSMutableArray *mQueuedTasks;
@property (nonatomic, retain) NSTimer *managerIdleTimer;
@property (nonatomic) unsigned long long maxConcurrentIndependentTasks;
@property (nonatomic, retain) <DATask> *modalHeldActiveQueuedTask;
@property (nonatomic, retain) NSMutableSet *modalHeldIndependentTasks;
@property (nonatomic, copy) NSString *powerAssertionGroupID;
@property (nonatomic, retain) NSTimer *powerLogIdleTimer;
@property (nonatomic, retain) NSMutableArray *queuedExclusiveTasks;
@property (nonatomic, retain) NSMutableArray *queuedIndependentTasks;
@property (nonatomic, retain) NSMutableArray *queuedModalTasks;
@property (nonatomic, readonly) NSArray *queuedTasks;
@property (nonatomic) int state;
@property (nonatomic, retain) NSTimer *userInitiatedSyncTimer;
@property (nonatomic, retain) NSTimer *xpcTransactionTimer;

- (void).cxx_destruct;
- (id)OAuth2Token;
- (bool)_allowsMoreConcurrentIndependentTasks;
- (void)_cancelTasksWithReason:(int)arg1;
- (void)_clearUserInitiatedSyncTimer;
- (void)_endXpcTransaction;
- (bool)_hasTasksForcingNetworkConnection;
- (bool)_hasTasksIndicatingARunningSync;
- (void)_logSyncEnd;
- (void)_makeStateTransition;
- (void)_performTask:(id)arg1;
- (void)_populateVersionDescriptions;
- (id)_powerLogInfoDictionary;
- (void)_reactivateHeldTasks;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (void)_requestCancelTasksWithReason:(int)arg1;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_schedulePerformTask:(id)arg1;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_scheduleStartModal:(id)arg1;
- (void)_startModal:(id)arg1;
- (bool)_taskForcesNetworking:(id)arg1;
- (bool)_taskInQueueForcesNetworkConnection:(id)arg1;
- (bool)_useFakeDescriptions;
- (void)_useOpportunisticSocketsAgain;
- (id)_version;
- (id)account;
- (id)accountID;
- (id)accountPersistentUUID;
- (id)activeExclusiveTask;
- (id)activeModalTask;
- (id)activeQueuedTask;
- (id)allTasks;
- (void)cancelAllTasks;
- (void)cancelTask:(id)arg1;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (void)cancelTasksDueToOnPowerMode;
- (void)dealloc;
- (id)deviceType;
- (bool)didLogSyncStart;
- (id)heldIndependentTasks;
- (id)identityPersist;
- (id)independentTasks;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (bool)isShutdown;
- (id)mQueuedTasks;
- (id)managerIdleTimer;
- (unsigned long long)maxConcurrentIndependentTasks;
- (id)modalHeldActiveQueuedTask;
- (id)modalHeldIndependentTasks;
- (id)password;
- (long long)port;
- (id)powerAssertionGroupID;
- (id)powerLogIdleTimer;
- (id)queuedExclusiveTasks;
- (id)queuedIndependentTasks;
- (id)queuedModalTasks;
- (id)queuedTasks;
- (id)server;
- (void)setAccount:(id)arg1;
- (void)setActiveExclusiveTask:(id)arg1;
- (void)setActiveModalTask:(id)arg1;
- (void)setActiveQueuedTask:(id)arg1;
- (void)setDidLogSyncStart:(bool)arg1;
- (void)setHeldIndependentTasks:(id)arg1;
- (void)setIndependentTasks:(id)arg1;
- (void)setMQueuedTasks:(id)arg1;
- (void)setManagerIdleTimer:(id)arg1;
- (void)setMaxConcurrentIndependentTasks:(unsigned long long)arg1;
- (void)setModalHeldActiveQueuedTask:(id)arg1;
- (void)setModalHeldIndependentTasks:(id)arg1;
- (void)setPowerAssertionGroupID:(id)arg1;
- (void)setPowerLogIdleTimer:(id)arg1;
- (void)setQueuedExclusiveTasks:(id)arg1;
- (void)setQueuedIndependentTasks:(id)arg1;
- (void)setQueuedModalTasks:(id)arg1;
- (void)setState:(int)arg1;
- (void)setUserInitiatedSyncTimer:(id)arg1;
- (void)setXpcTransactionTimer:(id)arg1;
- (bool)shouldCancelTaskDueToOnPowerFetchMode;
- (void)shutdown;
- (int)state;
- (id)stateString;
- (void)submitExclusiveTask:(id)arg1;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(bool)arg2;
- (void)submitIndependentTask:(id)arg1;
- (void)submitQueuedTask:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (bool)taskIsModal:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (bool)useSSL;
- (id)user;
- (id)userAgent;
- (id)userInitiatedSyncTimer;
- (id)xpcTransactionTimer;

@end

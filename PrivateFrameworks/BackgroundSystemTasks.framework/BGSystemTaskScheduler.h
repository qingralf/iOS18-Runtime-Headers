/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackgroundSystemTasks.framework/BackgroundSystemTasks
 */

@interface BGSystemTaskScheduler : NSObject <BGSystemTaskDelegate> {
    NSObject<OS_dispatch_queue> * _internalQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingTaskRegistrationsMap;
    NSMutableDictionary * _preRunningTasksMap;
    NSMutableDictionary * _registrations;
    NSMutableDictionary * _runningTasksMap;
    _DASScheduler * _scheduler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSMutableDictionary *pendingTaskRegistrationsMap;
@property (nonatomic, retain) NSMutableDictionary *preRunningTasksMap;
@property (nonatomic, retain) NSMutableDictionary *registrations;
@property (nonatomic, retain) NSMutableDictionary *runningTasksMap;
@property (nonatomic, retain) _DASScheduler *scheduler;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BackgroundSystemTasks.framework/BackgroundSystemTasks

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (bool)canTaskRegistration:(id)arg1 produceResultOfIdentifier:(id)arg2;
- (bool)cancelTaskRequestWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)deregisterTaskWithIdentifier:(id)arg1;
- (void)expireTaskWithRegistration:(id)arg1 withReason:(unsigned long long)arg2;
- (void)getTaskStatusForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleDeniedTaskLaunch:(id)arg1;
- (id)init;
- (void)installEventStreamHandler;
- (void)installResubmissionHandler;
- (id)internalQueue;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)pendingTaskRegistrationsMap;
- (id)preRunningTasksMap;
- (void)processEvent:(id)arg1 forRegistration:(id)arg2;
- (bool)registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(id /* block */)arg3;
- (id)registrations;
- (bool)resumeScheduling:(id)arg1 error:(id*)arg2;
- (void)runTaskWithRegistration:(id)arg1;
- (id)runningTasksMap;
- (id)scheduler;
- (void)setInternalQueue:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPendingTaskRegistrationsMap:(id)arg1;
- (void)setPreRunningTasksMap:(id)arg1;
- (void)setRegistrations:(id)arg1;
- (void)setRunningTasksMap:(id)arg1;
- (void)setScheduler:(id)arg1;
- (bool)submitTaskRequest:(id)arg1 error:(id*)arg2;
- (bool)systemTask:(id)arg1 canConsumeResultOfIdentifier:(id)arg2;
- (bool)systemTask:(id)arg1 consumedResults:(id)arg2 error:(id*)arg3;
- (bool)systemTask:(id)arg1 producedResults:(id)arg2 error:(id*)arg3;
- (bool)systemTask:(id)arg1 resetResultsForIdentifier:(id)arg2 error:(id*)arg3;
- (id)taskRequestForIdentifier:(id)arg1;
- (bool)taskStartedWithParameters:(id)arg1 error:(id*)arg2;
- (bool)taskStoppedWithParameters:(id)arg1 error:(id*)arg2;
- (bool)updateTaskRequest:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/MessagesCloudSync.framework/MessagesCloudSync

- (bool)reportStartWithTaskName:(id)arg1 processesInvolved:(id)arg2 error:(id*)arg3;
- (bool)reportStoppedWithTaskName:(id)arg1 processesInvolved:(id)arg2 error:(id*)arg3;

@end
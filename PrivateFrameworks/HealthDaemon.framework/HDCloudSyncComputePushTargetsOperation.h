/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncComputePushTargetsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSyncIdentity * _currentSyncIdentity;
    bool  _hasUpgradedToSyncIdentity;
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)finishedOperationTags;
+ (bool)shouldLogAtOperationEnd;
+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end
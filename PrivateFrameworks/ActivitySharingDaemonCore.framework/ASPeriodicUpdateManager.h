/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharingDaemonCore.framework/ActivitySharingDaemonCore
 */

@interface ASPeriodicUpdateManager : NSObject <ASActivitySharingManagerReadyObserver, ASCloudKitManagerChangesObserver> {
    ASActivityDataManager * _activityDataManager;
    ASCloudKitManager * _cloudKitManager;
    ASFriendListManager * _friendListManager;
    bool  _hasQueuedPush;
    bool  _hasRegisteredForUpdates;
    bool  _isPushInProgress;
    bool  _isSecureCloudPushInProgress;
    bool  _isWatch;
    NSObject<OS_dispatch_queue> * _providerQueue;
    NSHashTable * _providers;
    ASRelationshipManager * _relationshipManager;
    <ASPeriodicUpdateManagerSecureCloudDelegate> * _secureCloudDelegate;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRegisteredForUpdates;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadyToProcessChanges;
@property (nonatomic) <ASPeriodicUpdateManagerSecureCloudDelegate> *secureCloudDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_handleFetchError:(id)arg1 activity:(id)arg2;
- (void)_queue_performUpdateForActivity:(id)arg1 cloudKitGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)activitySharingManagerReady:(id)arg1;
- (void)addProvider:(id)arg1;
- (void)beginPeriodicUpdates;
- (void)cloudKitManager:(id)arg1 didUpdateAccountStatus:(long long)arg2;
- (void)endPeriodicUpdates;
- (bool)hasRegisteredForUpdates;
- (id)init;
- (id)initWithIsWatch:(bool)arg1;
- (bool)isReadyToProcessChanges;
- (void)removeProvider:(id)arg1;
- (void)requestImmediateUpdateWithCloudKitGroup:(id)arg1 completion:(id /* block */)arg2;
- (id)secureCloudDelegate;
- (void)setSecureCloudDelegate:(id)arg1;

@end

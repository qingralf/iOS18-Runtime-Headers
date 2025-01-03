/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDAppleAccountManager : HMFObject <HMDAPSConnectionDelegate, HMDAccountChangeObserverDelegate, HMDAccountManager, HMDIDSServiceDelegate, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate> {
    HMDAccount * _account;
    HMFExponentialBackoffTimer * _accountChangeBackoffTimer;
    HMDAccountChangeObserver * _accountChangeObserver;
    HMDAppleAccountContext * _accountContext;
    <HMDACAccountStore> * _accountStore;
    HMDIDSActivityMonitorBroadcaster * _activityBroadcaster;
    HMDBackingStore * _backingStore;
    HMDCloudCache * _cloudCache;
    HMFTimer * _devicesChangeBackoffTimer;
    bool  _didProcessAccountSignOut;
    HMDAccount * _lastSignedOutAccount;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    bool  _loggedIn;
    NSObject<OS_os_log> * _logger;
    bool  _monitoring;
    NSNotificationCenter * _notificationCenter;
    NSData * _pendingPushToken;
    <HMDAPSConnection> * _pushConnection;
    NSObject<OS_dispatch_queue> * _queue;
    int  _rapportIdentitiesChangedNotificationToken;
    bool  _rapportIdentitiesChangedNotificationTokenValid;
    <HMDIDSService> * _service;
    HMDWatchManager * _watchManager;
}

@property (retain) HMDAccount *account;
@property (nonatomic, readonly) HMFExponentialBackoffTimer *accountChangeBackoffTimer;
@property (nonatomic, readonly) HMDAccountChangeObserver *accountChangeObserver;
@property (readonly) HMDAppleAccountContext *accountContext;
@property (readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster;
@property (readonly) HMDBackingStore *backingStore;
@property (nonatomic, retain) HMDCloudCache *cloudCache;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (nonatomic, readonly) HMFTimer *devicesChangeBackoffTimer;
@property (nonatomic, readonly) bool didProcessAccountSignOut;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDAccount *lastSignedOutAccount;
@property (getter=isLoggedInToPrimaryAccount, readonly) bool loggedIn;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isMonitoring, nonatomic) bool monitoring;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, retain) NSData *pendingPushToken;
@property (nonatomic, readonly) <HMDAPSConnection> *pushConnection;
@property (nonatomic) int rapportIdentitiesChangedNotificationToken;
@property (getter=isRapportIdentitiesChangedNotificationTokenValid, nonatomic) bool rapportIdentitiesChangedNotificationTokenValid;
@property (nonatomic, readonly) <HMDIDSService> *service;
@property (nonatomic, readonly) HMDAppleAccountSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDWatchManager *watchManager;

+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (long long)IDSAccountRegistrationError;
- (long long)IDSAccountRegistrationStatus;
- (void)__deviceAddedToCurrentAccount:(id)arg1;
- (void)__deviceRemovedFromCurrentAccount:(id)arg1;
- (void)__handleMigrationUpdated:(id)arg1;
- (void)__handleModifiedAccount:(id)arg1;
- (void)__handleRemovedAccountMessage:(id)arg1;
- (void)__handleRemovedAccountWithCompletion:(id /* block */)arg1;
- (void)__handleUpdatedName:(id)arg1;
- (void)__localDataReset:(id)arg1;
- (void)__updateMergeIDOnAccount;
- (void)_deregisterForRapportNotifications;
- (void)_registerForRapportNotifications;
- (void)_updatePushToken:(id)arg1;
- (id)account;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(bool)arg2;
- (id)accountChangeBackoffTimer;
- (id)accountChangeObserver;
- (void)accountChangeObserver:(id)arg1 observedDeletedAccount:(id)arg2;
- (id)accountContext;
- (id)accountStore;
- (id)activityBroadcaster;
- (id)backingStore;
- (id)cloudCache;
- (void)configureWithBackingStore:(id)arg1;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)device;
- (id)devicesChangeBackoffTimer;
- (bool)didProcessAccountSignOut;
- (id)init;
- (id)initWithIDSService:(id)arg1 activityBroadcaster:(id)arg2;
- (id)initWithIDSService:(id)arg1 activityBroadcaster:(id)arg2 dataSource:(id)arg3;
- (bool)isCurrentDeviceDataOwnerForDevice:(id)arg1;
- (bool)isDeviceLocallyPairedWatch:(id)arg1;
- (bool)isLoggedInToPrimaryAccount;
- (bool)isModelCurrentAccount:(id)arg1;
- (bool)isMonitoring;
- (bool)isRapportIdentitiesChangedNotificationTokenValid;
- (bool)isServiceActive;
- (id)lastSignedOutAccount;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationCenter;
- (id)pendingPushToken;
- (id)primaryHandleForAccount:(id)arg1;
- (void)processAccountModel:(id)arg1 message:(id)arg2;
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;
- (id)pushConnection;
- (int)rapportIdentitiesChangedNotificationToken;
- (id)service;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)setCloudCache:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setPendingPushToken:(id)arg1;
- (void)setRapportIdentitiesChangedNotificationToken:(int)arg1;
- (void)setRapportIdentitiesChangedNotificationTokenValid:(bool)arg1;
- (void)setWatchManager:(id)arg1;
- (id)settings;
- (bool)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
- (bool)shouldCacheAccount:(id)arg1;
- (bool)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;
- (bool)shouldSyncAccount:(id)arg1;
- (bool)shouldSyncDevice:(id)arg1;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)arg1;
- (void)updateSenderCorrelationIdentifier:(id)arg1;
- (id)watchManager;

@end

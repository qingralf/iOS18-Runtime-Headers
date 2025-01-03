/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDHomeWalletKeyAccessoryManager : HMFObject <HMFLogging, HMFMessageReceiver> {
    bool  _canConfigureAccessories;
    bool  _currentDevicePrimaryResident;
    <HMDHomeWalletDataSource> * _dataSource;
    <HMDHomeWalletKeyAccessoryManagerDelegate> * _delegate;
    HMDHome * _home;
    NSMutableSet * _logEvents;
    HMFMessageDispatcher * _messageDispatcher;
    NSMutableDictionary * _nfcReaderKeyConfigureStateByAccessoryUUID;
    NSNotificationCenter * _notificationCenter;
    NSMutableDictionary * _pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID;
    HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation * _pendingPrimaryResidentDeviceCredentialKeyOperation;
    NSUUID * _uuid;
    NSNumber * _walletKeyColor;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property bool canConfigureAccessories;
@property (getter=isCurrentDevicePrimaryResident) bool currentDevicePrimaryResident;
@property (readonly) <HMDHomeWalletDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <HMDHomeWalletKeyAccessoryManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly) bool isPrimaryResidentOrSoleOwnerController;
@property (retain) NSMutableSet *logEvents;
@property (readonly, copy) NSArray *matterAccessoriesSupportingWalletKey;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) NSMutableDictionary *nfcReaderKeyConfigureStateByAccessoryUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSMutableDictionary *pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID;
@property (copy) HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation *pendingPrimaryResidentDeviceCredentialKeyOperation;
@property (readonly) HMDDevice *primaryResidentDevice;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSNumber *walletKeyColor;
@property (readonly, copy) NSString *walletKeyColorPreferenceKey;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)createMatterIssuerKeyDataForUser:(id)arg1 withUserIndex:(id)arg2 flow:(id)arg3;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_addIssuerKeyForUser:(id)arg1 toMatterAccessory:(id)arg2 flow:(id)arg3;
- (void)_handleAddIssuerKeysToAccessoriesMessage:(id)arg1;
- (id)addIssuerKeyForUser:(id)arg1 toMatterAccessory:(id)arg2 flow:(id)arg3;
- (id)addIssuerKeysToMatterAccessories:(id)arg1 flow:(id)arg2;
- (void)addIssuerKeysToMatterAccessoriesWithFlow:(id)arg1;
- (id)addIssuerKeysToMatterAccessory:(id)arg1 flow:(id)arg2;
- (id)addIssuerKeysToMatterTTUAccessoriesForUser:(id)arg1 flow:(id)arg2;
- (bool)canConfigureAccessories;
- (void)configureAccessories:(id)arg1 withDeviceCredentialKey:(id)arg2 ofType:(long long)arg3 flow:(id)arg4 completion:(id /* block */)arg5;
- (void)configureAccessories:(id)arg1 withDeviceCredentialKey:(id)arg2 ofType:(long long)arg3 forDeviceWithUUID:(id)arg4 user:(id)arg5 flow:(id)arg6 completion:(id /* block */)arg7;
- (void)configureAccessories_HH1:(id)arg1 withDeviceCredentialKey:(id)arg2 forDeviceWithUUID:(id)arg3 user:(id)arg4 flow:(id)arg5 completion:(id /* block */)arg6;
- (void)configureAccessories_HH2:(id)arg1 withDeviceCredentialKey:(id)arg2 ofType:(long long)arg3 forDeviceWithUUID:(id)arg4 user:(id)arg5 flow:(id)arg6 completion:(id /* block */)arg7;
- (void)configureAccessory:(id)arg1 withDeviceCredentialKey:(id)arg2 ofType:(long long)arg3 flow:(id)arg4 completion:(id /* block */)arg5;
- (void)configureAccessoryWithNfcReaderKey:(id)arg1 accessory:(id)arg2 flow:(id)arg3 completion:(id /* block */)arg4;
- (void)configureAllAccessoriesWithDeviceCredentialKey:(id)arg1 ofType:(long long)arg2 flow:(id)arg3 completion:(id /* block */)arg4;
- (id)configureMatterAccessory:(id)arg1 withDeviceCredentialKey:(id)arg2 ofType:(long long)arg3 forUser:(id)arg4 flow:(id)arg5;
- (void)configureNFCReaderKeyForAccessory:(id)arg1 flow:(id)arg2;
- (void)configureNFCReaderKeyForAllAccessoriesWithReason:(id)arg1;
- (id)configureNFCReaderKeyOnMatterAccessory:(id)arg1 flow:(id)arg2;
- (void)configureNotificationsWithReason:(id)arg1;
- (void)configureWithHome:(id)arg1;
- (void)createAccessoryDeviceCredentialKeyPendingOperationWithAccessories:(id)arg1 deviceCredentialKey:(id)arg2 user:(id)arg3 deviceUUID:(id)arg4;
- (void)createAccessoryDeviceCredentialKeyPendingOperationWithAccessoriesUUIDs:(id)arg1 deviceCredentialKey:(id)arg2 user:(id)arg3 deviceUUID:(id)arg4;
- (id)dataSource;
- (id)delegate;
- (void)fetchIsAccessoryConfiguredWithReaderKey:(id)arg1 accessory:(id)arg2 flow:(id)arg3 completion:(id /* block */)arg4;
- (id)fetchMissingWalletKeysForAccessory:(id)arg1 users:(id)arg2 flow:(id)arg3;
- (id)fetchMissingWalletKeysForAccessoryUUID:(id)arg1 forUser:(id)arg2 flow:(id)arg3;
- (id)fetchMissingWalletKeysForUserUUID:(id)arg1 flow:(id)arg2;
- (void)fetchOrConfigureNFCReaderKeyForAccessory:(id)arg1 flow:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchWalletKeyColorForAccessories:(id)arg1 flow:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)fetchWalletKeyColorForAccessories_HAP:(id)arg1 home:(id)arg2 flow:(id)arg3;
- (id)fetchWalletKeyColorForAccessories_Matter:(id)arg1 home:(id)arg2 flow:(id)arg3;
- (void)fetchWalletKeyColorWithAccessory:(id)arg1 flow:(id)arg2;
- (void)fetchWalletKeyColorWithFlow:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleConfigureAccessoriesWithDeviceCredentialKeyMessage:(id)arg1;
- (void)handleFetchMissingWalletKeysMessage:(id)arg1;
- (void)handleFetchWalletKeyColorMessage:(id)arg1;
- (void)handleHMDHomeConfigureMatterAccessoryWithReaderKeyMessage:(id)arg1;
- (void)handleHomeAccessoryRemovedNotification:(id)arg1;
- (void)handleHomeAddedAccessoryNotification:(id)arg1;
- (void)handleHomeDidDisableCharacteristicNotification:(id)arg1;
- (void)handleHomeDidEnableCharacteristicNotification:(id)arg1;
- (void)handleHomeNFCReaderKeyKeychainItemAvailableNotification:(id)arg1;
- (void)handleHomeUserAddedNotification:(id)arg1;
- (void)handlePendingDeviceCredentialKeysSyncForAccessories:(id)arg1 withReason:(id)arg2;
- (void)handlePendingDeviceCredentialKeysSyncForAccessory:(id)arg1 withReason:(id)arg2;
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;
- (void)handleRestoreMissingWalletKeysMessage:(id)arg1;
- (void)handleWalletKeyRemoved;
- (void)handleWalletKeySupportDidChange:(id)arg1;
- (id)home;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3 notificationCenter:(id)arg4;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isPrimaryResidentOrSoleOwnerController;
- (id)logEvents;
- (id)logIdentifier;
- (id)matterAccessoriesSupportingWalletKey;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)missingWalletKeysForAccessoryUUID:(id)arg1 usersByUniqueID:(id)arg2 accessoryUsersByUniqueID:(id)arg3 flow:(id)arg4;
- (id)nfcReaderKeyConfigureStateByAccessoryUUID;
- (id)notificationCenter;
- (id)pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID;
- (id)pendingPrimaryResidentDeviceCredentialKeyOperation;
- (id)performHAPWriteRequestsHH2:(id)arg1 home:(id)arg2 flow:(id)arg3;
- (id)primaryResidentDevice;
- (void)registerForNotificationsWithReason:(id)arg1;
- (void)removeNfcReaderKeyWithIdentifier:(id)arg1 accessory:(id)arg2 flow:(id)arg3 completion:(id /* block */)arg4;
- (void)requestPrimaryResident:(id)arg1 toConfigureAccessories:(id)arg2 withDeviceCredentialKey:(id)arg3 ofType:(long long)arg4 flow:(id)arg5 completion:(id /* block */)arg6;
- (id)restoreMissingWalletKeys:(id)arg1 onAccessory:(id)arg2 flow:(id)arg3;
- (void)setCanConfigureAccessories:(bool)arg1;
- (void)setCurrentDevicePrimaryResident:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setLogEvents:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setPendingPrimaryResidentDeviceCredentialKeyOperation:(id)arg1;
- (void)startHomeWalletKeyAddForAccessoryUUID:(id)arg1 keyType:(unsigned long long)arg2 expectedCount:(long long)arg3;
- (void)unconfigure;
- (void)unregisterForNotificationsWithReason:(id)arg1;
- (void)updateHomeWalletKeyAddForAccessoryUUID:(id)arg1 keyType:(unsigned long long)arg2;
- (id)uuid;
- (id)walletKeyColor;
- (id)walletKeyColorPreferenceKey;
- (id)walletKeyColorWithCharacteristicValue:(id)arg1 flow:(id)arg2;
- (id)workQueue;
- (id)writeRequestsWithAccessories:(id)arg1 home:(id)arg2 deviceCredentialKey:(id)arg3 user:(id)arg4 flow:(id)arg5;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDUserDataController : NSObject <HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDSharedUserDataModelUpdateReceiver, HMDUserListeningHistoryUpdateControlModelUpdateReceiver, HMDUserSupportsAutomaticHH2MigrationModelUpdateReceiver, HMFLogging, HMFTimerDelegate> {
    NSMutableSet * _assistantAccessControlAccessoryUUIDs;
    bool  _assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
    NSUUID * _assistantAccessControlModelUUID;
    bool  _assistantAccessControlRequiresAuthenticationForSecureRequests;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDUserDataControllerDataSource> * _dataSource;
    <HMDUserDataControllerDelegate> * _delegate;
    NSUUID * _homeUUID;
    bool  _isCurrentUser;
    bool  _isModifyingState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _mediaContentProfileAccessControlAccessories;
    NSUUID * _mediaContentProfileAccessControlModelUUID;
    NSNotificationCenter * _notificationCenter;
    <HMDSettingsControllerProtocol> * _privateSettingsController;
    NSUUID * _privateSettingsRootUUID;
    HMFTimer * _privateZoneFirstLoadTimer;
    <HMDSettingsControllerProtocol> * _sharedSettingsController;
    NSUUID * _sharedSettingsRootUUID;
    HMFTimer * _sharedZoneFirstLoadTimer;
    unsigned long long  _state;
    NSUUID * _supportsAutomaticHH2MigrationModelUUID;
    bool  _supportsHH2MigrationByOwnerAuto;
    bool  _supportsHH2MigrationByOwnerManual;
    <HMDUserDataControllerTimerCreator> * _timerCreator;
    NSMutableSet * _userListeningHistoryUpdateControlModelAccessories;
    NSUUID * _userListeningHistoryUpdateControlModelUUID;
    NSUUID * _userUUID;
}

@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (retain) NSMutableSet *assistantAccessControlAccessoryUUIDs;
@property bool assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property (readonly, copy) HMBModel *assistantAccessControlModelToReset;
@property (retain) NSUUID *assistantAccessControlModelUUID;
@property bool assistantAccessControlRequiresAuthenticationForSecureRequests;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) <HMDUserDataControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly) <HMDUserDataControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasUserSeenRMVNewLanguageNotification;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *homeUUID;
@property (readonly) bool isCurrentUser;
@property (readonly) bool isInitialized;
@property (readonly) bool isRecognizeMyVoiceEnabled;
@property (retain) NSMutableSet *mediaContentProfileAccessControlAccessories;
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (retain) NSUUID *mediaContentProfileAccessControlModelUUID;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSDictionary *privateSettingValuesByKeyPath;
@property (readonly) <HMDSettingsControllerProtocol> *privateSettingsController;
@property (retain) NSUUID *privateSettingsRootUUID;
@property (nonatomic, retain) HMFTimer *privateZoneFirstLoadTimer;
@property (readonly, copy) NSDictionary *sharedSettingValuesByKeyPath;
@property (readonly) <HMDSettingsControllerProtocol> *sharedSettingsController;
@property (retain) NSUUID *sharedSettingsRootUUID;
@property (nonatomic, retain) HMFTimer *sharedZoneFirstLoadTimer;
@property unsigned long long state;
@property (readonly) Class superclass;
@property (retain) NSUUID *supportsAutomaticHH2MigrationModelUUID;
@property bool supportsHH2MigrationByOwnerAuto;
@property bool supportsHH2MigrationByOwnerManual;
@property (readonly) <HMDUserDataControllerTimerCreator> *timerCreator;
@property (retain) NSMutableSet *userListeningHistoryUpdateControlModelAccessories;
@property (readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;
@property (retain) NSUUID *userListeningHistoryUpdateControlModelUUID;
@property (readonly) NSUUID *userUUID;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_invalidatePrivateZoneFirstLoadTimer;
- (void)_invalidateSharedZoneFirstLoadTimer;
- (id)_keyPathToModelFromKeyPath:(id)arg1 models:(id)arg2;
- (id)_migrateUserListeningHistoryUpdateControlWithUserCurrentDataModel:(id)arg1 transaction:(id)arg2 settingModels:(id)arg3;
- (void)_migrateUserSupportsAutomaticHH2MigrationUserCurrentDataModel:(id)arg1 transaction:(id)arg2;
- (void)_startPrivateZoneFirstLoadTimer;
- (void)_startSharedZoneFirstLoadTimer;
- (void)_startupPrivateZone;
- (void)_startupSharedZone;
- (bool)_userListeningHistoryValueFromModels:(id)arg1;
- (id)assistantAccessControlAccessoriesToEncode;
- (id)assistantAccessControlAccessoryUUIDs;
- (bool)assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
- (void)assistantAccessControlModelRemoved:(id)arg1 completion:(id /* block */)arg2;
- (id)assistantAccessControlModelToReset;
- (id)assistantAccessControlModelUUID;
- (void)assistantAccessControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (bool)assistantAccessControlRequiresAuthenticationForSecureRequests;
- (id)clientQueue;
- (void)configure;
- (id)dataSource;
- (id)delegate;
- (void)enableUserListeningHistoryForAccessory:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)eventDidInitializePrivateZone;
- (void)eventDidInitializeSharedZone;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg1 requireAuthenticationForSecureRequests:(bool)arg2 activityNotificationsEnabledForPersonalRequests:(bool)arg3 completion:(id /* block */)arg4;
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRemovedAccessory:(id)arg1;
- (void)handleStartForZoneController:(id)arg1;
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasUserSeenRMVNewLanguageNotification;
- (id)homeUUID;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 queue:(id)arg3 userID:(id)arg4 homeID:(id)arg5 sharedSettingsController:(id)arg6 privateSettingsController:(id)arg7 isCurrentUser:(bool)arg8;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 queue:(id)arg3 userID:(id)arg4 homeID:(id)arg5 sharedSettingsController:(id)arg6 privateSettingsController:(id)arg7 timerCreator:(id)arg8 isCurrentUser:(bool)arg9;
- (void)initializePrivateZoneController:(id)arg1 userDataModel:(id)arg2;
- (void)initializeSharedZoneController:(id)arg1 userDataModel:(id)arg2;
- (bool)isCurrentUser;
- (bool)isInitialized;
- (bool)isRecognizeMyVoiceEnabled;
- (id)logIdentifier;
- (id)mediaContentProfileAccessControlAccessories;
- (id)mediaContentProfileAccessControlAccessoriesToEncode;
- (void)mediaContentProfileAccessControlModelRemoved:(id)arg1 completion:(id /* block */)arg2;
- (id)mediaContentProfileAccessControlModelUUID;
- (void)mediaContentProfileAccessControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (id)notificationCenter;
- (void)performFirstRunOperationsOnPrivateZoneController:(id)arg1;
- (void)performFirstRunOperationsOnSharedZoneController:(id)arg1;
- (id)privateSettingValuesByKeyPath;
- (id)privateSettingsController;
- (id)privateSettingsRootUUID;
- (id)privateZoneFirstLoadTimer;
- (void)setAssistantAccessControlAccessoryUUIDs:(id)arg1;
- (void)setAssistantAccessControlActivityNotificationsEnabledForPersonalRequests:(bool)arg1;
- (void)setAssistantAccessControlModelUUID:(id)arg1;
- (void)setAssistantAccessControlRequiresAuthenticationForSecureRequests:(bool)arg1;
- (void)setHasUserSeenRMVNewLanguageNotification:(bool)arg1;
- (void)setMediaContentProfileAccessControlAccessories:(id)arg1;
- (void)setMediaContentProfileAccessControlModelUUID:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setPrivateSettingsRootUUID:(id)arg1;
- (void)setPrivateZoneFirstLoadTimer:(id)arg1;
- (void)setSharedSettingsRootUUID:(id)arg1;
- (void)setSharedZoneFirstLoadTimer:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSupportsAutomaticHH2MigrationModelUUID:(id)arg1;
- (void)setSupportsHH2MigrationByOwnerAuto:(bool)arg1;
- (void)setSupportsHH2MigrationByOwnerManual:(bool)arg1;
- (void)setUserListeningHistoryUpdateControlModelAccessories:(id)arg1;
- (void)setUserListeningHistoryUpdateControlModelUUID:(id)arg1;
- (id)sharedSettingValuesByKeyPath;
- (id)sharedSettingsController;
- (id)sharedSettingsRootUUID;
- (void)sharedUserDataModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (long long)sharedUserSettingsLogEventBackingStoreControllerRunState;
- (id)sharedZoneFirstLoadTimer;
- (unsigned long long)state;
- (id)supportsAutomaticHH2MigrationModelUUID;
- (bool)supportsHH2MigrationByOwnerAuto;
- (bool)supportsHH2MigrationByOwnerManual;
- (id)timerCreator;
- (void)timerDidFire:(id)arg1;
- (id)updateListeningHistoryModelToReset;
- (void)updateSupportsHH2MigrationByOwnerManual:(bool)arg1 supportsHH2MigrationByOwnerAuto:(bool)arg2 completion:(id /* block */)arg3;
- (id)userListeningHistoryUpdateControlModelAccessories;
- (id)userListeningHistoryUpdateControlModelAccessoriesToEncode;
- (void)userListeningHistoryUpdateControlModelRemoved:(id)arg1 completion:(id /* block */)arg2;
- (id)userListeningHistoryUpdateControlModelUUID;
- (void)userListeningHistoryUpdateControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (void)userSupportsAutomaticHH2MigrationModelRemoved:(id)arg1 completion:(id /* block */)arg2;
- (void)userSupportsAutomaticHH2MigrationModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (id)userUUID;

@end

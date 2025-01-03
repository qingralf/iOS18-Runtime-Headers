/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryBulletinNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMDAppleAccountManager * _accountManager;
    bool  _currentPrimary;
    HMDNotificationConditionEvaluator * _evaluator;
    HMDHome * _home;
    NSNotificationCenter * _notificationCenter;
    HMFTimer * _synchronizeWithPrimaryDebounceTimer;
    id /* block */  _synchronizeWithPrimaryDebounceTimerFactory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSArray *accessoryRegistrations;
@property (readonly) NSArray *accessoryRegistrationsForCurrentDevice;
@property (readonly) HMDAppleAccountManager *accountManager;
@property bool currentPrimary;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) NSArray *matterRegistrations;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSArray *serviceRegistrationsForCurrentDevice;
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property (readonly) Class superclass;
@property (retain) HMFTimer *synchronizeWithPrimaryDebounceTimer;
@property (copy) id /* block */ synchronizeWithPrimaryDebounceTimerFactory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_characteristicBulletinRegistrationsForSource:(id)arg1 context:(id)arg2;
+ (id)logCategory;
+ (id)matterBulletinRegistrationsForSource:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_accessoryRegistrationFromMKFRegistrationSafe:(id)arg1;
- (id)_characteristicsRegistrationsFromBulletinRegistrations:(id)arg1;
- (id)_characteristicsWithPassingLocalRegistrationForCharacteristics:(id)arg1;
- (id)_devicesToNotifyForCharacteristic:(id)arg1;
- (void)_handleAccessoryBulletinNotificationRegistration:(id)arg1 removed:(bool)arg2;
- (void)_handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;
- (void)_handleDeviceBecameNotPrimary;
- (void)_handleDeviceBecamePrimary;
- (void)_handlePrimaryResidentUpdateNotification:(id)arg1;
- (id)_matterRegistrationsFromBulletinRegistrations:(id)arg1;
- (id)_mkfLocalCharacteristicRegistrationsWithManagedObjectContext:(id)arg1;
- (id)_mkfLocalServiceRegistrationsWithManagedObjectContext:(id)arg1;
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;
- (id)_updateReasonsByCharacteristicFromMessage:(id)arg1;
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)arg1 disabledRegistrations:(id)arg2;
- (id)accessoryBulletinNotificationRegistrationsForCharacteristic:(id)arg1;
- (id)accessoryRegistrations;
- (id)accessoryRegistrationsForCurrentDevice;
- (id)accountManager;
- (id)bulletinBoardNotificationForAccessory:(id)arg1 endpointID:(id)arg2;
- (id)bulletinBoardNotificationForService:(id)arg1;
- (id)bulletinCharacteristicsFromChangedCharacteristics:(id)arg1 message:(id)arg2;
- (id)characteristicsByDestinationForCharacteristics:(id)arg1;
- (id)conditionsFromPredicate:(id)arg1;
- (void)configureWithDeviceIsResidentCapable:(bool)arg1;
- (id)currentHomeAccessoryUUIDs;
- (bool)currentPrimary;
- (id)devicesToNotifyForMatterPath:(id)arg1;
- (void)disableBulletinForAccessory:(id)arg1 endpointID:(id)arg2 completion:(id /* block */)arg3;
- (void)disableBulletinForService:(id)arg1 completion:(id /* block */)arg2;
- (void)enableBulletinForAccessory:(id)arg1 endpointID:(id)arg2 conditions:(id)arg3 completion:(id /* block */)arg4;
- (void)enableBulletinForService:(id)arg1 conditions:(id)arg2 completion:(id /* block */)arg3;
- (id)evaluator;
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;
- (void)handleDisabledRegistrations:(id)arg1;
- (void)handleEnabledRegistrations:(id)arg1;
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (void)handleRemovedEndpoint:(id)arg1 fromAccessory:(id)arg2;
- (void)handleRemovedService:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 accountManager:(id)arg3 evaluator:(id)arg4 notificationCenter:(id)arg5;
- (id)logIdentifier;
- (id)matterBulletinNotificationRegistrationsForMatterPath:(id)arg1;
- (id)matterRegistrationFromMKFRegistrationSafe:(id)arg1;
- (id)matterRegistrations;
- (id)mkfLocalMatterRegistrationsWithManagedObjectContext:(id)arg1;
- (id)notificationCenter;
- (void)requestSynchronizeRegistrations;
- (id)serviceRegistrationsForCurrentDevice;
- (void)setCurrentPrimary:(bool)arg1;
- (void)setSynchronizeWithPrimaryDebounceTimer:(id)arg1;
- (void)setSynchronizeWithPrimaryDebounceTimerFactory:(id /* block */)arg1;
- (id)source;
- (id)synchronizeWithPrimaryDebounceTimer;
- (id /* block */)synchronizeWithPrimaryDebounceTimerFactory;
- (void)timerDidFire:(id)arg1;
- (void)updateEndpointRegistrationsForAccessory:(id)arg1 endpoints:(id)arg2;
- (void)updateRegistrationsWithEnabledCharacteristics:(id)arg1 disabledCharacteristics:(id)arg2 conditions:(id)arg3 completion:(id /* block */)arg4;
- (void)updateRegistrationsWithEnabledMatterPaths:(id)arg1 disabledMatterPaths:(id)arg2 conditions:(id)arg3 completion:(id /* block */)arg4;
- (void)updateServiceGroup:(id)arg1 completion:(id /* block */)arg2;
- (id)workQueue;

@end

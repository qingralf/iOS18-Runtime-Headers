/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeviceStoreServer : HDStandardTaskServer <HKDeviceStoreServer>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_deleteDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchAllDevicesWithCompletion:(id /* block */)arg1;
- (void)remote_fetchDevicesMatchingValues:(id)arg1 forProperty:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_fetchGymkitAndBluetoothDevicesMatchingValues:(id)arg1 forProperty:(id)arg2 completion:(id /* block */)arg3;

@end
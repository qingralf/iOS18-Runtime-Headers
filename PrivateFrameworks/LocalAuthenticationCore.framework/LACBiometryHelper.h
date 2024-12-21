/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACBiometryHelper : NSObject {
    LACCacheSync * _biolockoutStateCache;
    long long  _biometryType;
    NSMutableDictionary * _databaseHashesByUserId;
    <LACBiometryDelegate> * _delegate;
    BKDevice * _device;
    long long  _deviceType;
    NSError * _fault;
    NSDictionary * _identities;
    NSHashTable * _observers;
    NSError * _permanentError;
}

@property (nonatomic, readonly) NSDictionary *adminIdentities;
@property (nonatomic, readonly) long long biometryType;
@property (nonatomic) <LACBiometryDelegate> *delegate;
@property (nonatomic, readonly) BKDevice *device;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSError *fault;
@property (nonatomic, readonly) NSDictionary *identities;
@property (nonatomic, readonly) NSError *permanentError;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)faceIdInstance;
+ (id)sharedInstance;
+ (id)touchIdInstance;

- (void).cxx_destruct;
- (id)_biolockoutStateForUser:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (void)_clearHashes;
- (id)_dumpEnvironmentForUser:(id)arg1;
- (id)_errorDisconnected:(bool)arg1 notEnrolled:(bool)arg2;
- (void)_handleAccessoriesChangedNotification;
- (void)_handleEnrollmentChangedNotification;
- (void)_handleLockoutStateChangedNotification;
- (id)_identitiesForUser:(id)arg1 adminOnly:(bool)arg2;
- (bool)_isEnrolled:(id)arg1 adminOnly:(bool)arg2 hardwareMustBeAvailable:(bool)arg3 error:(id*)arg4;
- (id)_lockoutErrorForExtendedState:(long long)arg1 userId:(id)arg2;
- (id)_protectedConfigurationForUser:(id)arg1;
- (void)_refreshIdentitiesDueToAccessoryChange:(bool)arg1;
- (void)_setup;
- (void)_setupDeviceWithDescriptor:(id)arg1;
- (void)_setupWithFault:(id)arg1;
- (void)_setupWithPermanentError:(id)arg1;
- (bool)_shouldCacheIdentities;
- (bool)_shouldRetryAvailableDevices;
- (unsigned int)_uidFromUserId:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)adminIdentities;
- (id)biometryDatabaseHashForUser:(id)arg1 error:(id*)arg2;
- (id)biometryLostErrorForUser:(id)arg1 request:(id)arg2;
- (long long)biometryType;
- (id)catacombUUID:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (bool)deviceHasBiometryWithError:(id*)arg1;
- (long long)deviceType;
- (id)dumpStatus;
- (id)fault;
- (id)identities;
- (id)initWithBiometryType:(long long)arg1;
- (bool)isAnyUserEnrolledWithAdminRole:(bool)arg1 error:(id*)arg2;
- (bool)isAnyUserEnrolledWithError:(id*)arg1;
- (bool)isBiometryOnForApplePay:(id)arg1;
- (bool)isBiometryOnForUnlock:(id)arg1;
- (bool)isEnrolled:(id)arg1 error:(id*)arg2;
- (bool)isEnrolledWithoutHardware:(id)arg1 error:(id*)arg2;
- (bool)isIdentificationEnabled:(id)arg1;
- (bool)isLockedOutForUser:(id)arg1 adminOnly:(bool)arg2 request:(id)arg3 error:(id*)arg4;
- (bool)isLockedOutForUser:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (bool)isNotLockedOutForAnyUserWithAdminRole:(bool)arg1 request:(id)arg2 error:(id*)arg3;
- (bool)isPeriocularMatchingEnabledForUser:(id)arg1;
- (id)lockoutErrorForState:(long long)arg1 userId:(id)arg2;
- (id)permanentError;
- (void)removeObserver:(id)arg1;
- (void)resetBiometry;
- (void)setDelegate:(id)arg1;
- (bool)userPresent:(bool*)arg1 error:(id*)arg2;
- (id)workQueue;

@end
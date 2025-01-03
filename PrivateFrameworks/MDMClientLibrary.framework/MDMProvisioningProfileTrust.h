/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MDMClientLibrary.framework/MDMClientLibrary
 */

@interface MDMProvisioningProfileTrust : NSObject {
    NSObject<OS_dispatch_queue> * _misVerificationQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *misVerificationQueue;

+ (id)_appSignerIdentitiesFromBundleIDs:(id)arg1;
+ (id)_appSignerIdentityForBundleID:(id)arg1;
+ (id)_developer:(id)arg1 withoutPrefix:(id)arg2;
+ (bool)_enumerateProvisioningProfileUUIDsWithBlock:(id /* block */)arg1;
+ (bool)_enumerateProvisioningProfilesWithBlock:(id /* block */)arg1;
+ (bool)_isFreeSignedAppDeveloper:(void*)arg1;
+ (id)_labelForAMFITrust:(unsigned int)arg1;
+ (void)_setAMFITrust:(unsigned int)arg1 uuid:(id)arg2 signer:(id)arg3;
+ (id)_signerIdentitiesFromProvisioningProfile:(void*)arg1;
+ (void)_untrustProvisioningProfileUUID:(id)arg1;
+ (id)allTrustedSignerIdentities;
+ (bool)anyUPPExistsForManagedAppSigners;
+ (id)developerFromIdentity:(id)arg1 hasFreePP:(bool)arg2 hasUPP:(bool)arg3;
+ (void)didEnrollInMDMWithPasscode:(id)arg1 duringMigration:(bool)arg2;
+ (void)didSuperviseThroughADE;
+ (void)didSuperviseThroughConfigurator;
+ (void)didUnenrollFromMDM;
+ (bool)enumerateProvisioningProfilesWithBlock:(id /* block */)arg1;
+ (bool)isTrustedProvisioningProfileUUID:(id)arg1;
+ (id)managedAppSigners;
+ (id)provisioningProfileUUIDsForSignerIdentity:(id)arg1;
+ (id)signerIdentitiesFromProvisioningProfileUUID:(id)arg1;

- (void).cxx_destruct;
- (id)_descriptionForMISState:(long long)arg1;
- (void)_presentTrustAlertForDeveloper:(id)arg1 restart:(bool)arg2 completion:(id /* block */)arg3;
- (void)_uiScheduleTrustForProvisioningProfileUUID:(id)arg1 developer:(id)arg2 completion:(id /* block */)arg3;
- (void)_uiSetTrustForProvisioningProfiles:(id)arg1 developer:(id)arg2 completion:(id /* block */)arg3;
- (void)_verifyProvisioningProfileUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithValidationQueue:(id)arg1;
- (id)misVerificationQueue;
- (void)setMisVerificationQueue:(id)arg1;
- (void)uiTrustAndVerifyProvisioningProfiles:(id)arg1 developer:(id)arg2 completion:(id /* block */)arg3;
- (void)uiVerifyProvisioningProfileUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateTrustedCodeSigningIdentities:(id)arg1 validateBundleIDs:(id)arg2 validateManagedApps:(bool)arg3;

@end

/* Generated by RuntimeBrowser.
 */

@protocol SDDaemonXPCServer

@required

- (void)canDeviceEnrollInBetaUpdates:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)canFileFeedbackOnDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)checkIn;
- (void)configureWithOfferProgramTokens:(void *)arg1 requireProgramToken:(void *)arg2 enrollmentPolicy:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSSet *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)deleteSeedingAppleAccountForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)enrollDevice:(void *)arg1 inProgram:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SDDevice *, SDBetaProgram *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)enrollInProgramWithToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)enrolledBetaProgramForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SDBetaProgram *, NSError *, void*
- (void)getCurrentDevice:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SDDevice *, NSError *, void*
- (void)getCurrentPrimaryAppleIDForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)getCurrentSeedingAppleIDForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getDevicesForPlatforms:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)invalidateDaemonCacheWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)isDeviceEnrolledInBetaProgram:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isDeviceUsingSeedingAppleID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)loadMDMConfigurationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, SDMDMConfiguration *, void*
- (void)queryProgramsForSystemAccountsWithPlatforms:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, long long, void*
- (void)setAppleAccountIdentifierFromAlternateDSID:(void *)arg1 forDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unenrollDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
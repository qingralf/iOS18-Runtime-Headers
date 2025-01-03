/* Generated by RuntimeBrowser.
 */

@protocol HDCloudSyncProfileManager <NSObject>

@required

- (HDProfile *)createProfileForIdentifier:(HKProfileIdentifier *)arg1 firstName:(NSString *)arg2 lastName:(NSString *)arg3 error:(id*)arg4;
- (bool)deleteAllProfilesOfType:(long long)arg1 error:(id*)arg2;
- (bool)deleteProfile:(HKProfileIdentifier *)arg1 error:(id*)arg2;
- (bool)profileExistsForIdentifier:(HKProfileIdentifier *)arg1 error:(id*)arg2;
- (HDProfile *)profileForIdentifier:(HKProfileIdentifier *)arg1;

@end

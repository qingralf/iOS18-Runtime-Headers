/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCUIBridgeDataProvider : NSObject <DMCProfileUIDataProvider>

- (id)installedMDMProfileIdentifier;
- (id)installedProfileWithIdentifier:(id)arg1;
- (bool)isPasscodeSet;
- (bool)isProvisionallyEnrolled;
- (id)managedAppsUninstalledOnMDMRemoval;
- (id)payloadsSummaryForProfile:(id)arg1 showManagedPayloads:(bool)arg2;
- (id)rmAccount;
- (id)rmSpecifierProviderForProfileIdentifier:(id)arg1 scope:(long long)arg2;
- (void)unenrollWithCompletionBlock:(id /* block */)arg1;
- (void)updateProfileWithIdentifier:(id)arg1 interactionDelegate:(id)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STPrivateServiceClient : NSObject {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)applyDefaultUserPoliciesWithError:(id*)arg1;
- (void)applyIntroductionModel:(id)arg1 forDSID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateRestrictionsPasscode:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)clearRestrictionsPasscodeWithError:(id*)arg1;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)arg1;
- (id)communicationPoliciesWithError:(id*)arg1;
- (id)connection;
- (bool)contactsEditable;
- (void)dealloc;
- (void)deleteAllWebHistoryForApplication:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteAllWebHistoryForApplication:(id)arg1 profileIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryDuringInterval:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryDuringInterval:(id)arg1 application:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteWebHistoryForDomain:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryForDomain:(id)arg1 application:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteWebHistoryForURL:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryForURL:(id)arg1 application:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteWebHistoryForURLs:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryForURLs:(id)arg1 application:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)enableRemoteManagementForDSID:(id)arg1 error:(id*)arg2;
- (void)fetchContactManagementStateForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLastModificationDateForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forceFamilyFetchWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)isAllowFindMyFriendsModificationSetForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isContentPrivacyEnabledForDSID:(id)arg1 error:(id*)arg2;
- (void)isExplicitContentRestricted:(id /* block */)arg1;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(id /* block */)arg1;
- (bool)isRestrictionsPasscodeSetWithError:(id*)arg1;
- (id)isScreenTimeEnabledForLocalUserWithError:(id*)arg1;
- (bool)isScreenTimeEnabledForRemoteUserWithDSID:(id)arg1 error:(id*)arg2;
- (void)isScreenTimeSyncEnabledWithCompletionHandler:(id /* block */)arg1;
- (bool)isScreenTimeSyncEnabledWithError:(id*)arg1;
- (void)lastCommunicationLimitsModificationDateForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)needsToSetRestrictionsPasscodeWithError:(id*)arg1;
- (bool)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id*)arg3;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id*)arg1;
- (void)requestToManageContactsForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setManageContactsEnabled:(bool)arg1 forDSID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setRestrictionsPasscode:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setScreenTimeEnabledForLocalUser:(bool)arg1 error:(id*)arg2;
- (void)setScreenTimeEnabledForRemoteUserWithDSID:(id)arg1 enabled:(bool)arg2 error:(id*)arg3;
- (void)setScreenTimeSyncEnabled:(bool)arg1 error:(id*)arg2;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 error:(id*)arg2;
- (id)shouldAllowOneMoreMinuteForWebDomain:(id)arg1 error:(id*)arg2;
- (void)shouldRequestMoreTimeWithCompletionHandler:(id /* block */)arg1;
- (bool)shouldRequestMoreTimeWithError:(id*)arg1;
- (void)updateAllowFindMyFriendsModification:(bool)arg1 forDSID:(id)arg2 completionHandler:(id /* block */)arg3;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPLocalServerProtocolStub : NSObject <SPLocalServerProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activeComplicationsWithCompletion:(id /* block */)arg1;
- (void)cancelPendingInstallations;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledApplicationsWithCompletion:(id /* block */)arg1;
- (void)fetchInstalledComplicationsWithCompletion:(id /* block */)arg1;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchProvisioningProfilesWithCompletion:(id /* block */)arg1;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getAlwaysInstallWithCompletion:(id /* block */)arg1;
- (void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)hideUserNotification;
- (void)installAllApplicationsForProcessWithIdentifier:(id)arg1;
- (void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 installerIsTestFlight:(bool)arg3 completion:(id /* block */)arg4;
- (void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 withProvisioningProfiles:(id)arg3 profileNames:(id)arg4 completion:(id /* block */)arg5;
- (void)installProvisioningProfileWithName:(id)arg1 profileData:(id)arg2 completion:(id /* block */)arg3;
- (void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)removeApplicationWithIdentifier:(id)arg1 installer:(id)arg2 completion:(id /* block */)arg3;
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)setAlwaysInstall:(id)arg1;
- (void)setAlwaysInstall:(id)arg1 forNRDeviceWithPairingID:(id)arg2;
- (void)setLogLevel:(id)arg1;
- (void)showUserNotification:(long long)arg1 applicationName:(id)arg2;
- (void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(id /* block */)arg3;
- (void)wakeExtensionForWatchApp:(id)arg1;
- (void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end

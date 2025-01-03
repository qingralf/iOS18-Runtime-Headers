/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMApplicationDelegate : UIResponder <CAMSubsystemsProvider, UIApplicationDelegate, UNUserNotificationCenterDelegate> {
    CAMSubsystems * _subsystems;
    UIWindow * _window;
}

@property (nonatomic, readonly) CAMBurstController *burstController;
@property (nonatomic, readonly) CAMCameraRollController *cameraRollController;
@property (nonatomic, readonly) CUCaptureController *captureController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAMIrisVideoController *irisVideoController;
@property (nonatomic, readonly) CAMKeepAliveController *keepAliveController;
@property (nonatomic, readonly) CAMLibrarySelectionController *librarySelectionController;
@property (nonatomic, readonly) CAMLocationController *locationController;
@property (nonatomic, readonly) CAMMotionController *motionController;
@property (nonatomic, readonly) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager;
@property (nonatomic, readonly) CAMPersistenceController *persistenceController;
@property (nonatomic, readonly) CAMPowerController *powerController;
@property (nonatomic, readonly) CAMProtectionController *protectionController;
@property (nonatomic, readonly) CAMRemoteShutterController *remoteShutterController;
@property (nonatomic, retain) CAMSubsystems *subsystems;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMTimelapseController *timelapseController;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_requestAuthorizationForNotificationCenter:(id)arg1;
- (id)_userInfoForMode:(long long)arg1 devicePosition:(long long)arg2;
- (bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(id /* block */)arg3;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (id)burstController;
- (id)cameraRollController;
- (id)captureController;
- (id)irisVideoController;
- (id)keepAliveController;
- (id)librarySelectionController;
- (id)locationController;
- (id)motionController;
- (id)nebulaDaemonProxyManager;
- (id)persistenceController;
- (id)powerController;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (id)protectionController;
- (id)remoteShutterController;
- (void)setSubsystems:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)subsystems;
- (id)timelapseController;
- (void)updateShortcutItemsForApplication:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)viewfinderViewController;
- (id)window;

@end

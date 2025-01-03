/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUApplication : UIApplication <UIApplicationDelegate> {
    UIColor * _interactionTintColor;
    bool  _terminateOnNextSuspend;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *interactionTintColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window; /* unknown property attribute: ? */

- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_exitForStoreNotAvailable;
- (void)_exitIfStoreNotAvailable;
- (void)_runScriptTestWithOptions:(id)arg1;
- (void)_setupUI;
- (void)_storeEnabledChangeNotification:(id)arg1;
- (void)_teardownUI;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (bool)applicationSuspendWithSettings:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (double)defaultImageSnapshotExpiration;
- (id)init;
- (id)interactionTintColor;
- (bool)runTest:(id)arg1 options:(id)arg2;
- (void)runTestInvocation:(id)arg1;
- (void)setInteractionTintColor:(id)arg1;

@end

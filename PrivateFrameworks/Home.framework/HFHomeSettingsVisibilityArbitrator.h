/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomeSettingsVisibilityArbitrator : NSObject <HFHomeManagerObserver, LSApplicationWorkspaceObserverProtocol> {
    unsigned long long  _homeAppInstallState;
    int  _homeKitPreferencesChangeNotifyToken;
    bool  _homesConfigured;
    unsigned long long  _visibilityState;
    id /* block */  _visibilityStateChangeHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long homeAppInstallState;
@property (nonatomic) int homeKitPreferencesChangeNotifyToken;
@property (nonatomic) bool homesConfigured;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visibilityState;
@property (nonatomic, copy) id /* block */ visibilityStateChangeHandler;

+ (id)homeManagerConfigurationWithExpandedOptions:(bool)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_queryHomeAppInstallStateWithCompletion:(id /* block */)arg1;
- (void)_reloadVisibilityStateIncludingInstallState:(bool)arg1;
- (void)_startListeningForManagedConfigurationChanges;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (unsigned long long)homeAppInstallState;
- (int)homeKitPreferencesChangeNotifyToken;
- (void)homeManager:(id)arg1 didUpdateThisDeviceIsResidentCapable:(bool)arg2;
- (bool)homesConfigured;
- (id)init;
- (void)reloadVisibilityState;
- (void)setHomeAppInstallState:(unsigned long long)arg1;
- (void)setHomeKitPreferencesChangeNotifyToken:(int)arg1;
- (void)setHomesConfigured:(bool)arg1;
- (void)setVisibilityState:(unsigned long long)arg1;
- (void)setVisibilityStateChangeHandler:(id /* block */)arg1;
- (unsigned long long)visibilityState;
- (id /* block */)visibilityStateChangeHandler;

@end

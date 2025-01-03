/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSDeveloperModeStore : NSObject <VSDeveloperServiceProtocol, VSRemoteNotifierDelegate> {
    VSRemoteNotifier * _accountStoreChangeRemoteNotifier;
    VSPersistentContainer * _persistentContainer;
    VSRemoteNotifier * _providersChangeRemoteNotifier;
    VSRemoteNotifier * _serviceChangeRemoteNotifier;
    VSRemoteNotifier * _settingsChangeRemoteNotifier;
    NSObject<OS_dispatch_queue> * _settingsQueue;
}

@property (nonatomic, retain) VSRemoteNotifier *accountStoreChangeRemoteNotifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSPersistentContainer *persistentContainer;
@property (nonatomic, retain) VSRemoteNotifier *providersChangeRemoteNotifier;
@property (nonatomic, retain) VSRemoteNotifier *serviceChangeRemoteNotifier;
@property (nonatomic, retain) VSRemoteNotifier *settingsChangeRemoteNotifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *settingsQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_developerIdentityProviderInContext:(id)arg1;
- (id)_identityProviderFetchRequest;
- (void)_noteProvidersDidChange;
- (void)_noteServiceDidChange;
- (void)_noteSettingsDidChange;
- (id)_nullableObjectOrNSNull:(id)arg1;
- (void)_performIdentityProviderBlock:(id /* block */)arg1;
- (id)accountStoreChangeRemoteNotifier;
- (void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(id /* block */)arg1;
- (void)fetchDeveloperSettingsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)legacySettingsPropertiesPath;
- (void)migrateSettingsPropertyFileIfNecessary;
- (id)persistentContainer;
- (id)providersChangeRemoteNotifier;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serviceChangeRemoteNotifier;
- (void)setAccountStoreChangeRemoteNotifier:(id)arg1;
- (void)setPersistentContainer:(id)arg1;
- (void)setProvidersChangeRemoteNotifier:(id)arg1;
- (void)setServiceChangeRemoteNotifier:(id)arg1;
- (void)setSettingsChangeRemoteNotifier:(id)arg1;
- (void)setSettingsQueue:(id)arg1;
- (id)settingsChangeRemoteNotifier;
- (id)settingsPropertiesURL;
- (id)settingsQueue;
- (void)updateDeveloperSettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(id /* block */)arg2;

@end

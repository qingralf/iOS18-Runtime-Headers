/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountsManager : NSObject <BRCAccountHandlerDelegate, UMUserSyncStakeholder> {
    NSMutableDictionary * _accountHandlersByACAccountID;
    NSMutableArray * _accountsListChangeHandlers;
    BRCBarrier * _accountsLoadingBarrier;
    UMUserSyncTask * _checkNeedsBubbleTask;
    bool  _finishedLoadingAccounts;
    bool  _loadAccountsRequested;
    NSObject<OS_dispatch_queue> * _maintainFPDomainsQueue;
    bool  _maintainedExistingFPDomains;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _versionsProvidersByVolumeID;
}

@property (nonatomic, readonly) BRCBarrier *accountsLoadingBarrier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInSyncBubble;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_createAccountHandlerForAccountID:(id)arg1;
- (void)_createSyncBubbleTasksIfNecessary;
- (id)_getEnterpriseProviderManager;
- (id)_getPrimaryProviderManager;
- (bool)_isDeviceUnlocked;
- (id)_keepDataLocalOnSignOutDefaultsKeyForCurrentPersona;
- (void)_maintainExistingFileProviderDomainsIfNeededWithAccounts:(id)arg1;
- (bool)_maintainExistingFileProviderDomainsWithAccounts:(id)arg1 withError:(id*)arg2;
- (bool)_readkeepDataLocalOnSignOutForCurrentPersona;
- (void)_scheduleExistingFileProviderDomainsMaintenanceWithAccounts:(id)arg1;
- (bool)_waitUntilFileProviderIsReady:(id*)arg1;
- (id)accountForCurrentPersona;
- (id)accountForPersona:(id)arg1;
- (void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2;
- (void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2;
- (id)accountHandlerForACAccountID:(id)arg1;
- (id)accountHandlerForCurrentPersona;
- (id)accountsLoadingBarrier;
- (bool)cleanupAccountDataForLoggedOutAccountWithPersona:(id)arg1;
- (void)createAndLoadSessionWithACAccountID:(id)arg1 createBlock:(id /* block */)arg2;
- (void)createSessionWithACAccountID:(id)arg1 dsid:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)destroySessionWithACAccountID:(id)arg1;
- (void)enumerateAccountHandlerIfFinishedLoading:(id /* block */)arg1;
- (void)enumerateAccountHandlers:(id /* block */)arg1;
- (id)getMaintainFPDomainsQueue;
- (id)getOrCreateAccountHandlerForACAccount:(id)arg1;
- (id)getQueue;
- (id)init;
- (bool)isInSyncBubble;
- (void)keepDataLocalOnSignOutForCurrentPersona:(bool)arg1;
- (void)loadAccounts;
- (id)personaIdentifierForACAccountID:(id)arg1;
- (bool)retrySyncBubbleLaterIfNeededWithError:(id)arg1;
- (void)updateAccountDisplayName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadContent;
- (id)versionsProviderForVolume:(id)arg1;
- (bool)waitForAccountLoadingSynchronouslyIfPossible:(id)arg1;
- (bool)waitForInitialAccountLoadingSynchronouslyIfPossible;
- (void)waitUntilDeviceIsUnlocked;
- (void)willSwitchUser;

@end
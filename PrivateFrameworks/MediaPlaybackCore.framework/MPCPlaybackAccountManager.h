/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackAccountManager : NSObject <ICEnvironmentMonitorObserver> {
    NSDictionary * _accounts;
    NSObject<OS_dispatch_group> * _initialAccountGroup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _needsRefreshDueToMissingBag;
    bool  _needsRefreshDueToTimeout;
    NSHashTable * _observers;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _observersLock;
}

@property (nonatomic, readonly, copy) NSArray *accounts;
@property (nonatomic, readonly) MPCPlaybackAccount *activeAccount;
@property (nonatomic, readonly) MPCPlaybackAccount *anyDelegationHostingAccount;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLoadedInitialAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;
+ (id)sharedManagerIfExists;

- (void).cxx_destruct;
- (void)_buildAccountFromDelegatedIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)_buildAccountFromLocalIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)_enumerateIdentitiesWithCompletion:(id /* block */)arg1;
- (void)_homeUserSettingsChangeNotification:(id)arg1;
- (id)_init;
- (void)_setNeedsRefreshDueToMissingBag:(bool)arg1;
- (void)_subscriptionStatusChangedNotification:(id)arg1;
- (void)_updateAccounts;
- (void)_updateAccountsWithAttemptCount:(long long)arg1;
- (void)_userIdentityStoreChangedNotification:(id)arg1;
- (id)accountForDSID:(id)arg1;
- (id)accountForHashedDSID:(id)arg1;
- (id)accountForUserIdentity:(id)arg1;
- (id)accounts;
- (id)activeAccount;
- (id)anyDelegationHostingAccount;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (id)getDelegateTokenBWithTokenA:(id)arg1 forDSID:(unsigned long long)arg2 error:(id*)arg3;
- (bool)hasLoadedInitialAccounts;
- (void)performAfterLoadingAccounts:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)start;
- (void)unregisterObserver:(id)arg1;
- (void)updateCredentialsWithDelegateTokenE:(void *)arg1 forDSID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 53: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, unsigned char, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const out /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, out long double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, in float, out /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, out /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, unsigned char, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, BOOL, out /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)waitForAccountsWithCompletion:(id /* block */)arg1;

@end

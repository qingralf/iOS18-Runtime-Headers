/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMUserIdentityCache : NSObject <MCMUserIdentityCache> {
    bool  _cacheInvalid;
    <MCMContainerClassIterator> * _classIterator;
    MCMUserIdentity * _defaultUserIdentity;
    bool  _fetchedFromUM;
    bool  _firstFetch;
    NSObject<OS_dispatch_queue> * _flushQueue;
    NSObject<OS_xpc_object> * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _lock_bundleToDataSeparatedIdentitiesMap;
    NSMutableDictionary * _lock_libraryRepairForUserIdentity;
    NSMutableDictionary * _lock_managedPathRegistryForUserIdentity;
    NSDictionary * _lock_personaIDToUserIdentityMap;
    NSDictionary * _lock_personaUniqueStringToUserIdentityMap;
    MCMUserIdentity * _lock_userIdentityForPersonalPersona;
    MCMUserIdentity * _lock_userIdentityForUnspecificPersona;
    NSHashTable * _observers;
    NSSet * _previousUserIdentities;
    unsigned long long  _savedGeneration;
}

@property (nonatomic) bool cacheInvalid;
@property (nonatomic, readonly) <MCMContainerClassIterator> *classIterator;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) MCMUserIdentity *defaultUserIdentity;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *lock_bundleToDataSeparatedIdentitiesMap;
@property (nonatomic, readonly) NSMutableDictionary *lock_libraryRepairForUserIdentity;
@property (nonatomic, readonly) NSMutableDictionary *lock_managedPathRegistryForUserIdentity;
@property (nonatomic, readonly) NSDictionary *lock_personaIDToUserIdentityMap;
@property (nonatomic, readonly) NSDictionary *lock_personaUniqueStringToUserIdentityMap;
@property (nonatomic, readonly) MCMUserIdentity *lock_userIdentityForPersonalPersona;
@property (nonatomic, readonly) MCMUserIdentity *lock_userIdentityForUnspecificPersona;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, retain) NSSet *previousUserIdentities;
@property (nonatomic) unsigned long long savedGeneration;
@property (readonly) Class superclass;

+ (id)defaultUserIdentity;
+ (id)globalBundleUserIdentity;
+ (id)globalSystemUserIdentity;
+ (bool)personasAreSupported;
+ (id)userIdentityWithPersonaAttributes:(id)arg1;
+ (id)userIdentityWithPersonaAttributes:(id)arg1 POSIXUser:(id)arg2 forceUnspecific:(bool)arg3;
+ (id)userIdentityWithPersonaAttributes:(id)arg1 forceUnspecific:(bool)arg2;

- (void).cxx_destruct;
- (void)_lock_flush;
- (void)_lock_flushAndRepopulateWithUserIdentities:(id)arg1;
- (void)_lock_resync;
- (bool)_lock_resync_fromUserPersonaAttributes:(id)arg1;
- (id)_lock_userIdentitiesForBundleIdentifier:(id)arg1;
- (id)_lock_userIdentityForCurrentUserWithPersonaUniqueString:(id)arg1;
- (void)_notifyObserversOfChangesWithUserIdentities:(id)arg1 firstFetch:(bool)arg2;
- (void)_refreshFromUserManagementIfNecessary;
- (void)addObserver:(id)arg1;
- (id)allAccessibleUserIdentities;
- (bool)cacheInvalid;
- (id)classIterator;
- (id)defaultUserIdentity;
- (void)flush;
- (void)flushAndRepopulateWithUserIdentities:(id)arg1;
- (void)forEachAccessibleUserIdentitySynchronouslyExecuteBlock:(id /* block */)arg1;
- (id)globalBundleUserIdentity;
- (id)globalSystemUserIdentity;
- (id)init;
- (id)libraryRepairForUserIdentity:(id)arg1;
- (id)lock_bundleToDataSeparatedIdentitiesMap;
- (id)lock_libraryRepairForUserIdentity;
- (id)lock_managedPathRegistryForUserIdentity;
- (id)lock_personaIDToUserIdentityMap;
- (id)lock_personaUniqueStringToUserIdentityMap;
- (id)lock_userIdentityForPersonalPersona;
- (id)lock_userIdentityForUnspecificPersona;
- (id)managedUserPathRegistryForUserIdentity:(id)arg1;
- (id)observers;
- (id)personaUniqueStringForCurrentContext;
- (id)previousUserIdentities;
- (void)removeObserver:(id)arg1;
- (unsigned long long)savedGeneration;
- (void)setCacheInvalid:(bool)arg1;
- (void)setPreviousUserIdentities:(id)arg1;
- (void)setSavedGeneration:(unsigned long long)arg1;
- (id)unspecificUserIdentity;
- (id)userIdentitiesForBundleIdentifier:(id)arg1;
- (id)userIdentitiesForContainerConfig:(id)arg1 originatorUserIdentities:(id)arg2;
- (id)userIdentityForClient:(struct container_client { unsigned long long x1; char *x2; char *x3; unsigned int x4; char *x5; unsigned int x6; unsigned int x7; struct { unsigned int x_8_1_1[8]; } x8; int x9; bool x10; bool x11; bool x12; id x13; }*)arg1 error:(id*)arg2;
- (id)userIdentityForContainerConfig:(id)arg1 originatorUserIdentity:(id)arg2;
- (id)userIdentityForCurrentContext;
- (id)userIdentityForCurrentUserWithPersonaUniqueString:(id)arg1;
- (id)userIdentityForLegacyMobileUser;
- (id)userIdentityForPersonaUniqueString:(id)arg1 POSIXUser:(id)arg2;
- (id)userIdentityForPersonalPersona;
- (id)userIdentityForPersonalPersonaWithPOSIXUser:(id)arg1;
- (id)userIdentityWithPersonaID:(unsigned int)arg1;

@end
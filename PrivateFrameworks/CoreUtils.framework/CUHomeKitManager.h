/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUHomeKitManager : NSObject <HMAccessoryDelegatePrivate, HMHomeDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HMMediaSystemDelegate, HMUserDelegatePrivate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _flags;
    int  _homeKitPrefsNotifyToken;
    HMHomeManager * _homeManager;
    bool  _homeManagerDidUpdateHomes;
    NSMutableDictionary * _homes;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSArray * _resolvableAccessories;
    id /* block */  _resolvableAccessoriesChangedHandler;
    NSMutableDictionary * _resolvableAccessoriesMap;
    HMAccessory * _selfAccessory;
    NSDictionary * _selfAccessoryAppData;
    id /* block */  _selfAccessoryAppDataChangedHandler;
    bool  _selfAccessoryEnabled;
    bool  _selfAccessoryMediaAccessEnabled;
    unsigned int  _selfAccessoryMediaAccessFlags;
    NSString * _selfAccessoryMediaAccessPassword;
    id /* block */  _selfAccessoryMediaAccessUpdatedHandler;
    HMMediaSystem * _selfAccessoryMediaSystem;
    HMAccessory * _selfAccessoryMediaSystemCounterpart;
    bool  _selfAccessoryMediaSystemEnabled;
    NSString * _selfAccessoryMediaSystemName;
    HMMediaSystemRole * _selfAccessoryMediaSystemRole;
    id /* block */  _selfAccessoryMediaSystemUpdatedHandler;
    NSUUID * _selfAccessoryRoomID;
    bool  _selfAccessorySiriAccessEnabled;
    id /* block */  _selfAccessorySiriAccessUpdatedHandler;
    bool  _selfAccessorySiriEnabled;
    id /* block */  _selfAccessoryUpdatedHandler;
    HMUser * _selfAccessoryUser;
    unsigned int  _state;
    id /* block */  _stateChangedHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSMutableDictionary * _users;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly, copy) NSArray *resolvableAccessories;
@property (nonatomic, copy) id /* block */ resolvableAccessoriesChangedHandler;
@property (nonatomic, readonly) HMAccessory *selfAccessory;
@property (nonatomic, readonly, copy) NSDictionary *selfAccessoryAppData;
@property (nonatomic, copy) id /* block */ selfAccessoryAppDataChangedHandler;
@property (nonatomic, readonly) unsigned int selfAccessoryMediaAccessFlags;
@property (nonatomic, readonly, copy) NSString *selfAccessoryMediaAccessPassword;
@property (nonatomic, copy) id /* block */ selfAccessoryMediaAccessUpdatedHandler;
@property (nonatomic, readonly) HMMediaSystem *selfAccessoryMediaSystem;
@property (nonatomic, readonly) HMAccessory *selfAccessoryMediaSystemCounterpart;
@property (nonatomic, copy) NSString *selfAccessoryMediaSystemName;
@property (nonatomic, readonly) HMMediaSystemRole *selfAccessoryMediaSystemRole;
@property (nonatomic, copy) id /* block */ selfAccessoryMediaSystemUpdatedHandler;
@property (nonatomic, copy) id /* block */ selfAccessorySiriAccessUpdatedHandler;
@property (nonatomic, readonly) bool selfAccessorySiriEnabled;
@property (nonatomic, copy) id /* block */ selfAccessoryUpdatedHandler;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, copy) id /* block */ stateChangedHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateIfNeeded;
- (id)_bestUserAndLabel:(id*)arg1;
- (void)_clearHomeKitState;
- (id)_cuPairingIdentityWithHMFPairingIdentity:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_findPairedPeerWithContext:(id)arg1;
- (void)_findPairedPeerWithContext:(id)arg1 label:(id)arg2 pairingIdentity:(id)arg3 error:(id)arg4;
- (void)_getPairingIdentityCompleted:(id)arg1 options:(unsigned long long)arg2 error:(id)arg3 label:(id)arg4 completion:(id /* block */)arg5;
- (void)_getPairingIdentityForAccessoryWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_getPairingIdentityForLegacyWithOptions:(unsigned long long)arg1 user:(id)arg2 nonLegacyIdentity:(id)arg3 label:(id)arg4 completion:(id /* block */)arg5;
- (void)_getPairingIdentityForUserWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_interrupted;
- (void)_invalidated;
- (bool)_isOwnerOfHome:(id)arg1;
- (id)_selfAccessoryMediaSystemUncached:(id*)arg1;
- (void)_updateAccessories;
- (void)_updateHomes;
- (void)_updateSelfAccessoryIfNeeded;
- (void)_updateSelfAccessoryMediaAccess;
- (void)_updateSelfAccessoryMediaSystem;
- (void)_updateSelfAccessorySiriAccess;
- (void)_updateState;
- (void)_updateUsers;
- (void)accessory:(id)arg1 didUpdateDevice:(id)arg2;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessoryDidUpdatePairingIdentity:(id)arg1;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (unsigned int)flags;
- (void)getHomeKitLocalPairingIdentityWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddMediaSystem:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didUpdateMediaPassword:(id)arg2;
- (void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(bool)arg2;
- (void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)mediaSystem:(id)arg1 didUpdateComponents:(id)arg2;
- (void)mediaSystem:(id)arg1 didUpdateName:(id)arg2;
- (id)resolvableAccessories;
- (id /* block */)resolvableAccessoriesChangedHandler;
- (id)selfAccessory;
- (id)selfAccessoryAppData;
- (id /* block */)selfAccessoryAppDataChangedHandler;
- (unsigned int)selfAccessoryMediaAccessFlags;
- (id)selfAccessoryMediaAccessPassword;
- (id /* block */)selfAccessoryMediaAccessUpdatedHandler;
- (id)selfAccessoryMediaSystem;
- (id)selfAccessoryMediaSystemCounterpart;
- (id)selfAccessoryMediaSystemName;
- (id)selfAccessoryMediaSystemRole;
- (id /* block */)selfAccessoryMediaSystemUpdatedHandler;
- (id /* block */)selfAccessorySiriAccessUpdatedHandler;
- (bool)selfAccessorySiriEnabled;
- (id /* block */)selfAccessoryUpdatedHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setResolvableAccessoriesChangedHandler:(id /* block */)arg1;
- (void)setSelfAccessoryAppDataChangedHandler:(id /* block */)arg1;
- (void)setSelfAccessoryMediaAccessUpdatedHandler:(id /* block */)arg1;
- (void)setSelfAccessoryMediaSystemName:(id)arg1;
- (void)setSelfAccessoryMediaSystemUpdatedHandler:(id /* block */)arg1;
- (void)setSelfAccessorySiriAccessUpdatedHandler:(id /* block */)arg1;
- (void)setSelfAccessoryUpdatedHandler:(id /* block */)arg1;
- (void)setStateChangedHandler:(id /* block */)arg1;
- (unsigned int)state;
- (id /* block */)stateChangedHandler;
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;
- (void)user:(id)arg1 didUpdatePairingIdentity:(id)arg2;

@end

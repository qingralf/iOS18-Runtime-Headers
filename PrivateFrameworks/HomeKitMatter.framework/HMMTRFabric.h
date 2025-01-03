/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter
 */

@interface HMMTRFabric : HMFObject {
    HMMTRAccessControl * _accessControl;
    bool  _cachedDataValid;
    NSUUID * _controllerEntityIdentifier;
    HMMTRControllerData * _currentDeviceNodeData;
    <HMMTRFabricDelegate> * _delegate;
    HMMTRFabricData * _fabricData;
    NSNumber * _fabricID;
    HMMTRStorage * _storage;
    bool  _systemCommissionerFabric;
    NSUUID * _targetFabricUUID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMMTRAccessControl *accessControl;
@property (nonatomic) bool cachedDataValid;
@property (nonatomic, retain) NSUUID *controllerEntityIdentifier;
@property (nonatomic, readonly) HMMTRControllerData *currentDeviceNodeData;
@property (nonatomic, readonly) <HMMTRFabricDelegate> *delegate;
@property (nonatomic, readonly) HMMTRFabricData *fabricData;
@property (copy) NSNumber *fabricID;
@property (nonatomic) HMMTRStorage *storage;
@property (getter=isSystemCommissionerFabric, readonly) bool systemCommissionerFabric;
@property (readonly) NSUUID *targetFabricUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_clearNewFabricData;
- (bool)_createNewFabricData;
- (id)_getDataToPersist;
- (void)_loadForPairingWithFetchFromResident:(bool)arg1 completion:(id /* block */)arg2;
- (void)_loadFromDiskWithCompletion:(id /* block */)arg1;
- (void)_loadFromRemoteWithCompletion:(id /* block */)arg1;
- (void)_loadFromResidentWithCompletion:(id /* block */)arg1;
- (void)_loadFromStorageWithCompletion:(id /* block */)arg1;
- (id)accessControl;
- (id)attributeDescriptions;
- (bool)cachedDataValid;
- (id)controllerEntityIdentifier;
- (void)createNewFabricIdentityWithCompletion:(id /* block */)arg1;
- (id)currentDeviceNodeData;
- (id)delegate;
- (id)fabricData;
- (id)fabricID;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidateCachedData;
- (bool)isCachedDataValid;
- (bool)isSystemCommissionerFabric;
- (bool)isValid;
- (void)loadFabricAndControllerDataForPairing:(bool)arg1 fetchFromResident:(bool)arg2 completion:(id /* block */)arg3;
- (id)logIdentifier;
- (void)setAccessControl:(id)arg1;
- (void)setCachedDataValid:(bool)arg1;
- (void)setControllerEntityIdentifier:(id)arg1;
- (void)setFabricID:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)storage;
- (id)targetFabricUUID;
- (id)workQueue;

@end

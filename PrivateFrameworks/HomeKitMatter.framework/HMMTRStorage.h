/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter
 */

@interface HMMTRStorage : HMFObject <HMFLogging, MTRPersistentStorageDelegate> {
    NSMutableDictionary * _appleFabricLocalStorage;
    NSNumber * _caseAuthenticatedTag;
    bool  _caseAuthenticatedTagsUpdated;
    NSNumber * _certificateIssuerID;
    <HMMTRStorageDataSource> * _dataSource;
    <HMMTRStorageDelegate> * _delegate;
    bool  _fabricCreationInProgress;
    <HMMTRFabricStorageDataSource> * _fabricDataSource;
    NSNumber * _fabricID;
    NSMutableDictionary * _inMemoryStorage;
    NSOperationQueue * _keyValueStoreUpdateQueue;
    NSMutableDictionary * _localStorage;
    bool  _localStorageMode;
    NSDictionary * _localStorageWithoutUpdates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMMTRMatterKeypair * _nocSigner;
    NSData * _operationalCert;
    HMMTRMatterKeypair * _operationalKeyPair;
    NSData * _ownerIPK;
    NSNumber * _ownerNodeID;
    NSData * _rootCert;
    bool  _sharedAdmin;
    bool  _storageSyncInProgress;
    bool  _storageSyncPending;
    bool  _systemCommissionerFabric;
    MTSKeyValueStore * _systemCommissionerKeyValueStore;
    HMMTRMatterKeypair * _systemCommissionerNocSigner;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (retain) NSMutableDictionary *appleFabricLocalStorage;
@property (nonatomic, retain) NSNumber *caseAuthenticatedTag;
@property (nonatomic) bool caseAuthenticatedTagsUpdated;
@property (nonatomic, retain) NSNumber *certificateIssuerID;
@property <HMMTRStorageDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <HMMTRStorageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFabricCreationInProgress) bool fabricCreationInProgress;
@property (retain) <HMMTRFabricStorageDataSource> *fabricDataSource;
@property (retain) NSNumber *fabricID;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *inMemoryStorage;
@property (readonly) NSOperationQueue *keyValueStoreUpdateQueue;
@property (retain) NSMutableDictionary *localStorage;
@property (getter=isLocalStorageMode, readonly) bool localStorageMode;
@property (retain) NSDictionary *localStorageWithoutUpdates;
@property (nonatomic, retain) HMMTRMatterKeypair *nocSigner;
@property (nonatomic, retain) NSData *operationalCert;
@property (nonatomic, retain) HMMTRMatterKeypair *operationalKeyPair;
@property (nonatomic, retain) NSData *ownerIPK;
@property (nonatomic, retain) NSNumber *ownerNodeID;
@property (readonly, copy) NSSet *pairedNodeIDs;
@property (nonatomic, retain) NSData *rootCert;
@property (getter=isSharedAdmin) bool sharedAdmin;
@property bool storageSyncInProgress;
@property bool storageSyncPending;
@property (readonly) Class superclass;
@property (getter=isSystemCommissionerFabric) bool systemCommissionerFabric;
@property (retain) MTSKeyValueStore *systemCommissionerKeyValueStore;
@property (nonatomic, retain) HMMTRMatterKeypair *systemCommissionerNocSigner;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)accessoryNodeIDFromPluginKey:(id)arg1;
+ (bool)checkAndUpdateExpiryOfCertificate:(id)arg1 keyPair:(id)arg2 newCertificate:(id*)arg3;
+ (id)chipPluginStorageAccessoryNodeSpecificKeys;
+ (id)chipPluginStorageKeys;
+ (bool)didUpdateMatterItems:(id)arg1 oldStorage:(id)arg2;
+ (id)formatKeyForNodeId:(id)arg1 key:(id)arg2;
+ (id)generateIPK;
+ (id)ignoredMatterStorageKeys;
+ (bool)isMatterKey:(id)arg1;
+ (bool)isMemoryStorageKey:(id)arg1;
+ (bool)isPluginAccessoryNodeKey:(id)arg1;
+ (bool)isPluginKey:(id)arg1;
+ (id)keyByStrippingNodeIdFromKey:(id)arg1;
+ (id)logCategory;
+ (id)matterItemsFromDictionary:(id)arg1;
+ (id)matterStorageKeys;
+ (id)memoryStorageKeys;
+ (id)nodeIdFromPluginKey:(id)arg1;
+ (id)removeRecordsForUnpairedNodesInDict:(id)arg1 pairedNodes:(id)arg2;
+ (id)shortDescription;
+ (bool)shouldIgnoreWritesForKey:(id)arg1;

- (void).cxx_destruct;
- (id)_cachedOperationalCertificateIfValidForFabricID:(id)arg1;
- (id)_cachedRootCertificateIfValidForFabricID:(id)arg1;
- (id)_createOperationalCertificateForFabricID:(id)arg1 rootCert:(id)arg2 caseAuthenticatedTags:(id)arg3 controllerNodeID:(id)arg4;
- (void)_fetchCertForFabricWithID:(id)arg1 isOwner:(bool)arg2 forPairing:(bool)arg3 forceFetchFromResident:(bool)arg4 completion:(id /* block */)arg5;
- (bool)_handlePerFabricStorageMaybeAvailable:(id)arg1;
- (void)_handleUpdatedDataWithIsLocalChange:(bool)arg1;
- (id)_nodeIDFromOperationalX509Certificate:(id)arg1;
- (id)_operationalCertificateFromSdkCertificatesForFabricID:(id)arg1;
- (id)_preferencesValueForKey:(id)arg1;
- (bool)_removeAllDataSourceData;
- (void)_removeSystemCommissionerFabricNodeIDForUuid:(id)arg1;
- (id)_rootCertificateFromSdkCertificatesForFabricID:(id)arg1;
- (void)_setPreferencesValueForKey:(id)arg1 value:(id)arg2;
- (bool)_syncSetDataSourceDictionary:(id)arg1;
- (bool)_syncSetDataSourceValue:(id)arg1 forKey:(id)arg2;
- (bool)_syncSetDataSourceValuesWithError:(id*)arg1 block:(id /* block */)arg2;
- (void)_syncToRemoteStorage;
- (void)addPairedNodeID:(id)arg1;
- (void)addPairedNodeID:(id)arg1 toSystemCommissionerFabric:(bool)arg2;
- (id)appleFabricLocalStorage;
- (bool)areCachedCertificatesValidForFabricID:(id)arg1;
- (id)caseAuthenticatedTag;
- (bool)caseAuthenticatedTagsUpdated;
- (id)categoryForNode:(id)arg1;
- (id)categoryForSystemCommissionerFabricNode:(id)arg1;
- (id)certificateIssuerID;
- (id)configNumberForNode:(id)arg1;
- (id)controllerNodeID;
- (id)dataSource;
- (id)delegate;
- (id)deviceNameForSystemCommissionerFabricNode:(id)arg1;
- (void)endLocalStorageModeByPersistingAppleFabricData;
- (void)endLocalStorageModeBySyncingToRemote:(bool)arg1;
- (id)extendedMACAddressForSystemCommissionerFabricNode:(id)arg1;
- (id)fabricDataSource;
- (id)fabricID;
- (id)fabricIDForSystemCommissioner;
- (id)fabricIndexForNode:(id)arg1;
- (void)fetchCertForFabricWithID:(id)arg1 isOwner:(bool)arg2 forPairing:(bool)arg3 forceFetchFromResident:(bool)arg4 completion:(id /* block */)arg5;
- (void)fetchCertificatesFromStorageForFabricID:(id)arg1 controllerNodeID:(id)arg2 rootCert:(id*)arg3 operationalCert:(id*)arg4 residentNodeID:(id*)arg5 ipk:(id*)arg6;
- (void)handlePrimaryResidentDataReady;
- (void)handleUpdatedCurrentFabricIndex;
- (void)handleUpdatedDataForFabricIndex:(id)arg1 isLocalChange:(bool)arg2;
- (void)handleUpdatedDataForFabricIndex:(id)arg1 nodeID:(id)arg2 isLocalChange:(bool)arg3;
- (void)handleUpdatedDataWithIsLocalChange:(bool)arg1;
- (id)inMemoryStorage;
- (id)initWithQueue:(id)arg1;
- (id)ipkForCurrentFabric;
- (id)ipkForFabricID:(id)arg1 forPairing:(bool)arg2;
- (bool)isFabricCreationInProgress;
- (bool)isLocalStorageMode;
- (bool)isResidentDevice;
- (bool)isSharedAdmin;
- (bool)isStagedForNode:(id)arg1;
- (bool)isSystemCommissionerFabric;
- (id)keyValueStoreUpdateQueue;
- (unsigned int)knownFabricInStorage:(id)arg1 fabricID:(id)arg2 keyPair:(id)arg3 controllerNodeID:(id*)arg4 rootCertificate:(id*)arg5;
- (unsigned int)knownFabricWithID:(id)arg1;
- (id)legacyNodeIDForCurrentFabric;
- (id)legacyNodeIDForFabricID:(id)arg1;
- (id)localStorage;
- (bool)localStorageMode;
- (id)localStorageWithoutUpdates;
- (id)logIdentifier;
- (id)nocSigner;
- (id)nodeIDForFabricID:(id)arg1 deviceIdentifier:(id)arg2;
- (id)operationalCert;
- (id)operationalCertForCurrentFabric;
- (id)operationalCertificate;
- (id)operationalKeyPair;
- (id)ownerIPK;
- (id)ownerNodeID;
- (id)pairedNodeIDs;
- (id)pairedNodeIDsFromStoredStringValue:(id)arg1;
- (id)pairedNodeIDsOnSystemCommissionerFabric:(bool)arg1;
- (void)persistLegacyControllerNodeWithDictionary:(id)arg1;
- (void)prepareStorageForFabricID:(id)arg1;
- (void)prepareStorageForFabricID:(id)arg1 forInitialSetup:(bool)arg2;
- (id)productIDForNode:(id)arg1;
- (id)productIDForSystemCommissionerFabricNode:(id)arg1;
- (void)removeAndSyncAllKeysNotIncludedInActiveNodeIDs:(id)arg1;
- (void)removePairedNodeID:(id)arg1;
- (void)removePairedNodeID:(id)arg1 fromSystemCommissionerFabric:(bool)arg2;
- (void)removeRecordsForNode:(id)arg1 systemCommissionerFabric:(bool)arg2;
- (void)removeRecordsForNodeIDs:(id)arg1 systemCommissionerFabric:(bool)arg2;
- (void)removeRecordsForSystemCommissionerFabricNode:(id)arg1;
- (bool)removeStorageDataForKey:(id)arg1;
- (bool)removeValueForKey:(id)arg1;
- (bool)removeValueForKey:(id)arg1 systemCommissionerFabric:(bool)arg2;
- (bool)replaceAllKeysAndSyncWithBlock:(id /* block */)arg1 systemCommissionerFabric:(bool)arg2;
- (id)rootCert;
- (id)rootCertForCurrentFabric;
- (id)rootCertificate;
- (id)serialNumberForSystemCommissionerFabricNode:(id)arg1;
- (void)setAppleFabricLocalStorage:(id)arg1;
- (void)setCaseAuthenticatedTag:(id)arg1;
- (void)setCaseAuthenticatedTagsUpdated:(bool)arg1;
- (void)setCategory:(id)arg1 forNode:(id)arg2;
- (void)setCategory:(id)arg1 forSystemCommissionerFabricNode:(id)arg2;
- (void)setCertificateIssuerID:(id)arg1;
- (void)setConfigNumber:(id)arg1 forNode:(id)arg2;
- (void)setControllerNodeID:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceName:(id)arg1 forSystemCommissionerFabricNode:(id)arg2;
- (void)setExtendedMACAddress:(id)arg1 forSystemCommissionerFabricNode:(id)arg2;
- (void)setFabricCreationInProgress:(bool)arg1;
- (void)setFabricDataSource:(id)arg1;
- (void)setFabricID:(id)arg1;
- (void)setFabricID:(id)arg1 forNode:(id)arg2;
- (void)setInMemoryStorage:(id)arg1;
- (void)setLocalStorage:(id)arg1;
- (void)setLocalStorageMode:(bool)arg1;
- (void)setLocalStorageWithoutUpdates:(id)arg1;
- (void)setNocSigner:(id)arg1;
- (void)setOperationalCert:(id)arg1;
- (void)setOperationalCertificate:(id)arg1;
- (void)setOperationalKeyPair:(id)arg1;
- (void)setOwnerIPK:(id)arg1;
- (void)setOwnerNodeID:(id)arg1;
- (void)setPairedNodeIDs:(id)arg1;
- (void)setPairedNodeIDs:(id)arg1 forSystemCommissionerFabric:(bool)arg2;
- (void)setProductID:(id)arg1 forNode:(id)arg2;
- (void)setProductID:(id)arg1 forSystemCommissionerFabricNode:(id)arg2;
- (void)setRootCert:(id)arg1;
- (void)setRootCertificate:(id)arg1;
- (void)setSerialNumber:(id)arg1 forSystemCommissionerFabricNode:(id)arg2;
- (void)setSetupPayload:(id)arg1 forSystemCommissionerFabricNode:(id)arg2;
- (void)setSharedAdmin:(bool)arg1;
- (void)setStaged:(bool)arg1 forNode:(id)arg2;
- (bool)setStorageData:(id)arg1 forKey:(id)arg2;
- (void)setStorageSyncInProgress:(bool)arg1;
- (void)setStorageSyncPending:(bool)arg1;
- (void)setSystemCommissionerFabric:(bool)arg1;
- (void)setSystemCommissionerFabricID:(id)arg1;
- (void)setSystemCommissionerFabricNodeID:(id)arg1 forUuid:(id)arg2;
- (void)setSystemCommissionerKeyValueStore:(id)arg1;
- (void)setSystemCommissionerNocSigner:(id)arg1;
- (void)setTopology:(id)arg1 forNode:(id)arg2;
- (void)setUuid:(id)arg1 forSystemCommissionerFabricNode:(id)arg2;
- (bool)setValueForKey:(id)arg1 removingKeys:(id)arg2 systemCommissionerFabric:(bool)arg3 block:(id /* block */)arg4;
- (bool)setValueForKey:(id)arg1 value:(id)arg2;
- (bool)setValueForKey:(id)arg1 value:(id)arg2 systemCommissionerFabric:(bool)arg3;
- (void)setVendorID:(id)arg1 forNode:(id)arg2;
- (void)setVendorID:(id)arg1 forSystemCommissionerFabricNode:(id)arg2;
- (void)setWEDSupported:(bool)arg1 forSystemCommissionerFabricNode:(id)arg2;
- (id)setupPayloadForSystemCommissionerFabricNode:(id)arg1;
- (void)startLocalStorageMode;
- (id)storageDataForKey:(id)arg1;
- (bool)storageSyncInProgress;
- (bool)storageSyncPending;
- (id)storedStringValueFromPairedNodeIDs:(id)arg1;
- (bool)syncDataSourceDictionary:(id)arg1 forFabric:(id)arg2;
- (id)systemCommissionerFabricNodeIDForUuid:(id)arg1;
- (id)systemCommissionerKeyValueStore;
- (id)systemCommissionerNocSigner;
- (id)topologyForNode:(id)arg1;
- (id)uuidForSystemCommissionerFabricNode:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 systemCommissionerFabric:(bool)arg2;
- (id)vendorIDForNode:(id)arg1;
- (id)vendorIDForSystemCommissionerFabricNode:(id)arg1;
- (bool)wedSupportedForSystemCommissionerFabricNode:(id)arg1;
- (id)workQueue;

@end

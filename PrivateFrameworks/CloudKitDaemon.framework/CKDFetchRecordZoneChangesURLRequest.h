/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining> {
    long long  _changeTypes;
    NSDictionary * _configurationsByRecordZoneID;
    NSSet * _desiredAssetKeys;
    bool  _fetchChangesForMergeableValues;
    NSMutableDictionary * _nodeErrorsByZoneID;
    id /* block */  _recordDeletedBlock;
    NSMutableArray * _recordResponses;
    NSArray * _recordZoneIDs;
    id /* block */  _recordsChangedBlock;
    NSMutableDictionary * _requestResultsByRecordZoneID;
    bool  _shouldFetchAssetContent;
    NSDictionary * _supplementalChangeTokenByZoneID;
    id /* block */  _zoneAttributesChangedBlock;
    NSMutableDictionary * _zoneIDsByRequestOperationUUID;
}

@property (nonatomic) long long changeTypes;
@property (nonatomic, retain) NSDictionary *configurationsByRecordZoneID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *desiredAssetKeys;
@property (nonatomic) bool fetchChangesForMergeableValues;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *nodeErrorsByZoneID;
@property (nonatomic, copy) id /* block */ recordDeletedBlock;
@property (nonatomic, retain) NSMutableArray *recordResponses;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic, copy) id /* block */ recordsChangedBlock;
@property (nonatomic, retain) NSMutableDictionary *requestResultsByRecordZoneID;
@property (nonatomic, readonly) NSDictionary *resultsByRecordZoneID;
@property (nonatomic) bool shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *supplementalChangeTokenByZoneID;
@property (nonatomic, copy) id /* block */ zoneAttributesChangedBlock;
@property (nonatomic, readonly) NSDictionary *zoneErrorsByZoneID;
@property (nonatomic, retain) NSMutableDictionary *zoneIDsByRequestOperationUUID;

- (void).cxx_destruct;
- (id)_handleRecordChanges:(id)arg1 deltaChanges:(id)arg2 zoneAttributesChange:(id)arg3 forZoneID:(id)arg4;
- (bool)allowsAnonymousAccount;
- (long long)changeTypes;
- (id)configurationsByRecordZoneID;
- (id)desiredAssetKeys;
- (bool)fetchChangesForMergeableValues;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)arg1 recordZoneIDs:(id)arg2 configurationsByRecordZoneID:(id)arg3;
- (bool)isFullZoneRequest;
- (id)nodeErrorsByZoneID;
- (id /* block */)recordDeletedBlock;
- (id)recordResponses;
- (void)recordUsageForDeletedRecordID:(id)arg1 at:(id)arg2;
- (void)recordUsageForRecordID:(id)arg1 at:(id)arg2;
- (id)recordZoneIDs;
- (id /* block */)recordsChangedBlock;
- (void)requestDidComplete;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (bool)requestGETPreAuth;
- (id)requestOperationClasses;
- (id)requestResultsByRecordZoneID;
- (id)resultsByRecordZoneID;
- (void)setChangeTypes:(long long)arg1;
- (void)setConfigurationsByRecordZoneID:(id)arg1;
- (void)setDesiredAssetKeys:(id)arg1;
- (void)setFetchChangesForMergeableValues:(bool)arg1;
- (void)setNodeErrorsByZoneID:(id)arg1;
- (void)setRecordDeletedBlock:(id /* block */)arg1;
- (void)setRecordResponses:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRecordsChangedBlock:(id /* block */)arg1;
- (void)setRequestResultsByRecordZoneID:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setSupplementalChangeTokenByZoneID:(id)arg1;
- (void)setZoneAttributesChangedBlock:(id /* block */)arg1;
- (void)setZoneIDsByRequestOperationUUID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)supplementalChangeTokenByZoneID;
- (id /* block */)zoneAttributesChangedBlock;
- (id)zoneErrorsByZoneID;
- (id)zoneIDsByRequestOperationUUID;
- (id)zoneIDsToLock;

@end
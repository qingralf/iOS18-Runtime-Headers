/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProtocolTranslator : NSObject {
    bool  _addDatabaseScopeToZoneIDs;
    NSString * _containerScopedUserID;
    long long  _databaseScope;
    bool  _dontCreateValidatingParentReferences;
    NSMutableDictionary * _downloadPreauthorizationMap;
    <CKDProtocolTranslatorIdentityDelegate> * _identityDelegate;
    NSString * _orgAdminUserID;
    NSString * _overriddenContainerScopedUserID;
    long long  _overriddenDatabaseScope;
    NSString * _packageStagingDirectory;
    CKDPCSManager * _pcsManager;
}

@property (nonatomic, readonly) bool addDatabaseScopeToZoneIDs;
@property (nonatomic, readonly, copy) NSString *containerScopedUserID;
@property (nonatomic, readonly) long long databaseScope;
@property bool dontCreateValidatingParentReferences;
@property (nonatomic, readonly) NSMutableDictionary *downloadPreauthorizationMap;
@property <CKDProtocolTranslatorIdentityDelegate> *identityDelegate;
@property (nonatomic, readonly, copy) NSString *orgAdminUserID;
@property (copy) NSString *overriddenContainerScopedUserID;
@property long long overriddenDatabaseScope;
@property (nonatomic, readonly) CKDPIdentifier *pUserID;
@property (nonatomic, readonly, copy) NSString *packageStagingDirectory;
@property (nonatomic, readonly) CKDPCSManager *pcsManager;

+ (id)standaloneTranslatorWithPackageStagingDirectory:(id)arg1 databaseScope:(long long)arg2;

- (void).cxx_destruct;
- (id)_capabilitiesFromPCapabilities:(id)arg1 level:(int)arg2;
- (bool)_isDefaultUserNameFromClient:(id)arg1;
- (bool)_isDefaultUserNameFromServer:(id)arg1;
- (id)_pRecordFromRecordSansValues:(id)arg1 forCache:(bool)arg2;
- (bool)_valueTypeIsAnEncryptedBytesTypeForField:(id)arg1;
- (void)addCapability:(id)arg1 to:(id)arg2;
- (bool)addDatabaseScopeToZoneIDs;
- (id)assetFromPAsset:(id)arg1 error:(id*)arg2;
- (id)blockedIdentityFromPBlockedUser:(id)arg1;
- (unsigned long long)capabilitiesFromPZoneCapabilities:(id)arg1;
- (void)consumeResponseHeader:(id)arg1;
- (id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1;
- (id)containerScopedUserID;
- (long long)databaseScope;
- (id)dateFromPDate:(id)arg1;
- (id)deltaMetadataVectorsFromPDistributedTimestamps:(id)arg1 error:(id*)arg2;
- (id)deltaPRecordFromRecord:(id)arg1 withAllFields:(bool)arg2 outDeletedMergeFields:(id*)arg3 outKeysToSend:(id*)arg4;
- (id)deviceCapabilitySetFromPDeviceCapabilitySet:(id)arg1;
- (bool)dontCreateValidatingParentReferences;
- (id)downloadPreauthorizationForResponseUUID:(id)arg1;
- (id)downloadPreauthorizationMap;
- (id)encryptedFieldValueOfType:(int)arg1 withObject:(id)arg2;
- (id)encryptedObjectRepresentationFromFieldValue:(id)arg1;
- (id)featureSetFromPAdopterFeatureSet:(id)arg1 ofFeatureClass:(Class)arg2;
- (id)fieldValueFromObject:(id)arg1;
- (id)fieldValueFromObject:(id)arg1 forCache:(bool)arg2;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2 forCache:(bool)arg3;
- (int)fieldValueTypeFromEncryptedDataObject:(id)arg1 isInList:(bool)arg2;
- (int)fieldValueTypeFromObject:(id)arg1;
- (bool)haveDownloadPreauthorizations;
- (id)identityDelegate;
- (id)identityFromPUser:(id)arg1;
- (id)initInternalWithContainerScopedUserID:(id)arg1 orgAdminUserID:(id)arg2 packageStagingDirectory:(id)arg3 databaseScope:(long long)arg4 addDatabaseScopeToZoneIDs:(bool)arg5 pcsManager:(id)arg6;
- (id)initWithContainer:(id)arg1 databaseScope:(long long)arg2;
- (id)initWithContainer:(id)arg1 databaseScope:(long long)arg2 requireContainerScopedUserID:(bool)arg3;
- (id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)mergeableDeltaFromPDelta:(id)arg1 valueID:(id)arg2 error:(id*)arg3;
- (id)mergeableDeltaMetadataFromPMetadata:(id)arg1 mergeableValueID:(id)arg2 error:(id*)arg3;
- (id)mergeableRecordValueFromPRecordField:(id)arg1 inPRecordIdentifier:(id)arg2 asAnonymousCKUserID:(id)arg3 error:(id*)arg4;
- (id)mergeableValueIDFromPMergeableValueIdentifier:(id)arg1 recordName:(id)arg2 fieldName:(id)arg3 encrypted:(bool)arg4 error:(id*)arg5;
- (id)notificationFromPPushMessage:(id)arg1;
- (bool)objectIsAnEncryptedType:(id)arg1;
- (id)objectRepresentationFromField:(id)arg1 inRecord:(id)arg2 asAnonymousCKUserID:(id)arg3;
- (id)objectRepresentationFromFieldValue:(id)arg1;
- (id)orgAdminUserID;
- (id)overriddenContainerScopedUserID;
- (long long)overriddenDatabaseScope;
- (id)pAdopterFeatureSetFromFeatureSet:(id)arg1;
- (id)pAdopterFeatureSetFromRequiredFeatures:(id)arg1;
- (id)pAliasWithEmailAddress:(id)arg1;
- (id)pAliasWithHashedStringID:(id)arg1 type:(int)arg2;
- (id)pAliasWithIdentityLookupInfo:(id)arg1;
- (id)pAliasWithPhoneNumber:(id)arg1;
- (id)pAliasWithUserRecordID:(id)arg1;
- (id)pAssetFromAsset:(id)arg1;
- (id)pBlockedUserFromShareBlockedIdentity:(id)arg1;
- (id)pCapabilitiesFrom:(id)arg1;
- (id)pContainerScopedRecordIdentifierWithPRecordIdentifier:(id)arg1;
- (id)pContainerScopedRecordZoneIdentifierFromFromPRecordZoneIdentifier:(id)arg1;
- (id)pContainerScopedUserIdentifierFromPUserIdentifier:(id)arg1;
- (id)pDateFromDate:(id)arg1;
- (id)pDeviceCapabilitiesFromDeviceCapabilitySet:(id)arg1 withDeviceID:(id)arg2;
- (id)pEncryptedMergeableValueFromRecordValue:(id)arg1;
- (id)pFieldActionWithLocation:(long long)arg1 length:(unsigned long long)arg2 values:(id)arg3;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2 forCache:(bool)arg3;
- (id)pIdentifierFromUserRecordID:(id)arg1;
- (id)pMergeableDeltaFromDelta:(id)arg1 error:(id*)arg2;
- (id)pMergeableDeltaMetadataFromMetadata:(id)arg1 mergeableValueID:(id)arg2 error:(id*)arg3;
- (id)pMergeableValueFromMergeableValueID:(id)arg1;
- (id)pMergeableValueIdentifierFromMergeableValueID:(id)arg1;
- (id)pPackageFromPackage:(id)arg1;
- (id)pParticipantFromShareParticipant:(id)arg1 forCache:(bool)arg2;
- (id)pProtectionInfoKeysToRemoveFromPCSKeysToRemove:(id)arg1;
- (id)pQueryFromQuery:(id)arg1 error:(id*)arg2;
- (id)pRecordFromRecord:(id)arg1;
- (id)pRecordFromRecord:(id)arg1 forCache:(bool)arg2;
- (id)pRecordIdentifierFromRecordID:(id)arg1;
- (id)pRecordIdentifierFromUserRecordName:(id)arg1;
- (id)pRecordZoneFromRecordZone:(id)arg1;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1;
- (id)pReferenceFromReference:(id)arg1 error:(id*)arg2;
- (id)pRequesterFromShareRequester:(id)arg1;
- (id)pShareFromShare:(id)arg1 forCache:(bool)arg2;
- (id)pShareIdentifierFromRecordID:(id)arg1;
- (id)pShareUsageFromShareRecordID:(id)arg1 at:(id)arg2 withDeviceID:(id)arg3;
- (id)pSignedVersionedBlobFrom:(id)arg1 signature:(id)arg2;
- (id)pStreamingAssetFromStreamingAsset:(id)arg1 forCache:(bool)arg2;
- (id)pSubscriptionFromSubscription:(id)arg1 error:(id*)arg2;
- (id)pUserID;
- (id)pUserIdentifierFromUserRecordName:(id)arg1;
- (id)pZoneCryptoFeatureRequirmentsFromZone:(id)arg1;
- (id)pZoneUsageFromZoneID:(id)arg1 at:(id)arg2 withDeviceID:(id)arg3;
- (id)packageFromPPackage:(id)arg1 error:(id*)arg2;
- (id)packageStagingDirectory;
- (id)pcsKeysToRemoveFromPProtectionInfoKeysToRemove:(id)arg1;
- (id)pcsManager;
- (id)recordFromPRecord:(id)arg1 asAnonymousCKUserID:(id)arg2 error:(id*)arg3;
- (id)recordFromPRecord:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPRecordIdentifier:(id)arg1 asAnonymousCKUserID:(id)arg2 error:(id*)arg3;
- (id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPShareIdentifier:(id)arg1 asAnonymousCKUserID:(id)arg2 error:(id*)arg3;
- (id)recordIDFromPShareIdentifier:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPUserName:(id)arg1 error:(id*)arg2;
- (id)recordZoneFromPRecordZone:(id)arg1 asAnonymousCKUserID:(id)arg2 databaseScope:(long long)arg3 error:(id*)arg4;
- (id)recordZoneFromPRecordZone:(id)arg1 error:(id*)arg2;
- (id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 asAnonymousCKUserID:(id)arg2 error:(id*)arg3;
- (id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id*)arg2;
- (id)referenceFromPReference:(id)arg1 asAnonymousCKUserID:(id)arg2 error:(id*)arg3;
- (id)referenceFromPReference:(id)arg1 error:(id*)arg2;
- (id)requiredFeatureSetFromPAdopterFeatureSet:(id)arg1;
- (void)setDontCreateValidatingParentReferences:(bool)arg1;
- (void)setDownloadPreauthorization:(id)arg1 forResponseUUID:(id)arg2;
- (void)setIdentityDelegate:(id)arg1;
- (void)setOverriddenContainerScopedUserID:(id)arg1;
- (void)setOverriddenDatabaseScope:(long long)arg1;
- (id)shareFromPShare:(id)arg1 asAnonymousCKUserID:(id)arg2 error:(id*)arg3;
- (id)shareFromPShare:(id)arg1 error:(id*)arg2;
- (id)shareParticipantFromPParticipant:(id)arg1 shareID:(id)arg2 error:(id*)arg3;
- (id)shareRequesterFromPRequester:(id)arg1;
- (id)streamingAssetFromPStreamingAsset:(id)arg1 error:(id*)arg2;
- (id)subscriptionFromPSubscription:(id)arg1 error:(id*)arg2;
- (id)userNameFromPIdentifier:(id)arg1 error:(id*)arg2;

@end

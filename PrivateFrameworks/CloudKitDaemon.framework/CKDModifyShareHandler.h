/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyShareHandler : CKDModifyRecordHandler {
    bool  _haveAddedOwnerToShare;
    bool  _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
    struct _PCSPublicIdentityData { } * _selfPPPCSOwnerIdentity;
    struct _OpaquePCSShareProtection { } * _selfParticipantPCS;
}

@property (nonatomic) bool haveAddedOwnerToShare;
@property (nonatomic) bool isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property (nonatomic, readonly) CKShare *share;
@property (nonatomic, readonly) CKRecordID *shareID;

+ (id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2;
+ (id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2;

- (void)_addPublicKeyToSelfParticipantWithCompletionHandler:(id /* block */)arg1;
- (bool)_addedPrivateParticipantNeedsAManateeInvitation:(id)arg1;
- (void)_alignParticipantPermissions;
- (bool)_cleanPublicPCSforShareWithError:(id*)arg1;
- (id)_createNewSharePCSDataWithError:(id*)arg1;
- (id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(id /* block */)arg1;
- (void)_fetchSharePCSData;
- (id)_handleSharePCSData:(id)arg1 zonePCSData:(id)arg2;
- (bool)_modifyRoleForParticipant:(id)arg1 invitedPCS:(struct _OpaquePCSShareProtection { }*)arg2 shareeIdentities:(id)arg3 error:(id*)arg4;
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)arg1 error:(id)arg2;
- (id)_publicKeyForParticipant:(id)arg1 error:(id*)arg2;
- (id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (bool)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (id)_removePublicKey:(id)arg1 fromInvitedPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)arg1 zonePCSData:(id)arg2;
- (bool)_serializePCSDataForShareWithError:(id*)arg1;
- (bool)_setupParticipantsProtectionInfos:(id*)arg1;
- (bool)_updateSharePublicPCSWithError:(id*)arg1;
- (void)clearProtectionDataForRecord;
- (struct _PCSPublicIdentityData { }*)createPublicIdentityFromPublicKeyForParticipant:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)decryptSelfParticipantPCSWithCompletionHandler:(id /* block */)arg1;
- (void)fetchSharePCSData;
- (bool)haveAddedOwnerToShare;
- (unsigned long long)invitedPCSPermissionForParticipant:(id)arg1;
- (bool)isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
- (bool)isCloudDocsContainer;
- (bool)isShare;
- (void)noteSideEffectRecordAbsent:(id)arg1;
- (void)noteSideEffectRecordPendingDelete:(id)arg1;
- (void)noteSideEffectRecordPendingModify:(id)arg1;
- (void)prepareForSaveWithCompletionHandler:(id /* block */)arg1;
- (void)savePCSDataToCache;
- (unsigned long long)serviceType;
- (void)setHaveAddedOwnerToShare:(bool)arg1;
- (void)setIsALegacyPublicShareThatNeedsOwnerPPPCSUpgrade:(bool)arg1;
- (void)setServerRecord:(id)arg1;
- (id)share;
- (id)shareID;
- (id)sideEffectRecordIDs;
- (void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2;

@end
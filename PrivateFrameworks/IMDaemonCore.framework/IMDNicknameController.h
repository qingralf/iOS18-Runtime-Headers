/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDNicknameController : NSObject <IDSServiceDelegate, IMUnlockMonitorListener> {
    NSMutableDictionary * _activeNicknameRecords;
    NSMutableDictionary * _archivedNicknames;
    IDSKVStore * _archivedNicknamesKVStore;
    CHManager * _callHistoryManager;
    NSMutableArray * _chatsToSendNicknameInfoTo;
    IDSKVStore * _cloudkitRecordsKVStore;
    NSMutableSet * _handleAllowList;
    NSMutableSet * _handleDenyList;
    IDSKVStore * _handleSharingKVStore;
    NSMutableSet * _handleTransitionedList;
    NSMutableDictionary * _handledNicknames;
    IDSKVStore * _handledNicknamesKVStore;
    NSMutableDictionary * _ignoredNicknameRecords;
    double  _lastMeContactStoreSync;
    bool  _needToLoadMapsInfoFromDisk;
    bool  _nicknameIsUploadingToCK;
    IDSKVStore * _nicknameRecordsKVStore;
    IDSService * _nicknameService;
    NSMutableDictionary * _pendingNicknameUpdates;
    IDSKVStore * _pendingNicknameUpdatesKVStore;
    IMNickname * _personalNickname;
    NSMutableDictionary * _unknownSenderRecordInfo;
    IDSKVStore * _unknownSenderRecordInfoKVStore;
}

@property (nonatomic, retain) NSMutableDictionary *activeNicknameRecords;
@property (nonatomic, readonly) NSDictionary *activeRecords;
@property (nonatomic, readonly) NSSet *allowListedHandlesForSharing;
@property (nonatomic, retain) NSMutableDictionary *archivedNicknames;
@property (nonatomic, retain) IDSKVStore *archivedNicknamesKVStore;
@property (nonatomic, retain) CHManager *callHistoryManager;
@property (nonatomic, retain) NSMutableArray *chatsToSendNicknameInfoTo;
@property (nonatomic, retain) IDSKVStore *cloudkitRecordsKVStore;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSSet *denyListedHandlesForSharing;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *handleAllowList;
@property (nonatomic, retain) NSMutableSet *handleDenyList;
@property (nonatomic, retain) IDSKVStore *handleSharingKVStore;
@property (nonatomic, retain) NSMutableSet *handleTransitionedList;
@property (nonatomic, retain) NSMutableDictionary *handledNicknames;
@property (nonatomic, retain) IDSKVStore *handledNicknamesKVStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *ignoredNicknameRecords;
@property (nonatomic, readonly) NSDictionary *ignoredRecords;
@property (nonatomic) double lastMeContactStoreSync;
@property (nonatomic) bool needToLoadMapsInfoFromDisk;
@property (nonatomic) bool nicknameIsUploadingToCK;
@property (nonatomic, retain) IDSKVStore *nicknameRecordsKVStore;
@property (nonatomic, retain) IDSService *nicknameService;
@property (nonatomic, retain) NSMutableDictionary *pendingNicknameUpdates;
@property (nonatomic, retain) IDSKVStore *pendingNicknameUpdatesKVStore;
@property (nonatomic, retain) IMNickname *personalNickname;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *transitionedHandles;
@property (nonatomic, retain) NSMutableDictionary *unknownSenderRecordInfo;
@property (nonatomic, retain) IDSKVStore *unknownSenderRecordInfoKVStore;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)NicknameWithRecordID:(id)arg1 URI:(id)arg2 decryptionKey:(id)arg3 wallpaperDataTag:(id)arg4 wallpaperLowResDataTag:(id)arg5 wallpaperMetadataTag:(id)arg6 hasWallpaperUpdate:(bool)arg7 dropNicknameForUnknownContacts:(bool)arg8 withCompletionBlock:(id /* block */)arg9;
- (void)_beginNicknameUpload:(id)arg1;
- (void)_broadcastActiveListChanged;
- (void)_broadcastNicknamesMapChanged;
- (void)_ckAccountChanged:(id)arg1;
- (void)_clearActiveNicknameRecords;
- (void)_clearIgnoredNicknameRecords;
- (void)_clearSharingLists;
- (void)_clearTransitionedList;
- (void)_deleteAvatarForNickname:(id)arg1;
- (void)_deleteDataUnderScrutiny;
- (void)_deleteHandleIDFromArchivedMap:(id)arg1;
- (void)_deleteHandleIDFromHandledMap:(id)arg1;
- (void)_deleteHandleIDFromPendingMap:(id)arg1;
- (void)_deleteNicknameFromPendingMap:(id)arg1;
- (void)_deleteOnDiskDataIfNeededForNickname:(id)arg1 withNewNickname:(id)arg2;
- (void)_deletePendingNicknameForUpload;
- (void)_deletePublicNicknameLocationAndKey;
- (bool)_deviceUnderFirstUnlock;
- (id)_diffActiveRecords:(id)arg1 againstPrevious:(id)arg2;
- (void)_endNicknameUpload;
- (void)_evaluateIfAccountHasMultiplePhoneNumbers;
- (void)_getDevicesForBothNicknameServices:(id)arg1 removeNewServiceURIsFromIMessageList:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)_getPendingNicknameForUpload;
- (id)_idsDeviceFromPushToken:(id)arg1;
- (bool)_isActiveForNickname:(id)arg1;
- (bool)_isNicknamesSharingEnabled;
- (bool)_isUnderScrutiny;
- (void)_loadAllInfoFromDiskIfAble;
- (void)_makeAllNicknameContentsClassC;
- (void)_markCurrentNicknameAsArchived:(id)arg1 incrementPendingNicknameVersion:(bool)arg2;
- (void)_markNicknamePhotoAsUpdated:(id)arg1;
- (void)_markPendingNicknameAsCurrent:(id)arg1 incrementPendingNicknameVersion:(bool)arg2 updateType:(unsigned long long)arg3 broadcastUpdates:(bool)arg4;
- (void)_newDeviceDidSignIntoiMessageWithRetryCount:(unsigned long long)arg1;
- (bool)_nicknameFeatureEnabled;
- (bool)_populateNicknameDictionary:(id)arg1 forKVStore:(id)arg2 limitToLoad:(unsigned long long)arg3;
- (void)_removeFromList:(id)arg1 withKey:(id)arg2;
- (void)_removeFromTransitionedList:(id)arg1;
- (void)_replaceUnknownSenderRecordInfoListWithInfo:(id)arg1 purgeIfNeeded:(bool)arg2;
- (bool)_requestingToSendLocalNicknameInfo:(id)arg1;
- (void)_resetHandleSharingList;
- (void)_retryPeerRequestWithRetry:(unsigned long long)arg1;
- (unsigned long long)_reuploadLocalProfileVersionNumber;
- (bool)_sendMessageDictionary:(id)arg1 toDevice:(id)arg2;
- (bool)_sendMessageDictionary:(id)arg1 toDevice:(id)arg2 sendType:(unsigned long long)arg3;
- (void)_setUnderScrutiny:(bool)arg1;
- (void)_showDebugAlertWithHeader:(id)arg1 message:(id)arg2;
- (void)_storePendingNicknameForUpload:(id)arg1;
- (void)_storePublicNickname:(id)arg1 nicknameLocation:(id)arg2 encryptionKey:(id)arg3 wallpaperDataTag:(id)arg4 wallpaperLowResDataTag:(id)arg5 wallpaperMetadataTag:(id)arg6;
- (void)_syncActiveNicknameRecordsToOtherDevices;
- (void)_syncHandleAllowDenyListToOtherDevices;
- (void)_syncHandleTransitionedListToOtherDevices;
- (void)_syncIgnoredNicknameRecordsToOtherDevices;
- (void)_tryToReuploadPersonalNicknameWithRetryCount:(unsigned long long)arg1 reuploadVersion:(unsigned long long)arg2;
- (id)_typeOfNicknameUpdateToShare;
- (void)_updateActiveList:(id)arg1 withRecords:(id)arg2 broadcastUpdates:(bool)arg3;
- (void)_updateActiveNicknameRecordsListIfNeeded:(id)arg1;
- (void)_updateCloudKitRecordIDAndDecryptionKeyIfNeeded:(id)arg1;
- (void)_updateDenyAllowListHandlesVersion;
- (void)_updateHandleDenyAllowListIfNeeded:(id)arg1;
- (void)_updateHandleList:(id)arg1 withHandles:(id)arg2 forKey:(id)arg3 broadcastUpdates:(bool)arg4;
- (void)_updateHandleTransitionedListIfNeeded:(id)arg1;
- (void)_updateIgnoredList:(id)arg1 withRecords:(id)arg2 broadcastUpdates:(bool)arg3;
- (void)_updateIgnoredNicknameRecordsListIfNeeded:(id)arg1;
- (void)_updateIsActiveListHandlesVersion;
- (void)_updateIsIgnoredListHandlesVersion;
- (void)_updateMessageDictionaryWithNicknameUpdateRecordIDs:(id)arg1;
- (void)_updateMessageDictionaryWithPendingNicknameUpdates:(id)arg1;
- (void)_updateNameOnlyUpdateForMessage:(id)arg1 fromHandleID:(id)arg2;
- (void)_updateNicknameInArchivedMap:(id)arg1;
- (void)_updateNicknameInHandledMap:(id)arg1 updateType:(unsigned long long)arg2 broadcastUpdates:(bool)arg3;
- (void)_updateNicknameListsIfNeeded:(id)arg1;
- (void)_updatePendingNicknameVersion;
- (void)_updateSharingPreferencesIfNeededFromMadridMessage:(id)arg1;
- (void)_updateTransitionList:(id)arg1 withHandles:(id)arg2 forKey:(id)arg3 broadcastUpdates:(bool)arg4;
- (void)_updateTransitionedListHandlesVersion;
- (void)_uploadPendingNicknameIfNecessary;
- (void)_writeNicknameToKVStore:(id)arg1 nickname:(id)arg2;
- (void)acceptPendingNicknameForHandleID:(id)arg1 updateType:(unsigned long long)arg2;
- (id)activeNicknameRecords;
- (id)activeRecords;
- (void)addNicknameToPendingUpdates:(id)arg1;
- (void)aliasesDidChange:(bool)arg1;
- (id)allNicknames;
- (void)allowHandlesForSharing:(id)arg1 onChatGUIDs:(id)arg2 fromHandle:(id)arg3 forceSend:(bool)arg4;
- (id)allowListedHandlesForSharing;
- (id)archivedNicknames;
- (id)archivedNicknamesKVStore;
- (void)broadcastHandlesSharingNicknamesDidChange;
- (void)broadcastTransitionedHandlesDidChange;
- (id)callHistoryManager;
- (id)chatsToSendNicknameInfoTo;
- (void)cleanUpNicknameForIDs:(id)arg1;
- (void)clearPendingNicknameForHandleID:(id)arg1;
- (void)clearPendingNicknamePhotoForHandleID:(id)arg1;
- (id)cloudkitRecordsKVStore;
- (void)currentPersonalNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 wallpaperDataTag:(id)arg3 wallpaperLowResDataTag:(id)arg4 wallpaperMetadataTag:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)currentPersonalNicknamewithCompletionBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)defaults;
- (void)deleteAllPersonalNicknames:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)denyHandlesForSharing:(id)arg1;
- (id)denyListedHandlesForSharing;
- (void)deviceSignedOutOfiMessage;
- (bool)evaluateAccountStateForFeatureEligibility;
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 wallpaperDataTag:(id)arg3 wallpaperLowResDataTag:(id)arg4 wallpaperMetadataTag:(id)arg5 isKnownSender:(bool)arg6 shouldDecodeImageFields:(bool)arg7 completionBlock:(id /* block */)arg8;
- (id)handleAllowList;
- (id)handleDenyList;
- (void)handleNicknameUpdatesFromPeerDevice:(id)arg1 fromPeerDevice:(id)arg2;
- (id)handleSharingKVStore;
- (id)handleTransitionedList;
- (id)handledNicknames;
- (id)handledNicknamesKVStore;
- (void)ignorePendingNicknameForHandleID:(id)arg1;
- (id)ignoredNicknameRecords;
- (id)ignoredRecords;
- (id)init;
- (double)lastMeContactStoreSync;
- (void)loadHandledTransitioned;
- (id)loadListForKey:(id)arg1 list:(id)arg2;
- (void)loadNicknamesFromKVStore;
- (void)loadPersonalNicknameIfNeeded;
- (void)loadSharingHandlesPrefs;
- (void)loadUnknownSenderRecordInfoFromKVStore;
- (id)lowResWallpaperDataTag;
- (void)markAllNicknamesAsPending;
- (void)markHandlesAsAllowed:(id)arg1;
- (void)markNicknameAsUpdated:(id)arg1;
- (void)markNicknamesAsTransitionedForHandleIDs:(id)arg1 isAutoUpdate:(bool)arg2;
- (void)markProfileRecords:(id)arg1 asActive:(bool)arg2;
- (void)markProfileRecordsAsIgnored:(id)arg1 broadcastUpdates:(bool)arg2;
- (id)messageDictionaryWithPersonalRecordIDAndVersion;
- (bool)needToLoadMapsInfoFromDisk;
- (void)newDeviceDidSignIntoiMessage;
- (id)newNicknameInfoToSend;
- (id)nickNameDecryptionKey;
- (id)nickNameRecordID;
- (id)nicknameForHandle:(id)arg1;
- (id)nicknameForHandleURI:(id)arg1;
- (id)nicknameForRecordID:(id)arg1;
- (id)nicknameForRecordID:(id)arg1 handle:(id)arg2;
- (bool)nicknameIsUploadingToCK;
- (id)nicknameRecordsKVStore;
- (id)nicknameService;
- (id)pendingNicknameUpdates;
- (id)pendingNicknameUpdatesKVStore;
- (id)pendingPersonalNickname;
- (id)personalNickname;
- (void)purgeUnknownSenderRecordInfoIfNeeded;
- (void)queueChatToSendNicknamePostUploadIfNeeded:(id)arg1;
- (bool)replacedNicknameForHandleIDInHandledMapIfNeeded:(id)arg1 nickname:(id)arg2;
- (void)reuploadProfileIfNeeded;
- (void)saveNicknameForRecordID:(id)arg1 handleID:(id)arg2 userNickname:(id)arg3;
- (void)sendNameOnlyToHandleIDs:(id)arg1 fromHandleID:(id)arg2;
- (void)sendNicknamePreferencesDidChange;
- (void)sendPendingNicknameUpdatesDidChange;
- (void)sendPersonalNicknameRecordIDAndVersionRequestedByDevice:(id)arg1;
- (void)sendPersonalNicknameRecordIDAndVersionToAllPeers;
- (void)sendPersonalNicknameToRecipients:(id)arg1 chatGUID:(id)arg2 fromHandle:(id)arg3;
- (void)sendPersonalNicknameToRecipients:(id)arg1 chatGUID:(id)arg2 fromHandle:(id)arg3 onlySendToThoseLoggedOutOfIMessage:(bool)arg4;
- (void)sendPersonalNicknameToRecipients:(id)arg1 chatGUID:(id)arg2 fromHandle:(id)arg3 onlyUseNicknameSendingService:(bool)arg4;
- (void)sendPersonalNicknameToRecipients:(id)arg1 chatGUID:(id)arg2 fromHandle:(id)arg3 onlyUseNicknameSendingService:(bool)arg4 onlySendToThoseLoggedOutOfIMessage:(bool)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
- (void)setActiveNicknameRecords:(id)arg1;
- (void)setArchivedNicknames:(id)arg1;
- (void)setArchivedNicknamesKVStore:(id)arg1;
- (void)setCallHistoryManager:(id)arg1;
- (void)setChatsToSendNicknameInfoTo:(id)arg1;
- (void)setCloudkitRecordsKVStore:(id)arg1;
- (void)setHandleAllowList:(id)arg1;
- (void)setHandleDenyList:(id)arg1;
- (void)setHandleSharingKVStore:(id)arg1;
- (void)setHandleTransitionedList:(id)arg1;
- (void)setHandledNicknames:(id)arg1;
- (void)setHandledNicknamesKVStore:(id)arg1;
- (void)setIgnoredNicknameRecords:(id)arg1;
- (void)setLastMeContactStoreSync:(double)arg1;
- (void)setNeedToLoadMapsInfoFromDisk:(bool)arg1;
- (void)setNicknameIsUploadingToCK:(bool)arg1;
- (void)setNicknameRecordsKVStore:(id)arg1;
- (void)setNicknameService:(id)arg1;
- (void)setPendingNicknameUpdates:(id)arg1;
- (void)setPendingNicknameUpdatesKVStore:(id)arg1;
- (void)setPersonalNickname:(id)arg1;
- (void)setPersonalNickname:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setUnknownSenderRecordInfo:(id)arg1;
- (void)setUnknownSenderRecordInfoKVStore:(id)arg1;
- (id)storedPersonalNickname;
- (id)substringRecordIDForNickname:(id)arg1;
- (void)systemDidLeaveFirstDataProtectionLock;
- (id)transferServicesController;
- (id)transitionedHandles;
- (id)unknownSenderRecordInfo;
- (id)unknownSenderRecordInfoFor:(id)arg1;
- (id)unknownSenderRecordInfoKVStore;
- (void)verifyTruncatedRecordIDMatchesPersonalNickname:(id)arg1 forChat:(id)arg2;
- (id)wallpaperDataTag;
- (id)wallpaperMetadataTag;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLMessagesMigrator : NSObject <WLAnalyticsDataSource, WLDataclassMigrating> {
    NSString * _accountGuid;
    struct sqlite3 { } * _database;
    WLFeaturePayload * _featurePayload;
    WLSQLController * _sqlController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WLSQLController *sqlController;
@property (readonly) Class superclass;

+ (id)_attachmentPersistentPathForGuid:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 uti:(id)arg4;
+ (id)contentType;

- (void).cxx_destruct;
- (long long)_attachmentDateWithMessage:(id)arg1;
- (bool)_beginTransaction;
- (id)_chatAccountIDWithMessage:(id)arg1;
- (id)_chatAccountLoginWithMessage:(id)arg1;
- (id)_chatDisplayNameWithMessage:(id)arg1;
- (id)_chatGUIDWithGroupRoomName:(id)arg1;
- (id)_chatGUIDWithNonGroupMessage:(id)arg1;
- (id)_chatGroupIDWithNonGroupMessage:(id)arg1;
- (long long)_chatIDForHandleIDs:(id)arg1 groupRoomName:(id)arg2 groupID:(id)arg3 message:(id)arg4;
- (id)_chatIdentifierWithNonGroupMessage:(id)arg1;
- (id)_chatLastAddressedHandleWithMessage:(id)arg1;
- (id)_chatPropertiesDataWithMessage:(id)arg1;
- (id)_chatServiceWithMessage:(id)arg1;
- (long long)_chatStateWithMessage:(id)arg1;
- (long long)_chatStyleWithMessage:(id)arg1;
- (void)_closeDatabase;
- (bool)_commitTransaction;
- (id)_databaseFilename;
- (long long)_handleIDFromNonGroupMessageHandleIDs:(id)arg1;
- (id)_handleIDsForMessage:(id)arg1;
- (bool)_insertChatHandleJoinRowWithChatID:(long long)arg1 handleID:(long long)arg2 duplicateMightExist:(bool)arg3;
- (bool)_insertChatMessageJoinRowWithChatID:(long long)arg1 messageID:(long long)arg2 date:(long long)arg3;
- (bool)_insertMessage:(id)arg1;
- (bool)_insertMessageAttachmentJoinRowWithMessageID:(long long)arg1 attachmentID:(long long)arg2;
- (long long)_insertMessageRowWithMessage:(id)arg1 handleIDs:(id)arg2 groupRoomName:(id)arg3;
- (long long)_insertRowWithAttachment:(id)arg1 filePath:(id)arg2 forMessage:(id)arg3;
- (id)_messageAccountGUIDWithMessage:(id)arg1;
- (id)_messageAccountWithMessage:(id)arg1;
- (id)_messageAttributedBodyDataWithMessage:(id)arg1;
- (long long)_messageDateDeliveredWithMessage:(id)arg1;
- (long long)_messageDateReadWithMessage:(id)arg1;
- (long long)_messageDateWithMessage:(id)arg1;
- (long long)_messageErrorWithMessage:(id)arg1;
- (id)_messageGroupTitleWithMessage:(id)arg1;
- (bool)_messageIsFromMeWithMessage:(id)arg1;
- (id)_messageServiceCenterWithMessage:(id)arg1;
- (id)_messageServiceWithMessage:(id)arg1;
- (id)_messageSubjectWithMessage:(id)arg1;
- (long long)_messageVersionWithMessage:(id)arg1;
- (bool)_openDatabase;
- (id)_otherPartyAddressWithNonGroupMessage:(id)arg1;
- (id)_ourAddressWithMessage:(id)arg1;
- (bool)_performSimpleQuery:(id)arg1;
- (bool)_rollbackTransaction;
- (long long)_senderHandleIDFromReceviedGroupMessageHandleIDs:(id)arg1;
- (id)_serviceStringWithMessage:(id)arg1;
- (id)_sortedHandleIDs:(id)arg1;
- (id)_uncanonicalizedIDWithMessage:(id)arg1;
- (id)_uniqueHandleStringsWithMessage:(id)arg1;
- (void)_updateClient;
- (bool)accountBased;
- (void)addWorkingTime:(unsigned long long)arg1;
- (id)contentType;
- (id)dataType;
- (void)deleteData;
- (void)deleteFromTable:(id)arg1;
- (void)enable;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (id)featurePayload;
- (id)importDidEnd;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)importWillBegin;
- (id)initWithSQLController:(id)arg1;
- (bool)isValidTableName:(id)arg1;
- (void)performPreImportPhaseForSummary:(id)arg1 data:(id)arg2;
- (void)setEstimatedDataSize:(unsigned long long)arg1;
- (void)setFeaturePayload:(id)arg1;
- (void)setSqlController:(id)arg1;
- (void)setState:(id)arg1;
- (id)sqlController;
- (bool)storeRecordDataInDatabase;
- (bool)wantsSegmentedDownloads;

@end

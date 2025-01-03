/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordsURLRequest : CKDURLRequest {
    bool  _atomic;
    NSData * _clientChangeTokenData;
    NSDictionary * _conflictLosersToResolveByRecordID;
    bool  _containsMergeableValues;
    bool  _markAsParticipantNeedsNewInvitationToken;
    id /* block */  _mergeableDeltaSavedBlock;
    NSMutableDictionary * _mergeableFieldKeyByRequestID;
    bool  _oplock;
    NSDictionary * _pluginFieldsForRecordDeletesByID;
    NSMutableDictionary * _recordByRequestID;
    NSMutableDictionary * _recordIDByRequestID;
    NSArray * _recordIDsToDelete;
    NSDictionary * _recordIDsToDeleteToEtags;
    NSDictionary * _recordIDsToDeleteToSigningPCSIdentity;
    id /* block */  _recordPostedBlock;
    NSArray * _records;
    id /* block */  _replacedDeltasBlock;
    NSMutableDictionary * _replacementRequestsByRequestID;
    NSDictionary * _requestedFieldsByRecordID;
    bool  _sendAllFields;
    bool  _sendMergeableDeltas;
    NSMutableArray * _skippedRecordsWithPurelyMergeableChanges;
    NSArray * _userPublicKeys;
}

@property (nonatomic) bool atomic;
@property (nonatomic, retain) NSData *clientChangeTokenData;
@property (nonatomic, retain) NSDictionary *conflictLosersToResolveByRecordID;
@property (nonatomic) bool containsMergeableValues;
@property (nonatomic) bool markAsParticipantNeedsNewInvitationToken;
@property (nonatomic, copy) id /* block */ mergeableDeltaSavedBlock;
@property (nonatomic, retain) NSMutableDictionary *mergeableFieldKeyByRequestID;
@property (nonatomic) bool oplock;
@property (nonatomic, retain) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic, retain) NSMutableDictionary *recordByRequestID;
@property (nonatomic, retain) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, retain) NSDictionary *recordIDsToDeleteToSigningPCSIdentity;
@property (nonatomic, copy) id /* block */ recordPostedBlock;
@property (nonatomic, retain) NSArray *records;
@property (nonatomic, copy) id /* block */ replacedDeltasBlock;
@property (nonatomic, retain) NSMutableDictionary *replacementRequestsByRequestID;
@property (nonatomic, retain) NSDictionary *requestedFieldsByRecordID;
@property (nonatomic) bool sendAllFields;
@property (nonatomic) bool sendMergeableDeltas;
@property (nonatomic, retain) NSMutableArray *skippedRecordsWithPurelyMergeableChanges;
@property (nonatomic, retain) NSArray *userPublicKeys;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (bool)atomic;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (bool)containsMergeableValues;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateMergeableDeltaSaveOperationsForRecord:(id)arg1 error:(id*)arg2;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)arg1 recordsToSave:(id)arg2 recordIDsToDelete:(id)arg3 recordIDsToDeleteToSigningPCSIdentity:(id)arg4 oplock:(bool)arg5 sendAllFields:(bool)arg6 clientChangeTokenData:(id)arg7 requestedFieldsByRecordId:(id)arg8;
- (int)isolationLevel;
- (bool)markAsParticipantNeedsNewInvitationToken;
- (id /* block */)mergeableDeltaSavedBlock;
- (id)mergeableFieldKeyByRequestID;
- (bool)oplock;
- (id)pluginFieldsForRecordDeletesByID;
- (id)recordByRequestID;
- (id)recordIDByRequestID;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordIDsToDeleteToSigningPCSIdentity;
- (id)recordIDsUsedInZones:(id)arg1;
- (id /* block */)recordPostedBlock;
- (id)records;
- (id /* block */)replacedDeltasBlock;
- (id)replacementRequestsByRequestID;
- (void)requestDidComplete;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestedFieldsByRecordID;
- (bool)requiresCKAnonymousSignature;
- (id)returnVerificationKeyAndSignatureForRequestOperation:(id)arg1 dataToBeSigned:(id)arg2 error:(id*)arg3;
- (bool)sendAllFields;
- (bool)sendMergeableDeltas;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setContainsMergeableValues:(bool)arg1;
- (void)setMarkAsParticipantNeedsNewInvitationToken:(bool)arg1;
- (void)setMergeableDeltaSavedBlock:(id /* block */)arg1;
- (void)setMergeableFieldKeyByRequestID:(id)arg1;
- (void)setOplock:(bool)arg1;
- (void)setPluginFieldsForRecordDeletesByID:(id)arg1;
- (void)setRecordByRequestID:(id)arg1;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordIDsToDeleteToSigningPCSIdentity:(id)arg1;
- (void)setRecordPostedBlock:(id /* block */)arg1;
- (void)setRecords:(id)arg1;
- (void)setReplacedDeltasBlock:(id /* block */)arg1;
- (void)setReplacementRequestsByRequestID:(id)arg1;
- (void)setRequestedFieldsByRecordID:(id)arg1;
- (void)setSendAllFields:(bool)arg1;
- (void)setSendMergeableDeltas:(bool)arg1;
- (void)setSkippedRecordsWithPurelyMergeableChanges:(id)arg1;
- (void)setUserPublicKeys:(id)arg1;
- (id)skippedRecordsWithPurelyMergeableChanges;
- (id)userPublicKeys;
- (id)zoneIDsToLock;

@end

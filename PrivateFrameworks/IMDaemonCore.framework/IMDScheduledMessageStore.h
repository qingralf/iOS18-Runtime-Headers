/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDScheduledMessageStore : IMDMessageStore

@property (nonatomic, readonly) CKRecordZoneID *recordZoneID;

- (void)clearTombstonesForRecordIDs:(id)arg1;
- (id)init;
- (id)messageRecordsToUploadToCloudKitWithFilter:(unsigned long long)arg1 limit:(long long)arg2;
- (id)recordIDsAndGUIDsToDeleteWithLimit:(long long)arg1;
- (id)recordZoneID;

@end
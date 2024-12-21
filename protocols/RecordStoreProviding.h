/* Generated by RuntimeBrowser.
 */

@protocol RecordStoreProviding

@required

- (NSDictionary *)batchOfRecordsToWriteWithFilter:(unsigned long long)arg1 limit:(long long)arg2 error:(id*)arg3;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)legacyImport:(CKRecord *)arg1;
- (void)recordUpdateFailedWithID:(CKRecordID *)arg1 localGUID:(NSString *)arg2 error:(NSError *)arg3;
- (void)recordUpdateSucceededWithRecord:(CKRecord *)arg1;
- (void)resetFetchState;
- (void)resetLocalSyncStateIfAppropriate;

@end
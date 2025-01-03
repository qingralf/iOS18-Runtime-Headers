/* Generated by RuntimeBrowser.
 */

@protocol ICNoteCryptoStrategy <ICCloudSyncingObjectCryptoStrategy>

@required

- (bool)decrypt;
- (NSData *)decryptNotePrimitiveData;
- (NSData *)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(CKRecord *)arg1;
- (void)mergeEncryptedData:(NSData *)arg1 mergeConflict:(NSMergeConflict *)arg2;
- (bool)writeEncryptedNoteData:(NSData *)arg1;

@end

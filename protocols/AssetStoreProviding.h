/* Generated by RuntimeBrowser.
 */

@protocol AssetStoreProviding

@required

- (NSDictionary *)batchOfRecordsMissingAssetsAfterRow:(id*)arg1 withLimit:(long long)arg2;
- (void)markTransferAsNotSuccessfullyDownloadedWithGUID:(NSString *)arg1;
- (void)updateAssetUsingRecord:(CKRecord *)arg1;

@end
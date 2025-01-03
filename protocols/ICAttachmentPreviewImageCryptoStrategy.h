/* Generated by RuntimeBrowser.
 */

@protocol ICAttachmentPreviewImageCryptoStrategy <ICCloudSyncingObjectCryptoStrategy>

@required

- (NSData *)decryptedImageData;
- (NSData *)decryptedMetadata;
- (bool)writeEncryptedImageData:(NSData *)arg1;
- (bool)writeEncryptedMetadata:(NSData *)arg1;

@end

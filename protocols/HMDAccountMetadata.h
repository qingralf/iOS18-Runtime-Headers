/* Generated by RuntimeBrowser.
 */

@protocol HMDAccountMetadata

@required

- (NSString *)firstName;
- (NSString *)iCloudAltDSID;
- (NSString *)lastName;
- (void)profilePhotoWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <HMDProfilePhoto> *, NSError *, void*
- (void)updateAccountMetadata;

@end

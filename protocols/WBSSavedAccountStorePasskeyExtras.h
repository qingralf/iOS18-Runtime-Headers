/* Generated by RuntimeBrowser.
 */

@protocol WBSSavedAccountStorePasskeyExtras

@required

- (void)deletePasskeyWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSPublicKeyCredentialIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deletePasskeyWithIdentifierOnInternalQueue:(WBSPublicKeyCredentialIdentifier *)arg1;
- (WBSPair *)exportPasskeyCredentialWithIDOnInternalQueue:(NSString *)arg1;
- (NSString *)importPasskeyCredentialOnInternalQueue:(WBSPair *)arg1;
- (NSArray *)passkeyDataForPasskeyCredentialIDOnInternalQueue:(NSData *)arg1;
- (NSArray *)passkeysDataOnInternalQueue;
- (NSArray *)recentlyDeletedPasskeysDataOnInternalQueue;
- (void)updateUserVisibleName:(void *)arg1 forPasskeyWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, WBSPublicKeyCredentialIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateUserVisibleNameOnInternalQueue:(NSString *)arg1 forPasskeyWithIdentifier:(WBSPublicKeyCredentialIdentifier *)arg2;

@end

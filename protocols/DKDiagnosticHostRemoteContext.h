/* Generated by RuntimeBrowser.
 */

@protocol DKDiagnosticHostRemoteContext <NSObject>

@required

- (void)remoteHostAllowSessionAccessoryDisconnectForDuration:(NSNumber *)arg1;
- (void)remoteHostClearAllowSessionAccessoryDisconnect;
- (void)remoteHostCompleteWithResult:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: DKDiagnosticResult *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteHostDismissViewControllerWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteHostDisplayAlertWithHeader:(void *)arg1 message:(void *)arg2 buttonStrings:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remoteHostDisplayInstructions:(void *)arg1 style:(void *)arg2 imageLocators:(void *)arg3 title:(void *)arg4 subtitle:(void *)arg5 iconLocator:(void *)arg6 options:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 14: NSArray *, int, NSArray *, NSString *, NSString *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)remoteHostEnableVolumeHUD:(bool)arg1;
- (void)remoteHostGetAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)remoteHostHideStatusBar;
- (void)remoteHostRequestPluginReloadOnFinishWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteHostRequestSessionAccessoryIdentifierWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)remoteHostSetScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)remoteHostSetStatusBarStyle:(long long)arg1;
- (void)remoteHostShowStatusBar;
- (void)remoteHostShowUI:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)remoteHostUnpairSessionAccessoryOnTestCompletion;
- (void)remoteHostUpdateProgress:(DKDiagnosticProgress *)arg1 forTest:(NSNumber *)arg2;
- (void)remoteHostUploadAssets:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: DKAssetUploadItems *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end

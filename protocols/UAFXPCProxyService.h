/* Generated by RuntimeBrowser.
 */

@protocol UAFXPCProxyService <NSObject>

@required

- (oneway void)checkAssetStatus:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UAFAssetStatus *, NSError *, void*
- (oneway void)diagnosticInformation:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (oneway void)diskSpaceNeededInBytesForLanguage:(void *)arg1 forClient:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (oneway void)downloadDictationAssetsForLanguage:(NSString *)arg1;
- (oneway void)downloadSiriAssets;
- (oneway void)downloadSiriAssetsOverCellular;
- (oneway void)lockLatestAtomicInstance:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)operationWithConfig:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)postAssetNotificationIfNeeded;
- (oneway void)postDictationAssetNotificationForLanguage:(NSString *)arg1;
- (void)subscriptionsForSubscriber:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end

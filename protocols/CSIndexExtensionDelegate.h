/* Generated by RuntimeBrowser.
 */

@protocol CSIndexExtensionDelegate <NSObject>

@required

- (bool)extensionExistsForBundleId:(NSString *)arg1;
- (void)indexRequestsPerformDataJob:(void *)arg1 forBundle:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: CSIndexJob *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)indexRequestsPerformJob:(void *)arg1 extensions:(void *)arg2 perExtensionCompletionHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 14: CSIndexJob *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*, id /* block */, void*, void, id /* block */, void*
- (void)indexRequestsPerformJob:(void *)arg1 forBundle:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: CSIndexJob *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)indexRequestsPerformJob:(void *)arg1 forBundles:(void *)arg2 perExtensionCompletionHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 14: CSIndexJob *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*, id /* block */, void*, void, id /* block */, void*
- (void)indexRequestsPerformJob:(void *)arg1 perExtensionCompletionHandler:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 13: CSIndexJob *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*, id /* block */, void*, void, id /* block */, void*

@end

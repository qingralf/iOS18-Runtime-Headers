/* Generated by RuntimeBrowser.
 */

@protocol LNConnectionXPCListenerEndpointVendingInterface <NSObject>

@required

- (void)getListenerEndpointForBundleIdentifier:(void *)arg1 action:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: NSString *, LNAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSData *, LNAction *, NSError *, void*
- (void)getListenerEndpointWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSData *, NSError *, void*

@end
/* Generated by RuntimeBrowser.
 */

@protocol BMAccessServer

@required

- (void)removeResource:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: BMResourceSpecifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestAccessToResource:(void *)arg1 withMode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 11: BMResourceSpecifier *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BMResourceContainer *, NSString *, NSData *, NSError *, void*
- (void)requestBiomeEndpoint:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)requestBiomeEndpointForAppScopedService:(void *)arg1 user:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*

@end

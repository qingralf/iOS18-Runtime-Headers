/* Generated by RuntimeBrowser.
 */

@protocol GKExtensionProtocol <NSObject>

@required

- (void)messageFromClient:(NSData *)arg1;
- (void)setInitialState:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)hostApp:(void *)arg1 grantingAccessExtensionSandbox:(void *)arg2 replyWithEndpoint:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, void*
- (void)nudge;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
- (void)setValue:(void *)arg1 forKeyPath:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSObject *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)tearDownExtensionWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

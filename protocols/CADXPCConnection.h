/* Generated by RuntimeBrowser.
 */

@protocol CADXPCConnection <NSObject>

@required

- (struct { unsigned int x1[8]; })auditToken;
- (void)invalidate;
- (int)processIdentifier;
- (id)remoteObjectProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resume;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

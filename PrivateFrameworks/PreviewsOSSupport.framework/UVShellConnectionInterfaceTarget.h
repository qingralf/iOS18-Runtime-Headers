/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreviewsOSSupport.framework/PreviewsOSSupport
 */

@interface UVShellConnectionInterfaceTarget : NSObject <UVShellConnectionProtocol> {
    id /* block */  _bsEndpointHandler;
    id /* block */  _messageHandler;
    id /* block */  _xpcEndpointHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleNullArgument:(id)arg1 replyHandler:(id /* block */)arg2;
- (id)initWithMessageHandler:(id /* block */)arg1 xpcEndpointHandler:(id /* block */)arg2 bsEndpointHandler:(id /* block */)arg3;
- (oneway void)sendBSEndpoint:(id)arg1 context:(id)arg2 replyHandler:(id /* block */)arg3;
- (oneway void)sendMessage:(id)arg1;
- (oneway void)sendMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (oneway void)sendXPCEndpoint:(id)arg1 context:(id)arg2 replyHandler:(id /* block */)arg3;

@end

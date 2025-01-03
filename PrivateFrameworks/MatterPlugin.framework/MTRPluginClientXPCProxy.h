/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MatterPlugin.framework/MatterPlugin
 */

@interface MTRPluginClientXPCProxy : NSObject <MTRXPCClientProtocol> {
    MTRPluginClient * _client;
}

@property MTRPluginClient *client;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)callRemoteProxyObject:(id /* block */)arg1;
- (id)client;
- (oneway void)device:(id)arg1 receivedAttributeReport:(id)arg2;
- (oneway void)device:(id)arg1 receivedEventReport:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)initWithClient:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setClient:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/icloudMCCKit.framework/icloudMCCKit
 */

@interface MCCSecretAgentConnection : NSObject {
    NSXPCConnection * _connection;
    NSXPCListenerEndpoint * _listenerEndpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;

- (void).cxx_destruct;
- (id)_connection;
- (void)_connectionInterruptionHandler;
- (void)_connectionInvalidationHandler;
- (void)dealloc;
- (id)init;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)listenerEndpoint;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end

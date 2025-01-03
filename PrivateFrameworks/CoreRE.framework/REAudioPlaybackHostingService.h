/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

@interface REAudioPlaybackHostingService : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary * _clients;
    unsigned long long  _connectionIdentifierCounter;
    id /* block */  _didConnectBlock;
    id /* block */  _didDisconnectBlock;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ didConnectBlock;
@property (copy) id /* block */ didDisconnectBlock;
@property (readonly) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)clientCount;
- (void)connectionIdentifier:(unsigned long long)arg1 streamToken:(unsigned long long)arg2 didChangeFromState:(unsigned long long)arg3 toState:(unsigned long long)arg4;
- (void)connectionIdentifierLostMediaServices:(unsigned long long)arg1;
- (void)connectionIdentifierResetMediaServices:(unsigned long long)arg1;
- (id /* block */)didConnectBlock;
- (id /* block */)didDisconnectBlock;
- (id)endpoint;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDidConnectBlock:(id /* block */)arg1;
- (void)setDidDisconnectBlock:(id /* block */)arg1;

@end

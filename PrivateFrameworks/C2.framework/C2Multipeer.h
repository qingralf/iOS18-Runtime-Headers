/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

@interface C2Multipeer : NSObject {
    <C2MultipeerChunkDelegate> * _chunkDelegate;
    NSObject<OS_dispatch_queue> * _chunkDelegateQueue;
    NSMutableDictionary * _clientConnectionByPeer;
    NSMutableDictionary * _clientContextByRequestUUID;
    C2MultipeerDiscovery * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _serverConnectionByPeer;
}

@property (nonatomic, retain) <C2MultipeerChunkDelegate> *chunkDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *chunkDelegateQueue;
@property (nonatomic, retain) NSMutableDictionary *clientConnectionByPeer;
@property (nonatomic, retain) NSMutableDictionary *clientContextByRequestUUID;
@property (nonatomic, retain) C2MultipeerDiscovery *listener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *serverConnectionByPeer;

- (void).cxx_destruct;
- (void)addClientConnection:(id)arg1 peerID:(id)arg2;
- (void)addServerConnection:(id)arg1 peerID:(id)arg2;
- (id)chunkDelegate;
- (id)chunkDelegateQueue;
- (id)clientConnectionByPeer;
- (id)clientContextByRequestUUID;
- (void)discoverChunkSignature:(id)arg1 forContainerIdentifier:(id)arg2 chunkDataCallback:(id /* block */)arg3;
- (id)initWithChunkDelegate:(id)arg1;
- (id)initWithChunkDelegate:(id)arg1 createListener:(bool)arg2;
- (id)listener;
- (id)queue;
- (id)serverConnectionByPeer;
- (void)setChunkDelegate:(id)arg1;
- (void)setChunkDelegateQueue:(id)arg1;
- (void)setClientConnectionByPeer:(id)arg1;
- (void)setClientContextByRequestUUID:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServerConnectionByPeer:(id)arg1;

@end
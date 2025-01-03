/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteStateDumpKit.framework/RemoteStateDumpKit
 */

@interface RSPeerToPeerConnectionController : NSObject <MCSessionDelegate> {
    NSMutableArray * _alreadyConnectedPeerIDs;
    <RSPeerToPeerConnectionControllerDataSource> * _dataSource;
    <RSPeerToPeerConnectionControllerDelegate> * _delegate;
    MCPeerID * _localPeerID;
    MCSession * _session;
}

@property (nonatomic, retain) NSMutableArray *alreadyConnectedPeerIDs;
@property (nonatomic) <RSPeerToPeerConnectionControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <RSPeerToPeerConnectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCPeerID *localPeerID;
@property (nonatomic, retain) MCSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connectedPeerWithDisplayName:(id)arg1;
- (void)_sendData:(id)arg1 toPeers:(id)arg2;
- (bool)_shouldInteractWithPeer:(id)arg1;
- (id)_stateDataWithRequestType:(unsigned long long)arg1 stateContent:(id)arg2 info:(id)arg3;
- (void)abort;
- (id)alreadyConnectedPeerIDs;
- (void)attemptConnectionWithPeer:(id)arg1 successBlock:(id /* block */)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithDataSource:(id)arg1;
- (id)localPeerID;
- (void)prepareForConnection;
- (void)requestState:(id)arg1 fromPeer:(id)arg2;
- (void)sendState:(id)arg1 withInfo:(id)arg2 toPeer:(id)arg3;
- (id)session;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
- (void)setAlreadyConnectedPeerIDs:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalPeerID:(id)arg1;
- (void)setSession:(id)arg1;

@end

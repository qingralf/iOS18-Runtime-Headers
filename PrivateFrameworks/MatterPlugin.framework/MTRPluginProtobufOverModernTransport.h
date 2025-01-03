/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MatterPlugin.framework/MatterPlugin
 */

@interface MTRPluginProtobufOverModernTransport : NSObject <MTRPluginProtobufMessageTransport> {
    MTRPluginProtobufMessageDispatcher * _messageDispatcher;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) MTRPluginProtobufMessageDispatcher *messageDispatcher;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleResponseWithPayload:(id)arg1 error:(id)arg2 forMessage:(id)arg3;
- (bool)_installResponseHandlerForIncomingProtobufMessage:(id)arg1 hmfMessage:(id)arg2;
- (void)_sendMessageToPrimaryHomeHub:(id)arg1;
- (void)_sendMessageToRemotePeer:(id)arg1 peerDestination:(id)arg2;
- (bool)deregisterForRequestMessageWithType:(id)arg1 forSessionID:(id)arg2;
- (id)description;
- (bool)dispatchIncomingMessage:(id)arg1;
- (id)init;
- (id)messageDispatcher;
- (bool)registerForRequestMessageWithType:(id)arg1 requestHandler:(SEL)arg2 forSessionID:(id)arg3;
- (void)removeDelegate:(id)arg1;
- (void)sendMessageToPrimaryHomeHub:(id)arg1;
- (void)sendMessageToRemotePeer:(id)arg1 peerDestination:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2 forSessionID:(id)arg3;
- (void)setMessageDispatcher:(id)arg1;
- (bool)start;
- (bool)stop;

@end

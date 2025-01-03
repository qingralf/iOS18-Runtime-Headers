/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MatterPlugin.framework/MatterPlugin
 */

@interface MTRPluginProtobufMessageDispatcher : NSObject {
    MTRPluginProtobufMessageReceiver * _controlChannelReceiver;
    NSMutableSet * _messageReceivers;
}

@property (retain) MTRPluginProtobufMessageReceiver *controlChannelReceiver;
@property (retain) NSMutableSet *messageReceivers;

- (void).cxx_destruct;
- (id)_findMessageReceiverMatchingDelegate:(id)arg1;
- (id)_findMessageReceiverMatchingSessionID:(id)arg1;
- (id)controlChannelReceiver;
- (bool)deregisterForRequestMessageWithType:(id)arg1 forSessionID:(id)arg2;
- (id)description;
- (void)handleNewSessionSetupForMessage:(id)arg1 transport:(id)arg2 errorBlock:(id /* block */)arg3;
- (id)init;
- (bool)invokeMessageHandlersForMessage:(id)arg1 transport:(id)arg2 errorBlock:(id /* block */)arg3;
- (void)invokeMessageHandlersForReceiver:(id)arg1 message:(id)arg2 transport:(id)arg3 errorBlock:(id /* block */)arg4;
- (id)messageReceivers;
- (bool)registerForRequestMessageWithType:(id)arg1 requestHandler:(SEL)arg2 forSessionID:(id)arg3;
- (void)removeDelegate:(id)arg1;
- (void)setControlChannelReceiver:(id)arg1;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2 forSessionID:(id)arg3;
- (void)setMessageReceivers:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IsolatedCoreAudioClient.framework/IsolatedCoreAudioClient
 */

@interface MTDClientInterface : IsolatedCoreAudioClientNSXPCListenerDelegate <MicActivityClientProtocol> {
    NSMutableSet * _reverseConnections;
}

@property (nonatomic, retain) NSMutableSet *reverseConnections;

- (void).cxx_destruct;
- (void)disable_microphone_activity_detection_with_reply:(id /* block */)arg1;
- (void)enable_microphone_activity_detection_with_reply:(id /* block */)arg1;
- (id)init;
- (void)listen_for_microphone_activity:(id)arg1 reply:(id /* block */)arg2;
- (void)register_client:(id)arg1 reply:(id /* block */)arg2;
- (id)reverseConnections;
- (void)setReverseConnections:(id)arg1;
- (void)stop_listening_for_microphone_activity_with_reply:(id /* block */)arg1;

@end

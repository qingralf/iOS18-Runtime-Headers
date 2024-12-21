/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FaceTimeMessageStore.framework/FaceTimeMessageStore
 */

@interface FaceTimeMessageStore.MessageStoreControllerXPCClient : _TtGC20FaceTimeMessageStore9XPCClientOS_31MessageStoreControllerInterface_ <FaceTimeMessageStore.MessageStoreControllerXPCClientProtocol> {
    void continuations;
    void delegate;
    void firstConnection;
    void firstUnlockObserver;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  serialQueue;
}

- (void).cxx_destruct;
- (void)messageStoreAccountInfoDidChange:(id)arg1;
- (void)messageStoreDidAddMessages:(id)arg1;
- (void)messageStoreDidDeleteMessages:(id)arg1;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)arg1;
- (void)messageStoreDidUpdateMessages:(id)arg1;
- (void)messageStoreRequiresRefetch;

@end
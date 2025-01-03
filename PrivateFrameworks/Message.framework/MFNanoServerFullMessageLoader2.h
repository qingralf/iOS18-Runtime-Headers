/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFNanoServerFullMessageLoader2 : NSObject <MFNanoServerFullMessageLoader2Protocol> {
    void implementation;
}

- (void).cxx_destruct;
- (void)attemptToCancelFullMessageLoadForMessageIds:(id)arg1;
- (void)cancelAllPendingOperations;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1 mailMessageLibrary:(id)arg2 legacyLoader:(id)arg3;
- (void)loadFullMessagesForMessageIds:(id)arg1 completion:(id /* block */)arg2;
- (void)start;

@end

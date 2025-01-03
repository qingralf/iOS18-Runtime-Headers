/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint {
    <NNMKMessagesSyncServiceServerDelegate> * _delegate;
}

@property (nonatomic) <NNMKMessagesSyncServiceServerDelegate> *delegate;

- (void).cxx_destruct;
- (id)addMessages:(id)arg1 notificationPriority:(bool)arg2;
- (void)connectivityChanged;
- (id)delegate;
- (id)deleteMessages:(id)arg1 notificationPriority:(bool)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)initWithQueue:(id)arg1;
- (id)notifyInitialMessageSyncFailed:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)readResourceAtURL:(id)arg1 metadata:(id)arg2;
- (id)sendBatchedFetchResult:(id)arg1;
- (id)sendBatchedInitialMessagesSync:(id)arg1;
- (id)sendCoalescedBatchedFetchResult:(id)arg1;
- (id)sendInitialMessagesSync:(id)arg1;
- (id)sendMoreMessages:(id)arg1;
- (id)sendMoreMessagesForConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)spaceBecameAvailable;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)updateMailboxSelection:(id)arg1;
- (id)updateMessagesStatus:(id)arg1 notificationPriority:(bool)arg2;

@end

/* Generated by RuntimeBrowser.
 */

@protocol _FTMSMessageStoreControllerClientDelegate

@required

- (void)messageStoreAccountInfoDidChange:(_TtC20FaceTimeMessageStore11AccountInfo *)arg1;
- (void)messageStoreDidAddMessages:(NSArray *)arg1;
- (void)messageStoreDidDeleteMessages:(NSArray *)arg1;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(NSArray *)arg1;
- (void)messageStoreDidReconnect;
- (void)messageStoreDidUpdateMessages:(NSArray *)arg1;
- (void)messageStoreRequiresRefetch;

@end

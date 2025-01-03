/* Generated by RuntimeBrowser.
 */

@protocol TUSimulatedConversationControllerDataSource <NSObject>

@required

- (void)addRemoteParticipantWithHandle:(TUHandle *)arg1 update:(TUSimulatedParticipantUpdate *)arg2 toConversation:(TUConversation *)arg3;
- (void)createIncomingConversationWithHandles:(NSArray *)arg1;
- (void)invalidate;
- (void)removeRemoteParticipant:(TUConversationParticipant *)arg1 fromConversation:(TUConversation *)arg2;
- (void)updateParticipant:(TUConversationParticipant *)arg1 withUpdate:(TUSimulatedParticipantUpdate *)arg2 onConversation:(TUConversation *)arg3;

@end

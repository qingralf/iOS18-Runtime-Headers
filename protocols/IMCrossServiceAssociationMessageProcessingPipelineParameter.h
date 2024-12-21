/* Generated by RuntimeBrowser.
 */

@protocol IMCrossServiceAssociationMessageProcessingPipelineParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (IMDChat *)chat;
- (unsigned long long)crossServiceDeduplicationMechanism;
- (NSString *)fromDisplayID;
- (NSString *)fromIdentifier;
- (bool)isFromMe;
- (NSString *)replacementGUID;

@end
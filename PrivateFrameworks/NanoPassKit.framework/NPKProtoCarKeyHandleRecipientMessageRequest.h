/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoCarKeyHandleRecipientMessageRequest : PBRequest <NSCopying> {
    NSString * _invitationIdentifier;
    NSData * _messageData;
}

@property (nonatomic, readonly) bool hasInvitationIdentifier;
@property (nonatomic, readonly) bool hasMessageData;
@property (nonatomic, retain) NSString *invitationIdentifier;
@property (nonatomic, retain) NSData *messageData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInvitationIdentifier;
- (bool)hasMessageData;
- (unsigned long long)hash;
- (id)invitationIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageData;
- (bool)readFrom:(id)arg1;
- (void)setInvitationIdentifier:(id)arg1;
- (void)setMessageData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

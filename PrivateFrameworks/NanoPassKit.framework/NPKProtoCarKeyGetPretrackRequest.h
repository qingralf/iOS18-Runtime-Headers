/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoCarKeyGetPretrackRequest : PBRequest <NSCopying> {
    NSString * _invitationIdentifier;
}

@property (nonatomic, readonly) bool hasInvitationIdentifier;
@property (nonatomic, retain) NSString *invitationIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInvitationIdentifier;
- (unsigned long long)hash;
- (id)invitationIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInvitationIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
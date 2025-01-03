/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoCarKeyRetryActivationCodeRequest : PBRequest <NSCopying> {
    NSString * _activationCode;
    NSString * _invitationIdentifier;
}

@property (nonatomic, retain) NSString *activationCode;
@property (nonatomic, readonly) bool hasActivationCode;
@property (nonatomic, readonly) bool hasInvitationIdentifier;
@property (nonatomic, retain) NSString *invitationIdentifier;

- (void).cxx_destruct;
- (id)activationCode;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivationCode;
- (bool)hasInvitationIdentifier;
- (unsigned long long)hash;
- (id)invitationIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivationCode:(id)arg1;
- (void)setInvitationIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

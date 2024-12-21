/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoCarKeySetEncryptedProductPlanIdentifierContainerRequest : PBRequest <NSCopying> {
    NSData * _containerData;
    NSString * _invitationIdentifier;
}

@property (nonatomic, retain) NSData *containerData;
@property (nonatomic, readonly) bool hasContainerData;
@property (nonatomic, readonly) bool hasInvitationIdentifier;
@property (nonatomic, retain) NSString *invitationIdentifier;

- (void).cxx_destruct;
- (id)containerData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainerData;
- (bool)hasInvitationIdentifier;
- (unsigned long long)hash;
- (id)invitationIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainerData:(id)arg1;
- (void)setInvitationIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
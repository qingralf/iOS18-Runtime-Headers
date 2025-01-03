/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSQRProtoH3EndToEndChannelRegisterResponse : PBCodable <NSCopying> {
    IDSQRProtoH3EndToEndChannelRegisterE2EChannelInfo * _channelInfo;
    NSData * _virtualQuicServerConnectionId;
}

@property (nonatomic, retain) IDSQRProtoH3EndToEndChannelRegisterE2EChannelInfo *channelInfo;
@property (nonatomic, retain) NSData *virtualQuicServerConnectionId;

- (void).cxx_destruct;
- (id)channelInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannelInfo:(id)arg1;
- (void)setVirtualQuicServerConnectionId:(id)arg1;
- (id)virtualQuicServerConnectionId;
- (void)writeTo:(id)arg1;

@end

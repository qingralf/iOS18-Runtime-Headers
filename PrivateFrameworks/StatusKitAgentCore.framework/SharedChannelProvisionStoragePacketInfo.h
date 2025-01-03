/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore
 */

@interface SharedChannelProvisionStoragePacketInfo : PBCodable <NSCopying> {
    NSData * _channelTopicCommitment;
    NSData * _encryptedPacket;
    struct { 
        unsigned int packetId : 1; 
    }  _has;
    NSData * _initializationVector;
    unsigned long long  _packetId;
}

@property (nonatomic, retain) NSData *channelTopicCommitment;
@property (nonatomic, retain) NSData *encryptedPacket;
@property (nonatomic, readonly) bool hasChannelTopicCommitment;
@property (nonatomic, readonly) bool hasEncryptedPacket;
@property (nonatomic, readonly) bool hasInitializationVector;
@property (nonatomic) bool hasPacketId;
@property (nonatomic, retain) NSData *initializationVector;
@property (nonatomic) unsigned long long packetId;

- (void).cxx_destruct;
- (id)channelTopicCommitment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedPacket;
- (bool)hasChannelTopicCommitment;
- (bool)hasEncryptedPacket;
- (bool)hasInitializationVector;
- (bool)hasPacketId;
- (unsigned long long)hash;
- (id)initializationVector;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)packetId;
- (bool)readFrom:(id)arg1;
- (void)setChannelTopicCommitment:(id)arg1;
- (void)setEncryptedPacket:(id)arg1;
- (void)setHasPacketId:(bool)arg1;
- (void)setInitializationVector:(id)arg1;
- (void)setPacketId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

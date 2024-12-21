/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore
 */

@interface SharedChannelPublishOffGridPayloadRequest : PBRequest <NSCopying> {
    NSData * _encryptionKey;
    struct { 
        unsigned int notificationDisplayEpochSeconds : 1; 
    }  _has;
    unsigned long long  _notificationDisplayEpochSeconds;
}

@property (nonatomic, retain) NSData *encryptionKey;
@property (nonatomic, readonly) bool hasEncryptionKey;
@property (nonatomic) bool hasNotificationDisplayEpochSeconds;
@property (nonatomic) unsigned long long notificationDisplayEpochSeconds;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptionKey;
- (bool)hasEncryptionKey;
- (bool)hasNotificationDisplayEpochSeconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)notificationDisplayEpochSeconds;
- (bool)readFrom:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setHasNotificationDisplayEpochSeconds:(bool)arg1;
- (void)setNotificationDisplayEpochSeconds:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore
 */

@interface SharedChannelProvisionStorageValue : PBCodable <NSCopying> {
    NSMutableArray * _channelPublishProvisionPacketInfos;
    struct { 
        unsigned int pushPriority : 1; 
    }  _has;
    int  _pushPriority;
}

@property (nonatomic, retain) NSMutableArray *channelPublishProvisionPacketInfos;
@property (nonatomic) bool hasPushPriority;
@property (nonatomic) int pushPriority;

+ (Class)channelPublishProvisionPacketInfoType;

- (void).cxx_destruct;
- (int)StringAsPushPriority:(id)arg1;
- (void)addChannelPublishProvisionPacketInfo:(id)arg1;
- (id)channelPublishProvisionPacketInfoAtIndex:(unsigned long long)arg1;
- (id)channelPublishProvisionPacketInfos;
- (unsigned long long)channelPublishProvisionPacketInfosCount;
- (void)clearChannelPublishProvisionPacketInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPushPriority;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)pushPriority;
- (id)pushPriorityAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannelPublishProvisionPacketInfos:(id)arg1;
- (void)setHasPushPriority:(bool)arg1;
- (void)setPushPriority:(int)arg1;
- (void)writeTo:(id)arg1;

@end

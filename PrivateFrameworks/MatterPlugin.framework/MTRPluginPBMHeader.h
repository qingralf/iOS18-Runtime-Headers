/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MatterPlugin.framework/MatterPlugin
 */

@interface MTRPluginPBMHeader : PBCodable <NSCopying> {
    struct { 
        unsigned int messageDirection : 1; 
        unsigned int messageType : 1; 
        unsigned int protocol : 1; 
        unsigned int schema : 1; 
        unsigned int version : 1; 
    }  _has;
    MTRPluginPBMUUID * _homeID;
    int  _messageDirection;
    MTRPluginPBMUUID * _messageID;
    unsigned int  _messageType;
    int  _protocol;
    int  _schema;
    MTRPluginPBMUUID * _sessionID;
    int  _version;
}

@property (nonatomic, readonly) bool hasHomeID;
@property (nonatomic) bool hasMessageDirection;
@property (nonatomic, readonly) bool hasMessageID;
@property (nonatomic) bool hasMessageType;
@property (nonatomic) bool hasProtocol;
@property (nonatomic) bool hasSchema;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) MTRPluginPBMUUID *homeID;
@property (nonatomic) int messageDirection;
@property (nonatomic, retain) MTRPluginPBMUUID *messageID;
@property (nonatomic) unsigned int messageType;
@property (nonatomic) int protocol;
@property (nonatomic) int schema;
@property (nonatomic, retain) MTRPluginPBMUUID *sessionID;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic) int version;

+ (id)headerWithSessionID:(id)arg1 homeID:(id)arg2 messageType:(int)arg3;
+ (id)messageTypeAsString:(unsigned int)arg1;
+ (id)onewayHeaderWithSessionID:(id)arg1 homeID:(id)arg2 messageType:(int)arg3;
+ (id)requestHeaderWithSessionID:(id)arg1 homeID:(id)arg2 messageType:(int)arg3;

- (void).cxx_destruct;
- (int)StringAsMessageDirection:(id)arg1;
- (int)StringAsProtocol:(id)arg1;
- (int)StringAsSchema:(id)arg1;
- (int)StringAsVersion:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHomeID;
- (bool)hasMessageDirection;
- (bool)hasMessageID;
- (bool)hasMessageType;
- (bool)hasProtocol;
- (bool)hasSchema;
- (bool)hasSessionID;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)homeID;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)mergeFrom:(id)arg1;
- (int)messageDirection;
- (id)messageDirectionAsString:(int)arg1;
- (id)messageID;
- (unsigned int)messageType;
- (int)protocol;
- (id)protocolAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseHeaderForRequestHeader;
- (int)schema;
- (id)schemaAsString:(int)arg1;
- (id)sessionID;
- (void)setHasMessageDirection:(bool)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setHasProtocol:(bool)arg1;
- (void)setHasSchema:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setHomeID:(id)arg1;
- (void)setMessageDirection:(int)arg1;
- (void)setMessageID:(id)arg1;
- (void)setMessageType:(unsigned int)arg1;
- (void)setProtocol:(int)arg1;
- (void)setSchema:(int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setVersion:(int)arg1;
- (id)shortDescription;
- (int)version;
- (id)versionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
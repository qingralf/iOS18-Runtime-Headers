/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSQRProtoParticipantUpdateParticipantModeInfo : PBCodable <NSCopying> {
    IDSQRProtoMaterial * _clientContextBlob;
    struct { 
        unsigned int participantId : 1; 
        unsigned int mode : 1; 
    }  _has;
    int  _mode;
    unsigned long long  _participantId;
}

@property (nonatomic, retain) IDSQRProtoMaterial *clientContextBlob;
@property (nonatomic, readonly) bool hasClientContextBlob;
@property (nonatomic) bool hasMode;
@property (nonatomic) bool hasParticipantId;
@property (nonatomic) int mode;
@property (nonatomic) unsigned long long participantId;

- (void).cxx_destruct;
- (int)StringAsMode:(id)arg1;
- (id)clientContextBlob;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientContextBlob;
- (bool)hasMode;
- (bool)hasParticipantId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)modeAsString:(int)arg1;
- (unsigned long long)participantId;
- (bool)readFrom:(id)arg1;
- (void)setClientContextBlob:(id)arg1;
- (void)setHasMode:(bool)arg1;
- (void)setHasParticipantId:(bool)arg1;
- (void)setMode:(int)arg1;
- (void)setParticipantId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

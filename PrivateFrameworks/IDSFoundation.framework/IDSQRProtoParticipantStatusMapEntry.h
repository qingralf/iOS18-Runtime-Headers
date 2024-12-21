/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSQRProtoParticipantStatusMapEntry : PBCodable <NSCopying> {
    struct { 
        unsigned int participantStatus : 1; 
    }  _has;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _participantIds;
    int  _participantStatus;
}

@property (nonatomic) bool hasParticipantStatus;
@property (nonatomic, readonly) unsigned long long*participantIds;
@property (nonatomic, readonly) unsigned long long participantIdsCount;
@property (nonatomic) int participantStatus;

- (int)StringAsParticipantStatus:(id)arg1;
- (void)addParticipantIds:(unsigned long long)arg1;
- (void)clearParticipantIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasParticipantStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long*)participantIds;
- (unsigned long long)participantIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantIdsCount;
- (int)participantStatus;
- (id)participantStatusAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasParticipantStatus:(bool)arg1;
- (void)setParticipantIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setParticipantStatus:(int)arg1;
- (void)writeTo:(id)arg1;

@end
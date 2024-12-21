/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordOneTimeStableUrl : PBCodable <NSCopying> {
    double  _createdTime;
    NSData * _encryptedFullTokenInfo;
    struct { 
        unsigned int createdTime : 1; 
    }  _has;
    NSMutableArray * _participantIds;
    NSData * _protectedFullToken;
    NSData * _shortTokenHash;
}

@property (nonatomic) double createdTime;
@property (nonatomic, retain) NSData *encryptedFullTokenInfo;
@property (nonatomic) bool hasCreatedTime;
@property (nonatomic, readonly) bool hasEncryptedFullTokenInfo;
@property (nonatomic, readonly) bool hasProtectedFullToken;
@property (nonatomic, readonly) bool hasShortTokenHash;
@property (nonatomic, retain) NSMutableArray *participantIds;
@property (nonatomic, retain) NSData *protectedFullToken;
@property (nonatomic, retain) NSData *shortTokenHash;

+ (Class)participantIdType;

- (void).cxx_destruct;
- (void)addParticipantId:(id)arg1;
- (void)clearParticipantIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)createdTime;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedFullTokenInfo;
- (bool)hasCreatedTime;
- (bool)hasEncryptedFullTokenInfo;
- (bool)hasProtectedFullToken;
- (bool)hasShortTokenHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantIdAtIndex:(unsigned long long)arg1;
- (id)participantIds;
- (unsigned long long)participantIdsCount;
- (id)protectedFullToken;
- (bool)readFrom:(id)arg1;
- (void)setCreatedTime:(double)arg1;
- (void)setEncryptedFullTokenInfo:(id)arg1;
- (void)setHasCreatedTime:(bool)arg1;
- (void)setParticipantIds:(id)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (id)shortTokenHash;
- (void)writeTo:(id)arg1;

@end
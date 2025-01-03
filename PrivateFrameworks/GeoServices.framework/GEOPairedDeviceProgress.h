/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPairedDeviceProgress : PBCodable <NSCopying> {
    unsigned long long  _byteCompletedCount;
    unsigned long long  _byteTotalCount;
    struct { 
        unsigned int has_byteCompletedCount : 1; 
        unsigned int has_byteTotalCount : 1; 
        unsigned int has_fractionCompleted : 1; 
        unsigned int has_kind : 1; 
        unsigned int has_isIndeterminate : 1; 
    }  _flags;
    float  _fractionCompleted;
    bool  _isIndeterminate;
    int  _kind;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long byteCompletedCount;
@property (nonatomic) unsigned long long byteTotalCount;
@property (nonatomic) float fractionCompleted;
@property (nonatomic) bool hasByteCompletedCount;
@property (nonatomic) bool hasByteTotalCount;
@property (nonatomic) bool hasFractionCompleted;
@property (nonatomic) bool hasIsIndeterminate;
@property (nonatomic) bool hasKind;
@property (nonatomic) bool isIndeterminate;
@property (nonatomic) int kind;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsKind:(id)arg1;
- (unsigned long long)byteCompletedCount;
- (unsigned long long)byteTotalCount;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)fractionCompleted;
- (bool)hasByteCompletedCount;
- (bool)hasByteTotalCount;
- (bool)hasFractionCompleted;
- (bool)hasIsIndeterminate;
- (bool)hasKind;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIndeterminate;
- (id)jsonRepresentation;
- (int)kind;
- (id)kindAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setByteCompletedCount:(unsigned long long)arg1;
- (void)setByteTotalCount:(unsigned long long)arg1;
- (void)setFractionCompleted:(float)arg1;
- (void)setHasByteCompletedCount:(bool)arg1;
- (void)setHasByteTotalCount:(bool)arg1;
- (void)setHasFractionCompleted:(bool)arg1;
- (void)setHasIsIndeterminate:(bool)arg1;
- (void)setHasKind:(bool)arg1;
- (void)setIsIndeterminate:(bool)arg1;
- (void)setKind:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

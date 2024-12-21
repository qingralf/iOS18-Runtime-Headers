/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOArtworkCapabilities : PBCodable <NSCopying> {
    struct { 
        unsigned int has_supportSfSymbol : 1; 
    }  _flags;
    bool  _supportSfSymbol;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSupportSfSymbol;
@property (nonatomic) bool supportSfSymbol;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSupportSfSymbol;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSupportSfSymbol:(bool)arg1;
- (void)setSupportSfSymbol:(bool)arg1;
- (bool)supportSfSymbol;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
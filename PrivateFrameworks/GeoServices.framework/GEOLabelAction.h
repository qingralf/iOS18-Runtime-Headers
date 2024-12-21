/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLabelAction : PBCodable <NSCopying> {
    int  _artworkAction;
    int  _detailTextAction;
    struct { 
        unsigned int has_artworkAction : 1; 
        unsigned int has_detailTextAction : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int artworkAction;
@property (nonatomic) int detailTextAction;
@property (nonatomic) bool hasArtworkAction;
@property (nonatomic) bool hasDetailTextAction;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsArtworkAction:(id)arg1;
- (int)StringAsDetailTextAction:(id)arg1;
- (int)artworkAction;
- (id)artworkActionAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)detailTextAction;
- (id)detailTextActionAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasArtworkAction;
- (bool)hasDetailTextAction;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtworkAction:(int)arg1;
- (void)setDetailTextAction:(int)arg1;
- (void)setHasArtworkAction:(bool)arg1;
- (void)setHasDetailTextAction:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
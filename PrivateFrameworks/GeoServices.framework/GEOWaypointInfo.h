/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypointInfo : PBCodable <NSCopying> {
    GEOARInfo * _arInfo;
    GEOPBTransitArtwork * _artwork;
    GEOEVChargingInfo * _evChargingInfo;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_source : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_arInfo : 1; 
        unsigned int read_artwork : 1; 
        unsigned int read_evChargingInfo : 1; 
        unsigned int read_localizedAddress : 1; 
        unsigned int read_name : 1; 
        unsigned int read_position : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int read_uniqueWaypointId : 1; 
        unsigned int read_waypointCaption : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOAddress * _localizedAddress;
    unsigned long long  _muid;
    NSString * _name;
    GEOLatLng * _position;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _source;
    GEOStyleAttributes * _styleAttributes;
    GEOWaypointUUID * _uniqueWaypointId;
    PBUnknownFields * _unknownFields;
    GEOFormattedString * _waypointCaption;
}

@property (nonatomic, retain) GEOARInfo *arInfo;
@property (nonatomic, retain) GEOPBTransitArtwork *artwork;
@property (nonatomic, retain) GEOEVChargingInfo *evChargingInfo;
@property (nonatomic, readonly) bool hasArInfo;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic, readonly) bool hasEvChargingInfo;
@property (nonatomic, readonly) bool hasLocalizedAddress;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPosition;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic, readonly) bool hasUniqueWaypointId;
@property (nonatomic, readonly) bool hasWaypointCaption;
@property (nonatomic, retain) GEOAddress *localizedAddress;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) GEOLatLng *position;
@property (nonatomic) int source;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, retain) GEOWaypointUUID *uniqueWaypointId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOFormattedString *waypointCaption;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSource:(id)arg1;
- (id)arInfo;
- (id)artwork;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evChargingInfo;
- (bool)hasArInfo;
- (bool)hasArtwork;
- (bool)hasEvChargingInfo;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocalizedAddress;
- (bool)hasMuid;
- (bool)hasName;
- (bool)hasPosition;
- (bool)hasSource;
- (bool)hasStyleAttributes;
- (bool)hasUniqueWaypointId;
- (bool)hasWaypointCaption;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithSource:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizedAddress;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)name;
- (id)position;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArInfo:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setEvChargingInfo:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setLocalizedAddress:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setUniqueWaypointId:(id)arg1;
- (void)setWaypointCaption:(id)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (id)styleAttributes;
- (id)uniqueWaypointId;
- (id)unknownFields;
- (id)waypointCaption;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPTransitStorageIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {
    unsigned int  _cartoID;
    unsigned int  _defaultTransitType;
    struct { 
        unsigned int cartoID : 1; 
        unsigned int defaultTransitType : 1; 
        unsigned int iconAttributeKey : 1; 
        unsigned int iconAttributeValue : 1; 
        unsigned int iconType : 1; 
    }  _has;
    unsigned int  _iconAttributeKey;
    unsigned int  _iconAttributeValue;
    int  _iconType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned int cartoID; /* unknown property attribute: ? */
@property (nonatomic) unsigned int cartoID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned int defaultTransitType; /* unknown property attribute: ? */
@property (nonatomic) unsigned int defaultTransitType;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCartoID;
@property (nonatomic) bool hasDefaultTransitType;
@property (nonatomic) bool hasIconAttributeKey;
@property (nonatomic) bool hasIconAttributeValue;
@property (nonatomic) bool hasIconType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int iconAttributeKey; /* unknown property attribute: ? */
@property (nonatomic) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue; /* unknown property attribute: ? */
@property (nonatomic) unsigned int iconAttributeValue;
@property (nonatomic) int iconType;
@property (nonatomic, readonly) int iconType;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsIconType:(id)arg1;
- (unsigned int)cartoID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)defaultTransitType;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCartoID;
- (bool)hasDefaultTransitType;
- (bool)hasIconAttributeKey;
- (bool)hasIconAttributeValue;
- (bool)hasIconType;
- (unsigned long long)hash;
- (unsigned int)iconAttributeKey;
- (unsigned int)iconAttributeValue;
- (int)iconType;
- (id)iconTypeAsString:(int)arg1;
- (id)initWithIcon:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCartoID:(unsigned int)arg1;
- (void)setDefaultTransitType:(unsigned int)arg1;
- (void)setHasCartoID:(bool)arg1;
- (void)setHasDefaultTransitType:(bool)arg1;
- (void)setHasIconAttributeKey:(bool)arg1;
- (void)setHasIconAttributeValue:(bool)arg1;
- (void)setHasIconType:(bool)arg1;
- (void)setIconAttributeKey:(unsigned int)arg1;
- (void)setIconAttributeValue:(unsigned int)arg1;
- (void)setIconType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

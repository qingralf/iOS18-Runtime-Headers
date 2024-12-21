/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDHikeGeometry : PBCodable <NSCopying> {
    NSData * _routingPathLeg;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasRoutingPathLeg;
@property (nonatomic, retain) NSData *routingPathLeg;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)hikeGeometryWithPlaceData:(id)arg1;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoutingPathLeg;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routingPathLeg;
- (void)setRoutingPathLeg:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
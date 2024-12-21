/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPairedDeviceReplyError : PBCodable <NSCopying> {
    NSData * _serializedError;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasSerializedError;
@property (nonatomic, retain) NSData *serializedError;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSerializedError;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)serializedError;
- (void)setSerializedError:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
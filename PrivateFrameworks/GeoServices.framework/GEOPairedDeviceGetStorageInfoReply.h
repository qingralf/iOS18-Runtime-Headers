/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPairedDeviceGetStorageInfoReply : PBCodable <NSCopying> {
    unsigned long long  _availableStorageBytesOfflineMaps;
    struct { 
        unsigned int has_availableStorageBytesOfflineMaps : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long availableStorageBytesOfflineMaps;
@property (nonatomic) bool hasAvailableStorageBytesOfflineMaps;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)availableStorageBytesOfflineMaps;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvailableStorageBytesOfflineMaps;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvailableStorageBytesOfflineMaps:(unsigned long long)arg1;
- (void)setHasAvailableStorageBytesOfflineMaps:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

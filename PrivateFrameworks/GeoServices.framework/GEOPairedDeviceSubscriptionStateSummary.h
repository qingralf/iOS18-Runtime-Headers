/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPairedDeviceSubscriptionStateSummary : PBCodable <NSCopying> {
    struct { 
        unsigned int has_fullyDownloaded : 1; 
    }  _flags;
    bool  _fullyDownloaded;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool fullyDownloaded;
@property (nonatomic) bool hasFullyDownloaded;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)fullyDownloaded;
- (bool)hasFullyDownloaded;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFullyDownloaded:(bool)arg1;
- (void)setHasFullyDownloaded:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

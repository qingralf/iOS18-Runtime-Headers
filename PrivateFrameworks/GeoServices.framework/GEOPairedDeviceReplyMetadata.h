/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPairedDeviceReplyMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int has_requestReceivedTimestamp : 1; 
        unsigned int has_responseTime : 1; 
        unsigned int has_sentTimestamp : 1; 
    }  _flags;
    double  _requestReceivedTimestamp;
    double  _responseTime;
    NSString * _senderUUID;
    double  _sentTimestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasRequestReceivedTimestamp;
@property (nonatomic) bool hasResponseTime;
@property (nonatomic, readonly) bool hasSenderUUID;
@property (nonatomic) bool hasSentTimestamp;
@property (nonatomic) double requestReceivedTimestamp;
@property (nonatomic) double responseTime;
@property (nonatomic, retain) NSString *senderUUID;
@property (nonatomic) double sentTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestReceivedTimestamp;
- (bool)hasResponseTime;
- (bool)hasSenderUUID;
- (bool)hasSentTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)requestReceivedTimestamp;
- (double)responseTime;
- (id)senderUUID;
- (double)sentTimestamp;
- (void)setHasRequestReceivedTimestamp:(bool)arg1;
- (void)setHasResponseTime:(bool)arg1;
- (void)setHasSentTimestamp:(bool)arg1;
- (void)setRequestReceivedTimestamp:(double)arg1;
- (void)setResponseTime:(double)arg1;
- (void)setSenderUUID:(id)arg1;
- (void)setSentTimestamp:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

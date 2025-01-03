/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneSignedCryptoRequirements : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSData * _serializedRequirements;
    NSData * _signature;
    int  _version;
}

@property (nonatomic, readonly) bool hasSerializedRequirements;
@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSData *serializedRequirements;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic) int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSerializedRequirements;
- (bool)hasSignature;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serializedRequirements;
- (void)setHasVersion:(bool)arg1;
- (void)setSerializedRequirements:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setVersion:(int)arg1;
- (id)signature;
- (int)version;
- (void)writeTo:(id)arg1;

@end

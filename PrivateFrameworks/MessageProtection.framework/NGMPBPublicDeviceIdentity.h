/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

@interface NGMPBPublicDeviceIdentity : PBCodable <NSCopying> {
    struct { 
        unsigned int tetraVersion : 1; 
    }  _has;
    NSData * _signingKey;
    unsigned int  _tetraVersion;
}

@property (nonatomic) bool hasTetraVersion;
@property (nonatomic, retain) NSData *signingKey;
@property (nonatomic) unsigned int tetraVersion;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTetraVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTetraVersion:(bool)arg1;
- (void)setSigningKey:(id)arg1;
- (void)setTetraVersion:(unsigned int)arg1;
- (id)signingKey;
- (unsigned int)tetraVersion;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

@interface TPPBPolicyRedaction : PBCodable <NSCopying> {
    TPPBPolicyRedactionAuthenticatedCiphertext * _ciphertext;
    NSString * _name;
}

@property (nonatomic, retain) TPPBPolicyRedactionAuthenticatedCiphertext *ciphertext;
@property (nonatomic, readonly) bool hasCiphertext;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)ciphertext;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCiphertext;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setCiphertext:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end

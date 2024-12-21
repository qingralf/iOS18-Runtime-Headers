/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoCarKeyDecryptDataResponse : PBCodable <NSCopying> {
    NSData * _encryptedData;
    NSData * _errorData;
}

@property (nonatomic, retain) NSData *encryptedData;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasEncryptedData;
@property (nonatomic, readonly) bool hasErrorData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedData;
- (id)errorData;
- (bool)hasEncryptedData;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
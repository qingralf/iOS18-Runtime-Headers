/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICEncryptionKey : NSObject <NSCopying> {
    unsigned long long  _hash;
    NSData * _keyData;
    ICEncryptionMetadata * _metadata;
    NSData * _serializedData;
}

@property (nonatomic, readonly) NSData *keyData;
@property (nonatomic, readonly) ICEncryptionMetadata *metadata;
@property (nonatomic, readonly) NSData *serializedData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)deserializeWithData:(id)arg1;
- (unsigned long long)hash;
- (id)initWithKeyData:(id)arg1 metadata:(id)arg2;
- (id)initWithSerializedData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyData;
- (id)metadata;
- (bool)serialize;
- (id)serializedData;
- (bool)validate;

@end

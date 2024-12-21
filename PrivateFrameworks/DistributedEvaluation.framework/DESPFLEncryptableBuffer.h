/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
 */

@interface DESPFLEncryptableBuffer : NSObject {
    unsigned long long  _count;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) float*mutableDataNumbers;

- (unsigned long long)count;
- (id)encryptedDataWithPublicKey:(id)arg1 error:(id*)arg2;
- (id)initWithEncryptor:(id)arg1 count:(unsigned long long)arg2;
- (float*)mutableDataNumbers;

@end
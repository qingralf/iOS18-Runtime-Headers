/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFMutableBloomFilter : EFBloomFilter

- (id)_initWithBucketCount:(unsigned long long)arg1 hashFunctionCount:(unsigned long long)arg2 seed:(unsigned long long)arg3 indexes:(id)arg4;
- (void)addData:(id)arg1;
- (void)addString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithBucketCount:(unsigned long long)arg1 hashFunctionCount:(unsigned long long)arg2;
- (id)initWithBucketCount:(unsigned long long)arg1 hashFunctionCount:(unsigned long long)arg2 seed:(unsigned long long)arg3;
- (id)initWithExpectedCount:(unsigned long long)arg1;
- (id)initWithFalsePositiveRate:(double)arg1 forExpectedCount:(unsigned long long)arg2;
- (id)initWithFalsePositiveRate:(double)arg1 forExpectedCount:(unsigned long long)arg2 seed:(unsigned long long)arg3;
- (void)removeAll;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface BloomFilter : NSObject <NSSecureCoding> {
    BitVector * _bitVector;
    unsigned long long  _expectedNumberOfItems;
    double  _falsePositiveRate;
    unsigned long long  _numberHashes;
    unsigned long long  _numberOfBits;
    unsigned int  _seed;
}

@property (readonly) unsigned long long expectedNumberOfItems;
@property (readonly) double falsePositiveRate;
@property (readonly) unsigned int seed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_loadBitVectorData:(id)arg1;
- (void)add:(id)arg1;
- (bool)contains:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expectedNumberOfItems;
- (double)falsePositiveRate;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpectedNumberOfItems:(unsigned long long)arg1 falsePositiveRate:(double)arg2 seed:(unsigned int)arg3;
- (unsigned int)seed;

@end
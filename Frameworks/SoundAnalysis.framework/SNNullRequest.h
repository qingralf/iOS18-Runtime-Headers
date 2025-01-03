/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNNullRequest : NSObject <NSCopying, NSSecureCoding, SNRequest> {
    void impl;
}

@property (nonatomic) unsigned int blockSize;
@property (nonatomic) double computationalDutyCycle;
@property (nonatomic) bool graphIsDeadEnded;
@property (nonatomic, readonly) long long hash;
@property (nonatomic) double sampleRate;
@property (nonatomic) bool shouldThrowException;

+ (bool)supportsSecureCoding;

- (unsigned int)blockSize;
- (double)computationalDutyCycle;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)graphIsDeadEnded;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)sampleRate;
- (void)setBlockSize:(unsigned int)arg1;
- (void)setComputationalDutyCycle:(double)arg1;
- (void)setGraphIsDeadEnded:(bool)arg1;
- (void)setSampleRate:(double)arg1;
- (void)setShouldThrowException:(bool)arg1;
- (bool)shouldThrowException;

@end

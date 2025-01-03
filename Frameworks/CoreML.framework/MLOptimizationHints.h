/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLOptimizationHints : NSObject <NSCopying, NSSecureCoding> {
    double  _hotHandDuration;
    long long  _reshapeFrequency;
    long long  _specializationStrategy;
}

@property (nonatomic) double hotHandDuration;
@property (nonatomic) long long reshapeFrequency;
@property (nonatomic) long long specializationStrategy;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)hotHandDuration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)reshapeFrequency;
- (id)reshapeFrequencyToString:(long long)arg1;
- (void)setHotHandDuration:(double)arg1;
- (void)setReshapeFrequency:(long long)arg1;
- (void)setSpecializationStrategy:(long long)arg1;
- (long long)specializationStrategy;
- (id)specializationStrategyToString:(long long)arg1;

@end

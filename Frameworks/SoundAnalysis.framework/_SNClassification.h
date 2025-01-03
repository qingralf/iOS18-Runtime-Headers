/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface _SNClassification : NSObject <NSCopying, NSSecureCoding, SNConfidenceProviding> {
    void impl;
}

@property (nonatomic) double confidence;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 confidence:(double)arg2;
- (bool)isEqual:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setIdentifier:(id)arg1;

@end

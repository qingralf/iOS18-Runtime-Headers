/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CipherML.framework/CipherML
 */

@interface CMLSimilarityScore : NSObject <NSSecureCoding> {
    unsigned long long  _identifier;
    NSData * _metadata;
    float  _score;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic) float score;

+ (id)scoreWithIdentifier:(unsigned long long)arg1 score:(float)arg2;
+ (id)scoreWithIdentifier:(unsigned long long)arg1 score:(float)arg2 metadata:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 score:(float)arg2 metadata:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSimilarityScore:(id)arg1;
- (id)metadata;
- (float)score;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setScore:(float)arg1;

@end

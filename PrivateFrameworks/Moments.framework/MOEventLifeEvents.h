/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOEventLifeEvents : NSObject <NSCopying, NSSecureCoding> {
    double  _confidenceScore;
    unsigned long long  _lifeEventCategory;
}

@property (nonatomic) double confidenceScore;
@property (nonatomic) unsigned long long lifeEventCategory;

+ (id)descriptionOfLifeEventCategory:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (double)confidenceScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)lifeEventCategory;
- (void)setConfidenceScore:(double)arg1;
- (void)setLifeEventCategory:(unsigned long long)arg1;

@end

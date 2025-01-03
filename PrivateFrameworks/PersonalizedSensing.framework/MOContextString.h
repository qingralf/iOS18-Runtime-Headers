/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizedSensing.framework/PersonalizedSensing
 */

@interface MOContextString : NSObject <NSCopying, NSSecureCoding> {
    double  _accuracy;
    unsigned long long  _contentType;
    NSArray * _contextDimensions;
    unsigned long long  _promptIndex;
    double  _satisfaction;
    unsigned long long  _source;
    NSUUID * _stringIdentifier;
    NSString * _textString;
    double  _totalScore;
}

@property (nonatomic) double accuracy;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic, copy) NSArray *contextDimensions;
@property (nonatomic) unsigned long long promptIndex;
@property (nonatomic) double satisfaction;
@property (nonatomic) unsigned long long source;
@property (nonatomic, retain) NSUUID *stringIdentifier;
@property (nonatomic, retain) NSString *textString;
@property (nonatomic) double totalScore;

+ (id)describeSource:(unsigned long long)arg1;
+ (id)fromBiome:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)accuracy;
- (unsigned long long)contentType;
- (id)contextDimensions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)describeSource;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 string:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)promptIndex;
- (double)satisfaction;
- (void)setAccuracy:(double)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setContextDimensions:(id)arg1;
- (void)setPromptIndex:(unsigned long long)arg1;
- (void)setSatisfaction:(double)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setStringIdentifier:(id)arg1;
- (void)setTextString:(id)arg1;
- (void)setTotalScore:(double)arg1;
- (unsigned long long)source;
- (id)stringIdentifier;
- (id)textString;
- (double)totalScore;

@end

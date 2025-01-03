/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOEventAnalytics : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _patterns;
    unsigned long long  _timeAtHomeSubType;
    NSDictionary * _trends;
}

@property (nonatomic, retain) NSDictionary *patterns;
@property (nonatomic) unsigned long long timeAtHomeSubType;
@property (nonatomic, retain) NSDictionary *trends;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)patterns;
- (void)setPatterns:(id)arg1;
- (void)setTimeAtHomeSubType:(unsigned long long)arg1;
- (void)setTrends:(id)arg1;
- (unsigned long long)timeAtHomeSubType;
- (id)trends;

@end

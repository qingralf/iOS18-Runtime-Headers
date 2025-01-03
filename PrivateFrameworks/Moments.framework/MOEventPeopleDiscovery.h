/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOEventPeopleDiscovery : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _densityScanDuration;
    NSNumber * _densityScore;
    long long  _gaPR;
    bool  _isGComplete;
    NSNumber * _pCount;
}

@property (nonatomic, retain) NSNumber *densityScanDuration;
@property (nonatomic, retain) NSNumber *densityScore;
@property (nonatomic) long long gaPR;
@property (nonatomic) bool isGComplete;
@property (nonatomic, retain) NSNumber *pCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)densityScanDuration;
- (id)densityScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)gaPR;
- (id)initWithCoder:(id)arg1;
- (bool)isGComplete;
- (id)pCount;
- (void)setDensityScanDuration:(id)arg1;
- (void)setDensityScore:(id)arg1;
- (void)setGaPR:(long long)arg1;
- (void)setIsGComplete:(bool)arg1;
- (void)setPCount:(id)arg1;

@end

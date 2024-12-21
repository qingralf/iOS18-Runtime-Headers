/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPBeaconSharingLimits : NSObject <NSCopying, NSSecureCoding> {
    long long  _maxCircleMembers;
    long long  _maxDelegatedShares;
}

@property (nonatomic) long long maxCircleMembers;
@property (nonatomic) long long maxDelegatedShares;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxCircleMembers:(long long)arg1 maxDelegatedShares:(long long)arg2;
- (long long)maxCircleMembers;
- (long long)maxDelegatedShares;
- (void)setMaxCircleMembers:(long long)arg1;
- (void)setMaxDelegatedShares:(long long)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDAddressResolutionResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _rankedEntities;
}

@property (nonatomic, readonly, copy) NSArray *rankedEntities;
@property (nonatomic, readonly, copy) NSString *topRankedContactId;
@property (nonatomic, readonly, copy) NSString *topRankedMdId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRankedEntities:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAddressResolutionResult:(id)arg1;
- (id)rankedEntities;
- (id)topRankedContactId;
- (id)topRankedMdId;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSFeatureFlag : NSObject <NSSecureCoding> {
    char * _cDomain;
    char * _cFeatureName;
    NSString * _domain;
    NSString * _featureName;
}

@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *featureName;

+ (bool)isFeatureFlagEnabled:(id)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)featureName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 featureName:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
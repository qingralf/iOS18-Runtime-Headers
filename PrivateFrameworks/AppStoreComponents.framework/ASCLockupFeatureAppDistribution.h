/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
 */

@interface ASCLockupFeatureAppDistribution : NSObject <ASCLockupFeature> {
    NSString * _appVersionId;
    NSString * _distributorBundleId;
}

@property (nonatomic, readonly, copy) NSString *appVersionId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *distributorBundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appVersionId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)distributorBundleId;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistributorBundleId:(id)arg1 appVersionId:(id)arg2;
- (bool)isEqual:(id)arg1;

@end

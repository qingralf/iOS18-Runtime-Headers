/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AeroML.framework/AeroML
 */

@interface AMLFeaturesConfiguration : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void bundleIdentifier;
    void configurationId;
    void expirationPolicy;
    void featuresDescription;
    void modelName;
    void versionId;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *configurationId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) int expirationPolicy;
@property (nonatomic, readonly) AMLFeaturesSpecification *featuresDescription;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *versionId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)configurationId;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)expirationPolicy;
- (id)featuresDescription;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 modelName:(id)arg2 versionId:(id)arg3 expirationPolicy:(int)arg4 featuresDescription:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)modelName;
- (id)versionId;

@end
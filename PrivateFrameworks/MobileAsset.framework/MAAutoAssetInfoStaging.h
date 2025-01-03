/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MAAutoAssetInfoStaging : NSObject <NSSecureCoding> {
    NSDictionary * _allAvailableForStagingAttributes;
    NSDictionary * _byGroupAvailableForStagingAttributes;
    NSDictionary * _byGroupTotalExpectedBytes;
    unsigned long long  _totalExpectedBytes;
    NSDictionary * _updateAttributes;
}

@property (nonatomic, readonly, retain) NSDictionary *allAvailableForStagingAttributes;
@property (nonatomic, readonly, retain) NSDictionary *byGroupAvailableForStagingAttributes;
@property (nonatomic, readonly, retain) NSDictionary *byGroupTotalExpectedBytes;
@property (nonatomic, readonly) unsigned long long totalExpectedBytes;
@property (nonatomic, readonly, retain) NSDictionary *updateAttributes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allAvailableForStagingAttributes;
- (id)byGroupAvailableForStagingAttributes;
- (id)byGroupTotalExpectedBytes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fullDescription:(id)arg1 usingLogger:(id)arg2;
- (id)initWithAvailableForStaging:(id)arg1 withTotalExpectedBytes:(unsigned long long)arg2;
- (id)initWithByGroupAvailableForStaging:(id)arg1 withByGroupTotalExpectedBytes:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdateAttributes:(id)arg1;
- (id)initWithUpdateAttributes:(id)arg1 withByGroupAvailableForStaging:(id)arg2 withAvailableForStaging:(id)arg3 withByGroupTotalExpectedBytes:(id)arg4 withTotalExpectedBytes:(unsigned long long)arg5;
- (id)initWithUpdateAttributes:(id)arg1 withByGroupAvailableForStaging:(id)arg2 withByGroupTotalExpectedBytes:(id)arg3;
- (id)summary;
- (unsigned long long)totalExpectedBytes;
- (id)updateAttributes;

@end

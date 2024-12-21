/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UnifiedAssetFramework.framework/UnifiedAssetFramework
 */

@interface UAFAssetSetConfiguration : NSObject {
    NSArray * _assets;
    NSString * _autoAssetType;
    bool  _disableAssetRemoval;
    bool  _enableExpensiveCellular;
    UAFExperimentalAssetsConfiguration * _experimentalAssets;
    bool  _isTrialAvailable;
    NSString * _metadataAsset;
    NSString * _name;
    NSURL * _originatingURL;
    bool  _subjectToAppleIntelligenceWaitlist;
    NSString * _trialProject;
    NSArray * _usageLimits;
    NSArray * _usageTypes;
    NSDictionary * _usageValues;
}

@property (nonatomic, retain) NSArray *assets;
@property (nonatomic, retain) NSString *autoAssetType;
@property (nonatomic) bool disableAssetRemoval;
@property (nonatomic) bool enableExpensiveCellular;
@property (nonatomic, retain) UAFExperimentalAssetsConfiguration *experimentalAssets;
@property (nonatomic) bool isTrialAvailable;
@property (nonatomic, retain) NSString *metadataAsset;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSURL *originatingURL;
@property (nonatomic) bool subjectToAppleIntelligenceWaitlist;
@property (nonatomic, retain) NSString *trialProject;
@property (nonatomic, retain) NSArray *usageLimits;
@property (nonatomic, retain) NSArray *usageTypes;
@property (nonatomic, retain) NSDictionary *usageValues;

+ (id)fromContentsOfURL:(id)arg1 applyFeatureFlags:(bool)arg2 error:(id*)arg3;
+ (id)fromContentsOfURL:(id)arg1 error:(id*)arg2;
+ (bool)isValid:(id)arg1 error:(id*)arg2;
+ (bool)isValid:(id)arg1 fileURL:(id)arg2 error:(id*)arg3;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (int)_usageCountForUsageType:(id)arg1 usingUsages:(id)arg2;
- (void)applyFeatureFlags;
- (id)assets;
- (id)autoAssetType;
- (bool)disableAssetRemoval;
- (bool)enableExpensiveCellular;
- (id)experimentalAssets;
- (id)getAssets:(id)arg1;
- (id)getAutoAssets:(id)arg1;
- (id)getFilteredUsages:(id)arg1;
- (id)getTrialAssets:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTrialAvailable;
- (bool)isUsageLimitExceeded:(id)arg1;
- (id)metadataAsset;
- (id)name;
- (id)originatingURL;
- (void)setAssets:(id)arg1;
- (void)setAutoAssetType:(id)arg1;
- (void)setDisableAssetRemoval:(bool)arg1;
- (void)setEnableExpensiveCellular:(bool)arg1;
- (void)setExperimentalAssets:(id)arg1;
- (void)setIsTrialAvailable:(bool)arg1;
- (void)setMetadataAsset:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginatingURL:(id)arg1;
- (void)setSubjectToAppleIntelligenceWaitlist:(bool)arg1;
- (void)setTrialProject:(id)arg1;
- (void)setUsageLimits:(id)arg1;
- (void)setUsageTypes:(id)arg1;
- (void)setUsageValues:(id)arg1;
- (bool)subjectToAppleIntelligenceWaitlist;
- (id)trialProject;
- (id)usageLimits;
- (id)usageTypes;
- (id)usageValues;

@end
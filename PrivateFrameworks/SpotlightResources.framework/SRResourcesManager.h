/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightResources.framework/SpotlightResources
 */

@interface SRResourcesManager : NSObject

+ (id)defaultParameterWithType:(long long)arg1 value:(id)arg2 name:(id)arg3;
+ (void)dumpParameterList:(id)arg1;
+ (void)fetchOverrideList;
+ (void)fetchParameterList;
+ (void)fetchUserDefaults;
+ (void)initialize;
+ (unsigned long long)lastLoadedContentVersion;
+ (long long)parameterTypeFromString:(id)arg1;
+ (bool)parsecEnabled;
+ (void)setTrialUpdateHandler;
+ (id)sharedResourcesManager;
+ (void)updateDefaultParameter:(id)arg1 withValue:(id)arg2;

- (id)allLoadedAssets;
- (id)assetConfigDump;
- (void)fetchAllParametersForLanguages:(id)arg1 resourcePath:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (void)loadAllParameters;
- (void)loadAllParametersForClient:(id)arg1;
- (void)loadAllParametersForClient:(id)arg1 locale:(id)arg2;
- (void)loadAllParametersForClient:(id)arg1 locale:(id)arg2 options:(id)arg3;
- (void)loadDataSource:(id)arg1;
- (bool)overrideFactor:(id)arg1 client:(id)arg2 type:(id)arg3 value:(id)arg4;
- (void)refreshTrialForClient:(id)arg1;
- (id)resourcesForClient:(id)arg1 locale:(id)arg2 options:(id)arg3;
- (id)resourcesForClient:(id)arg1 options:(id)arg2;
- (id)trialConfigDump;

@end

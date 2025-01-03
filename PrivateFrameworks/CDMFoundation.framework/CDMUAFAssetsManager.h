/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMUAFAssetsManager : NSObject {
    NSMutableDictionary * _assetSetNameToObserver;
}

+ (id)filterFactors:(id)arg1 forAssetSetNameToFactors:(id)arg2;
+ (id)getAssetSetNameToFactors:(id)arg1 withError:(id*)arg2;
+ (id)getAssetSetNameToUafClientManager:(id)arg1 withError:(id*)arg2;
+ (id)getFactorToAssetSetName:(id)arg1 uafClientManagers:(id)arg2 withError:(id*)arg3;
+ (id)getFactorsForClientManager:(id)arg1;
+ (id)getNLAssetFromUAFAsset:(id)arg1 withFactor:(id)arg2 withAssetSetName:(id)arg3 withAssetSet:(id)arg4;
+ (id)getNLAssetFromUAFAssetPostValidation:(id)arg1 asset:(id)arg2 locale:(id)arg3 assetSetName:(id)arg4 assetSet:(id)arg5;
+ (id)getNLUAFClientManagers;
+ (id)getUAFAssetsForFactors:(id)arg1 withCDMAssetsInfo:(id)arg2 locale:(id)arg3;
+ (id)getUAFClientManagersForLocale:(id)arg1 withCDMAssetsInfo:(id)arg2;
+ (void)initUAFClientManagers:(id)arg1 locale:(id)arg2 error:(id*)arg3;
+ (void)reInitCDMUAFAssetsCache;
+ (void)setAssetsAvailabilityForFactors:(id)arg1 withAssetSet:(id)arg2 forAssetSetName:(id)arg3 withDelegateHandler:(id)arg4 withLocale:(id)arg5 withFactorAndFolders:(id)arg6 useFileManager:(id)arg7 withAssetAvailabilityType:(long long)arg8;
+ (void)subscribeToAssetsForAssetSet:(long long)arg1 withCDMAssetsUsages:(id)arg2;
+ (void)subscribeToSsuAssetsForLocale:(id)arg1;
+ (bool)validateFactors:(id)arg1 inAssetSet:(id)arg2 forLocale:(id)arg3 withAssetSetName:(id)arg4;

- (void).cxx_destruct;
- (id)initManager;
- (bool)registerForCDMAssetsInfo:(id)arg1 withLocale:(id)arg2 withAssetsDelegate:(id)arg3 useFileManager:(id)arg4 withSelfContextId:(id)arg5 withSelfMetadata:(id)arg6 withDataDispatcherContext:(id)arg7 withAssetAvailabilityType:(long long)arg8 withError:(id*)arg9;
- (void)registerForFactors:(id)arg1 inAssetSetName:(id)arg2 withAssetsDelegate:(id)arg3 withLocale:(id)arg4 withFactorAndFolders:(id)arg5 useFileManager:(id)arg6 withAssetAvailabilityType:(long long)arg7;
- (void)setupForLocale:(id)arg1 cdmAssetsInfo:(id)arg2 error:(id*)arg3;

@end

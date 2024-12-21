/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon
 */

@interface _LTDAnalyticsAssetSnapshot : NSObject {
    NSString * _assetBuild;
    NSString * _expectedAssetVersion;
    NSString * _installedAssetVersion;
}

@property (nonatomic, readonly, copy) NSString *assetBuild;
@property (nonatomic, readonly, copy) NSString *expectedAssetVersion;
@property (nonatomic, readonly) bool hasAllData;
@property (nonatomic, readonly, copy) NSString *installedAssetVersion;

- (void).cxx_destruct;
- (id)assetBuild;
- (id)description;
- (id)expectedAssetVersion;
- (bool)hasAllData;
- (id)initWithAssetBuild:(id)arg1 expectedAssetVersion:(id)arg2 installedAssetVersion:(id)arg3;
- (id)installedAssetVersion;

@end
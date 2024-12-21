/* Generated by RuntimeBrowser.
 */

@protocol _LTDAssetModelProtocol <_LTAssetProgressReporting>

@required

- (NSString *)assetBuild;
- (NSString *)assetId;
- (NSString *)assetLanguage;
- (NSString *)assetName;
- (unsigned long long)assetType;
- (NSString *)assetTypeName;
- (long long)assetVersion;
- (bool)canBePurged;
- (long long)contentVersion;
- (NSString *)coreAssetName;
- (long long)downloadSize;
- (long long)formatVersion;
- (NSURL *)getLocalFileUrl;
- (NSString *)identifier;
- (bool)isAvailable;
- (bool)isDownloading;
- (bool)isInstalled;
- (bool)isPremiumTextLID;
- (NSString *)managedAssetType;
- (long long)requiredCapabilityIdentifier;
- (unsigned long long)state;
- (NSArray *)supportedLanguages;
- (long long)unarchivedSize;

@optional

- (bool)refreshState;

@end
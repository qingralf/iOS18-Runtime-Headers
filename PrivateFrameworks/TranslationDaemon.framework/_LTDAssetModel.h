/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon
 */

@interface _LTDAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSArray * _localeIdentifiers;
    NSObject<_LTDAssetModelProtocol> * _provider;
}

@property (nonatomic, readonly) NSString *assetBuild;
@property (nonatomic, readonly) NSString *assetId;
@property (nonatomic, readonly) NSString *assetLanguage;
@property (nonatomic, readonly) NSString *assetName;
@property (nonatomic, readonly) unsigned long long assetType;
@property (nonatomic, readonly) NSString *assetTypeName;
@property (nonatomic, readonly) long long assetVersion;
@property (nonatomic, readonly) bool canBePurged;
@property (nonatomic, readonly) long long contentVersion;
@property (nonatomic, readonly) NSString *coreAssetName;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long downloadPriority;
@property (nonatomic, readonly) long long downloadSize;
@property (nonatomic, readonly) long long formatVersion;
@property (nonatomic, readonly) NSURL *getLocalFileUrl;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isAvailable;
@property (nonatomic, readonly) bool isDownloading;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool isMultiLocaleAsset;
@property (nonatomic, readonly) bool isPremiumTextLID;
@property (nonatomic, readonly) NSString *managedAssetType;
@property (nonatomic, readonly) _LTAssetProgress *progress;
@property (nonatomic, retain) NSObject<_LTDAssetModelProtocol> *provider;
@property (nonatomic, readonly) long long requiredCapabilityIdentifier;
@property (nonatomic, readonly) bool shouldPurgeWithLocale;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) long long unarchivedSize;

+ (id)descriptionForAssetState:(unsigned long long)arg1;
+ (id)localeIdentifiersForLanguageName:(id)arg1;

- (void).cxx_destruct;
- (bool)_isCompatibleWithThisDevice;
- (id)assetBuild;
- (id)assetId;
- (id)assetLanguage;
- (id)assetName;
- (unsigned long long)assetType;
- (id)assetTypeName;
- (long long)assetVersion;
- (bool)canBePurged;
- (long long)compareAssetVersionReversed:(id)arg1;
- (long long)compareDownloadPriority:(id)arg1;
- (long long)contentVersion;
- (id)coreAssetName;
- (id)debugDescription;
- (id)description;
- (unsigned long long)downloadPriority;
- (long long)downloadSize;
- (long long)formatVersion;
- (id)getLocalFileUrl;
- (id)identifier;
- (id)initWithProvider:(id)arg1;
- (bool)isANEModel;
- (bool)isASRModel;
- (bool)isAvailable;
- (bool)isConfig;
- (bool)isDownloading;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (bool)isMTModel;
- (bool)isMultiLocaleAsset;
- (bool)isNewerCompatibleVersionThan:(id)arg1;
- (bool)isNewerVersionThan:(id)arg1;
- (bool)isPhrasebook;
- (bool)isPremiumTextLID;
- (bool)isTTSModel;
- (id)localeIdentifiers;
- (id)managedAssetType;
- (id)progress;
- (id)provider;
- (bool)refreshState;
- (long long)requiredCapabilityIdentifier;
- (void)setProvider:(id)arg1;
- (bool)shouldPurgeWithLocale;
- (unsigned long long)state;
- (id)stateDescription;
- (id)status;
- (id)supportedLanguages;
- (bool)supportsLocale:(id)arg1;
- (long long)unarchivedSize;

@end

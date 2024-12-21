/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface MIPlaceholderConstructor : NSObject {
    NSArray * _appExtensionPlaceholderConstructors;
    bool  _basicIOSPlaceholderForWatchOSLessThanSix;
    NSURL * _bundleURL;
    NSArray * _embeddedAppClipPlaceholderConstructors;
    NSArray * _embeddedWatchAppPlaceholderConstructors;
    NSDictionary * _entitlements;
    bool  _includeAppClipPlaceholders;
    bool  _includeWatchAppPlaceholders;
    NSDictionary * _infoPlistContent;
    NSData * _installSessionUUID;
    NSData * _installUUID;
    bool  _performPlaceholderInstallActions;
    unsigned long long  _placeholderType;
    bool  _preserveFullInfoPlist;
}

@property (nonatomic, copy) NSArray *appExtensionPlaceholderConstructors;
@property (nonatomic) bool basicIOSPlaceholderForWatchOSLessThanSix;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, copy) NSArray *embeddedAppClipPlaceholderConstructors;
@property (nonatomic, copy) NSArray *embeddedWatchAppPlaceholderConstructors;
@property (nonatomic, copy) NSDictionary *entitlements;
@property (nonatomic, readonly) MIPlaceholderConstructor *firstNetworkExtension;
@property (nonatomic) bool includeAppClipPlaceholders;
@property (nonatomic) bool includeWatchAppPlaceholders;
@property (nonatomic, retain) NSDictionary *infoPlistContent;
@property (nonatomic, retain) NSData *installSessionUUID;
@property (nonatomic, retain) NSData *installUUID;
@property (nonatomic, readonly) bool isLaunchProhibited;
@property (nonatomic) bool performPlaceholderInstallActions;
@property (nonatomic) unsigned long long placeholderType;
@property (nonatomic) bool preserveFullInfoPlist;

+ (id)_infoPlistKeysToLoad;

- (void).cxx_destruct;
- (bool)_constructPlaceholdersForDirectory:(id)arg1 itemsWithPathExtension:(id)arg2 appendingToArray:(id)arg3 bundleType:(unsigned long long)arg4 error:(id*)arg5;
- (bool)_copyInfoPlistLoctableToPlaceholder:(id)arg1 error:(id*)arg2;
- (bool)_copyStringsToPlaceholder:(id)arg1 onlyDirectories:(bool)arg2 error:(id*)arg3;
- (id)_entitlementsForPath:(id)arg1 error:(id*)arg2;
- (id)_initWithSource:(id)arg1 byPreservingFullInfoPlist:(bool)arg2 forBundleType:(unsigned long long)arg3 error:(id*)arg4;
- (bool)_introspectWithError:(id*)arg1;
- (bool)_loadInfoPlistContentWithError:(id*)arg1;
- (bool)_materializeConstructors:(id)arg1 intoBundle:(id)arg2 error:(id*)arg3;
- (bool)_populateAppExtensionPlaceholderConstructorsWithError:(id*)arg1;
- (bool)_populateEmbeddedAppClipPlaceholderConstructorsWithError:(id*)arg1;
- (bool)_populateEmbeddedWatchAppPlaceholderConstructorsWithError:(id*)arg1;
- (bool)_transferAndUpdateInstallSessionIDsToPlaceholder:(id)arg1 error:(id*)arg2;
- (bool)_writeIconToPlaceholder:(id)arg1 infoPlistIconContent:(id*)arg2 error:(id*)arg3;
- (bool)_writeInfoPlistToPlaceholder:(id)arg1 substitutingIconContent:(id)arg2 withError:(id*)arg3;
- (id)appExtensionPlaceholderConstructors;
- (bool)basicIOSPlaceholderForWatchOSLessThanSix;
- (id)bundleID;
- (id)bundleURL;
- (id)embeddedAppClipPlaceholderConstructors;
- (id)embeddedWatchAppPlaceholderConstructors;
- (id)entitlements;
- (id)firstNetworkExtension;
- (bool)includeAppClipPlaceholders;
- (bool)includeWatchAppPlaceholders;
- (id)infoPlistContent;
- (id)initWithSource:(id)arg1 byPreservingFullInfoPlist:(bool)arg2 error:(id*)arg3;
- (id)installSessionUUID;
- (id)installUUID;
- (bool)isLaunchProhibited;
- (bool)materializeIntoBundleDirectory:(id)arg1 error:(id*)arg2;
- (bool)performPlaceholderInstallActions;
- (unsigned long long)placeholderType;
- (bool)preserveFullInfoPlist;
- (void)setAppExtensionPlaceholderConstructors:(id)arg1;
- (void)setBasicIOSPlaceholderForWatchOSLessThanSix:(bool)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setEmbeddedAppClipPlaceholderConstructors:(id)arg1;
- (void)setEmbeddedWatchAppPlaceholderConstructors:(id)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setIncludeAppClipPlaceholders:(bool)arg1;
- (void)setIncludeWatchAppPlaceholders:(bool)arg1;
- (void)setInfoPlistContent:(id)arg1;
- (void)setInstallSessionUUID:(id)arg1;
- (void)setInstallUUID:(id)arg1;
- (void)setPerformPlaceholderInstallActions:(bool)arg1;
- (void)setPlaceholderType:(unsigned long long)arg1;
- (void)setPreserveFullInfoPlist:(bool)arg1;

@end
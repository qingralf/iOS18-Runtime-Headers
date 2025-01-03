/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDApp : NSObject <NSCopying, NSSecureCoding> {
    NSString * _artistName;
    NSString * _bundleID;
    NSString * _bundlePath;
    NSString * _bundleShortVersion;
    NSString * _bundleVersion;
    NSProgress * _downloadProgress;
    long long  _downloaderDSID;
    long long  _essentialBackgroundAssetDownloadEstimate;
    NSString * _executablePath;
    long long  _extensions;
    long long  _familyID;
    bool  _hasFetchedUpdateMetadata;
    NSError * _installError;
    NSUUID * _installID;
    NSProgress * _installProgress;
    NSString * _localizedName;
    unsigned char  _openableStatus;
    NSProgress * _postProcessProgress;
    NSProgress * _progress;
    long long  _progressPhase;
    ASDUnfairLock * _propertyLock;
    long long  _purchaserDSID;
    NSData * _rawUpdateData;
    ASDProgress * _remoteProgress;
    long long  _softwarePlatform;
    long long  _status;
    NSString * _storeCohort;
    long long  _storeExternalVersionID;
    NSNumber * _storeFront;
    long long  _storeItemID;
    NSString * _updateBuyParams;
    NSDate * _updateInstallDate;
    NSDictionary * _updateMetadata;
    long long  _watchApplicationMode;
}

@property (getter=isAppClip, readonly) bool appClip;
@property (getter=isArcadeOpenable, readonly) bool arcadeOpenable;
@property (retain) NSString *artistName;
@property (nonatomic) bool autoUpdateEnabled;
@property (getter=isBetaApp, readonly) bool betaApp;
@property (readonly) NSString *bundleID;
@property (retain) NSString *bundlePath;
@property (retain) NSString *bundleShortVersion;
@property (retain) NSString *bundleVersion;
@property (retain) NSProgress *downloadProgress;
@property long long downloaderDSID;
@property long long essentialBackgroundAssetDownloadEstimate;
@property (retain) NSString *executablePath;
@property long long extensions;
@property long long familyID;
@property (getter=isFamilyShared, readonly) bool familyShared;
@property bool hasPostProcessing;
@property (getter=hasUnknownDistributor, readonly) bool hasUnknownDistributor;
@property (retain) NSError *installError;
@property (readonly) NSUUID *installID;
@property (retain) NSProgress *installProgress;
@property (getter=isInstalled, readonly) bool installed;
@property (getter=isLaunchProhibited, readonly) bool launchProhibited;
@property (retain) NSString *localizedName;
@property (getter=hasMessagesExtension, readonly) bool messasgesExtension;
@property (getter=isOcelot, readonly) bool ocelot;
@property (getter=isOpenable, readonly) bool openable;
@property (getter=isPlaceholder, readonly) bool placeholder;
@property (retain) NSProgress *postProcessProgress;
@property (retain) NSProgress *progress;
@property long long progressPhase;
@property long long purchaserDSID;
@property (retain) NSData *rawUpdateData;
@property (retain) ASDProgress *remoteProgress;
@property long long softwarePlatform;
@property long long status;
@property (getter=isStoreApp, readonly) bool storeApp;
@property (retain) NSString *storeCohort;
@property long long storeExternalVersionID;
@property (retain) NSNumber *storeFront;
@property long long storeItemID;
@property (getter=isSystemApp, readonly) bool systemApp;
@property (getter=isUpdateAvailable, readonly) bool updateAvailable;
@property (retain) NSString *updateBuyParams;
@property (retain) NSDate *updateInstallDate;
@property (retain) NSDictionary *updateMetadata;
@property long long watchApplicationMode;
@property (getter=isWrapped, readonly) bool wrapped;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artistName;
- (bool)autoUpdateEnabled;
- (id)bundleID;
- (id)bundlePath;
- (id)bundleShortVersion;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downloadProgress;
- (long long)downloaderDSID;
- (void)encodeWithCoder:(id)arg1;
- (long long)essentialBackgroundAssetDownloadEstimate;
- (id)executablePath;
- (long long)extensions;
- (long long)familyID;
- (bool)hasMessagesExtension;
- (bool)hasPostProcessing;
- (bool)hasUnknownDistributor;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)installError;
- (id)installID;
- (id)installProgress;
- (bool)isAppClip;
- (bool)isArcadeOpenable;
- (bool)isBetaApp;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToApp:(id)arg1;
- (bool)isFamilyShared;
- (bool)isInstalled;
- (bool)isLaunchProhibited;
- (bool)isOcelot;
- (bool)isOpenable;
- (bool)isPlaceholder;
- (bool)isStoreApp;
- (bool)isSystemApp;
- (bool)isUpdateAvailable;
- (bool)isWrapped;
- (void)loadUpdateMetadataIfNecessary;
- (id)localizedName;
- (id)postProcessProgress;
- (id)progress;
- (long long)progressPhase;
- (long long)purchaserDSID;
- (id)rawUpdateData;
- (id)remoteProgress;
- (void)setArtistName:(id)arg1;
- (void)setAutoUpdateEnabled:(bool)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setBundleShortVersion:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setDownloadProgress:(id)arg1;
- (void)setDownloaderDSID:(long long)arg1;
- (void)setEssentialBackgroundAssetDownloadEstimate:(long long)arg1;
- (void)setExecutablePath:(id)arg1;
- (void)setExtensions:(long long)arg1;
- (void)setFamilyID:(long long)arg1;
- (void)setHasPostProcessing:(bool)arg1;
- (void)setInstallError:(id)arg1;
- (void)setInstallProgress:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setPostProcessProgress:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressPhase:(long long)arg1;
- (void)setPurchaserDSID:(long long)arg1;
- (void)setRawUpdateData:(id)arg1;
- (void)setRemoteProgress:(id)arg1;
- (void)setSoftwarePlatform:(long long)arg1;
- (void)setStatus:(long long)arg1;
- (void)setStoreCohort:(id)arg1;
- (void)setStoreExternalVersionID:(long long)arg1;
- (void)setStoreFront:(id)arg1;
- (void)setStoreItemID:(long long)arg1;
- (void)setUpdateBuyParams:(id)arg1;
- (void)setUpdateInstallDate:(id)arg1;
- (void)setUpdateMetadata:(id)arg1;
- (void)setWatchApplicationMode:(long long)arg1;
- (long long)softwarePlatform;
- (long long)status;
- (id)storeCohort;
- (long long)storeExternalVersionID;
- (id)storeFront;
- (long long)storeItemID;
- (id)updateBuyParams;
- (id)updateInstallDate;
- (id)updateMetadata;
- (long long)watchApplicationMode;

@end

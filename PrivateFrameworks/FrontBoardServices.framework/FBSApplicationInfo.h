/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSApplicationInfo : FBSBundleInfo <BSDescriptionProviding> {
    NSURL * _advertisingAttributionReportEndpoint;
    NSString * _appIDEntitlement;
    LSApplicationIdentity * _applicationIdentity;
    NSSet * _backgroundModes;
    bool  _beta;
    bool  _blocked;
    bool  _builtWithTSAN;
    NSURL * _bundleContainerURL;
    NSArray * _customMachServices;
    NSURL * _dataContainerURL;
    NSArray * _deviceFamilies;
    NSNumber * _downloaderDSID;
    bool  _enabled;
    NSDictionary * _environmentVariables;
    NSURL * _executableURL;
    NSArray * _externalAccessoryProtocols;
    bool  _freeDeveloperProvisioningProfileValidated;
    bool  _hasViewServicesEntitlement;
    bool  _initialized;
    bool  _installing;
    long long  _interfaceOrientation;
    NSNumber * _itemID;
    double  _lastModifiedDate;
    NSDictionary * _lazy_entitlements;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    float  _minimumBrightnessLevel;
    bool  _pendingUninstall;
    NSString * _preferenceDomain;
    RBSProcessIdentity * _processIdentity;
    bool  _provisioningProfileValidated;
    NSNumber * _purchaserDSID;
    long long  _ratingRank;
    NSArray * _requiredCapabilities;
    bool  _requiresPersistentWiFi;
    bool  _restricted;
    NSURL * _sandboxURL;
    long long  _screenTimePolicy;
    NSString * _sdkVersion;
    NSString * _shortVersionString;
    unsigned int  _signatureVersion;
    NSString * _signerIdentity;
    unsigned long long  _supportedInterfaceOrientations;
    bool  _supportsMultiwindow;
    NSArray * _tags;
    NSString * _teamIdentifier;
    bool  _tentativeUninstall;
    unsigned long long  _type;
    bool  _uninstalling;
    bool  _uppProvisioningProfileValidated;
}

@property (getter=isUPPProvisioningProfileValidated, nonatomic, readonly) bool UPPProvisioningProfileValidated;
@property (nonatomic, readonly, copy) NSURL *advertisingAttributionReportEndpoint;
@property (getter=_appIDEntitlement, nonatomic, readonly, copy) NSString *appIDEntitlement;
@property (nonatomic, readonly, copy) LSApplicationIdentity *applicationIdentity;
@property (getter=isBeta, nonatomic, readonly) bool beta;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (getter=isBlockedForScreenTimeExpiration, nonatomic, readonly) bool blockedForScreenTimeExpiration;
@property (getter=wasBuiltWithTSAN, nonatomic, readonly) bool builtWithTSAN;
@property (nonatomic, readonly) NSURL *bundleContainerURL;
@property (retain) _FBSCDHashCacheInfo *cachedCDHashInfo;
@property (nonatomic, readonly) NSArray *customMachServices;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *deviceFamilies;
@property (nonatomic, readonly) NSNumber *downloaderDSID;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly) NSURL *executableURL;
@property (getter=isExitsOnSuspend, nonatomic, readonly) bool exitsOnSuspend;
@property (nonatomic, readonly) NSArray *externalAccessoryProtocols;
@property (getter=hasFreeDeveloperProvisioningProfile, nonatomic, readonly) bool freeDeveloperProvisioningProfile;
@property (getter=isFreeDeveloperProvisioningProfileValidated, nonatomic, readonly) bool freeDeveloperProvisioningProfileValidated;
@property (nonatomic, readonly) bool hasViewServicesEntitlement;
@property (readonly) unsigned long long hash;
@property (getter=_isInstalling, setter=_setInstalling:, nonatomic) bool installing;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, readonly) bool isSignatureVersionSupportEndingSoon;
@property (nonatomic, readonly) bool isSignatureVersionSupported;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) double lastModifiedDate;
@property (nonatomic, readonly) float minimumBrightnessLevel;
@property (getter=_isPendingUninstall, setter=_setPendingUninstall:, nonatomic) bool pendingUninstall;
@property (nonatomic, readonly, copy) NSString *preferenceDomain;
@property (nonatomic, readonly, copy) RBSProcessIdentity *processIdentity;
@property (getter=isProvisioningProfileValidated, nonatomic, readonly) bool provisioningProfileValidated;
@property (nonatomic, readonly) NSNumber *purchaserDSID;
@property (nonatomic, readonly) long long ratingRank;
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) bool requiresPersistentWiFi;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly) NSURL *sandboxURL;
@property (nonatomic, readonly) long long screenTimePolicy;
@property (nonatomic, readonly, copy) NSString *sdkVersion;
@property (nonatomic, readonly, copy) NSString *shortVersionString;
@property (nonatomic, readonly) long long signatureState;
@property (nonatomic, readonly) unsigned int signatureVersion;
@property (nonatomic, readonly, copy) NSString *signerIdentity;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) bool supportsMultiwindow;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *teamIdentifier;
@property (getter=_isTentativeUninstall, setter=_setTentativeUninstall:, nonatomic) bool tentativeUninstall;
@property (nonatomic, readonly) unsigned long long type;
@property (getter=_isUninstalling, setter=_setUninstalling:, nonatomic) bool uninstalling;
@property (getter=hasUniversalProvisioningProfile, nonatomic, readonly) bool universalProvisioningProfile;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (unsigned long long)_applicationTypeForProxy:(id)arg1;
+ (unsigned long long)_applicationTypeForRecord:(id)arg1;
+ (id)_configureEnvironment:(id)arg1 withInfo:(id)arg2 isPreApex:(bool)arg3;

- (void).cxx_destruct;
- (id)_appIDEntitlement;
- (id)_initWithApplicationProxy:(id)arg1 record:(id)arg2 appIdentity:(id)arg3 processIdentity:(id)arg4 overrideURL:(id)arg5;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2;
- (bool)_isInstalling;
- (bool)_isPendingUninstall;
- (bool)_isTentativeUninstall;
- (bool)_isUninstalling;
- (void)_loadFromProxy:(id)arg1;
- (void)_loadFromRecord:(id)arg1;
- (void)_overrideTags:(id)arg1;
- (void)_setInstalling:(bool)arg1;
- (void)_setPendingUninstall:(bool)arg1;
- (void)_setTentativeUninstall:(bool)arg1;
- (void)_setUninstalling:(bool)arg1;
- (void)_synchronize:(id /* block */)arg1;
- (id)advertisingAttributionReportEndpoint;
- (id)applicationIdentity;
- (bool)builtOnOrAfterSDKVersion:(id)arg1;
- (id)bundleContainerURL;
- (id)cachedCDHashInfo;
- (id)customMachServices;
- (id)dataContainerURL;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)deviceFamilies;
- (id)downloaderDSID;
- (id)entitlements;
- (id)environmentVariables;
- (id)executableURL;
- (id)externalAccessoryProtocols;
- (id)fallbackFolderName;
- (id)folderNames;
- (bool)hasViewServicesEntitlement;
- (id)initWithApplicationProxy:(id)arg1;
- (id)initWithApplicationRecord:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isBeta;
- (bool)isBlocked;
- (bool)isBlockedForScreenTimeExpiration;
- (bool)isEnabled;
- (bool)isExitsOnSuspend;
- (bool)isFreeDeveloperProvisioningProfileValidated;
- (bool)isProvisioningProfileValidated;
- (bool)isRestricted;
- (bool)isSignatureVersionSupportEndingSoon;
- (bool)isSignatureVersionSupported;
- (bool)isUPPProvisioningProfileValidated;
- (id)itemID;
- (double)lastModifiedDate;
- (float)minimumBrightnessLevel;
- (id)preferenceDomain;
- (id)processIdentity;
- (id)purchaserDSID;
- (long long)ratingRank;
- (id)requiredCapabilities;
- (bool)requiresPersistentWiFi;
- (id)sandboxURL;
- (long long)screenTimePolicy;
- (id)sdkVersion;
- (void)setCachedCDHashInfo:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (id)shortVersionString;
- (unsigned int)signatureVersion;
- (id)signerIdentity;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportsAllInterfaceOrientations;
- (bool)supportsBackgroundMode:(id)arg1;
- (bool)supportsDeviceFamily:(unsigned long long)arg1;
- (bool)supportsInterfaceOrientation:(long long)arg1;
- (bool)supportsMultiwindow;
- (id)tags;
- (id)teamIdentifier;
- (unsigned long long)type;
- (unsigned long long)unauthoritativeTrustState;
- (bool)wasBuiltWithTSAN;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (id)_initForProfileManagerTesting;
- (long long)_mapSignatureStateFromTrustState:(unsigned long long)arg1;
- (id)_signatureValidationService;
- (void)acceptApplicationSignatureIdentity;
- (bool)hasFreeDeveloperProvisioningProfile;
- (bool)hasUniversalProvisioningProfile;
- (long long)signatureState;

@end
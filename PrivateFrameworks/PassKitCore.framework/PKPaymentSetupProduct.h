/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupProduct : NSObject <NSCopying> {
    NSArray * _accounts;
    bool  _allowOnManagedAccount;
    NSURL * _appClipLaunchURL;
    NSURL * _appLaunchURL;
    NSArray * _associatedStoreIdentifiers;
    PKPaymentSetupProduct * _augmentedProduct;
    NSString * _badge;
    NSDictionary * _clientInfo;
    PKPaymentSetupProductConfiguration * _configuration;
    NSString * _displayName;
    NSString * _displayStatus;
    NSArray * _featureApplications;
    unsigned long long  _flags;
    long long  _hsa2Requirement;
    PKPaymentSetupProductImageAssetURLs * _imageAssetURLs;
    PKPaymentSetupProductImageAssets * _imageAssets;
    bool  _isServerDriven;
    NSString * _localizedDescription;
    long long  _maximumSupportedAge;
    bool  _meetsAgeRequirements;
    NSDictionary * _minimumOSVersion;
    long long  _minimumSupportedAge;
    long long  _minimumTargetUserSupportedAge;
    NSArray * _onboardingItems;
    NSArray * _paymentOptions;
    bool  _preventsFeatureApplication;
    NSString * _primaryRegion;
    NSExtension * _provisioningExtension;
    bool  _provisioningExtensionRequiresAuthorization;
    NSArray * _provisioningMethods;
    unsigned long long  _provisioningStatus;
    NSDictionary * _rawDictionary;
    NSDictionary * _readerModeMetadata;
    PKPaymentSetupProductRegionData * _regionData;
    NSString * _regionIdentifier;
    NSSet * _regions;
    NSMutableDictionary * _requestedProvisioningMethods;
    NSArray * _requiredFields;
    NSArray * _searchTerms;
    NSArray * _supportedCameraCaptureTypes;
    NSArray * _supportedInAppTypes;
    NSArray * _supportedProtocols;
    unsigned long long  _supportedProvisioningMethods;
    NSArray * _supportedTransitNetworkIdentifiers;
    bool  _suppressPendingPurchases;
    NSURL * _termsURL;
}

@property (nonatomic, copy) NSArray *accounts;
@property (nonatomic, readonly) bool allowOnManagedAccount;
@property (nonatomic, readonly, copy) NSURL *appClipLaunchURL;
@property (nonatomic, copy) NSURL *appLaunchURL;
@property (getter=isAppleBalanceProduct, nonatomic, readonly) bool appleBalanceProduct;
@property (nonatomic, copy) NSArray *associatedStoreIdentifiers;
@property (nonatomic, readonly, copy) PKPaymentSetupProduct *augmentedProduct;
@property (nonatomic, copy) NSString *badge;
@property (nonatomic, copy) NSDictionary *clientInfo;
@property (nonatomic, copy) PKPaymentSetupProductConfiguration *configuration;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *displayStatus;
@property (nonatomic, retain) NSArray *featureApplications;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long hsa2Requirement;
@property (nonatomic, readonly) PKPaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (nonatomic, retain) PKPaymentSetupProductImageAssets *imageAssets;
@property (nonatomic) bool isServerDriven;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *longLocalizedDescription;
@property (nonatomic) long long maximumSupportedAge;
@property (nonatomic) bool meetsAgeRequirements;
@property (nonatomic, retain) NSDictionary *minimumOSVersion;
@property (nonatomic) long long minimumSupportedAge;
@property (nonatomic) long long minimumTargetUserSupportedAge;
@property (nonatomic, retain) NSArray *onboardingItems;
@property (nonatomic, readonly, copy) NSString *partnerName;
@property (nonatomic, readonly, copy) NSArray *paymentOptions;
@property (nonatomic) bool preventsFeatureApplication;
@property (nonatomic, readonly) NSString *primaryRegion;
@property (nonatomic, readonly) NSExtension *provisioningExtension;
@property (nonatomic, readonly) bool provisioningExtensionRequiresAuthorization;
@property (nonatomic, readonly, copy) NSArray *provisioningMethods;
@property (nonatomic) unsigned long long provisioningStatus;
@property (nonatomic, copy) NSDictionary *rawDictionary;
@property (nonatomic, readonly, copy) NSDictionary *readerModeMetadata;
@property (nonatomic, readonly) PKPaymentSetupProductRegionData *regionData;
@property (nonatomic, readonly, copy) NSString *regionIdentifier;
@property (nonatomic, copy) NSSet *regions;
@property (nonatomic, retain) NSMutableDictionary *requestedProvisioningMethods;
@property (nonatomic, copy) NSArray *requiredFields;
@property (nonatomic, copy) NSArray *searchTerms;
@property (nonatomic, readonly, copy) NSArray *supportedCameraCaptureTypes;
@property (nonatomic, readonly, copy) NSArray *supportedInAppTypes;
@property (nonatomic, copy) NSArray *supportedProtocols;
@property (nonatomic) unsigned long long supportedProvisioningMethods;
@property (nonatomic, readonly, copy) NSArray *supportedTransitNetworkIdentifiers;
@property (nonatomic, readonly) bool suppressPendingPurchases;
@property (nonatomic, copy) NSURL *termsURL;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)_displayNameForCardType:(id)arg1;
+ (id)_inAppProvisioningURLWthScheme:(id)arg1 path:(id)arg2;
+ (id)productForIssuerProvisioningExtension:(id)arg1 withStatus:(id)arg2;
+ (id)productsFromBrowseableBankApps:(id)arg1;

- (void).cxx_destruct;
- (void)_updateDebugConfigurationForState:(unsigned long long)arg1;
- (id)accounts;
- (void)addProvisioningMethod:(id)arg1;
- (void)addProvisioningMethodType:(unsigned long long)arg1;
- (long long)allSupportedProtocols;
- (bool)allowOnManagedAccount;
- (id)appClipLaunchURL;
- (id)appLaunchURL;
- (id)associatedStoreIdentifiers;
- (void)augmentWithProduct:(id)arg1;
- (id)augmentedProduct;
- (id)badge;
- (id)clientInfo;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)didAuthorizeProvisioningExtension;
- (id)displayName;
- (id)displayStatus;
- (id)featureApplications;
- (unsigned long long)flags;
- (long long)hsa2Requirement;
- (id)imageAssetURLs;
- (id)imageAssets;
- (id)initWithFeatureIdentifier:(unsigned long long)arg1;
- (bool)isCarKey;
- (bool)isServerDriven;
- (id)localizedDescription;
- (id)longLocalizedDescription;
- (long long)maximumSupportedAge;
- (bool)meetsAgeRequirements;
- (id)minimumOSVersion;
- (long long)minimumSupportedAge;
- (long long)minimumTargetUserSupportedAge;
- (id)onboardingItems;
- (id)partnerIdentifier;
- (id)partnerName;
- (id)paymentOptions;
- (bool)preventsFeatureApplication;
- (id)primaryRegion;
- (id)productIdentifier;
- (id)provisioningExtension;
- (bool)provisioningExtensionRequiresAuthorization;
- (id)provisioningMethodMetadataForType:(id)arg1;
- (id)provisioningMethodTypes;
- (id)provisioningMethods;
- (unsigned long long)provisioningStatus;
- (id)rawDictionary;
- (id)readerModeMetadata;
- (id)regionData;
- (id)regionIdentifier;
- (id)regions;
- (id)requestedProvisioningMethods;
- (id)requiredFields;
- (id)searchTerms;
- (void)setAccounts:(id)arg1;
- (void)setAppLaunchURL:(id)arg1;
- (void)setAssociatedStoreIdentifiers:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayStatus:(id)arg1;
- (void)setFeatureApplications:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHsa2Requirement:(long long)arg1;
- (void)setImageAssets:(id)arg1;
- (void)setIsServerDriven:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setMaximumSupportedAge:(long long)arg1;
- (void)setMeetsAgeRequirements:(bool)arg1;
- (void)setMinimumOSVersion:(id)arg1;
- (void)setMinimumSupportedAge:(long long)arg1;
- (void)setMinimumTargetUserSupportedAge:(long long)arg1;
- (void)setOnboardingItems:(id)arg1;
- (void)setPreventsFeatureApplication:(bool)arg1;
- (void)setProvisioningMethodMetadata:(id)arg1 forType:(id)arg2;
- (void)setProvisioningStatus:(unsigned long long)arg1;
- (void)setRawDictionary:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setRequestedProvisioningMethods:(id)arg1;
- (void)setRequiredFields:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setSupportedProtocols:(id)arg1;
- (void)setSupportedProvisioningMethods:(unsigned long long)arg1;
- (void)setTermsURL:(id)arg1;
- (id)supportedCameraCaptureTypes;
- (id)supportedInAppTypes;
- (id)supportedProtocols;
- (unsigned long long)supportedProvisioningMethods;
- (id)supportedTransitNetworkIdentifiers;
- (bool)supportsDevice:(id)arg1;
- (bool)supportsOSVersion:(id)arg1 deviceClass:(id)arg2;
- (bool)supportsProvisioningMethodForType:(unsigned long long)arg1;
- (bool)suppressPendingPurchases;
- (id)termsURL;
- (void)updateWithProductDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (bool)isAppleBalanceProduct;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)_getCardImageUrlFromMetadata:(id)arg1 forScale:(double)arg2;
- (id)digitalCardCachedImage:(id /* block */)arg1;
- (id)logoCachedImage:(id /* block */)arg1;
- (id)plasticCardCachedImage:(id /* block */)arg1;
- (void)resetCache;
- (id)thumbnailCachedImageForSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;

@end

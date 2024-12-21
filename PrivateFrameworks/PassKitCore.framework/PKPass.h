/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPass : PKObject <NSCopying, NSSecureCoding> {
    NSURL * _accessibilityURL;
    NSSet * _associatedPassTypeIdentifiers;
    NSURL * _bagPolicyURL;
    NSString * _cardholderInfoSectionTitle;
    NSData * _cloudKitMetadata;
    NSData * _cloudKitSecureMetadata;
    NSURL * _contactVenueEmail;
    NSURL * _contactVenuePhoneNumber;
    NSURL * _contactVenueWebsite;
    NSString * _deviceName;
    NSURL * _directionsInformationURL;
    NSSet * _embeddedBeacons;
    NSArray * _embeddedLocations;
    NSDate * _expirationDate;
    NSString * _groupingID;
    bool  _hasStoredValue;
    unsigned long long  _homeKeyLiveRenderType;
    NSDate * _ingestedDate;
    bool  _isCloudKitArchived;
    bool  _isCloudKitSecurelyArchived;
    unsigned long long  _liveRenderType;
    bool  _liveRenderedBackground;
    PKLiveRenderedShaderSet * _liveRenderedShaderSet;
    bool  _liveRenderingRequiresEnablement;
    NSURL * _localLocationsURL;
    NSURL * _merchandiseURL;
    NSDate * _modifiedDate;
    bool  _muteReadyForUseNotification;
    PKNFCPayload * _nfcPayload;
    NSURL * _orderFoodURL;
    NSString * _organizationName;
    NSURL * _parkingInformationURL;
    PKImage * _partialFrontFaceImagePlaceholder;
    NSURL * _partnerAddOnURL;
    NSString * _passLibraryMachServiceName;
    unsigned long long  _passType;
    NSString * _passTypeIdentifier;
    NSURL * _passURL;
    NSString * _provisioningCredentialHash;
    NSURL * _purchaseParkingURL;
    NSArray * _relevantDates;
    bool  _remotePass;
    bool  _revoked;
    NSURL * _sellURL;
    NSNumber * _sequenceCounter;
    NSString * _serialNumber;
    long long  _sharingMethod;
    NSString * _sharingText;
    NSURL * _sharingURL;
    bool  _supportsCategoryVisualization;
    bool  _supportsLifecycleUpdates;
    NSString * _teamID;
    NSURL * _transferURL;
    NSURL * _transitInformationURL;
    NSDictionary * _userInfo;
    bool  _voided;
    NSURL * _webLocationsURL;
}

@property (nonatomic, copy) NSURL *accessibilityURL;
@property (nonatomic, readonly) NSString *airlineCode;
@property (nonatomic, readonly) PKImage *altImage;
@property (nonatomic, readonly) NSURL *appLaunchURL;
@property (nonatomic, copy) NSSet *associatedPassTypeIdentifiers;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, readonly) NSArray *auxiliaryPassInformation;
@property (nonatomic, readonly) NSArray *auxiliaryStoreIdentifiers;
@property (nonatomic, readonly) NSArray *backFieldBuckets;
@property (nonatomic, copy) NSURL *bagPolicyURL;
@property (nonatomic, readonly) PKBarcode *barcode;
@property (nonatomic, readonly) PKPassBarcodeSettings *barcodeSettings;
@property (nonatomic, readonly) NSString *businessChatIdentifier;
@property (nonatomic, readonly) PKImage *cardHolderPicture;
@property (nonatomic, copy) NSString *cardholderInfoSectionTitle;
@property (nonatomic, retain) NSData *cloudKitMetadata;
@property (nonatomic, retain) NSData *cloudKitSecureMetadata;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cobrandLogoRect;
@property (nonatomic, readonly) PKImage *compactBankLogoDarkImage;
@property (nonatomic, readonly) PKImage *compactBankLogoLightImage;
@property (nonatomic, copy) NSURL *contactVenueEmail;
@property (nonatomic, copy) NSURL *contactVenuePhoneNumber;
@property (nonatomic, copy) NSURL *contactVenueWebsite;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSURL *directionsInformationURL;
@property (nonatomic, copy) PKPassDisplayProfile *displayProfile;
@property (nonatomic, copy) NSSet *embeddedBeacons;
@property (nonatomic, copy) NSSet *embeddedLocations;
@property (nonatomic, copy) NSArray *embeddedLocationsArray;
@property (readonly, copy) PKLocation *eventLocation;
@property (readonly, copy) NSString *eventName;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *flightCode;
@property (nonatomic, readonly) unsigned long long flightNumber;
@property (nonatomic, readonly) PKImage *footerImage;
@property (nonatomic, readonly) PKImage *frontFaceImage;
@property (nonatomic, readonly) PKColor *frontFaceImageAverageColor;
@property (nonatomic, readonly) PKPassFrontFaceImageSet *frontFaceImageSet;
@property (nonatomic, readonly) PKImage *frontFaceShadowImage;
@property (nonatomic, readonly) NSArray *frontFieldBuckets;
@property (nonatomic, copy) NSString *groupingID;
@property (nonatomic, readonly) bool hasFlightDetails;
@property (readonly) bool hasLogoImageSet;
@property (nonatomic) bool hasStoredValue;
@property (nonatomic) unsigned long long homeKeyLiveRenderType;
@property (nonatomic, readonly, copy) UIImage *icon;
@property (nonatomic, readonly) PKImage *iconImage;
@property (nonatomic, retain) NSDate *ingestedDate;
@property (nonatomic) bool isCloudKitArchived;
@property (nonatomic) bool isCloudKitSecurelyArchived;
@property (nonatomic, readonly) bool isPersonalizable;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic) unsigned long long liveRenderType;
@property (nonatomic, readonly) PKPassLiveRenderedArmedStateImageSet *liveRenderedArmedStateImageSet;
@property (nonatomic) bool liveRenderedBackground;
@property (nonatomic, readonly) PKPassLiveRenderedImageSet *liveRenderedImageSet;
@property (nonatomic, readonly) PKLiveRenderedShaderSet *liveRenderedShaderSet;
@property (nonatomic) bool liveRenderingRequiresEnablement;
@property (nonatomic, copy) NSURL *localLocationsURL;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } logoRect;
@property (nonatomic, readonly) NSString *logoText;
@property (nonatomic, readonly) NSString *lowercaseLocalizedName;
@property (nonatomic, copy) NSURL *merchandiseURL;
@property (nonatomic, retain) NSDate *modifiedDate;
@property (nonatomic) bool muteReadyForUseNotification;
@property (setter=setNFCPayload:, nonatomic, copy) PKNFCPayload *nfcPayload;
@property (readonly) NSString *notificationCenterTitle;
@property (nonatomic, readonly) PKImage *notificationIconImage;
@property (readonly) NSData *npkCompleteHash;
@property (readonly) bool npkHasValidNFCPayload;
@property (readonly) bool npkIsDefaultPassEligible;
@property (readonly) bool npkIsHomeKeyUWB;
@property (readonly) bool npkSupportsHidingAccessory;
@property (nonatomic, copy) NSURL *orderFoodURL;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, copy) NSURL *parkingInformationURL;
@property (nonatomic, readonly) PKImage *partialFrontFaceImage;
@property (nonatomic, readonly) PKColor *partialFrontFaceImageAverageColor;
@property (nonatomic, readonly) PKImage *partialFrontFaceImagePlaceholder;
@property (nonatomic, copy) NSURL *partnerAddOnURL;
@property (nonatomic, readonly) NSArray *passDetailSections;
@property (nonatomic, copy) NSString *passLibraryMachServiceName;
@property (nonatomic) unsigned long long passType;
@property (nonatomic, copy) NSString *passTypeIdentifier;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (nonatomic, readonly) PKPassPersonalization *personalization;
@property (nonatomic, readonly) PKImage *personalizationLogoImage;
@property (nonatomic, readonly) NSString *pluralLocalizedName;
@property (nonatomic, copy) NSString *provisioningCredentialHash;
@property (nonatomic, copy) NSURL *purchaseParkingURL;
@property (nonatomic, readonly) PKImage *rawIcon;
@property (nonatomic, copy) NSDate *relevantDate;
@property (nonatomic, copy) NSArray *relevantDates;
@property (getter=isRemotePass, nonatomic) bool remotePass;
@property (getter=isRevoked, nonatomic) bool revoked;
@property (readonly, copy) PKSeatingInformation *seatingInformation;
@property (nonatomic, readonly) PKSecureElementPass *secureElementPass;
@property (nonatomic, copy) NSURL *sellURL;
@property (nonatomic, copy) NSNumber *sequenceCounter;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) long long sharingMethod;
@property (nonatomic, copy) NSString *sharingText;
@property (nonatomic, copy) NSURL *sharingURL;
@property (nonatomic, readonly) bool silenceRequested;
@property (nonatomic, readonly) NSArray *storeIdentifiers;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } stripRect;
@property (nonatomic, readonly) long long style;
@property (nonatomic) bool supportsCategoryVisualization;
@property (nonatomic, readonly) bool supportsIssuerBinding;
@property (nonatomic) bool supportsLifecycleUpdates;
@property (nonatomic, readonly) NSArray *systemAppBundleIdentifiers;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailRect;
@property (nonatomic, copy) NSURL *transferURL;
@property (nonatomic, copy) NSURL *transitInformationURL;
@property (nonatomic, readonly) long long transitType;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (getter=isVoided, nonatomic) bool voided;
@property (nonatomic, copy) NSURL *webLocationsURL;
@property (nonatomic, copy) NSURL *webServiceURL;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)_dateForPassComparison:(id)arg1 searchOption:(unsigned long long)arg2;
+ (Class)classForDictionary:(id)arg1 bundle:(id)arg2;
+ (Class)classForPassType:(unsigned long long)arg1;
+ (id)dataTypeIdentifier;
+ (unsigned long long)defaultSettings;
+ (id)fetchSigningDateForObjectWithFileDataAccessor:(id)arg1 passDictionary:(id)arg2;
+ (bool)isValidObjectWithFileDataAccessor:(id)arg1 validationOptions:(unsigned long long)arg2 warnings:(id*)arg3 error:(id*)arg4 signingDate:(id*)arg5 passDictionary:(id)arg6;
+ (id)recordNameForUniqueID:(id)arg1;
+ (id)recordNamePrefix;
+ (Class)resolvingClass;
+ (bool)supportsSecureCoding;
+ (id)uniqueIDFromRecordName:(id)arg1;

- (void).cxx_destruct;
- (id)_changeMessageForDateSemantic:(id)arg1 newSemantic:(id)arg2;
- (id)_changeMessageForDictionariesSemantic:(id)arg1 newSemantic:(id)arg2;
- (id)_changeMessageForEventDateInfoSemantic:(id)arg1 newSemantic:(id)arg2;
- (id)_changeMessageForFieldKey:(id)arg1;
- (id)_changeMessageForSemantic:(id)arg1 newSemantic:(id)arg2;
- (id)_localizationKeyForMultipleDiff;
- (id)accessibilityURL;
- (id)additionalInfoFields;
- (id)airlineCode;
- (id)allSemantics;
- (id)altImage;
- (id)appLaunchURL;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)associatedPassTypeIdentifiers;
- (id)autoTopUpFields;
- (id)auxiliaryPassInformation;
- (id)auxiliaryStoreIdentifiers;
- (bool)availableForAutomaticPresentationUsingBeaconContext;
- (bool)availableForAutomaticPresentationUsingVASContext;
- (id)backFieldBuckets;
- (id)backgroundImage;
- (id)bagPolicyURL;
- (id)balanceFields;
- (id)balances;
- (id)barcode;
- (id)barcodeSettings;
- (id)businessChatIdentifier;
- (id)cardHolderPicture;
- (id)cardholderInfoSectionTitle;
- (id)cloudKitMetadata;
- (id)cloudKitSecureMetadata;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cobrandLogoRect;
- (id)compactBankLogoDarkImage;
- (id)compactBankLogoLightImage;
- (long long)comparePassDatesToPass:(id)arg1 searchOption:(unsigned long long)arg2;
- (id)contactVenueEmail;
- (id)contactVenuePhoneNumber;
- (id)contactVenueWebsite;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmountForSemanticKey:(id)arg1;
- (id)dateForSemanticKey:(id)arg1;
- (id)deviceName;
- (id)dictionariesForSemanticKey:(id)arg1;
- (id)diff:(id)arg1;
- (id)directionsInformationURL;
- (void)downloadRemoteAssetsWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)embeddedBeacons;
- (id)embeddedLocations;
- (id)embeddedLocationsArray;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDateInfoForSemanticKey:(id)arg1;
- (id)eventLocation;
- (id)eventName;
- (long long)eventType;
- (id)expirationDate;
- (id)fidoProfile;
- (id)fieldForKey:(id)arg1;
- (id)flightCode;
- (unsigned long long)flightNumber;
- (id)footerImage;
- (id)frontFaceImage;
- (id)frontFaceImageAverageColor;
- (id)frontFaceImageSet;
- (id)frontFaceShadowImage;
- (id)frontFieldBuckets;
- (id)groupingID;
- (bool)hasFlightDetails;
- (bool)hasLocationRelevancyInfo;
- (bool)hasStoredValue;
- (bool)hasTimeOrLocationRelevancyInfo;
- (bool)hasValidNFCPayload;
- (unsigned long long)homeKeyLiveRenderType;
- (id)iconImage;
- (id)ingestedDate;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (bool)isCloudKitArchived;
- (bool)isCloudKitSecurelyArchived;
- (bool)isEqualToPassIncludingMetadata:(id)arg1;
- (bool)isExpired;
- (bool)isExpiredBasedOnSigningDate;
- (bool)isPastRelevancy;
- (bool)isPersonalizable;
- (bool)isRemotePass;
- (bool)isRevoked;
- (bool)isUpdatable;
- (bool)isValid;
- (bool)isVoided;
- (id)issuerBindingInformation;
- (unsigned long long)itemType;
- (bool)linksToApp;
- (unsigned long long)liveRenderType;
- (id)liveRenderedArmedStateImageSet;
- (bool)liveRenderedBackground;
- (id)liveRenderedImageSet;
- (id)liveRenderedShaderSet;
- (bool)liveRenderingRequiresEnablement;
- (void)loadFlightsWithCompletionHandler:(id /* block */)arg1;
- (id)localLocationsURL;
- (id)localizedDescription;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)localizedName;
- (id)localizedValueForFieldKey:(id)arg1;
- (id)locationForSemanticKey:(id)arg1;
- (id)logoImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })logoRect;
- (id)logoText;
- (id)lowercaseLocalizedName;
- (id)merchandiseURL;
- (id)modifiedDate;
- (bool)muteReadyForUseNotification;
- (id)nfcPayload;
- (id)notificationCenterTitle;
- (id)notificationIconImage;
- (id)numberForSemanticKey:(id)arg1;
- (id)orderFoodURL;
- (id)organizationName;
- (id)parkingInformationURL;
- (id)partialFrontFaceImage;
- (id)partialFrontFaceImageAverageColor;
- (id)partialFrontFaceImagePlaceholder;
- (id)partnerAddOnURL;
- (id)passDetailSections;
- (id)passLibraryMachServiceName;
- (id)passLocalizedStringForKey:(id)arg1;
- (unsigned long long)passType;
- (id)passTypeIdentifier;
- (id)passURL;
- (id)paymentPass;
- (id)personNameComponentsForSemanticKey:(id)arg1;
- (id)personalization;
- (id)personalizationLogoImage;
- (id)pluralLocalizedName;
- (id)primaryFields;
- (id)primaryIdentifier;
- (id)provisioningCredentialHash;
- (id)purchaseParkingURL;
- (id)rawIcon;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;
- (id)relevantDate;
- (id)relevantDates;
- (id)seatingInformation;
- (id)secondaryLogoImage;
- (id)secureElementPass;
- (id)sellURL;
- (id)semantics;
- (id)sequenceCounter;
- (id)serialNumber;
- (void)setAccessibilityURL:(id)arg1;
- (void)setAssociatedPassTypeIdentifiers:(id)arg1;
- (void)setBagPolicyURL:(id)arg1;
- (void)setCardholderInfoSectionTitle:(id)arg1;
- (void)setCloudKitMetadata:(id)arg1;
- (void)setCloudKitSecureMetadata:(id)arg1;
- (void)setContactVenueEmail:(id)arg1;
- (void)setContactVenuePhoneNumber:(id)arg1;
- (void)setContactVenueWebsite:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDirectionsInformationURL:(id)arg1;
- (void)setEmbeddedBeacons:(id)arg1;
- (void)setEmbeddedLocations:(id)arg1;
- (void)setEmbeddedLocationsArray:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setGroupingID:(id)arg1;
- (void)setHasStoredValue:(bool)arg1;
- (void)setHomeKeyLiveRenderType:(unsigned long long)arg1;
- (void)setIngestedDate:(id)arg1;
- (void)setIsCloudKitArchived:(bool)arg1;
- (void)setIsCloudKitSecurelyArchived:(bool)arg1;
- (void)setLiveRenderType:(unsigned long long)arg1;
- (void)setLiveRenderedBackground:(bool)arg1;
- (void)setLiveRenderingRequiresEnablement:(bool)arg1;
- (void)setLocalLocationsURL:(id)arg1;
- (void)setMerchandiseURL:(id)arg1;
- (void)setModifiedDate:(id)arg1;
- (void)setMuteReadyForUseNotification:(bool)arg1;
- (void)setNFCPayload:(id)arg1;
- (void)setOrderFoodURL:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setParkingInformationURL:(id)arg1;
- (void)setPartnerAddOnURL:(id)arg1;
- (void)setPassLibraryMachServiceName:(id)arg1;
- (void)setPassType:(unsigned long long)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setProvisioningCredentialHash:(id)arg1;
- (void)setPurchaseParkingURL:(id)arg1;
- (void)setRelevantDate:(id)arg1;
- (void)setRelevantDates:(id)arg1;
- (void)setRemotePass:(bool)arg1;
- (void)setRevoked:(bool)arg1;
- (void)setSellURL:(id)arg1;
- (void)setSequenceCounter:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSharingMethod:(long long)arg1;
- (void)setSharingText:(id)arg1;
- (void)setSharingURL:(id)arg1;
- (void)setSupportsCategoryVisualization:(bool)arg1;
- (void)setSupportsLifecycleUpdates:(bool)arg1;
- (void)setSystemFieldsMetata:(id)arg1 forCloudStoreWithIdentifier:(id)arg2;
- (void)setTeamID:(id)arg1;
- (void)setTransferURL:(id)arg1;
- (void)setTransitInformationURL:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVoided:(bool)arg1;
- (void)setWebLocationsURL:(id)arg1;
- (long long)sharingMethod;
- (id)sharingText;
- (id)sharingURL;
- (bool)silenceRequested;
- (id)storeIdentifiers;
- (id)stringForSemanticKey:(id)arg1;
- (id)stringsForSemanticKey:(id)arg1;
- (id)stripImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stripRect;
- (long long)style;
- (bool)supportsCategoryVisualization;
- (bool)supportsFeature:(unsigned long long)arg1 forDevice:(id)arg2 version:(id)arg3;
- (bool)supportsFeatureForCurrentDevice:(unsigned long long)arg1;
- (bool)supportsIssuerBinding;
- (bool)supportsLifecycleUpdates;
- (bool)supportsSharing;
- (bool)supportsSyncing;
- (id)systemAppBundleIdentifiers;
- (id)systemFieldsDataForCloudStoreWithIdentifier:(id)arg1;
- (id)teamID;
- (id)thumbnailImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailRect;
- (id)transferURL;
- (id)transitInformationURL;
- (long long)transitType;
- (id)userInfo;
- (id)venueMapImage;
- (bool)wasAchivedInCloudStoreWithIdentifier:(id)arg1;
- (id)webLocationsURL;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

+ (void)npkClearTransitValuePendingStateIfNecessaryForPassWithID:(id)arg1 withBalanceFields:(id)arg2 commutePlanFields:(id)arg3;
+ (void)npkHandleTransitValuePendingAmount:(id)arg1 forBalanceField:(id)arg2 passWithUniqueID:(id)arg3;
+ (void)npkHandleTransitValuePendingExpiryDate:(id)arg1 forCommutePlanField:(id)arg2 passWithUniqueID:(id)arg3;

- (bool)_hasPlanUpdatedWithFieldIdentifier:(id)arg1 fieldInfo:(id)arg2 renewalDate:(id)arg3 expiryDate:(id)arg4 rawCountValue:(id)arg5;
- (bool)hasLogoImageSet;
- (long long)npkAccessoryType;
- (id)npkCompleteHash;
- (id)npkCompleteHashForWatchOSVersion:(unsigned long long)arg1;
- (bool)npkHasValidNFCPayload;
- (bool)npkIsAddValuePending;
- (bool)npkIsDefaultPassEligible;
- (bool)npkIsHomeKeyUWB;
- (id)npkPendingAddValueStateExpireDateForBalanceFieldWithIdentifier:(id)arg1 currentBalance:(id)arg2;
- (id)npkPendingAddValueStateExpireDateForCommutePlanFieldWithIdentifier:(id)arg1 expiryDate:(id)arg2 rawCountValue:(id)arg3;
- (bool)npkSupportsHidingAccessory;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)cardImageWithDimensions:(struct CGSize { double x1; double x2; })arg1;
- (id)icon;
- (id)mailAttachmentIcon;

@end
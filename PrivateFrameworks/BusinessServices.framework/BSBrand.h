/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessServices.framework/BusinessServices
 */

@interface BSBrand : NSObject {
    BSBrandMessagingDetails * _messagingDetails;
    long long  _sandboxExtension;
    BSBrandObjcShim * _shim;
}

@property (nonatomic, readonly) NSString *brandURI;
@property (nonatomic, readonly) id hoursConfig;
@property (nonatomic, readonly) bool isAppleMainBrand;
@property (nonatomic, readonly) bool isAppleMakoBrand;
@property (nonatomic, readonly) bool isRCSChatBot;
@property (nonatomic, readonly) NSString *localizedResponseTime;
@property (nonatomic, readonly) BSBrandMessagingDetails *messagingDetails;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIColor *primaryBrandColor;
@property (getter=_primaryBrandColorHexString, nonatomic, readonly) NSString *primaryBrandColorHexString;
@property (nonatomic, readonly) NSString *primaryPhoneNumber;
@property (nonatomic, readonly) UIColor *secondaryBrandColor;
@property (getter=_secondaryBrandColorHexString, nonatomic, readonly) NSString *secondaryBrandColorHexString;
@property (nonatomic, readonly) BSBrandObjcShim *shim;
@property (getter=isVerified, nonatomic, readonly) bool verified;

// Image: /System/Library/PrivateFrameworks/BusinessServices.framework/BusinessServices

+ (id)mockBrand;
+ (id)placeholderName;

- (void).cxx_destruct;
- (id)_initWithShim:(id)arg1;
- (id)_primaryBrandColorHexString;
- (id)_secondaryBrandColorHexString;
- (id)address;
- (void)assetDataForType:(long long)arg1 usingSim:(id)arg2 completion:(id /* block */)arg3;
- (id)brandURI;
- (id)categories;
- (void)clearCachedAssets:(id /* block */)arg1;
- (void)clearCachedLogos:(id /* block */)arg1;
- (id)emailAddress;
- (id)genericCSSTemplateURL;
- (bool)isAppleMainBrand;
- (bool)isAppleMakoBrand;
- (bool)isRCSChatBot;
- (bool)isVerified;
- (id)localizedDescription;
- (id)localizedResponseTime;
- (void)logoDataOfType:(long long)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)logoDataOfType:(long long)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 fingerprint:(id)arg3 completion:(id /* block */)arg4;
- (void)logoDataOfType:(long long)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 usingSim:(id)arg3 completion:(id /* block */)arg4;
- (void)logoFileURLForType:(long long)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)logoFingerprint;
- (id)messageNumber;
- (id)messagingDetails;
- (id)name;
- (id)primaryPhoneNumber;
- (id)shim;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)termsAndConditionsURL;
- (id)verifiedBy;
- (id)website;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/BusinessServicesUI.framework/BusinessServicesUI

+ (id)makeBrandPlacecardForBrand:(id)arg1;

- (id)hoursConfig;
- (id)primaryBrandColor;
- (id)secondaryBrandColor;

@end
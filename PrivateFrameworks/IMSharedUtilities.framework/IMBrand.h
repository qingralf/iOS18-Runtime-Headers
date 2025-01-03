/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMBrand : NSObject {
    BSBrand * _brand;
}

@property (nonatomic, readonly, retain) BSBrand *brand;
@property (nonatomic, readonly) NSString *brandURI;
@property (nonatomic, readonly) NSString *localizedResponseTime;
@property (nonatomic, readonly) NSData *logoFingerprint;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIColor *primaryBrandColor;
@property (nonatomic, readonly) NSString *primaryPhoneNumber;
@property (nonatomic, readonly) UIColor *secondaryBrandColor;
@property (getter=isVerified, nonatomic, readonly) bool verified;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)brandWithBSBrand:(id)arg1;
+ (id)placeholderNameForBrandURI:(id)arg1;

- (id)_init;
- (void)_setBrand:(id)arg1;
- (id)brand;
- (id)brandURI;
- (void)clearCachedAssets:(id /* block */)arg1;
- (void)dealloc;
- (bool)isVerified;
- (id)localizedResponseTime;
- (void)logoDataOfType:(long long)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 fingerprint:(id)arg3 completion:(id /* block */)arg4;
- (id)logoFingerprint;
- (id)name;
- (id)primaryPhoneNumber;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)makeBrandPlacecardForIMBrand:(id)arg1;

- (id)primaryBrandColor;
- (id)secondaryBrandColor;

@end

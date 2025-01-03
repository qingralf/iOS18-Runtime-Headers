/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIProductPageItem : SUUIItem {
    NSURL * _artistPageURL;
    NSArray * _childItemIdentifiers;
    SUUIItemContentRating * _contentRating;
    NSString * _copyrightString;
    SUUIDeveloperInfo * _developerInfo;
    NSArray * _inAppPurchases;
    NSString * _installationRequirementsDescription;
    NSString * _itemDescription;
    NSString * _lastUpdateDateString;
    NSString * _licenseAgreementURLString;
    NSMutableDictionary * _loadedChildItems;
    NSArray * _parentBundleItemIdentifiers;
    NSString * _privacyPolicyURLString;
    NSString * _regularPriceString;
    NSArray * _releaseNotes;
    NSString * _reviewsURLString;
    NSArray * _screenshots;
    NSArray * _secondaryContentRatings;
    NSString * _sellerName;
    NSString * _shortenedProductPageURLString;
    SUUIStoreNotes * _storeNotes;
    NSString * _supportURLString;
    long long  _supportedFeatures;
    unsigned long long  _supportedGameCenterFeatures;
    NSString * _updateDescription;
}

@property (nonatomic, readonly) NSURL *artistPageURL;
@property (nonatomic, readonly) SUUIItemContentRating *contentRating;
@property (nonatomic, readonly) NSString *copyrightString;
@property (nonatomic, readonly) SUUIDeveloperInfo *developerInfo;
@property (nonatomic, readonly) NSArray *inAppPurchases;
@property (nonatomic, readonly) NSString *installationRequirementsDescription;
@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, readonly) NSString *lastUpdateDateString;
@property (nonatomic, readonly) NSString *licenseAgreementURLString;
@property (nonatomic, readonly) NSArray *parentBundleItemIdentifiers;
@property (nonatomic, readonly) NSString *privacyPolicyURLString;
@property (nonatomic, readonly) NSString *regularPriceString;
@property (nonatomic, readonly) NSArray *releaseNotes;
@property (nonatomic, readonly) NSString *reviewsURLString;
@property (nonatomic, readonly) NSArray *screenshots;
@property (nonatomic, readonly) NSArray *secondaryContentRatings;
@property (nonatomic, readonly) NSString *sellerName;
@property (nonatomic, readonly) NSString *shortenedProductPageURLString;
@property (nonatomic, readonly) SUUIStoreNotes *storeNotes;
@property (nonatomic, readonly) NSString *supportURLString;
@property (nonatomic, readonly) long long supportedFeatures;
@property (nonatomic, readonly) unsigned long long supportedGameCenterFeatures;
@property (nonatomic, readonly) NSString *updateDescription;

- (void).cxx_destruct;
- (void)_setInAppPurchases:(id)arg1;
- (void)_setVersionHistory:(id)arg1;
- (id)artistPageURL;
- (id)childItemForIdentifier:(id)arg1;
- (id)childItemIdentifiers;
- (id)contentRating;
- (id)copyrightString;
- (id)developerInfo;
- (id)inAppPurchases;
- (id)initWithLookupDictionary:(id)arg1;
- (id)installationRequirementsDescription;
- (id)itemDescription;
- (id)lastUpdateDateString;
- (id)licenseAgreementURLString;
- (id)loadedChildItems;
- (long long)numberOfChildItems;
- (id)parentBundleItemIdentifiers;
- (id)privacyPolicyURLString;
- (id)regularPriceString;
- (id)releaseNotes;
- (id)reviewsURLString;
- (id)screenshots;
- (id)secondaryContentRatings;
- (id)sellerName;
- (id)shortenedProductPageURLString;
- (id)storeNotes;
- (id)supportURLString;
- (long long)supportedFeatures;
- (unsigned long long)supportedGameCenterFeatures;
- (id)updateDescription;

@end

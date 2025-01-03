/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSportsEvent : NSObject <FCContentArchivable, FCSportsEventProviding, FCSportsTheming, FCTagProviding, FCTopicProviding> {
    NSString * _UMCCanonicalID;
    NSArray * _adTargetingKeywords;
    NSArray * _allowedStorefrontIDs;
    NSArray * _blockedStorefrontIDs;
    NSString * _eventArticleListID;
    NSArray * _eventCompetitorTags;
    <FCSportsProviding> * _eventLeagueTag;
    NSDate * _fetchDate;
    bool  _hideLocationInMasthead;
    NSString * _highlightsArticleListID;
    NSString * _identifier;
    FCInterestToken * _interestToken;
    bool  _isDeprecated;
    NSDate * _lastModifiedDate;
    NSDate * _loadDate;
    long long  _minimumNewsVersion;
    NSDictionary * _rosterResourceIDs;
    NSString * _sportsData;
    FCColor * _sportsEventNavigationForegroundColor;
    NTPBSportsEventRecord * _sportsEventRecord;
    NSDate * _sportsEventStartTime;
    NSString * _sportsFullName;
    unsigned long long  _sportsLeagueType;
    NSString * _sportsLocation;
    FCAssetHandle * _sportsLogoAltImageAssetHandle;
    FCAssetHandle * _sportsLogoAltImageCompactAssetHandle;
    FCAssetHandle * _sportsLogoAltImageLargeAssetHandle;
    FCAssetHandle * _sportsLogoImageAssetHandle;
    FCAssetHandle * _sportsLogoImageCompactAssetHandle;
    FCAssetHandle * _sportsLogoImageLargeAssetHandle;
    unsigned long long  _sportsLogoMastheadVisibility;
    NSString * _sportsNameAbbreviation;
    NSString * _sportsNickname;
    FCColor * _sportsPrimaryColor;
    NSString * _sportsPrimaryName;
    FCColor * _sportsSecondaryColor;
    NSString * _sportsSecondaryName;
    NSString * _sportsSecondaryShortName;
    unsigned long long  _sportsType;
    NSString * _sportsTypeDisplayName;
    NSString * _sportsTypePluralizedDisplayName;
    NSString * _superfeedConfigResourceID;
    NSString * _supergroupConfigJson;
    FCSectionSupergroupKnobs * _supergroupKnobs;
    NSString * _supergroupKnobsJson;
    NSString * _titleDisplayPrefix;
    NSString * _titleDisplaySuffix;
    NSArray * _topLevelGroupsTagIdentifiers;
    NSString * _topLevelSportTagIdentifier;
    NSString * _versionKey;
}

@property (nonatomic, readonly, copy) NSString *UMCCanonicalID;
@property (nonatomic, readonly) NSArray *adTargetingKeywords;
@property (nonatomic, readonly) NSArray *allowedStorefrontIDs;
@property (nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property (nonatomic, readonly) <FCChannelProviding> *asChannel;
@property (nonatomic, readonly) <FCPuzzleTypeProviding> *asPuzzleType;
@property (nonatomic, readonly) <FCSectionProviding> *asSection;
@property (nonatomic, readonly) <FCSportsProviding> *asSports;
@property (nonatomic, readonly) <FCSportsEventProviding> *asSportsEvent;
@property (nonatomic, readonly) <FCTopicProviding> *asTopic;
@property (nonatomic, readonly) NSData *backingTagRecordData; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly, copy) NSString *compactDisplayName;
@property (nonatomic, readonly) FCContentArchive *contentArchive;
@property (nonatomic, readonly) FCContentManifest *contentManifest;
@property (nonatomic, readonly) long long contentProvider;
@property (nonatomic, readonly) FCAssetHandle *coverImageAssetHandle;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableBlock;
@property (nonatomic, readonly) bool disableFollow;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) NSString *eventArticleListID;
@property (nonatomic, readonly) NSArray *eventCompetitorTags;
@property (nonatomic, readonly) <FCSportsProviding> *eventLeagueTag;
@property (nonatomic, readonly) FCAssetHandle *feedNavImageAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *feedNavImageHQAssetHandle;
@property (nonatomic, readonly) NSDate *fetchDate;
@property (nonatomic, readonly, copy) FCColor *groupDarkStyleTitleColor;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (nonatomic, readonly, copy) FCColor *groupTitleColor;
@property (nonatomic, readonly) unsigned long long groupingEligibility;
@property (nonatomic, readonly) bool hasEvergreenArticleList;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideAccessoryText;
@property (nonatomic, readonly) bool hideLocationInMasthead;
@property (nonatomic, readonly, copy) NSString *highlightsArticleListID;
@property (nonatomic, readonly) NSArray *iAdCategories;
@property (nonatomic, readonly) NSArray *iAdKeywords;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isArticleReadCountReportingEnabled;
@property (nonatomic, readonly) bool isAutoDarkModeEnabled;
@property (nonatomic, readonly) bool isBlockedExplicitContent;
@property (nonatomic, readonly) bool isDeprecated;
@property (nonatomic, readonly) bool isExplicitContent;
@property (nonatomic, readonly) bool isHidden;
@property (nonatomic, readonly) bool isInternal;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) bool isMagazine;
@property (nonatomic, readonly) bool isMySports;
@property (nonatomic, readonly) bool isNewspaper;
@property (nonatomic, readonly) bool isNotificationEnabled;
@property (nonatomic, readonly) bool isPublic;
@property (nonatomic, readonly) bool isPuzzleHub;
@property (nonatomic, readonly) bool isPuzzleType;
@property (nonatomic, readonly) bool isRealTimeTrackingEnabled;
@property (nonatomic, readonly) bool isRouteable;
@property (nonatomic, readonly) bool isSandbox;
@property (nonatomic, readonly) bool isSensitiveTopic;
@property (nonatomic, readonly) bool isSports;
@property (nonatomic, readonly) bool isSportsEvent;
@property (nonatomic, readonly) bool isSportsRecommendable;
@property (nonatomic, readonly) bool isSubscribable;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSDate *loadDate;
@property (nonatomic, readonly, copy) NSString *magazineGenre;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nameCompact;
@property (nonatomic, readonly) FCAssetHandle *nameImageCompactAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageLargeAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageLargeMaskAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property (nonatomic, readonly, copy) FCPaywallConfiguration *paidBundlePaywallConfiguration;
@property (nonatomic, readonly) NSString *personalizedPaywallName;
@property (nonatomic, readonly, copy) NSString *primaryAudience;
@property (nonatomic, readonly, copy) NSString *publisherPaidAuthorizationURL;
@property (nonatomic, readonly) NSArray *publisherPaidBundlePurchaseIDs;
@property (nonatomic, readonly) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property (nonatomic, readonly) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property (nonatomic, readonly) bool publisherPaidLeakyPaywallOptOut;
@property (nonatomic, readonly) NSArray *publisherPaidOfferableConfigurations;
@property (nonatomic, readonly, copy) NSString *publisherPaidVerificationURL;
@property (nonatomic, readonly) bool publisherPaidWebAccessOptIn;
@property (nonatomic, readonly, copy) NSString *publisherPaidWebAccessURL;
@property (nonatomic, readonly) NSArray *publisherSpecifiedArticleIDs;
@property (nonatomic, readonly) NSDate *publisherSpecifiedArticleIDsModifiedDate;
@property (nonatomic, readonly) NSDictionary *publisherSpecifiedArticles;
@property (nonatomic, readonly, copy) NSString *replacementID;
@property (nonatomic, readonly) NSDictionary *rosterResourceIDs;
@property (nonatomic, readonly) long long score;
@property (nonatomic, readonly) bool sponsoredFeedEligible;
@property (nonatomic, readonly) NSString *sportsData;
@property (nonatomic, readonly) FCColor *sportsEventNavigationForegroundColor;
@property (nonatomic, readonly, copy) NSDate *sportsEventStartTime;
@property (nonatomic, readonly, copy) NSString *sportsFullName;
@property (nonatomic, readonly) unsigned long long sportsLeagueType;
@property (nonatomic, readonly, copy) NSString *sportsLocation;
@property (nonatomic, readonly) FCAssetHandle *sportsLogoAltImageAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *sportsLogoAltImageCompactAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *sportsLogoAltImageLargeAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *sportsLogoImageAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *sportsLogoImageCompactAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *sportsLogoImageLargeAssetHandle;
@property (nonatomic, readonly) long long sportsLogoMastheadHorizontalPaddingOffset;
@property (nonatomic, readonly) long long sportsLogoMastheadLeadingOffset;
@property (nonatomic, readonly) unsigned long long sportsLogoMastheadVisibility;
@property (nonatomic, readonly, copy) NSString *sportsNameAbbreviation;
@property (nonatomic, readonly, copy) NSString *sportsNickname;
@property (nonatomic, readonly, copy) NSArray *sportsParentTagIdentifiers;
@property (nonatomic, readonly) FCColor *sportsPrimaryColor;
@property (nonatomic, readonly, copy) NSString *sportsPrimaryName;
@property (nonatomic, readonly) FCSportsRecommendationMappings *sportsRecommendationMappings;
@property (nonatomic, readonly) NSData *sportsRecommendationMappingsJSON;
@property (nonatomic, readonly) FCColor *sportsSecondaryColor;
@property (nonatomic, readonly, copy) NSString *sportsSecondaryName;
@property (nonatomic, readonly, copy) NSString *sportsSecondaryShortName;
@property (nonatomic, readonly, copy) <FCSportsTheming> *sportsTheme;
@property (nonatomic, readonly) unsigned long long sportsType;
@property (nonatomic, readonly, copy) NSString *sportsTypeDisplayName;
@property (nonatomic, readonly, copy) NSString *sportsTypePluralizedDisplayName;
@property (nonatomic, readonly) <FCTagStocksFields> *stocksFields;
@property (nonatomic, readonly) double subscriptionRate;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *superfeedConfigResourceID;
@property (nonatomic, readonly) NSString *supergroupConfigJson;
@property (nonatomic, readonly) FCSectionSupergroupKnobs *supergroupKnobs;
@property (nonatomic, readonly) NSString *supergroupKnobsJson;
@property (nonatomic, readonly) unsigned long long tagType;
@property (nonatomic, readonly, copy) <FCFeedTheming> *theme;
@property (nonatomic, copy) NSString *titleDisplayPrefix;
@property (nonatomic, copy) NSString *titleDisplaySuffix;
@property (nonatomic, readonly, copy) NSArray *topLevelGroupsTagIdentifiers;
@property (nonatomic, readonly, copy) NSString *topLevelSportTagIdentifier;
@property (nonatomic, readonly) bool useCompactNameForPersonalizedPaywall;
@property (nonatomic, readonly) unsigned long long userFacingTagType;
@property (nonatomic, readonly, copy) NSString *versionKey;

+ (bool)isSportsEventIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)UMCCanonicalID;
- (void)_inflateSportsDataFromJSONDictionary:(id)arg1;
- (void)_inflateSportsThemeFromJSONDictionary:(id)arg1;
- (id)adTargetingKeywords;
- (id)allowedStorefrontIDs;
- (id)articleRecirculationConfigJSON;
- (id)asChannel;
- (id)asPuzzleType;
- (id)asSection;
- (id)asSports;
- (id)asSportsEvent;
- (id)asTopic;
- (id)authorizationURL;
- (id)blockedStorefrontIDs;
- (id)compactDisplayName;
- (id)contentArchive;
- (id)contentManifest;
- (long long)contentProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverImageAssetHandle;
- (bool)disableBlock;
- (bool)disableFollow;
- (id)displayName;
- (id)eventArticleListID;
- (id)eventCompetitorTags;
- (id)eventLeagueTag;
- (id)feedIDForBin:(long long)arg1;
- (id)feedNavImageAssetHandle;
- (id)feedNavImageHQAssetHandle;
- (id)fetchDate;
- (id)freeFeedIDForBin:(long long)arg1;
- (id)groupDarkStyleTitleColor;
- (id)groupName;
- (id)groupTitleColor;
- (unsigned long long)groupingEligibility;
- (bool)hasEvergreenArticleList;
- (bool)hideAccessoryText;
- (bool)hideLocationInMasthead;
- (id)highlightsArticleListID;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)identifier;
- (id)initWithSportsEventRecord:(id)arg1 eventCompetitorTags:(id)arg2 eventLeagueTag:(id)arg3 assetManager:(id)arg4 interestToken:(id)arg5;
- (bool)isArticleReadCountReportingEnabled;
- (bool)isAuthenticationSetup;
- (bool)isAutoDarkModeEnabled;
- (bool)isBlockedExplicitContent;
- (bool)isDeprecated;
- (bool)isEqualToTag:(id)arg1;
- (bool)isExplicitContent;
- (bool)isHidden;
- (bool)isInternal;
- (bool)isLocal;
- (bool)isMagazine;
- (bool)isMySports;
- (bool)isNewspaper;
- (bool)isNoLongerAvailable;
- (bool)isNotificationEnabled;
- (bool)isPublic;
- (bool)isPurchaseSetup;
- (bool)isPuzzleHub;
- (bool)isPuzzleType;
- (bool)isRealTimeTrackingEnabled;
- (bool)isRouteable;
- (bool)isSandbox;
- (bool)isSensitiveTopic;
- (bool)isSports;
- (bool)isSportsEvent;
- (bool)isSportsRecommendable;
- (bool)isSubscribable;
- (id)language;
- (id)lastModifiedDate;
- (id)loadDate;
- (id)magazineGenre;
- (long long)minimumNewsVersion;
- (id)name;
- (id)nameCompact;
- (id)nameImageCompactAssetHandle;
- (id)nameImageLargeAssetHandle;
- (id)nameImageLargeMaskAssetHandle;
- (id)nameImageMaskWidgetHQAssetHandle;
- (id)nameImageMaskWidgetLQAssetHandle;
- (id)paidBundlePaywallConfiguration;
- (id)paidFeedIDForBin:(long long)arg1;
- (id)personalizedPaywallName;
- (void)ppt_overrideFeedID:(id)arg1;
- (id)prefetchPurchaseOffer;
- (id)primaryAudience;
- (id)publisherPaidAuthorizationURL;
- (id)publisherPaidBundlePurchaseIDs;
- (id)publisherPaidDescriptionStrings;
- (id)publisherPaidFeldsparablePurchaseIDs;
- (bool)publisherPaidLeakyPaywallOptOut;
- (id)publisherPaidOfferableConfigurations;
- (id)publisherPaidVerificationURL;
- (bool)publisherPaidWebAccessOptIn;
- (id)publisherPaidWebAccessURL;
- (id)publisherSpecifiedArticleIDs;
- (id)publisherSpecifiedArticleIDsModifiedDate;
- (id)publisherSpecifiedArticles;
- (id)replacementID;
- (id)rosterResourceIDs;
- (long long)score;
- (void)setTitleDisplayPrefix:(id)arg1;
- (id)setTitleDisplayPrefixOverride:(id)arg1;
- (void)setTitleDisplaySuffix:(id)arg1;
- (id)setTitleDisplaySuffixOverride:(id)arg1;
- (bool)sponsoredFeedEligible;
- (id)sportsData;
- (id)sportsEventNavigationForegroundColor;
- (id)sportsEventStartTime;
- (id)sportsFullName;
- (unsigned long long)sportsLeagueType;
- (id)sportsLocation;
- (id)sportsLogoAltImageAssetHandle;
- (id)sportsLogoAltImageCompactAssetHandle;
- (id)sportsLogoAltImageLargeAssetHandle;
- (id)sportsLogoImageAssetHandle;
- (id)sportsLogoImageCompactAssetHandle;
- (id)sportsLogoImageLargeAssetHandle;
- (long long)sportsLogoMastheadHorizontalPaddingOffset;
- (long long)sportsLogoMastheadLeadingOffset;
- (unsigned long long)sportsLogoMastheadVisibility;
- (id)sportsNameAbbreviation;
- (id)sportsNickname;
- (id)sportsParentTagIdentifiers;
- (id)sportsPrimaryColor;
- (id)sportsPrimaryName;
- (id)sportsRecommendationMappings;
- (id)sportsRecommendationMappingsJSON;
- (id)sportsSecondaryColor;
- (id)sportsSecondaryName;
- (id)sportsSecondaryShortName;
- (id)sportsTheme;
- (unsigned long long)sportsType;
- (id)sportsTypeDisplayName;
- (id)sportsTypePluralizedDisplayName;
- (id)stocksFields;
- (double)subscriptionRate;
- (id)subtitle;
- (id)superfeedConfigResourceID;
- (id)supergroupConfigJson;
- (id)supergroupKnobs;
- (id)supergroupKnobsJson;
- (unsigned long long)tagType;
- (id)theme;
- (id)titleDisplayPrefix;
- (id)titleDisplaySuffix;
- (id)topLevelGroupsTagIdentifiers;
- (id)topLevelSportTagIdentifier;
- (bool)useCompactNameForPersonalizedPaywall;
- (unsigned long long)userFacingTagType;
- (id)versionKey;

@end

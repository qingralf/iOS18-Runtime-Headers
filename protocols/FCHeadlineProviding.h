/* Generated by RuntimeBrowser.
 */

@protocol FCHeadlineProviding <NSObject, NFCopying, FCClassifiable, FCFeedTransformationItem>

@required

- (NSString *)accessoryText;
- (NSArray *)allowedStorefrontIDs;
- (NSString *)articleID;
- (<FCNativeAdProviding> *)associatedAd;
- (NSArray *)authors;
- (long long)backendArticleVersion;
- (NSArray *)blockedStorefrontIDs;
- (NSString *)clusterID;
- (unsigned long long)contentType;
- (NSURL *)contentURL;
- (FCCoverArt *)coverArt;
- (bool)disablePrerollAds;
- (bool)disableTapToChannel;
- (NSDate *)displayDate;
- (NSString *)excerpt;
- (unsigned long long)feedOrder;
- (double)globalUserFeedback;
- (bool)hasThumbnail;
- (NSArray *)iAdCategories;
- (NSArray *)iAdKeywords;
- (NSArray *)iAdSectionIDs;
- (NSString *)identifier;
- (bool)isAIGenerated;
- (bool)isBlockedExplicitContent;
- (bool)isBoundToContext;
- (bool)isDeleted;
- (bool)isDisplayingAsNativeAd;
- (bool)isDraft;
- (bool)isFeatureCandidate;
- (bool)isFullTrackAvailableToAll;
- (bool)isHiddenFromAutoFavorites;
- (bool)isHiddenFromFeeds;
- (bool)isPaid;
- (bool)isPressRelease;
- (bool)isTopStory;
- (NSString *)language;
- (NSDate *)lastFetchedDate;
- (NSDate *)lastModifiedDate;
- (NSString *)localDraftPath;
- (long long)minimumNewsVersion;
- (NSArray *)moreFromPublisherArticleIDs;
- (NSArray *)narrators;
- (NSString *)nativeAdCampaignData;
- (bool)needsRapidUpdates;
- (NSString *)primaryAudience;
- (NSDate *)publishDate;
- (NSArray *)publisherSpecifiedArticleIDs;
- (NSString *)referencedArticleID;
- (NSArray *)relatedArticleIDs;
- (NSURL *)routeURL;
- (NSString *)shortExcerpt;
- (bool)showPublisherLogo;
- (bool)showSubscriptionRequiredText;
- (<FCChannelProviding> *)sourceChannel;
- (NSString *)sourceName;
- (NSString *)sponsoredBy;
- (NSArray *)sportsEventIDs;
- (FCTopStoriesStyleConfiguration *)storyStyle;
- (unsigned long long)storyType;
- (NSString *)surfacedByBinID;
- (NSString *)surfacedByChannelID;
- (NSString *)surfacedBySectionID;
- (NSString *)surfacedByTopicID;
- (FCHeadlineThumbnail *)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (FCHeadlineThumbnail *)thumbnailHQ;
- (FCHeadlineThumbnail *)thumbnailLQ;
- (FCHeadlineThumbnail *)thumbnailMedium;
- (FCHeadlineThumbnail *)thumbnailUltraHQ;
- (FCHeadlineThumbnail *)thumbnailWidget;
- (FCHeadlineThumbnail *)thumbnailWidgetHQ;
- (FCHeadlineThumbnail *)thumbnailWidgetLQ;
- (double)tileProminenceScore;
- (NSString *)title;
- (NSString *)titleCompact;
- (unsigned long long)topStoryType;
- (NSArray *)topicIDs;
- (NSArray *)topics;
- (bool)usesImageOnTopLayout;
- (NSString *)videoCallToActionTitle;
- (NSURL *)videoCallToActionURL;
- (double)videoDuration;
- (FCAssetHandle *)videoStillImage;
- (NSString *)videoType;
- (NSURL *)videoURL;

@optional

- (<FCHeadlineMetadata> *)appliedOverrideMetadata;
- (FCAssetHandle *)articleRecirculationConfigAssetHandle;
- (NSData *)backingArticleRecordData;
- (NSString *)callToActionText;
- (FCArticleContent *)contentWithContext:(id <FCContentContext>)arg1;
- (unsigned long long)dataSource;
- (bool)disableBookmarking;
- (FCHeadlineExperimentalTitleMetadata *)experimentalTitleMetadata;
- (NSDate *)globalExpirationTime;
- (bool)hideModalCloseButton;
- (bool)isBundlePaid;
- (bool)isIssueOnly;
- (bool)isLocalDraft;
- (double)layeredThumbnailAspectRatio;
- (NSString *)layeredThumbnailJSON;
- (NSArray *)linkedArticleIDs;
- (NSArray *)linkedIssueIDs;
- (FCArticleAudioTrack *)narrativeTrack;
- (NSArray *)narrativeTrackBuddyArticleIDs;
- (NSString *)narrativeTrackPreferredUpsellVariantID;
- (FCArticleAudioTrack *)narrativeTrackSample;
- (NSString *)narrativeTrackTextRanges;
- (FCIssue *)parentIssue;
- (bool)reduceVisibility;
- (bool)reduceVisibilityForNonFollowers;
- (unsigned long long)role;
- (bool)showBundleSoftPaywall;
- (<FCHeadlineStocksFields> *)stocksFields;
- (NSArray *)tagsExpiration;
- (FCColor *)thumbnailImageAccentColor;
- (FCColor *)thumbnailImageBackgroundColor;
- (FCColor *)thumbnailImagePrimaryColor;
- (FCColor *)thumbnailImageTextColor;
- (NSData *)thumbnailPerceptualHash;
- (bool)useTransparentNavigationBar;
- (bool)webConverted;
- (bool)webEmbedsEnabled;

@end
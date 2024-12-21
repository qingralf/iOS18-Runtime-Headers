/* Generated by RuntimeBrowser.
 */

@protocol FCCoreConfiguration <FCSharedCoreConfiguration>

@required

- (NSDictionary *)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
- (long long)appConfigRefreshRate;
- (NSString *)breakingNewsChannelID;
- (NSString *)briefingsTagID;
- (NSNumber *)currentTreatment;
- (bool)diversifyOptionalTopStories;
- (NSString *)editorialChannelID;
- (NSString *)editorialGemsSectionID;
- (long long)endOfArticleExpireArticlesAfter;
- (long long)endOfArticleMaxInaccessiblePaidArticleCount;
- (double)endOfArticleMinPaidHeadlineRatio;
- (NSDictionary *)endpointConfigsByEnvironment;
- (long long)expirePinnedArticlesAfter;
- (long long)expiredPaidSubscriptionGroupCutoffTime;
- (NSString *)featuredStoriesTagID;
- (FCForYouGroupsConfiguration *)forYouGroupsConfiguration;
- (NSString *)forYouRecordConfigID;
- (FCVideoGroupsConfig *)forYouVideoGroupsConfig;
- (bool)isPrivateDataEncryptionAllowed;
- (bool)isPrivateDataEncryptionMigrationDesired;
- (bool)isPrivateDataMigrationCleanupEnabled;
- (long long)maximumNumberOfExpiredPaidSubscriptionGroups;
- (long long)maximumPaidSubscriptionGroupSizeiPad;
- (long long)maximumPaidSubscriptionGroupSizeiPhone;
- (long long)maximumTimesHeadlineInPaidSubscriptionGroup;
- (long long)minimumDistanceBetweenImageOnTopTiles;
- (long long)minimumDurationBetweenForYouGroupsWeekday;
- (long long)minimumDurationBetweenForYouGroupsWeekend;
- (long long)minimumDurationBetweenTrendingGroupsWeekday;
- (long long)minimumDurationBetweenTrendingGroupsWeekend;
- (double)minimumTrendingUnseenRatio;
- (NSString *)myMagazinesTagID;
- (NSString *)mySportsTagID;
- (long long)notificationEnabledChannelsRefreshFrequency;
- (FCNotificationsConfiguration *)notificationsConfig;
- (long long)optionalTopStoriesRefreshRate;
- (NSArray *)presubscribedFeedIDs;
- (FCPuzzlesConfiguration *)puzzlesConfig;
- (long long)savedArticlesCutoffTime;
- (long long)savedArticlesMaximumCountCellular;
- (long long)savedArticlesMaximumCountWiFi;
- (long long)savedArticlesOpenedCutoffTime;
- (NSString *)savedStoriesTagID;
- (NSString *)shortcutsTagID;
- (NSString *)sportsTopStoriesTagID;
- (long long)subscriptionsGlobalMeteredCount;
- (NSString *)trendingTagID;
- (long long)trendingTopicsRefreshRate;

@optional

- (NSArray *)aLaCartePaidSubscriptionGroupWhitelistedChannelIDs;
- (bool)adInstrumentationEnabled;
- (long long)alternateUniversalLinksResourceRefreshRate;
- (NSURL *)appAnalyticsAppHealthEndpointUrlForEnvironment:(unsigned long long)arg1;
- (NSURL *)appAnalyticsAppHeartbeatEndpointUrlForEnvironment:(unsigned long long)arg1;
- (NSURL *)appAnalyticsEndpointUrlForEnvironment:(unsigned long long)arg1;
- (NSURL *)appAnalyticsNotificationReceiptEndpointUrlForEnvironment:(unsigned long long)arg1;
- (FCAppReviewRequestConfig *)appReviewRequestConfig;
- (NSArray *)appleNewsNotificationChannelIDs;
- (FCArticleLinkBehaviorConfig *)articleLinkBehaviorConfig;
- (FCArticleModalBrandBarConfig *)articleModalBrandBarConfig;
- (NSString *)audioConfigRecordID;
- (bool)autoOnboardShortcuts;
- (long long)bestOfferRequestTimeoutDurationInSeconds;
- (NSString *)blockedArticleLearnMoreURL;
- (NSDictionary *)campaignReferralConfigsByID;
- (NSDictionary *)channelPaywallConfigsByChannelID;
- (NSDictionary *)channelPickerConfigsByName;
- (NSDictionary *)channelUpsellConfigsByChannelID;
- (bool)checkForPaywallConfigChangesEnabled;
- (long long)dailyChannelUpsellsCountLimit;
- (double)delayBeforeRetryingDroppedFeeds;
- (double)derivedPersonalizationDataBalanceValue;
- (FCEmbedProxyConfiguration *)embedProxyConfiguration;
- (bool)enableCacheFallbackForArticleRecirculation;
- (long long)entitlementsCacheRecoveryAttemptDurationInSeconds;
- (long long)entitlementsRequestTimeoutDurationInSeconds;
- (double)feedLineHeightMultiplier;
- (long long)forYouMaxDailyEvergreenArticlesForFreeUsers;
- (long long)forYouMaxDailyEvergreenArticlesForPaidUsers;
- (NSString *)forYouPremiumRecordConfigID;
- (NSArray *)freeGlobalESLArticleListIDs;
- (NSArray *)freeNotificationItemListIDs;
- (NSString *)freeTagESLArticleListIDPrefix;
- (bool)isDefaultConfiguration;
- (bool)isPrivateDataEncryptionRequired;
- (FCLaunchPresentationConfig *)launchPresentationConfig;
- (FCLocationSharingUpsellConfig *)locationSharingUpsellConfig;
- (NSString *)magazinesConfigRecordID;
- (long long)maxCuratedShortcutsCount;
- (long long)maxIssuesPerESLInventoryRequest;
- (long long)maxRetriesForDroppedFeeds;
- (long long)maxSuggestedShortcutsCount;
- (long long)maxTagESLArticleListsToQuery;
- (long long)minShortcutsOnboardCount;
- (long long)minimumBucketGroupConfigVersion;
- (NSString *)mySportsHighlightsTagID;
- (NSString *)mySportsScoresTagID;
- (bool)newNotificationHandlingEnabled;
- (NSString *)newsFeedFormatConfiguration;
- (FCNewsPersonalizationConfiguration *)newsPersonalizationConfiguration;
- (FCNewsPlusLabelConfigGroup *)newsPlusLabelConfigGroup;
- (FCNewsTabiConfiguration *)newsTabiConfiguration;
- (long long)notificationPoolAutoRefreshInterval;
- (long long)notificationPoolMaxAge;
- (FCPaidALaCartePaywallConfig *)paidALaCartePaywallConfigForChannelID:(NSString *)arg1;
- (FCPaidBundleConfiguration *)paidBundleConfig;
- (FCPaidBundleViaOfferConfig *)paidBundleViaOfferConfig;
- (NSArray *)paidGlobalESLArticleListIDs;
- (NSArray *)paidNotificationItemListIDs;
- (NSString *)paidTagESLArticleListIDPrefix;
- (NSArray *)permanentChannelIDs;
- (bool)privateDataShouldCleanupAfterSecureSubscriptions;
- (bool)privateDataShouldCleanupToV4;
- (bool)privateDataShouldMigrateToV4;
- (bool)privateDataShouldSecureSubscriptions;
- (bool)searchFeedEnabled;
- (NSString *)sharedWithYouTagID;
- (long long)shortcutsCustomizeAffordanceDisplayMinLaunchCount;
- (long long)shortcutsCustomizeAffordanceSendToBackPositionMinLaunchCount;
- (long long)shortcutsMaxCount;
- (long long)shortcutsOnboardCount;
- (bool)shouldManuallySupplementEvergreenWithIssueArticles;
- (bool)shouldProxyURLBucketFetch;
- (long long)singleChannelFeedMinFeedItemsPerRequest;
- (long long)singleTopicFeedMinFeedItemsPerRequest;
- (FCSmarterMessagingConfig *)smarterMessagingConfig;
- (NSString *)sportEventHighlightsTagID;
- (NSString *)sportHighlightsTagID;
- (NSString *)sportLeagueHighlightsTagID;
- (NSString *)sportLeagueScoresTagID;
- (NSString *)sportScoresTagID;
- (NSString *)sportTeamHighlightsTagID;
- (NSString *)sportTeamScoresTagID;
- (NSString *)sportsBracketTagID;
- (FCSportsFavoritesSyncModalConfig *)sportsFavoritesSyncModalConfig;
- (FCSportsPrivacyConfiguration *)sportsPrivacyConfiguration;
- (NSString *)sportsStandingsTagID;
- (FCSportsUpsellConfig *)sportsUpsellConfig;
- (NSString *)spotlightChannelID;
- (FCStatelessPersonalizationPublisherFavorability *)statelessPersonalizationPublisherFavorability;
- (bool)tagFeedEnabled;
- (FCTimesOfDayConfiguration *)timesOfDayConfiguration;
- (NTPBTodayConfig *)todayConfigWithIdentifier:(NSString *)arg1 queueConfigs:(NSArray *)arg2 backgroundColorLight:(NSString *)arg3 backgroundColorDark:(NSString *)arg4 audioIndicatorColor:(NSString *)arg5 widgetBannerConfig:(NTPBTodayBannerConfig *)arg6;
- (bool)todayFeedEnabled;
- (NSString *)todayFeedKnobs;
- (long long)widgetForYouBackgroundMinimumUpdateInterval;

@end
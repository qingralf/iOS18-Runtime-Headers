/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.TodayDataManager : NSObject <FCBundleSubscriptionChangeObserver, FCReadingListObserving> {
    void _lastRefreshContext;
    void accessQueue;
    void appConfigManager;
    void blockNextAutoRefresh;
    void bundleSessionManager;
    void bundleSubscriptionManager;
    void cachePreFlushTask;
    void delegate;
    void feedManager;
    void feedPluginManager;
    void feedServiceConfigFetcher;
    void feedServiceContextFactory;
    void historyService;
    void nativeAdService;
    void offlineFeatures;
    void offlineFeedPrimer;
    void offlineManager;
    void puzzleHistoryService;
    void puzzleStatsService;
    void readingList;
    void sharedItemAdditions;
    void sharedItemManager;
    void shortcutService;
    void shortcutsModule;
    void shortcutsPluginConfig;
    void sportsOnboardingManager;
    void subscriptionList;
    void subscriptionService;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;

@end

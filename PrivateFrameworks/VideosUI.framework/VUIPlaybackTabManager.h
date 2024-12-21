/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIPlaybackTabManager : NSObject {
    <VUIPlaybackTabManagerDelegate> * _delegate;
    NSMutableDictionary * _hudViewControllers;
    NSDictionary * _infoTabImpressions;
    NSDate * _lastRequestDate;
    double  _playbackFromBeginningTimeOffset;
    long long  _playbackTabError;
    VUIPlaybackTabInfo * _tabsInfo;
}

@property (nonatomic) <VUIPlaybackTabManagerDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *hudViewControllers;
@property (nonatomic, retain) NSDictionary *infoTabImpressions;
@property (nonatomic, readonly) bool isCurrentMediaMovie;
@property (nonatomic, readonly) bool isCurrentMediaTVShow;
@property (nonatomic, retain) NSDate *lastRequestDate;
@property (nonatomic, readonly) NSString *moreInfoTitle;
@property (nonatomic, readonly) UIImage *playImageForFromBeginningAction;
@property (nonatomic, readonly) NSString *playTitleForFromBeginningAction;
@property (nonatomic, readonly) double playbackFromBeginningTimeOffset;
@property (nonatomic) long long playbackTabError;
@property (nonatomic, readonly) bool shouldShowMoreInfoButton;
@property (nonatomic, retain) VUIPlaybackTabInfo *tabsInfo;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addMetadataInfoToEvent:(id)arg1;
- (id)_createHudContentViewControllerWithTabId:(id)arg1 title:(id)arg2 excludingCanonicals:(id)arg3 isMultiview:(bool)arg4 locale:(id)arg5 playsFromStart:(bool)arg6;
- (id)_createPrefetchedDataForPlayerHUDWithTabId:(id)arg1 title:(id)arg2 excludingCanonicals:(id)arg3 isMultiview:(bool)arg4 locale:(id)arg5 playsFromStart:(bool)arg6;
- (id)_documentRefContextDataForCurrentMediaTypeWithCanonicalID:(id)arg1 showCanonicalID:(id)arg2;
- (id)_getPageIDForTabName:(id)arg1;
- (void)_getTabsForCanonicalId:(id)arg1 adamId:(id)arg2 playablePassThrough:(id)arg3 programId:(id)arg4 contentId:(id)arg5 completion:(id /* block */)arg6;
- (void)_handleDidShowInfoViewController:(id)arg1;
- (bool)_isCurrentMediaLive;
- (bool)_isCurrentMediaSportingEvent;
- (bool)_isInfoHUDButtonPresent:(id)arg1;
- (bool)_isInsightTabAvailable;
- (void)_updateHUDsForAVPlayerViewController:(id)arg1 canonicalId:(id)arg2 tabInfo:(id)arg3 excludingCanonicals:(id)arg4;
- (void)_updateTimedMetadataEligibilityFlagInCurrentMediaItem;
- (id)appContext;
- (id)createClickMetricsWithType:(id)arg1;
- (id)createHUDViewControllerWithTabInfo:(id)arg1 excludingCanonicals:(id)arg2 isMultiview:(bool)arg3 locale:(id)arg4 playsFromStart:(bool)arg5;
- (void)createImpressionsForInfoTab;
- (id)delegate;
- (id)getPageEventDataWithSelectedTab:(id)arg1;
- (id)hudViewControllers;
- (id)infoTabImpressions;
- (id)init;
- (bool)isCurrentMediaMovie;
- (bool)isCurrentMediaTVShow;
- (bool)isPlayerTabsEnabled;
- (id)lastRequestDate;
- (id)moreInfoTitle;
- (id)moreInfoViewControllerWithAppContext:(id)arg1;
- (id)playImageForFromBeginningAction;
- (id)playTitleForFromBeginningAction;
- (double)playbackFromBeginningTimeOffset;
- (long long)playbackTabError;
- (void)recordImpressionsForInfoTab;
- (void)recordImpressionsHandler;
- (void)recordPageHandler;
- (void)recordPageMetricsForInfoTab;
- (void)recordPageMetricsForSelectedTab:(id)arg1 tabName:(id)arg2;
- (void)recordPageMetricsForSelectedTab:(id)arg1 tabName:(id)arg2 pageID:(id)arg3;
- (void)reportMoreInfoMetrics;
- (void)reportPlayFromBeginningMetrics;
- (void)resetPlayerTabsForPlayerViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHudViewControllers:(id)arg1;
- (void)setInfoTabImpressions:(id)arg1;
- (void)setLastRequestDate:(id)arg1;
- (void)setPlaybackTabError:(long long)arg1;
- (void)setTabsInfo:(id)arg1;
- (bool)shouldShowMoreInfoButton;
- (bool)shouldShowPlayFromBeginningButtonForMediaInfo;
- (id)tabsInfo;
- (void)updatePlayerTabsExcludingCanonicals:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePlayerViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updatePrefetchedDataOnExistingHUDContentViewController:(id)arg1 canonicalId:(id)arg2 excludingCanonicals:(id)arg3;

@end
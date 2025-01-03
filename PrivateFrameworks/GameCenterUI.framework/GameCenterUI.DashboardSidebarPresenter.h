/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GameCenterUI.DashboardSidebarPresenter : GameCenterUI.BasePresenter {
    void achievementIdToPresentOnFirstLoad;
    void dashboardDisplayMode;
    void game;
    void intentOnFirstLoad;
    void launchContext;
    void onRequiredDataChanged;
    void onSelectedItem;
    void pageMetricsPresenter;
    void request;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requiredData;
    void requiredDataPresenter;
    void retryAfterAuthentication;
    void sections;
    void selectedItem;
}

@property (nonatomic, readonly) GKDashboardRequest *request;
@property (nonatomic) bool retryAfterAuthentication;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (void)fetchGameRecordAfterAuthenticationFor:(id)arg1;
- (void)handleViewDidLoad;
- (id)initWithPlayerId:(id)arg1;
- (id)request;
- (bool)retryAfterAuthentication;
- (void)setRetryAfterAuthentication:(bool)arg1;
- (id)title;

@end

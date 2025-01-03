/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface _VUIAccessViewController : UIViewController {
    VUIAccessView_iOS * _accessView;
    NSArray * _appChannels;
    NSArray * _appInfos;
    NSMutableArray * _bundleIDs;
    NSMutableArray * _channelIds;
    NSArray * _channels;
    id /* block */  _completionHandler;
    unsigned long long  _consentCancelButtonType;
    bool  _hasCalledCompletion;
    VUIAppSpinnerView * _loadingView;
    NSDictionary * _options;
    bool  _shouldDenyOnCancel;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_allow:(id)arg1;
- (void)_completeWithStatus:(unsigned long long)arg1;
- (void)_disallow:(id)arg1;
- (void)_fetchRemoteAppInfo;
- (void)_handleMenuGesture:(id)arg1;
- (void)_handleNackButton:(id)arg1;
- (void)_handleSeeAllButton:(id)arg1;
- (struct CGSize { double x1; double x2; })_iconSize;
- (id)_imageForBundleID:(id)arg1;
- (void)_init;
- (void)_presentGenericErrorWithCompletion:(id /* block */)arg1;
- (void)_setupAccessViews;
- (void)_setupNavigationBar;
- (void)_toggleLoadingScreen;
- (id)_watchListAppIcon;
- (id)cappedTraitCollection;
- (id /* block */)completionHandler;
- (id)init;
- (id)initWithBundleIDs:(id)arg1 channels:(id)arg2 consentCancelButtonType:(unsigned long long)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)preferredFocusEnvironments;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end

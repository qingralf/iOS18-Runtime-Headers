/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpTopicViewController : UIViewController <HLPHelpLoadingViewDelegate, HLPHelpTopicViewControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, WKNavigationDelegate> {
    bool  _RTL;
    HLPURLSessionItem * _URLSessionItem;
    UIBarButtonItem * _backBarButtonItem;
    bool  _canShowTOC;
    HLPHelpTopicHistoryItem * _currentTopicHistoryItem;
    bool  _darkModeEnabled;
    <HLPHelpTopicViewControllerDelegate> * _delegate;
    bool  _displayHelpTopicsOnly;
    UIBarButtonItem * _forwardBarButtonItem;
    bool  _fullBookView;
    HLPHelpBookController * _helpBookController;
    NSURL * _helpBookURL;
    bool  _hideDoneButton;
    id  _interactivePopGestureRecognizerDelegate;
    HLPHelpLoadingView * _loadingView;
    NSLayoutConstraint * _loadingViewTopConstraint;
    HLPHelpLocale * _locale;
    NSArray * _searchTerms;
    bool  _showTopicNameAsTitle;
    bool  _singleTopic;
    bool  _supportsDarkMode;
    UIBarButtonItem * _tocBarButtonItem;
    NSCache * _topicCache;
    NSMutableArray * _topicHistory;
    WKWebView * _webView;
    bool  _webViewLoaded;
    NSMutableDictionary * _webViewRequestsDataMap;
    NSMutableDictionary * _webViewRequestsMap;
}

@property (nonatomic, retain) HLPURLSessionItem *URLSessionItem;
@property (nonatomic, retain) HLPHelpTopicHistoryItem *currentTopicHistoryItem;
@property (nonatomic) bool darkModeEnabled;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HLPHelpTopicViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayHelpTopicsOnly;
@property (nonatomic) bool fullBookView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HLPHelpBookController *helpBookController;
@property (nonatomic, retain) NSURL *helpBookURL;
@property (nonatomic) bool hideDoneButton;
@property (nonatomic, retain) HLPHelpLoadingView *loadingView;
@property (nonatomic, retain) HLPHelpLocale *locale;
@property (nonatomic, retain) NSArray *searchTerms;
@property (nonatomic) bool showTopicNameAsTitle;
@property (getter=isSingleTopic, nonatomic) bool singleTopic;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsDarkMode;
@property (nonatomic, retain) NSCache *topicCache;
@property (nonatomic, retain) WKWebView *webView;
@property (nonatomic, retain) NSMutableDictionary *webViewRequestsDataMap;
@property (nonatomic, retain) NSMutableDictionary *webViewRequestsMap;

- (void).cxx_destruct;
- (id)URLSessionItem;
- (void)_loadWithInfo:(id)arg1;
- (void)_loadWithInfo:(id)arg1 allowErrorMessage:(bool)arg2;
- (void)backButtonTapped;
- (void)cleanup;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)currentTopicHistoryItem;
- (bool)darkModeEnabled;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (bool)displayHelpTopicsOnly;
- (void)forwardButtonTapped;
- (bool)fullBookView;
- (id)helpBookController;
- (id)helpBookURL;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewController:(id)arg1 selectedHelpTopicItem:(id)arg2 accessType:(long long)arg3;
- (void)helpTopicViewController:(id)arg1 topicLoaded:(id)arg2;
- (void)helpTopicViewController:(id)arg1 traitCollectionChanged:(id)arg2;
- (void)helpTopicViewControllerContentViewed:(id)arg1 topicID:(id)arg2 topicTitle:(id)arg3 source:(id)arg4 interfaceStyle:(long long)arg5 fromTopicID:(id)arg6 externalURLString:(id)arg7;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
- (bool)hideDoneButton;
- (id)init;
- (bool)isSingleTopic;
- (void)loadHTMLString:(id)arg1 anchor:(id)arg2;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3;
- (void)loadWithInfo:(id)arg1;
- (void)loadWithInfo:(id)arg1 allowErrorMessage:(bool)arg2;
- (id)loadingView;
- (id)locale;
- (void)logAnalyticsContentViewedWithTopicID:(id)arg1 topicTitle:(id)arg2 source:(id)arg3 fromTopicID:(id)arg4 externalURLString:(id)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeFromData:(id)arg1 byteRangeString:(id)arg2;
- (void)registerTraitChanges;
- (void)reloadCurrentTopic;
- (void)saveCurrentTopicItem;
- (void)scrollViewDidScroll:(id)arg1;
- (id)searchTerms;
- (void)setCurrentTopicHistoryItem:(id)arg1;
- (void)setDarkModeEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayHelpTopicsOnly:(bool)arg1;
- (void)setFullBookView:(bool)arg1;
- (void)setHelpBookController:(id)arg1;
- (void)setHelpBookURL:(id)arg1;
- (void)setHideDoneButton:(bool)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setShowTopicNameAsTitle:(bool)arg1;
- (void)setSingleTopic:(bool)arg1;
- (void)setSupportsDarkMode:(bool)arg1;
- (void)setTopicCache:(id)arg1;
- (void)setURLSessionItem:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)setWebViewRequestsDataMap:(id)arg1;
- (void)setWebViewRequestsMap:(id)arg1;
- (void)showHelpBookInfo:(id)arg1;
- (void)showTableOfContent;
- (bool)showTopicNameAsTitle;
- (void)showWebViewDelay;
- (bool)supportsDarkMode;
- (id)topicCache;
- (void)updateBackgroundColor;
- (void)updateDoneButton;
- (void)updateHTMLStringPath:(id)arg1 tag:(id)arg2 attribute:(id)arg3;
- (void)updateHTMLStringPath:(id)arg1 tag:(id)arg2 attribute:(id)arg3 useScheme:(bool)arg4 extension:(id)arg5;
- (void)updateNavigationBar;
- (void)updateNavigationButtons;
- (void)updateScrollPositionForCurrentTopicItem;
- (void)updateURLSchemeTask:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 data:(id)arg4 error:(id)arg5;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (id)webViewRequestsDataMap;
- (id)webViewRequestsMap;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end

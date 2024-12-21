/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFReaderController : NSObject <SFOnDeviceSummarizationDelegate, SFReaderContext, SFReaderEventsListener, WKNavigationDelegate, WKUIDelegatePrivate> {
    id /* block */  _actionsDelayedUntilReaderWebViewIsReady;
    NSTimer * _actionsDelayedUntilReaderWebViewIsReadyTimer;
    NSMutableDictionary * _bookmarkIdentifierToReadingListItemInfoCompletionMap;
    WBSReaderConfigurationManager * _configurationManager;
    bool  _contentIsReady;
    <_SFReaderControllerDelegate> * _delegate;
    bool  _doesPageUseSearchEngineOptimizationMetadata;
    _WKRemoteObjectInterface * _eventsListenerInterface;
    WBSReaderFontManager * _fontManager;
    bool  _readerAvailable;
    <SFReaderWebProcessControllerProtocol> * _readerControllerProxy;
    NSArray * _readerMailContentCompletionHandlers;
    id /* block */  _readerPrintContentCompletionHandler;
    NSString * _readerTextForSummarization;
    WKWebView * _readerWebView;
    SFOnDeviceSummarization * _summarizer;
    NSString * _unfilteredArticleText;
    WKWebView * _webView;
    <WKUIDelegatePrivate> * _webViewUIDelegate;
    NSString * _webpageIdentifier;
}

@property (nonatomic, readonly) bool canDecreaseReaderTextSize;
@property (nonatomic, readonly) bool canIncreaseReaderTextSize;
@property (nonatomic, readonly) WBSReaderConfigurationManager *configurationManager;
@property (nonatomic) bool contentIsReady;
@property (nonatomic, readonly) long long currentAppearance;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <_SFReaderControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doesPageUseSearchEngineOptimizationMetadata;
@property (nonatomic, readonly) WBSReaderFontManager *fontManager;
@property (readonly) unsigned long long hash;
@property (getter=isLoadingNextPage, nonatomic, readonly) bool loadingNextPage;
@property (getter=isReaderAvailable, nonatomic) bool readerAvailable;
@property (nonatomic, copy) NSString *readerLanguageTag;
@property (nonatomic, copy) NSString *readerTextForSummarization;
@property (nonatomic, readonly, copy) NSURL *readerURL;
@property (readonly) WKWebView *readerWebView;
@property (nonatomic, readonly) bool shouldCreateArticleFinder;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *unfilteredArticleText;
@property (readonly) WKWebView *webView;
@property (nonatomic) <WKUIDelegatePrivate> *webViewUIDelegate;
@property (nonatomic, copy) NSString *webpageIdentifier;

- (void).cxx_destruct;
- (void)_collectReaderContentForMailWithCompletion:(id /* block */)arg1;
- (void)_performActionsDelayedUntilReaderWebViewIsReady;
- (void)_performActionsDelayedUntilReaderWebViewIsReadyDidTimeout:(id)arg1;
- (bool)_readerWebViewIsReady;
- (void)_saveConfigurationAndSendToWebProcess;
- (void)_sendReaderAvailabilityNotificationForState:(id)arg1 reason:(long long)arg2;
- (void)_setUpReaderActivityListener;
- (void)_updateJavaScriptEnabled;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2;
- (void)_webView:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3;
- (void)_webView:(id)arg1 contextMenuWillPresentForElement:(id)arg2;
- (void)_webView:(id)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4;
- (void)_webView:(id)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3;
- (void)_webView:(id)arg1 dataInteractionOperationWasHandled:(bool)arg2 forSession:(id)arg3 itemProviders:(id)arg4;
- (void)_webView:(id)arg1 getAlternateURLFromImage:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_webView:(id)arg1 performDataInteractionOperationWithItemProviders:(id)arg2;
- (bool)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (unsigned long long)_webView:(id)arg1 willUpdateDataInteractionOperationToOperation:(unsigned long long)arg2 forSession:(id)arg3;
- (void)activateFont:(id)arg1;
- (void)activateReader;
- (bool)canDecreaseReaderTextSize;
- (bool)canIncreaseReaderTextSize;
- (void)checkReaderAvailability;
- (void)clearAvailability;
- (void)clearReaderWebView;
- (void)clearUnusedReaderResourcesSoon;
- (void)collectArticleContent;
- (void)collectReaderContentForMailWithCompletion:(id /* block */)arg1;
- (void)collectReadingListInfoWithBookmarkID:(int)arg1 completionHandler:(id /* block */)arg2;
- (id)configurationManager;
- (void)contentDidBecomeReadyWithArticleText:(id)arg1;
- (bool)contentIsReady;
- (void)createArticleFinder;
- (long long)currentAppearance;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)dealloc;
- (void)decreaseReaderTextSize;
- (id)delegate;
- (void)didCollectArticleContent:(id)arg1;
- (void)didCollectReaderContentForMail:(id)arg1;
- (void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
- (void)didCreateReaderWebView:(id)arg1;
- (void)didDetermineAdditionalTextSamples:(id)arg1;
- (void)didDetermineReaderAvailability:(id)arg1;
- (void)didDetermineReaderAvailabilityForDynamicCheck:(id)arg1;
- (void)didEncounterErrorForSummarization:(id)arg1;
- (void)didFinishPresentationUpdateAfterTransitioningToReader;
- (void)didFinishSummarization:(id)arg1;
- (void)didPrepareReaderContentForPrinting:(id)arg1;
- (void)didRequestOnDeviceSummary;
- (void)didSetReaderConfiguration:(id)arg1;
- (void)didSetSummary;
- (bool)doesPageUseSearchEngineOptimizationMetadata;
- (id)fontManager;
- (void)getReaderArticleTitleWithCompletion:(id /* block */)arg1;
- (void)increaseReaderTextSize;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;
- (bool)isLoadingNextPage;
- (bool)isReaderAvailable;
- (void)loadNewArticle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)owningWebViewDidCommitNavigation;
- (void)prepareReaderPrintingIFrameWithCompletion:(id /* block */)arg1;
- (id)readerControllerProxy;
- (id)readerLanguageTag;
- (id)readerTextForSummarization;
- (void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailabilility:(bool)arg3;
- (id)readerURL;
- (id)readerWebView;
- (void)reportReaderEvent:(long long)arg1 dataToReport:(id)arg2;
- (void)resetReaderTextSize;
- (id)scrollPositionInformation;
- (void)sendConfigurationToWebProcess;
- (void)setArticleSummary:(id)arg1 withSummaryHeader:(id)arg2 tableOfContentsHeader:(id)arg3 readerURLString:(id)arg4 titles:(id)arg5 paths:(id)arg6 trailingText:(id)arg7;
- (void)setContentIsReady:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoesPageUseSearchEngineOptimizationMetadata:(bool)arg1;
- (void)setOnDeviceSummaryButtonWithTitle:(id)arg1;
- (void)setReaderAvailable:(bool)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(bool)arg3;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(bool)arg3 scrollOffsetDictionary:(id)arg4;
- (void)setReaderIsActive:(bool)arg1;
- (void)setReaderLanguageTag:(id)arg1;
- (void)setReaderTextForSummarization:(id)arg1;
- (void)setReaderTheme:(long long)arg1 forAppearance:(long long)arg2;
- (void)setUpReaderWebViewIfNeededAndPerformBlock:(id /* block */)arg1;
- (void)setWebViewUIDelegate:(id)arg1;
- (void)setWebpageIdentifier:(id)arg1;
- (bool)shouldCreateArticleFinder;
- (void)stopLoadingNextPage;
- (id)unfilteredArticleText;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (id)webViewUIDelegate;
- (id)webpageIdentifier;

@end
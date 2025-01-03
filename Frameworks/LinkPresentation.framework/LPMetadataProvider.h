/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPMetadataProvider : NSObject <LPMetadataProviderSpecializationDelegate, WKNavigationDelegate> {
    NSURLRequest * _URLRequest;
    unsigned long long  _allowedSpecializedProviders;
    bool  _cancelled;
    bool  _complete;
    id /* block */  _completionHandler;
    LPEvent * _event;
    bool  _fetchIsNotUserInitiated;
    bool  _fetchingFromExistingWebView;
    bool  _hasStartedFetching;
    bool  _hasStartedFetchingMetadataFromWebView;
    LPFetcherGroup * _iconFetcherGroup;
    LPAnimatedImageTranscoder * _imageTranscoder;
    unsigned int  _loggingID;
    LPEvent * _mainResourceLoadEvent;
    LPLinkMetadata * _metadata;
    NSURL * _originalURL;
    NSMutableArray * _pendingFetchers;
    BKSProcessAssertion * _processAssertion;
    bool  _requirePrivateRelayForAllNetworkTraffic;
    bool  _shouldDownloadImageSubresources;
    bool  _shouldDownloadMediaSubresources;
    bool  _shouldFetchSubresources;
    long long  _specializationState;
    LPMetadataProviderSpecialization * _specializedMetadataProvider;
    NSObject<OS_dispatch_group> * _subresourceFetchGroup;
    bool  _subresourceFetchIsNonAppInitiated;
    bool  _timedOut;
    double  _timeout;
    bool  _useSpecializedProviders;
    NSTimer * _watchdog;
    LPEvent * _webProcessLaunchEvent;
    WKWebView * _webView;
}

@property (nonatomic, readonly) LPEvent *_event;
@property (setter=_setFetchIsNotUserInitiated:, nonatomic) bool _fetchIsNotUserInitiated;
@property (setter=_setShouldDownloadImageSubresources:, nonatomic) bool _shouldDownloadImageSubresources;
@property (setter=_setShouldDownloadMediaSubresources:, nonatomic) bool _shouldDownloadMediaSubresources;
@property (nonatomic) unsigned long long allowedSpecializedProviders;
@property bool cancelled;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetchSubresources;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool requirePrivateRelayForAllNetworkTraffic;
@property (nonatomic) bool shouldFetchSubresources;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;
@property (nonatomic) bool useSpecializedProviders;

+ (id)_callbackQueue;
+ (id)_copyDefaultWebViewConfiguration;
+ (id)_defaultUserAgent;
+ (id)_incompleteMetadataRequests;
+ (id)_postProcessingQueue;
+ (id)_requestMetadataForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_requestSourceApplicationMetadataForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_visionAnalysisQueue;
+ (id)requestMetadataForURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)requestMetadataForWebView:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_cancelDueToTimeout;
- (void)_completedWithError:(id)arg1;
- (id)_copyWebViewConfiguration;
- (id)_event;
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)_fetchAssociatedApplicationMetadataWithCompletionHandler:(id /* block */)arg1;
- (void)_fetchImplicitIcons;
- (bool)_fetchIsNotUserInitiated;
- (void)_fetchMetadataFromWebView;
- (void)_fetchSubresources;
- (void)_fetchedMetadata:(id)arg1;
- (void)_filteredUniqueContentImages:(id /* block */)arg1;
- (bool)_firstImage:(id)arg1 isSimilarToSecondImage:(id)arg2 usingAnalyzer:(id)arg3;
- (void)_generateSpecializationIfPossibleForCompleteMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_internalPostProcessResolvedMetadataWithEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_internalStartFetchingMetadataForWebView:(id)arg1 isNonAppInitiated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_internalStartFetchingMetadataFromURLRequest;
- (void)_postProcessResolvedMetadataWithEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_propagateYouTubeTimestamps;
- (void)_redistinguishImagesAndIcons;
- (void)_setFetchIsNotUserInitiated:(bool)arg1;
- (void)_setMetadata:(id)arg1 onlyUpgradeFields:(bool)arg2;
- (void)_setShouldDownloadImageSubresources:(bool)arg1;
- (void)_setShouldDownloadMediaSubresources:(bool)arg1;
- (bool)_shouldDownloadImageSubresources;
- (bool)_shouldDownloadMediaSubresources;
- (bool)_shouldFailFetchDueToLockdownModeWithCompletionHandler:(id /* block */)arg1;
- (void)_simplifyTitle;
- (id)_startFetchingMetadataForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_startFetchingMetadataForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_startFetchingMetadataForWebView:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_startFetchingMetadataForWebView:(id)arg1 isNonAppInitiated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_startFetchingSubresourcesForPartialMetadata:(id)arg1 isNonAppInitiated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_startWatchdogTimer;
- (void)_stopWatchdogTimer;
- (bool)_switchToSpecializationIfPossibleForMIMEType:(id)arg1 URL:(id)arg2 hasLoadedResource:(bool)arg3;
- (bool)_switchToSpecializationIfPossibleForMetadata:(id)arg1 URL:(id)arg2;
- (bool)_switchToSpecializationIfPossibleForURL:(id)arg1;
- (void)_willStartFetchingMetadata;
- (unsigned long long)allowedSpecializedProviders;
- (void)cancel;
- (bool)cancelled;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)deduplicateContentImagesWithEvent:(id)arg1 inGroup:(id)arg2;
- (bool)fetchSubresources;
- (id)init;
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;
- (void)metadataProviderSpecialization:(id)arg1 didFetchPreliminaryMetadata:(id)arg2;
- (void)metadataProviderSpecializationDidFail:(id)arg1;
- (bool)requirePrivateRelayForAllNetworkTraffic;
- (void)setAllowedSpecializedProviders:(unsigned long long)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setFetchSubresources:(bool)arg1;
- (void)setRequirePrivateRelayForAllNetworkTraffic:(bool)arg1;
- (void)setShouldFetchSubresources:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUseSpecializedProviders:(bool)arg1;
- (bool)shouldFetchSubresources;
- (void)startFetchingMetadataForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startFetchingMetadataForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startFetchingMetadataForWebView:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startFetchingSubresourcesForPartialMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)subresourceFetcherConfiguration;
- (double)timeout;
- (bool)useSpecializedProviders;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSBrowsingAssistantController : NSObject {
    NSString * _cachedReaderArticleTitle;
    WBSBrowsingAssistantContentProvider * _contentProvider;
    <WBSBrowsingAssistantControllerDelegate> * _delegate;
    NSString * _previousWebpageIdentifier;
    WBSBrowsingAssistantResult * _result;
    <WBSUserDefaultObservation> * _userDefaultObservation;
    NSString * _webpageIdentifier;
}

@property (nonatomic, copy) NSString *cachedReaderArticleTitle;
@property (nonatomic) <WBSBrowsingAssistantControllerDelegate> *delegate;
@property (nonatomic, readonly) WBSBrowsingAssistantResult *result;
@property (nonatomic, readonly, copy) NSString *summary;
@property (getter=isSummaryAvailable, nonatomic, readonly) bool summaryAvailable;
@property (nonatomic, readonly, copy) NSArray *tableOfContentsPaths;
@property (nonatomic, readonly, copy) NSArray *tableOfContentsTitles;
@property (nonatomic, readonly, copy) NSArray *tableOfContentsTrailingTexts;
@property (nonatomic, copy) NSString *webpageIdentifier;

+ (void)didRecieveMemoryWarning;
+ (bool)hasUserConsent;
+ (bool)isAvailableInCurrentLocale;
+ (void)setUserConsentState:(long long)arg1;
+ (bool)shouldShowConsentCard;
+ (void)subscribeToAssistantAssetIfNeeded;
+ (long long)userConsentState;

- (void).cxx_destruct;
- (bool)_checkAssistantAvailabilityForPageLocale:(id)arg1;
- (id)_currentResultForURL:(id)arg1;
- (void)_foundContentOptions:(unsigned long long)arg1 fromURL:(id)arg2;
- (void)_registerForUserDefaultObserverIfNeeded;
- (bool)_shouldContinueFetchingRemoteContent:(id)arg1;
- (id)cachedReaderArticleTitle;
- (void)checkForAssistantContentFromPegasusForURL:(id)arg1 locale:(id)arg2;
- (void)clearAssistantResult;
- (id)delegate;
- (void)didFindLocalContentWithOptions:(unsigned long long)arg1 forURL:(id)arg2;
- (void)fetchAssistantContentFromPegasusForURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isSummaryAvailable;
- (void)performPrefetchingOfAssistantPegasusContentAfterChangingConsentState;
- (id)result;
- (void)setCachedReaderArticleTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWebpageIdentifier:(id)arg1;
- (id)summary;
- (id)tableOfContentsPaths;
- (id)tableOfContentsTitles;
- (id)tableOfContentsTrailingTexts;
- (void)updateAssistantContentForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)webpageIdentifier;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSBiomeDonationManager : NSObject {
    _WBSBiomeStream * _autoPlayStream;
    _WBSBiomeStream * _browsingAssistantStream;
    _WBSBiomeStream * _navigationsStream;
    _WBSBiomeStream * _pageLoadStream;
    NSObject<OS_dispatch_queue> * _streamAccessQueue;
    _WBSBiomeStream * _webAppInFocusStream;
    _WBSBiomeStream * _webPagePerformanceStream;
    _WBSBiomeStream * _windowProxyStream;
}

@property (nonatomic, readonly) _WBSBiomeStream *_windowProxyStream;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (long long)entityComponentTypeFromResult:(id)arg1;
+ (bool)isBiomeStreamDonationAvailable;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_autoPlayStream;
- (int)_biomeDeviceClassForUserAgent:(long long)arg1;
- (int)_biomePageLoadDeviceClassForUserAgent:(long long)arg1;
- (int)_biomeSignalForAutoPlaySignal:(long long)arg1;
- (int)_biomeWebAppInFocusWebAppTypeForWebAppType:(long long)arg1;
- (id)_browsingAssistantStream;
- (void)_clearEventsDonatedSinceDate:(id)arg1;
- (void)_donateBrowsingAssistantEvents:(id)arg1 dimensionContext:(id)arg2 bloomFilterPassed:(id)arg3 eligible:(id)arg4 webpageUrlSent:(id)arg5 serverRequest:(id)arg6 render:(id)arg7 userInteraction:(id)arg8;
- (void)_donateWebPagePerformanceEventWithEvent:(int)arg1 domain:(id)arg2 webPageLoadedOverPrivateRelay:(bool)arg3;
- (id)_getVisualComponentAttributeFromComponentType:(long long)arg1;
- (id)_navigationsStream;
- (id)_pageLoadStream;
- (id)_webAppInFocusStream;
- (id)_webPagePerformanceStream;
- (int)_webPerformanceEventForDiagnosticLoggingKey:(id)arg1;
- (id)_windowProxyStream;
- (void)clearEventsDonatedSinceDate:(id)arg1;
- (void)donateAutoPlayEventWithSignal:(long long)arg1 domain:(id)arg2 countryCode:(id)arg3 webPageLoadedOverPrivateRelay:(bool)arg4;
- (void)donateBrowsingAssistantBloomFilterPassedEventWithWebPageID:(id)arg1;
- (void)donateBrowsingAssistantEligibleEventWithWebPageID:(id)arg1;
- (void)donateBrowsingAssistantReaderEventWithWebPageID:(id)arg1 eventType:(long long)arg2 dataToReport:(id)arg3;
- (void)donateBrowsingAssistantServerRequestEndedEventWithWebPageID:(id)arg1 requestIdentifier:(id)arg2;
- (void)donateBrowsingAssistantServerRequestFailedEventWithWebPageID:(id)arg1 requestIdentifier:(id)arg2;
- (void)donateBrowsingAssistantServerRequestStartedEventWithWebPageID:(id)arg1 requestIdentifier:(id)arg2 requestType:(long long)arg3;
- (void)donateBrowsingAssistantUserInteractionDetectedWithWebPageID:(id)arg1 componentType:(long long)arg2 componentIdentifier:(id)arg3 tableOfContentsArrayLength:(id)arg4 tableOfContentsTextIndex:(id)arg5 readerSectionExpanded:(bool)arg6;
- (void)donateBrowsingAssistantVisualComponentPresentationEndedWithWebPageID:(id)arg1 componentType:(long long)arg2 componentIdentifier:(id)arg3 hideReason:(long long)arg4;
- (void)donateBrowsingAssistantVisualComponentPresentationStartedWithWebPageID:(id)arg1 componentType:(long long)arg2 componentIdentifier:(id)arg3 tableOfContentsArrayLength:(id)arg4;
- (void)donateBrowsingAssistantWebPageStartedEventWithWebPageID:(id)arg1;
- (void)donateBrowsingAssistantWebpageURLSentWithWebPageID:(id)arg1 urlSent:(id)arg2;
- (bool)donateForDiagnosticLoggingKey:(id)arg1 value:(id)arg2 webPageLoadedOverPrivateRelay:(bool)arg3;
- (void)donateNavigationWithURL:(id)arg1 userAgent:(long long)arg2 wasPrivateRelayed:(bool)arg3 statusCode:(long long)arg4;
- (void)donatePageLoadWithUserAgent:(long long)arg1 wasSearch:(bool)arg2 wasPrivateBrowsing:(bool)arg3 wasActualized:(bool)arg4 provenance:(long long)arg5;
- (void)donateWebAppInFocusEventWithStarting:(bool)arg1 date:(id)arg2 webAppType:(long long)arg3 identifier:(id)arg4 name:(id)arg5 manifestId:(id)arg6;
- (id)init;
- (void)performPendingDeletionsBeforeTermination;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (int)_biomeWindowProperty:(long long)arg1;
- (void)donateWindowProxyWithDomain:(id)arg1 openedDomain:(id)arg2 windowProxyProperty:(long long)arg3 accessedPropertyDirectly:(bool)arg4;

@end

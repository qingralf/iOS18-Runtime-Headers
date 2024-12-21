/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchAssets.framework/SearchAssets
 */

@interface SearchAssets.SASafariAssistantAssetManager : NSObject <SASafariAssistantAssetManagerProtocol> {
    void activityMonitor;
    void assetProvider;
    void assetSpeciferHandler;
    void deviceContext;
    void filter;
    void shouldReportAnalytics;
}

- (void).cxx_destruct;
- (id)assetVersionForLocale:(id)arg1;
- (void)ensureSafariSummarizationAssetsDownloadedForLocale:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 13: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)prefilterSafariSummarizationPrefetchRequestModelWithUrlString:(id)arg1;
- (id)prefilterSafariSummarizationPrefetchRequestModelWithUrlString:(id)arg1 prefetchHashPrefixLength:(unsigned long long)arg2;
- (id)prefilterSafariSummarizationPrefetchRequestWithUrlString:(id)arg1 prefetchHashPrefixLength:(unsigned long long)arg2;
- (void)resetSafariSummarizationAssets;
- (void)subscribeToAndPreloadSafariSummarizationAssetsForLocale:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 13: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)unsubscribeFromSafariSummarizationAssetsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
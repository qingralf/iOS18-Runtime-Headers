/* Generated by RuntimeBrowser.
 */

@protocol NUArticlePrefetcherType

@required

- (void)addPrefetchInterestInArticleID:(NSString *)arg1 headline:(id <FCHeadlineProviding>)arg2;
- (void)prefetchArticleID:(void *)arg1 headline:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, <FCHeadlineProviding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FCInterestToken *, NSError *, void*
- (<NUArticleDataProvider> *)prefetchedArticleDataProviderForArticleID:(NSString *)arg1;
- (void)removePrefetchInterestInArticleID:(NSString *)arg1;

@end
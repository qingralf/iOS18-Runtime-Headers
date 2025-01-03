/* Generated by RuntimeBrowser.
 */

@protocol WKDownloadDelegate <NSObject>

@required

- (void)download:(void *)arg1 decideDestinationUsingResponse:(void *)arg2 suggestedFilename:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WKDownload *, NSURLResponse *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*

@optional

- (void)download:(void *)arg1 decidePlaceholderPolicy:(void *)arg2; // needs 2 arg types, found 8: WKDownload *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURL *, void*
- (void)download:(WKDownload *)arg1 didFailWithError:(NSError *)arg2 resumeData:(NSData *)arg3;
- (void)download:(void *)arg1 didReceiveAuthenticationChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WKDownload *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)download:(WKDownload *)arg1 didReceiveFinalURL:(NSURL *)arg2;
- (void)download:(void *)arg1 didReceivePlaceholderURL:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: WKDownload *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)download:(void *)arg1 willPerformHTTPRedirection:(void *)arg2 newRequest:(void *)arg3 decisionHandler:(void *)arg4; // needs 4 arg types, found 9: WKDownload *, NSHTTPURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)downloadDidFinish:(WKDownload *)arg1;

@end

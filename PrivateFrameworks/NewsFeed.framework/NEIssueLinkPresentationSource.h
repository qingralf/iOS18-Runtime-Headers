/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
 */

@interface NEIssueLinkPresentationSource : NSObject <NELinkPresentationSource> {
    FCIssue * _issue;
}

@property (nonatomic, readonly) FCIssue *issue;
@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)imageItemProviderFromIssue:(id)arg1;
- (id)initWithIssue:(id)arg1;
- (id)issue;
- (id)linkMetadata;
- (id)subtitleFromIssue:(id)arg1;
- (id)titleFromIssue:(id)arg1;
- (id)urlFromIssue:(id)arg1;

@end

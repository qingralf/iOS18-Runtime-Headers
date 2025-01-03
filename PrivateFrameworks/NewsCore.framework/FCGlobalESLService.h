/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCGlobalESLService : NSObject <FCFeedItemServiceType> {
    FCCloudContext * _context;
}

@property (nonatomic, readonly) FCCloudContext *context;

- (void).cxx_destruct;
- (id)_promiseConfiguration;
- (id)_promiseCuratedFeedItemsWithConfiguration:(id)arg1;
- (id)_promiseFeedItemsWithIssues:(id)arg1 configuration:(id)arg2;
- (id)_promiseIssueFeedItemsWithConfiguration:(id)arg1;
- (id)_promiseIssuesWithConfiguration:(id)arg1;
- (id)context;
- (void)fetchFeedItemsWithCursor:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;

@end

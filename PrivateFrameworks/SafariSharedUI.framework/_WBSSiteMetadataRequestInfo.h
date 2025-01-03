/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface _WBSSiteMetadataRequestInfo : NSObject {
    NSMutableSet * _cacheRequestTokens;
    NSOperation * _operation;
    <WBSSiteMetadataProvider> * _provider;
    NSMutableSet * _requestTokens;
    NSMutableSet * _tokens;
}

@property (nonatomic) NSOperation *operation;
@property (nonatomic, readonly) <WBSSiteMetadataProvider> *provider;
@property (nonatomic, readonly, copy) NSSet *requestTokens;
@property (nonatomic, readonly, copy) NSSet *tokens;

- (void).cxx_destruct;
- (void)addCacheRequestToken:(id)arg1;
- (void)addRequestToken:(id)arg1;
- (bool)canStopWatchingRequestAfterRemovingToken:(id)arg1;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;
- (id)operation;
- (id)provider;
- (id)requestTokens;
- (void)setOperation:(id)arg1;
- (id)tokens;

@end

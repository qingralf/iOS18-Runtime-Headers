/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIActionPlaylist : VUIAction {
    VUIAppContext * _appContext;
    NSArray * _clipItems;
    NSDictionary * _collectionViewModel;
    NSDictionary * _contextData;
    unsigned long long  _index;
    NSArray * _metadataViewModels;
    NSString * _nextToken;
    bool  _requiresAuthentication;
    NSString * _trailerEndpoint;
    NSArray * _videosPlayable;
}

@property (nonatomic) VUIAppContext *appContext;
@property (nonatomic, retain) NSArray *clipItems;
@property (nonatomic, retain) NSDictionary *collectionViewModel;
@property (nonatomic, retain) NSDictionary *contextData;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, retain) NSArray *metadataViewModels;
@property (nonatomic, readonly) NSString *nextToken;
@property (nonatomic, readonly) bool requiresAuthentication;
@property (nonatomic, readonly) NSString *trailerEndpoint;
@property (nonatomic, retain) NSArray *videosPlayable;

- (void).cxx_destruct;
- (id)_maxContentRating;
- (void)_presentViewController:(id /* block */)arg1;
- (id)_ratingDomain;
- (id)_ratingValue;
- (id)appContext;
- (id)clipItems;
- (id)collectionViewModel;
- (id)contextData;
- (unsigned long long)index;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (bool)isAccountRequired;
- (id)metadataViewModels;
- (id)nextToken;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)requiresAuthentication;
- (void)setAppContext:(id)arg1;
- (void)setClipItems:(id)arg1;
- (void)setCollectionViewModel:(id)arg1;
- (void)setContextData:(id)arg1;
- (void)setMetadataViewModels:(id)arg1;
- (void)setVideosPlayable:(id)arg1;
- (id)trailerEndpoint;
- (id)videosPlayable;

@end
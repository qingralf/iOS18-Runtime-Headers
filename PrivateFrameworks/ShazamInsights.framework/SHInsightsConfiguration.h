/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
 */

@interface SHInsightsConfiguration : NSObject {
    SHBagContract * _bagContract;
}

@property (nonatomic, readonly) SHBagContract *bagContract;

+ (id)bagContract;
+ (void)fetchSharedInstanceWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)artistsCachedDataMaxAgeWithCompletionHandler:(id /* block */)arg1;
- (void)artistsClusterEndpointWithCompletionHandler:(id /* block */)arg1;
- (void)artistsEnabledWithCompletionHandler:(id /* block */)arg1;
- (id)bagContract;
- (id)fillInTokenizedURL:(id)arg1 date:(id)arg2 geoHash:(id)arg3;
- (void)geoChartsEndpointForDate:(id)arg1 geoHash:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)geoHashLengthsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithBagContract:(id)arg1;
- (void)tokenizedURLForBagPathKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)tracksCachedDataMaxAgeWithCompletionHandler:(id /* block */)arg1;
- (void)tracksClusterEndpointForStorefront:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)tracksEnabledWithCompletionHandler:(id /* block */)arg1;

@end
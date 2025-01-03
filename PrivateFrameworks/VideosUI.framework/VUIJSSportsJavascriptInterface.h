/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIJSSportsJavascriptInterface : NSObject {
    void context;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  tierManagerClientType;
}

@property (nonatomic, readonly) JSContext *context;
@property (nonatomic, readonly) NSString *storefrontId;

- (void).cxx_destruct;
- (id)checkActivityExistsFor:(id)arg1;
- (id)context;
- (id)getTierTypeWithLeagueId:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)isPlayByPlayEnabledWithLeagueId:(id)arg1;
- (id)isSportsFeatureEnabledWithLeagueId:(id)arg1 featureName:(id)arg2;
- (void)registerWithRequest:(id)arg1 successHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)storefrontId;

@end

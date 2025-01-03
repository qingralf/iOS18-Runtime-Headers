/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPPrivateAccessTokenFetcher : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSString * _auxiliaryAuthenticationCacheKey;
    NSString * _bundleID;
    NSData * _challengeData;
    NSURL * _customAttester;
    NSDictionary * _customAttesterHeaders;
    NSData * _originNameKey;
    NSData * _pairedChallengeData;
    NSMutableArray * _secondaryFetchers;
    NSString * _selectedOrigin;
    bool  _systemClient;
    NSData * _tokenKey;
    NSData * _waitingClientNonce;
    NSObject * _waitingToken;
    NSPPrivacyProxyTokenKey * _waitingTokenKey;
    NSPPrivateAccessTokenRequest * _waitingTokenRequest;
}

@property struct { unsigned int x1[8]; } auditToken;
@property (retain) NSString *auxiliaryAuthenticationCacheKey;
@property (retain) NSString *bundleID;
@property (readonly) NSURL *customAttester;
@property (readonly) NSDictionary *customAttesterHeaders;
@property (retain) NSString *selectedOrigin;
@property bool systemClient;

+ (bool)checkOriginAllowedAsThirdParty:(id)arg1;
+ (void)fetchAuxiliaryAuthenticationDataFromCacheForType:(unsigned long long)arg1 label:(id)arg2 cacheKey:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)saveAuxiliaryAuthenticationDataToCache:(id)arg1 type:(unsigned long long)arg2 forLabel:(id)arg3 cacheKey:(id)arg4;

- (void).cxx_destruct;
- (void)addSecondaryChallenge:(id)arg1 tokenKey:(id)arg2 originNameKey:(id)arg3;
- (struct { unsigned int x1[8]; })auditToken;
- (id)auxiliaryAuthenticationCacheKey;
- (id)bundleID;
- (id)customAttester;
- (id)customAttesterHeaders;
- (void)fetchLinkedTokenPairWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchTokenPairWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchTokenWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateTokenRequestWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleTokenResponse:(id)arg1 withQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initForKnownIssuerWithChallenge:(id)arg1;
- (id)initForKnownIssuerWithLongLivedTokenChallenge:(id)arg1 oneTimeTokenChallenge:(id)arg2;
- (id)initWithChallenge:(id)arg1 tokenKey:(id)arg2 originNameKey:(id)arg3;
- (void)saveTokenToCache:(id)arg1;
- (id)selectedOrigin;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setAuxiliaryAuthenticationCacheKey:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCustomAttester:(id)arg1 headers:(id)arg2;
- (void)setSelectedOrigin:(id)arg1;
- (void)setSystemClient:(bool)arg1;
- (bool)systemClient;

@end

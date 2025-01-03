/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSOCore.framework/PlatformSSOCore
 */

@interface POPlatformSSOCoreListener : POAgentListener {
    <POJWKSStorageProvider> * _jwksStorageProvider;
    <POUserIdentifierProvider> * _userIdentifierProvider;
}

@property (retain) <POJWKSStorageProvider> *jwksStorageProvider;
@property (retain) <POUserIdentifierProvider> *userIdentifierProvider;

- (void).cxx_destruct;
- (id)initForLogin:(bool)arg1 identifierProvider:(id)arg2 jwksStroageProvider:(id)arg3;
- (id)jwksStorageProvider;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setJwksStorageProvider:(id)arg1;
- (void)setUserIdentifierProvider:(id)arg1;
- (id)userIdentifierProvider;

@end

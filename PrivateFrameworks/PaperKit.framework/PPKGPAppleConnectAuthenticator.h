/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperKit.framework/PaperKit
 */

@interface PPKGPAppleConnectAuthenticator : NSObject <GPAppleConnectAuthenticating> {
    <PPKMagicGenerativePlaygroundTokenProvider> * _tokenProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <PPKMagicGenerativePlaygroundTokenProvider> *tokenProvider;

- (void).cxx_destruct;
- (void)authenticateIfNeededWithCompletion:(id /* block */)arg1;
- (id)initWithTokenProvider:(id)arg1;
- (void)setTokenProvider:(id)arg1;
- (id)tokenProvider;

@end
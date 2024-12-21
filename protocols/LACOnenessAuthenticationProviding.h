/* Generated by RuntimeBrowser.
 */

@protocol LACOnenessAuthenticationProviding <NSObject, LACDomainStateProviding>

@required

- (NSUUID *)authenticateClient:(LACClientInfo *)arg1 withAcmContext:(NSData *)arg2;
- (void)cancelAuthenticationWithID:(NSUUID *)arg1;
- (<LACOnenessAuthenticationProviderDelegate> *)delegate;
- (bool)isAvailable;
- (void)setDelegate:(id <LACOnenessAuthenticationProviderDelegate>)arg1;

@end
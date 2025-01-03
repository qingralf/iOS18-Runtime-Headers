/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCCreateEncryptedIdentityRequest : CTXPCSubscriptionContextRequest

@property (nonatomic, readonly) NSString *identity;

- (id)identity;
- (id)initWithContext:(id)arg1 identity:(id)arg2;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;

@end

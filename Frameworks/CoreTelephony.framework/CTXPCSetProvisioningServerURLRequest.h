/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCSetProvisioningServerURLRequest : CTXPCSubscriptionContextRequest

@property (nonatomic, readonly) NSString *url;

+ (id)allowedClassesForArguments;

- (id)initWithContext:(id)arg1 url:(id)arg2;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;
- (id)url;

@end

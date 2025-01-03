/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCIsAutofillAllowedForDomainWithinClientRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (id)clientBundleIdentifier;
- (id)domain;
- (id)initWithDomain:(id)arg1 clientBundleIdentifier:(id)arg2;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;

@end

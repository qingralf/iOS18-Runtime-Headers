/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCHandleTermsAndConditionsCompletedRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (bool)consented;
- (id)initWithSourceIccid:(id)arg1 consented:(bool)arg2;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;
- (id)sourceIccid;

@end

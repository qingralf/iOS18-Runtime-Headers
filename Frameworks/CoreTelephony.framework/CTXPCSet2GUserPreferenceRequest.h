/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCSet2GUserPreferenceRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (id)initWithEnable:(bool)arg1;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;

@end
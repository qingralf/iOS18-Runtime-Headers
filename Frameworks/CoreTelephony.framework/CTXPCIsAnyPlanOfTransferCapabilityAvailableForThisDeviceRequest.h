/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCIsAnyPlanOfTransferCapabilityAvailableForThisDeviceRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (unsigned long long)capability;
- (id)initWithCapability:(unsigned long long)arg1;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCValidateProximityTransferRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (unsigned long long)endpoint;
- (id)initWithEndpoint:(unsigned long long)arg1 pin:(id)arg2;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pin;
- (int)requiredEntitlement;

@end

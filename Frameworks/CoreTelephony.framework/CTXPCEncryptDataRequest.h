/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCEncryptDataRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (id)gid1;
- (id)gid2;
- (id)initWithMcc:(id)arg1 mnc:(id)arg2 gid1:(id)arg3 gid2:(id)arg4 plainText:(id)arg5;
- (id)mcc;
- (id)mnc;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)plainText;
- (int)requiredEntitlement;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCDeleteZoneRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (id)initWithZone:(id)arg1;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;
- (id)zoneID;

@end

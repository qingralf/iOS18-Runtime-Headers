/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCConvertMCCMNCToISORequest : CTXPCRequestMessage

@property (nonatomic, readonly) NSString *mcc;
@property (nonatomic, readonly) NSString *mnc;

- (id)initWithMcc:(id)arg1 mnc:(id)arg2;
- (id)mcc;
- (id)mnc;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;

@end
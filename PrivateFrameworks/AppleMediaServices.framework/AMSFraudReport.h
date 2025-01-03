/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFraudReport : NSObject <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)addDeviceIdentityCertificateAndSignatureToRequest:(id)arg1 parameters:(id)arg2 bag:(id)arg3;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)handleResponse:(id)arg1 account:(id)arg2 bag:(id)arg3;
+ (bool)isFeatureSupportedForBag:(id)arg1;

@end

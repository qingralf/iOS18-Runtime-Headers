/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAbsinthe : NSObject <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_dataToSignFromRequest:(id)arg1 bagDefinition:(id)arg2;
+ (id)_signingDataFromRequest:(id)arg1 buyParams:(id)arg2 definitions:(id)arg3;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)handleResponse:(id)arg1 bag:(id)arg2;
+ (id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3;

@end

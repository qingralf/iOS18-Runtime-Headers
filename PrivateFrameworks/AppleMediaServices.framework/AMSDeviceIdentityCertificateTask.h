/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDeviceIdentityCertificateTask : AMSTask {
    <AMSBagProtocol> * _bag;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *requestQueue;

- (void).cxx_destruct;
- (id)bag;
- (id)initWithBag:(id)arg1;
- (id)performDeviceIdentityRequestForAbsinthe;
- (id)performDeviceIdentityRequestForFraudReport;
- (id)performDeviceIdentityRequestWithBaaOptions:(id)arg1 ttlBagKey:(id)arg2 logInformation:(id)arg3;
- (id)requestQueue;

@end

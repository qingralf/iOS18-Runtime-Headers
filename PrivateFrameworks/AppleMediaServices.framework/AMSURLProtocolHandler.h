/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling> {
    AMSFairPlayDeviceIdentity * _fairPlayDeviceIdentity;
    AMSURLMetricsLoadURLHandler * _metricsHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _propertiesLock;
    AMSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AMSFairPlayDeviceIdentity *fairPlayDeviceIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSURLMetricsLoadURLHandler *metricsHandler;
@property (nonatomic) AMSURLSession *session;
@property (readonly) Class superclass;

+ (id)reversePushSamplingPercentageForTask:(id)arg1;

- (void).cxx_destruct;
- (id)_URLIsTrustedFromRequest:(id)arg1 bag:(id)arg2;
- (id)_handleResponse:(id)arg1 task:(id)arg2;
- (void)_pingURL:(id)arg1 session:(id)arg2 account:(id)arg3 bag:(id)arg4;
- (id)_setResponseCookiesFromResponse:(id)arg1 taskInfo:(id)arg2;
- (id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3;
- (void)decodeMutableData:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)decodeMutableData:(id)arg1 task:(id)arg2 error:(id*)arg3;
- (void)didCreateTask:(id)arg1 fromRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3;
- (id)fairPlayDeviceIdentity;
- (void)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleResponse:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithMetricsHandler:(id)arg1 fairPlayDeviceIdentity:(id)arg2;
- (id)metricsHandler;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (void)reportMetricsForContext:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)shouldEnableReversePushForTask:(id)arg1;

@end

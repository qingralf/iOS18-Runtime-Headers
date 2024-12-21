/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriNetwork.framework/SiriNetwork
 */

@interface SNNetworkActivityTracing : NSObject {
    SNNetworkActivityTracingInternal * _underlyingNetworkActivityTracingInternal;
}

@property (nonatomic, retain) SNNetworkActivityTracingInternal *underlyingNetworkActivityTracingInternal;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)currentNetworkActivityTokenWithCompletion:(id /* block */)arg1;
- (void)networkActivityActivate:(long long)arg1 completion:(id /* block */)arg2;
- (void)networkActivityStart:(long long)arg1 activate:(bool)arg2 completion:(id /* block */)arg3;
- (void)networkActivityStop:(long long)arg1 withReason:(long long)arg2 andError:(id)arg3 completion:(id /* block */)arg4;
- (void)networkActivityTracingCancel:(id /* block */)arg1;
- (void)setUnderlyingNetworkActivityTracingInternal:(id)arg1;
- (id)underlyingNetworkActivityTracingInternal;

@end
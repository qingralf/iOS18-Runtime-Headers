/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

@interface SWCrashRetryThrottler : NSObject <SWProcessTerminationPolicyDecider> {
    bool  _crashed;
    unsigned long long  retryPolicy;
}

@property (nonatomic) bool crashed;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long retryPolicy;
@property (readonly) Class superclass;

- (bool)crashed;
- (unsigned long long)retryPolicy;
- (void)setCrashed:(bool)arg1;
- (bool)shouldReloadAfterWebProcessCrash;

@end

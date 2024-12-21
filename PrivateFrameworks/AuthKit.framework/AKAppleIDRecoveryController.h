/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDRecoveryController : NSObject {
    NSArray * _supportedRecoverySteps;
}

@property (nonatomic, retain) NSArray *supportedRecoverySteps;

- (void).cxx_destruct;
- (void)_beginAccountRecoveryWithModel:(id)arg1 completion:(id /* block */)arg2;
- (void)_logResponse:(id)arg1;
- (id)_nextStepForResponse:(id)arg1;
- (void)_processNextStep:(id)arg1 response:(id)arg2 model:(id)arg3 completion:(id /* block */)arg4;
- (void)_processResponse:(id)arg1 model:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)beginAccountRecoveryWithModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setSupportedRecoverySteps:(id)arg1;
- (id)supportedRecoverySteps;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAccountRecoveryStepChangePassword : NSObject <AKAccountRecoveryStep>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_beginChangePasswordWithResponse:(id)arg1 model:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isNewPasswordErrorForData:(id)arg1;
- (id)_matchingAttributeWithResponse:(id)arg1;
- (id)_promptForConfirmPasswordWithModel:(id)arg1;
- (id)_promptForNewPasswordWithModel:(id)arg1;
- (void)_verifyNewPasswordWithRowID:(id)arg1 confirmRowID:(id)arg2 model:(id)arg3 completion:(id /* block */)arg4;
- (bool)canProcessResponse:(id)arg1;
- (void)processResponse:(id)arg1 model:(id)arg2 withCompletion:(id /* block */)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating> {
    PKPaymentRequest * _request;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (void).cxx_destruct;
- (bool)_checkMultiTokenTotal:(id)arg1 withAPIType:(long long)arg2 error:(id*)arg3;
- (bool)_checkTotal:(id)arg1 withAPIType:(long long)arg2 error:(id*)arg3;
- (unsigned long long)_checkTotalAmount:(id)arg1;
- (id)_errorDescriptionFromMultiTokenContextAmountValidationResult:(unsigned long long)arg1 withAPIType:(long long)arg2;
- (id)_errorDescriptionFromPaymentTotalAmountValidationResult:(unsigned long long)arg1 withAPIType:(long long)arg2;
- (id)_errorDescriptionFromTotalAmountValidationResult:(unsigned long long)arg1 prefix:(id)arg2;
- (id)initWithPaymentRequest:(id)arg1;
- (bool)isValidWithAPIType:(long long)arg1 withError:(id*)arg2;
- (bool)isValidWithError:(id*)arg1;

@end

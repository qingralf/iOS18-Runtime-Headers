/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIGiftValidator : NSObject {
    SUUIClientContext * _clientContext;
    NSOperationQueue * _operationQueue;
    long long  _validationCount;
    SSVLoadURLOperation * _validationOperation;
    NSURL * _validationURL;
}

@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (getter=isValidating, nonatomic, readonly) bool validating;

- (void).cxx_destruct;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 attemptNumber:(long long)arg3 block:(id /* block */)arg4;
- (void)_validateWithBodyDictionary:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelValidation;
- (id)initWithValidationURL:(id)arg1 clientContext:(id)arg2;
- (bool)isValidating;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;
- (void)validateDonation:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)validateGift:(id)arg1 withCompletionBlock:(id /* block */)arg2;

@end

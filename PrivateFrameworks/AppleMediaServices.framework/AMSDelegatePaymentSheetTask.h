/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDelegatePaymentSheetTask : AMSPaymentSheetTask {
    AMSDelegatePaymentSheetRequest * _request;
}

@property (nonatomic, retain) AMSMutablePromise *paymentSheetPromise;
@property (nonatomic, retain) AMSDelegatePaymentSheetRequest *request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 bag:(id)arg2;
- (id)perform;
- (id)request;
- (void)setRequest:(id)arg1;

@end

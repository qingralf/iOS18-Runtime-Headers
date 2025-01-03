/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPaymentConfirmationResult : NSObject <NSSecureCoding> {
    void paymentConfirmationChoice;
}

@property (nonatomic, readonly) long long paymentConfirmationChoice;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWitChoice:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)paymentConfirmationChoice;

@end

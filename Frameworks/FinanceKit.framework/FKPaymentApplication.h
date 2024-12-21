/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FKPaymentApplication : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _paymentType;
}

@property (nonatomic) unsigned long long paymentType;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)paymentType;
- (void)setPaymentType:(unsigned long long)arg1;

@end
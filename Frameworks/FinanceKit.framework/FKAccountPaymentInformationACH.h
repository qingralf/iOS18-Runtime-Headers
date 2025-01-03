/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FKAccountPaymentInformationACH : NSObject <NSCopying> {
    NSString * _accountNumber;
    NSString * _routingNumber;
}

@property (nonatomic, readonly, copy) NSString *accountNumber;
@property (nonatomic, readonly, copy) NSString *routingNumber;

- (void).cxx_destruct;
- (id)accountNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAccountNumber:(id)arg1 routingNumber:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)routingNumber;

@end

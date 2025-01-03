/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FKBalanceCalculation : NSObject <NSCopying> {
    FKAmount * _amount;
    NSDate * _asOf;
    unsigned long long  _creditDebitIndicator;
}

@property (nonatomic, readonly, copy) FKAmount *amount;
@property (nonatomic, readonly, copy) NSDate *asOf;
@property (nonatomic, readonly) unsigned long long creditDebitIndicator;

- (void).cxx_destruct;
- (id)amount;
- (id)asOf;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creditDebitIndicator;
- (unsigned long long)hash;
- (id)initWithAmount:(id)arg1 asOf:(id)arg2 creditDebitIndicator:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;

@end

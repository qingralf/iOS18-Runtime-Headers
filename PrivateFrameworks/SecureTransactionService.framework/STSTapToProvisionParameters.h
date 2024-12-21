/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SecureTransactionService.framework/SecureTransactionService
 */

@interface STSTapToProvisionParameters : NSObject {
    struct { 
        unsigned int _exponent : 8; 
        unsigned int _length : 4; 
        unsigned int _isNegative : 1; 
        unsigned int _isCompact : 1; 
        unsigned int _reserved : 18; 
        unsigned short _mantissa[8]; 
    }  _amount;
    long long  _countryCode;
    long long  _currencyCode;
    long long  _provisionReadTimeout;
    NSData * _transactionId;
    NSData * _unpredictableNumber;
}

@property (nonatomic, readonly) struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; } amount;
@property (nonatomic, readonly) long long countryCode;
@property (nonatomic, readonly) long long currencyCode;
@property (nonatomic, readonly) long long provisionReadTimeout;
@property (nonatomic, readonly, copy) NSData *transactionId;
@property (nonatomic, readonly, copy) NSData *unpredictableNumber;

- (void).cxx_destruct;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })amount;
- (long long)countryCode;
- (long long)currencyCode;
- (id)initWithAmount:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg1 currencyCode:(long long)arg2 countryCode:(long long)arg3 provisionReadTimeout:(long long)arg4 transactionId:(id)arg5 unpredictableNumber:(id)arg6;
- (long long)provisionReadTimeout;
- (id)toOR;
- (id)transactionId;
- (id)unpredictableNumber;

@end
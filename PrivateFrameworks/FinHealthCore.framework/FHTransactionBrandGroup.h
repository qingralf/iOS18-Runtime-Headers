/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FinHealthCore.framework/FinHealthCore
 */

@interface FHTransactionBrandGroup : FHTransactionGroup {
    unsigned long long  _brandMuid;
}

@property (nonatomic) unsigned long long brandMuid;

+ (bool)supportsSecureCoding;

- (unsigned long long)brandMuid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBrandMuid:(unsigned long long)arg1 groupIdentifier:(id)arg2 transactionIds:(id)arg3 creditDebitType:(unsigned long long)arg4 category:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (void)setBrandMuid:(unsigned long long)arg1;

@end
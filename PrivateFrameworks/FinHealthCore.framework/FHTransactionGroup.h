/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FinHealthCore.framework/FinHealthCore
 */

@interface FHTransactionGroup : NSObject <NSSecureCoding> {
    NSString * _category;
    unsigned long long  _creditDebitType;
    NSString * _groupIdentifier;
    unsigned long long  _groupingMethod;
    NSArray * _transactionIds;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic) unsigned long long creditDebitType;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic) unsigned long long groupingMethod;
@property (nonatomic, copy) NSArray *transactionIds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (unsigned long long)creditDebitType;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)groupingMethod;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupIdentifier:(id)arg1 transactionIds:(id)arg2 groupingMethod:(unsigned long long)arg3 creditDebitType:(unsigned long long)arg4 category:(id)arg5;
- (void)setCategory:(id)arg1;
- (void)setCreditDebitType:(unsigned long long)arg1;
- (void)setGroupingMethod:(unsigned long long)arg1;
- (void)setTransactionIds:(id)arg1;
- (id)transactionIds;

@end

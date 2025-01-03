/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountFundingSourceVerification : NSObject <NSCopying, NSSecureCoding> {
    PKAccountFundingSourceVerificationAttempt * _failedAttempt;
    NSArray * _options;
    PKAccountFundingSourceVerificationAttempt * _pendingAttempt;
    NSArray * _recoveryActions;
    unsigned long long  _status;
}

@property (nonatomic, retain) PKAccountFundingSourceVerificationAttempt *failedAttempt;
@property (nonatomic, copy) NSArray *options;
@property (nonatomic, retain) PKAccountFundingSourceVerificationAttempt *pendingAttempt;
@property (nonatomic, retain) NSArray *recoveryActions;
@property (nonatomic) unsigned long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)failedAttempt;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)options;
- (id)pendingAttempt;
- (id)recoveryActions;
- (void)setFailedAttempt:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPendingAttempt:(id)arg1;
- (void)setRecoveryActions:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end

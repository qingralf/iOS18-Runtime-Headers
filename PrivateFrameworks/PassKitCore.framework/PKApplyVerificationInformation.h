/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKApplyVerificationInformation : NSObject <NSSecureCoding> {
    NSString * _data;
    bool  _skippedVerification;
    NSArray * _trialDeposits;
}

@property (nonatomic, copy) NSString *data;
@property (nonatomic) bool skippedVerification;
@property (nonatomic, copy) NSArray *trialDeposits;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setData:(id)arg1;
- (void)setSkippedVerification:(bool)arg1;
- (void)setTrialDeposits:(id)arg1;
- (bool)skippedVerification;
- (id)trialDeposits;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountAssistanceProgramMessage : NSObject <NSSecureCoding, PKRecordObject> {
    NSDecimalNumber * _chargeOffPreventionAmount;
    NSDecimalNumber * _currentBalance;
    NSDecimalNumber * _pastDue;
}

@property (nonatomic, retain) NSDecimalNumber *chargeOffPreventionAmount;
@property (nonatomic, retain) NSDecimalNumber *currentBalance;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDecimalNumber *pastDue;
@property (readonly) Class superclass;

+ (id)recordNamePrefix;
+ (id)recordType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chargeOffPreventionAmount;
- (id)currentBalance;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pastDue;
- (void)setChargeOffPreventionAmount:(id)arg1;
- (void)setCurrentBalance:(id)arg1;
- (void)setPastDue:(id)arg1;

@end
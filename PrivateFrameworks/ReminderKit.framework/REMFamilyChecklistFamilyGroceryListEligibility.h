/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMFamilyChecklistFamilyGroceryListEligibility : NSObject <NSSecureCoding> {
    long long  _ineligibilityReasons;
    bool  _isEligible;
}

@property (nonatomic, readonly) long long ineligibilityReasons;
@property (nonatomic, readonly) bool isEligible;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)ineligibilityReasons;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsEligible:(bool)arg1 ineligibilityReasons:(long long)arg2;
- (bool)isEligible;
- (bool)isEqual:(id)arg1;

@end
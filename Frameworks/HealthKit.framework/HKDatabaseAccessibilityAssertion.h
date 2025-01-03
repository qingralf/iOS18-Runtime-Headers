/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDatabaseAccessibilityAssertion : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    HKHealthStore * _healthStore;
    bool  _isValid;
    NSString * _ownerIdentifier;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSString *ownerIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)configureAssertion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)healthStore;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwnerIdentifier:(id)arg1 uuidString:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (void)markInvalid;
- (id)ownerIdentifier;

@end

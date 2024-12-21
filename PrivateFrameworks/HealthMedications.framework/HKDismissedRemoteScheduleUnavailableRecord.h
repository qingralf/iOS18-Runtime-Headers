/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications
 */

@interface HKDismissedRemoteScheduleUnavailableRecord : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _creationDate;
    NSArray * _deviceIdentifiers;
    NSString * _medicationIdentifier;
    long long  _scheduleCompatibilityVersion;
    long long  _scheduleType;
}

@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSArray *deviceIdentifiers;
@property (nonatomic, readonly, copy) NSString *medicationIdentifier;
@property (nonatomic, readonly) long long scheduleCompatibilityVersion;
@property (nonatomic, readonly) long long scheduleType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMedicationIdentifier:(id)arg1 scheduleType:(long long)arg2 scheduleCompatibilityVersion:(long long)arg3 deviceIdentifiers:(id)arg4 creationDate:(id)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)deviceIdentifiers;
- (id)deviceIdentifiersDatabaseString;
- (id)deviceIdentifiersDescriptionString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)medicationIdentifier;
- (long long)scheduleCompatibilityVersion;
- (long long)scheduleType;

@end
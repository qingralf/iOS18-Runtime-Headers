/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications
 */

@interface HKDismissedPregnancyLactationInteraction : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _creationDate;
    long long  _interactionType;
    HKConceptIdentifier * _medicationIdentifier;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) long long interactionType;
@property (nonatomic, readonly) HKConceptIdentifier *medicationIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMedicationIdentifier:(id)arg1 interactionType:(long long)arg2 creationDate:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)interactionType;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToPregnancyLactationInteraction:(id)arg1;
- (id)medicationIdentifier;

@end

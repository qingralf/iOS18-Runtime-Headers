/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOrganDonationRegistrant : NSObject <HKSimpleDataEntryItemDelegate, NSCopying, NSSecureCoding> {
    NSString * _address1;
    NSString * _address2;
    NSString * _city;
    NSMutableDictionary * _dataEntryItems;
    <HKOrganDonationRegistrantDelegate> * _delegate;
    NSString * _dob;
    NSString * _email;
    NSString * _firstname;
    bool  _hasEdits;
    NSString * _last4SSN;
    NSString * _lastname;
    NSString * _middlename;
    NSString * _sex;
    NSString * _state;
    NSString * _zip;
}

@property (nonatomic, retain) NSString *address1;
@property (nonatomic, retain) NSString *address2;
@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, retain) NSString *city;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HKOrganDonationRegistrantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *dob;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSString *firstname;
@property (nonatomic, readonly) bool hasEdits;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *last4SSN;
@property (nonatomic, retain) NSString *lastname;
@property (nonatomic, retain) NSString *middlename;
@property (nonatomic, retain) NSString *sex;
@property (nonatomic, retain) NSString *state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *zip;

+ (id)_importNumberFormatter;
+ (bool)_isNumericStringValid:(id)arg1 withLength:(long long)arg2;
+ (void)_loadStateInformationIfNeeded;
+ (id)convertLocalizedNumericStringToLatin:(id)arg1 withNumberFormatter:(id)arg2;
+ (id)exportDateFormatter;
+ (id)organDonationRegistrantWithDemographicsInformation:(id)arg1;
+ (id)organDonationRegistrantWithJSONDictionary:(id)arg1;
+ (id)ssnNumberFormatter;
+ (bool)supportsSecureCoding;
+ (id)zipcodeNumberFormatter;

- (void).cxx_destruct;
- (void)_addDataEntryItemIntoArray:(id)arg1 validOnly:(bool)arg2 forField:(long long)arg3;
- (id)_createDateOfBirthEntryItem;
- (unsigned long long)_placeHolderTypeForField:(long long)arg1;
- (id)_stateChoiceDisplayNames;
- (id)_stateChoiceValues;
- (id)_todayBirthdayDateComponents;
- (id)address1;
- (id)address2;
- (id)age;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dataEntryItemDidUpdateValue:(id)arg1;
- (id)dataEntryItemForRegistrantField:(long long)arg1;
- (id)dataEntryItemsValidOnly:(bool)arg1;
- (id)delegate;
- (id)dob;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)firstname;
- (bool)hasEdits;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFieldValid:(long long)arg1;
- (bool)isRegistrantValid;
- (id)jsonDictionaryRepresentation;
- (id)last4SSN;
- (id)lastname;
- (id)middlename;
- (void)setAddress1:(id)arg1;
- (void)setAddress2:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDob:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setFirstname:(id)arg1;
- (void)setLast4SSN:(id)arg1;
- (void)setLastname:(id)arg1;
- (void)setMiddlename:(id)arg1;
- (void)setSex:(id)arg1;
- (void)setState:(id)arg1;
- (void)setZip:(id)arg1;
- (id)sex;
- (id)state;
- (id)zip;

@end

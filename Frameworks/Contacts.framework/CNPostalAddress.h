/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPostalAddress : NSObject <CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _ISOCountryCode;
    NSString * _city;
    NSString * _country;
    NSString * _formattedAddress;
    NSString * _postalCode;
    NSString * _state;
    NSString * _street;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
}

@property (nonatomic, copy) NSString *ISOCountryCode;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *formattedAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *street;
@property (nonatomic, readonly) NSString *street1;
@property (nonatomic, readonly) NSString *street2;
@property (nonatomic, copy) NSString *subAdministrativeArea;
@property (nonatomic, copy) NSString *subLocality;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)localizedStringForKey:(id)arg1;
+ (id)postalAddressWithAddressBookDictionaryRepresentation:(id)arg1;
+ (id)postalAddressWithDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ISOCountryCode;
- (id)addressBookDictionaryRepresentation;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAddress;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)postalCode;
- (void)setCity:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setFormattedAddress:(id)arg1;
- (void)setISOCountryCode:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStreet:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (id)state;
- (id)street;
- (id)subAdministrativeArea;
- (id)subLocality;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)localizedAddressFormatDictionaryForCountryCode:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)CalLocation;
- (id)formattedAddressString;
- (id)formattedAddressStrings;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;

- (id)schema;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)_ABKeyFromCNKey:(id)arg1;
+ (id)_CNKeyFromABKey:(id)arg1;
+ (id)backwardsCompatiblePostalAddressDictionary:(id)arg1;
+ (id)postalAddressFromWebServiceDictionaryRepresentation:(id)arg1;

- (id)_countryCodeForCountryName:(id)arg1;
- (id)backwardsCompatibleDictionaryRepresentation;
- (id)redactedPostalAddress;
- (id)redactedStreetAddress;
- (id)street1;
- (id)street2;
- (id)suggestedCountryCode;
- (id)webServiceDictionaryRepresentation;

@end

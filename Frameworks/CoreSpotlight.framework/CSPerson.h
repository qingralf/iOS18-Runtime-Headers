/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSPerson : NSObject <CSCoderEncoder, NSCopying, NSSecureCoding> {
    NSString * _contactIdentifier;
    NSString * _displayName;
    NSArray * _faceAttributes;
    NSString * _handleIdentifier;
    NSArray * _handles;
    bool  _isPhotosPerson;
    NSArray * _nameAlternatives;
    NSNumber * _personType;
    NSString * _photosPersonIdentifier;
}

@property (copy) NSString *contactIdentifier;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSArray *faceAttributes;
@property (nonatomic, retain) NSString *handleIdentifier;
@property (nonatomic, retain) NSArray *handles;
@property (nonatomic) bool isPhotosPerson;
@property (nonatomic, retain) NSArray *nameAlternatives;
@property (nonatomic, retain) NSNumber *personType;
@property (nonatomic, retain) NSString *photosPersonIdentifier;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCSCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)faceAttributes;
- (id)handleIdentifier;
- (id)handles;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 handles:(id)arg2 handleIdentifier:(id)arg3;
- (id)initWithDisplayName:(id)arg1 handles:(id)arg2 handleIdentifier:(id)arg3 photosPersonIdentifier:(id)arg4;
- (id)initWithDisplayName:(id)arg1 handles:(id)arg2 handleIdentifier:(id)arg3 photosPersonIdentifier:(id)arg4 isPhotosPerson:(bool)arg5 personType:(long long)arg6 nameAlternatives:(id)arg7 faceAttributes:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isPhotosPerson;
- (id)nameAlternatives;
- (id)personType;
- (id)photosPersonIdentifier;
- (void)setContactIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFaceAttributes:(id)arg1;
- (void)setHandleIdentifier:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setIsPhotosPerson:(bool)arg1;
- (void)setNameAlternatives:(id)arg1;
- (void)setPersonType:(id)arg1;
- (void)setPhotosPersonIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

- (id)sg_emailAddress;
- (id)sg_initWithNamedEmailAddress:(id)arg1;
- (id)sg_initWithSerializedForm:(id)arg1;
- (id)sg_namedEmailAddress;
- (id)sg_serialized;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (bool)sg_isSignificantWithStore:(id)arg1;

@end

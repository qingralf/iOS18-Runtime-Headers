/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountUser : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _accessLevel;
    NSString * _accountIdentifier;
    unsigned long long  _accountState;
    NSSet * _addressableHandles;
    NSString * _altDSID;
    NSString * _appleID;
    bool  _currentUser;
    bool  _dirty;
    NSString * _firstName;
    unsigned long long  _identityStatus;
    NSString * _lastName;
    NSDate * _lastUpdated;
    PKAccountUserNotificationSettings * _notificationSettings;
    PKAccountUserPreferences * _preferences;
    NSSet * _supportedFeatures;
    NSSet * _transactionSourceIdentifiers;
}

@property (nonatomic) unsigned long long accessLevel;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) unsigned long long accountState;
@property (nonatomic, copy) NSSet *addressableHandles;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appleID;
@property (getter=isCurrentUser, nonatomic) bool currentUser;
@property (getter=isDirty, nonatomic) bool dirty;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic) unsigned long long identityStatus;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, retain) PKAccountUserNotificationSettings *notificationSettings;
@property (nonatomic, retain) PKAccountUserPreferences *preferences;
@property (nonatomic, copy) NSSet *supportedFeatures;
@property (nonatomic, copy) NSSet *transactionSourceIdentifiers;

+ (bool)currentUser:(id)arg1 canShareZone:(id)arg2 withAccountUser:(id)arg3;
+ (bool)currentUser:(id)arg1 shouldRequestZoneShareForZone:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_featureWithIdentifier:(id)arg1;
- (unsigned long long)accessLevel;
- (id)accountIdentifier;
- (unsigned long long)accountState;
- (id)addressableHandles;
- (id)altDSID;
- (id)appleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (bool)hasHandle:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identityStatus;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isCurrentUser;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountUser:(id)arg1;
- (id)lastName;
- (id)lastUpdated;
- (id)monthlySpendLimitFeatureDescriptor;
- (id)nameComponents;
- (id)notificationSettings;
- (id)physicalCardActivationFeatureDescriptor;
- (id)preferences;
- (id)requestPhysicalCardFeatureDescriptor;
- (void)setAccessLevel:(unsigned long long)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountState:(unsigned long long)arg1;
- (void)setAddressableHandles:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setCurrentUser:(bool)arg1;
- (void)setDirty:(bool)arg1;
- (void)setFirstName:(id)arg1;
- (void)setIdentityStatus:(unsigned long long)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setNotificationSettings:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setSupportedFeatures:(id)arg1;
- (void)setTransactionSourceIdentifiers:(id)arg1;
- (id)supportedFeatures;
- (bool)supportsMonthlySpendLimit;
- (bool)supportsPhysicalCardActivation;
- (bool)supportsRequestPhysicalCard;
- (id)transactionSourceIdentifiers;

@end

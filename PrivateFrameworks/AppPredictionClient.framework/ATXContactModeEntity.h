/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXContactModeEntity : NSObject <ATXModeEntityProtocol> {
    NSString * _cnContactId;
    NSString * _displayName;
    NSString * _rawIdentifier;
    NSString * _stableContactIdentifier;
    ATXModeEntityScore * scoreMetadata;
}

@property (retain) NSString *cnContactId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (retain) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (retain) NSString *rawIdentifier;
@property (nonatomic, retain) ATXModeEntityScore *scoreMetadata;
@property (retain) NSString *stableContactIdentifier;
@property (readonly) Class superclass;

+ (id)cnContactIdsOfEmergencyContacts;
+ (id)cnContactIdsOfFavoriteContactsWithContactStore:(id)arg1;
+ (id)cnContactIdsOfICloudFamilyMembers;
+ (bool)supportsSecureCoding;
+ (id)vipContactEmailAddresses;

- (void).cxx_destruct;
- (id)cnContactId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 rawIdentifier:(id)arg2 cnContactId:(id)arg3;
- (id)initWithDisplayName:(id)arg1 rawIdentifier:(id)arg2 cnContactId:(id)arg3 stableContactIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isVIPContactGivenVIPs:(id)arg1 contactStore:(id)arg2;
- (id)jsonDict;
- (id)rawIdentifier;
- (id)scoreMetadata;
- (void)setCnContactId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setRawIdentifier:(id)arg1;
- (void)setScoreMetadata:(id)arg1;
- (void)setStableContactIdentifier:(id)arg1;
- (id)stableContactIdentifier;

@end

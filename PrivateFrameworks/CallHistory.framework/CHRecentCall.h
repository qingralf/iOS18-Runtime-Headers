/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHRecentCall : NSObject <NSCopying, NSSecureCoding> {
    NSString * _addressBookCallerIDMultiValueId;
    NSString * _addressBookRecordId;
    bool  _answered;
    long long  _autoAnsweredReason;
    NSString * _blockedByExtension;
    NSString * _blockedByExtensionName;
    NSNumber * _bytesOfDataUsed;
    unsigned int  _callCategory;
    long long  _callDirectoryIdentityType;
    NSArray * _callOccurrences;
    unsigned int  _callStatus;
    unsigned int  _callType;
    NSString * _callerId;
    unsigned int  _callerIdAvailability;
    NSString * _callerIdFormatted;
    bool  _callerIdIsBlocked;
    NSString * _callerIdLabel;
    NSString * _callerIdLocation;
    NSString * _callerName;
    NSString * _contactIdentifier;
    CNContact * _contactRef;
    NSUUID * _conversationID;
    NSDate * _date;
    NSString * _devicePhoneId;
    NSNumber * _disconnectedCause;
    double  _duration;
    NSSet * _emergencyMediaItems;
    NSNumber * _filteredOutReason;
    long long  _handleType;
    bool  _hasMessage;
    NSString * _identityExtension;
    NSURL * _imageURL;
    CHHandle * _initiator;
    NSString * _isoCountryCode;
    long long  _junkConfidence;
    NSString * _junkIdentificationCategory;
    NSUUID * _localParticipantUUID;
    long long  _mediaType;
    NSString * _mobileCountryCode;
    NSString * _mobileNetworkCode;
    bool  _mobileOriginated;
    bool  _multiCall;
    NSString * _name;
    NSUUID * _outgoingLocalParticipantUUID;
    NSUUID * _participantGroupUUID;
    CHPhoneBookIOSManager * _phoneBookManager;
    bool  _read;
    NSSet * _remoteParticipantHandles;
    unsigned long long  _screenSharingType;
    NSString * _serviceProvider;
    NSNumber * _timeToEstablish;
    long long  _ttyType;
    NSString * _uniqueId;
    unsigned long long  _unreadCount;
    bool  _usedEmergencyVideoStreaming;
    long long  _verificationStatus;
    bool  _wasAutoAnswered;
    bool  _wasEmergencyCall;
}

@property (nonatomic, copy) NSString *addressBookCallerIDMultiValueId;
@property (nonatomic, copy) NSString *addressBookRecordId;
@property bool answered;
@property (nonatomic) long long autoAnsweredReason;
@property (nonatomic, copy) NSString *blockedByExtension;
@property (nonatomic, copy) NSString *blockedByExtensionName;
@property (nonatomic, retain) NSNumber *bytesOfDataUsed;
@property (nonatomic) unsigned int callCategory;
@property (nonatomic) long long callDirectoryIdentityType;
@property (nonatomic, copy) NSArray *callOccurrences;
@property (nonatomic) unsigned int callStatus;
@property (nonatomic) unsigned int callType;
@property (nonatomic, copy) NSString *callerId;
@property (nonatomic) unsigned int callerIdAvailability;
@property (getter=callerIdForDisplay, nonatomic, copy) NSString *callerIdFormatted;
@property (nonatomic) bool callerIdIsBlocked;
@property (nonatomic, copy) NSString *callerIdLabel;
@property (nonatomic, copy) NSString *callerIdLocation;
@property (nonatomic, copy) NSString *callerName;
@property (readonly, copy) NSString *callerNetworkFirstName;
@property (nonatomic, copy) NSString *callerNetworkName;
@property (readonly, copy) NSString *callerNetworkSecondName;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) CNContact *contactRef;
@property (nonatomic, copy) NSUUID *conversationID;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSString *devicePhoneId;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSNumber *disconnectedCause;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSSet *emergencyMediaItems;
@property (nonatomic, retain) NSNumber *filteredOutReason;
@property (nonatomic) long long handleType;
@property (nonatomic) bool hasMessage;
@property (nonatomic, copy) NSString *identityExtension;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, copy) CHHandle *initiator;
@property (nonatomic, readonly) INInteraction *interaction;
@property (nonatomic, readonly) NSDateInterval *interactionDateInterval;
@property (nonatomic, readonly) bool isJunk;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic) long long junkConfidence;
@property (nonatomic, copy) NSString *junkIdentificationCategory;
@property (nonatomic, retain) NSUUID *localParticipantUUID;
@property (nonatomic, readonly, copy) NSString *localizedBlockedByExtensionName;
@property (nonatomic) long long mediaType;
@property (nonatomic, copy) NSString *mobileCountryCode;
@property (nonatomic, copy) NSString *mobileNetworkCode;
@property bool mobileOriginated;
@property (nonatomic) bool multiCall;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *notificationThreadIdentifier;
@property (nonatomic, retain) NSUUID *outgoingLocalParticipantUUID;
@property (nonatomic, retain) NSUUID *participantGroupUUID;
@property (nonatomic, retain) CHPhoneBookIOSManager *phoneBookManager;
@property (nonatomic) bool read;
@property (nonatomic, copy) NSSet *remoteParticipantHandles;
@property (nonatomic) unsigned long long screenSharingType;
@property (nonatomic, copy) NSString *serviceProvider;
@property (nonatomic, retain) NSNumber *timeToEstablish;
@property (nonatomic) long long ttyType;
@property (nonatomic, copy) NSString *uniqueId;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) bool usedEmergencyVideoStreaming;
@property (nonatomic) long long verificationStatus;
@property (nonatomic) bool wasAutoAnswered;
@property (nonatomic) bool wasEmergencyCall;

+ (id)callCategoryAsString:(unsigned int)arg1;
+ (id)callDirectoryIdentificationTypeAsString:(long long)arg1;
+ (id)callHandleTypeAsString:(long long)arg1;
+ (id)callMediaTypeAsString:(long long)arg1;
+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTTYTypeAsString:(long long)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
+ (unsigned int)categoryForCallType:(unsigned int)arg1;
+ (unsigned int)categoryForMediaType:(long long)arg1 andTTYType:(long long)arg2;
+ (unsigned int)getCallTypeForCategory:(unsigned int)arg1 andServiceProvider:(id)arg2;
+ (id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2;
+ (long long)mediaTypeForCallCategory:(unsigned int)arg1;
+ (id)predicateForCallsBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)predicateForCallsContainingServiceProvider:(id)arg1;
+ (id)predicateForCallsLessThanDate:(id)arg1;
+ (id)predicateForCallsWithAnyMediaTypes:(id)arg1;
+ (id)predicateForCallsWithAnyRemoteParticipantHandleNormalizedValues:(id)arg1;
+ (id)predicateForCallsWithAnyRemoteParticipantHandleTypes:(id)arg1;
+ (id)predicateForCallsWithAnyRemoteParticipantHandleValues:(id)arg1;
+ (id)predicateForCallsWithAnyRemoteParticipantHandles:(id)arg1;
+ (id)predicateForCallsWithAnyServiceProviders:(id)arg1;
+ (id)predicateForCallsWithAnyTTYTypes:(id)arg1;
+ (id)predicateForCallsWithAnyUniqueIDs:(id)arg1;
+ (id)predicateForCallsWithCategory:(unsigned int)arg1;
+ (id)predicateForCallsWithConversationID:(id)arg1;
+ (id)predicateForCallsWithGroupUUID:(id)arg1;
+ (id)predicateForCallsWithMediaType:(long long)arg1;
+ (id)predicateForCallsWithRemoteParticipantCount:(long long)arg1;
+ (id)predicateForCallsWithRemoteParticipantHandle:(id)arg1;
+ (id)predicateForCallsWithRemoteParticipantHandleNormalizedValue:(id)arg1;
+ (id)predicateForCallsWithRemoteParticipantHandleType:(long long)arg1;
+ (id)predicateForCallsWithRemoteParticipantHandleValue:(id)arg1;
+ (id)predicateForCallsWithRemoteParticipantHandles:(id)arg1;
+ (id)predicateForCallsWithServiceProvider:(id)arg1;
+ (id)predicateForCallsWithStatus:(unsigned int)arg1;
+ (id)predicateForCallsWithStatusAnswered:(bool)arg1;
+ (id)predicateForCallsWithStatusJunk:(bool)arg1;
+ (id)predicateForCallsWithStatusOriginated:(bool)arg1;
+ (id)predicateForCallsWithStatusRead:(bool)arg1;
+ (id)predicateForCallsWithTTYType:(long long)arg1;
+ (id)predicateForCallsWithUniqueID:(id)arg1;
+ (id)serviceProviderForCallType:(unsigned int)arg1;
+ (bool)supportsSecureCoding;
+ (long long)ttyTypeForCallCategory:(unsigned int)arg1;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)addressBookCallerIDMultiValueId;
- (id)addressBookRecordId;
- (bool)answered;
- (id)archivedDataWithError:(id*)arg1;
- (long long)autoAnsweredReason;
- (id)blockedByExtension;
- (id)blockedByExtensionName;
- (id)bytesOfDataUsed;
- (unsigned int)callCategory;
- (long long)callDirectoryIdentityType;
- (id)callOccurrences;
- (id)callOccurrencesArrayByAddingCallOccurrencesFromArray:(id)arg1;
- (id)callOccurrencesAsString;
- (unsigned int)callStatus;
- (unsigned int)callType;
- (id)callerId;
- (unsigned int)callerIdAvailability;
- (id)callerIdForDisplay;
- (bool)callerIdIsBlocked;
- (bool)callerIdIsEmailAddress;
- (id)callerIdLabel;
- (id)callerIdLocation;
- (id)callerIdSubStringForDisplay;
- (id)callerName;
- (id)callerNameForDisplay;
- (id)callerNetworkFirstName;
- (id)callerNetworkName;
- (id)callerNetworkSecondName;
- (bool)canCoalesceRemoteParticipantHandlesFromCall:(id)arg1;
- (bool)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (bool)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (bool)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)coalescedCallWithCall:(id)arg1 usingStrategy:(id)arg2;
- (id)contactIdentifier;
- (id)contactRef;
- (id)conversationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfExcludedHandles;
- (id)date;
- (id)description;
- (id)devicePhoneId;
- (id)dictionaryRepresentation;
- (id)disconnectedCause;
- (double)duration;
- (id)emergencyMediaItems;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchAndSetContactIdentifier;
- (void)fetchAndSetFullContact;
- (id)filteredOutReason;
- (void)fixCallTypeInfo;
- (id)getLocalizedString:(id)arg1;
- (long long)handleType;
- (bool)hasMessage;
- (unsigned long long)hash;
- (id)identityExtension;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initiator;
- (id)interaction;
- (id)interactionDateInterval;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecentCall:(id)arg1;
- (bool)isEquivalentToRecentCall:(id)arg1;
- (bool)isJunk;
- (id)isoCountryCode;
- (long long)junkConfidence;
- (id)junkIdentificationCategory;
- (id)localParticipantUUID;
- (id)localizedBlockedByExtensionName;
- (long long)mediaType;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (bool)mobileOriginated;
- (bool)multiCall;
- (id)name;
- (id)notificationThreadIdentifier;
- (unsigned long long)numberOfOccurrences;
- (id)outgoingLocalParticipantUUID;
- (id)participantGroupUUID;
- (id)phoneBookManager;
- (bool)read;
- (id)remoteParticipantHandles;
- (unsigned long long)screenSharingType;
- (id)serviceProvider;
- (void)setAddressBookCallerIDMultiValueId:(id)arg1;
- (void)setAddressBookRecordId:(id)arg1;
- (void)setAnswered:(bool)arg1;
- (void)setAutoAnsweredReason:(long long)arg1;
- (void)setBlockedByExtension:(id)arg1;
- (void)setBlockedByExtensionName:(id)arg1;
- (void)setBytesOfDataUsed:(id)arg1;
- (void)setCallCategory:(unsigned int)arg1;
- (void)setCallDirectoryIdentityType:(long long)arg1;
- (void)setCallOccurrences:(id)arg1;
- (void)setCallStatus:(unsigned int)arg1;
- (void)setCallType:(unsigned int)arg1;
- (void)setCallerId:(id)arg1;
- (void)setCallerIdAvailability:(unsigned int)arg1;
- (void)setCallerIdFormatted:(id)arg1;
- (void)setCallerIdIsBlocked:(bool)arg1;
- (void)setCallerIdLabel:(id)arg1;
- (void)setCallerIdLocation:(id)arg1;
- (void)setCallerName:(id)arg1;
- (void)setCallerNetworkName:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setContactRef:(id)arg1;
- (void)setConversationID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDevicePhoneId:(id)arg1;
- (void)setDisconnectedCause:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEmergencyMediaItems:(id)arg1;
- (void)setFilteredOutReason:(id)arg1;
- (void)setHandleType:(long long)arg1;
- (void)setHasMessage:(bool)arg1;
- (void)setIdentityExtension:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setInitiator:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setJunkConfidence:(long long)arg1;
- (void)setJunkIdentificationCategory:(id)arg1;
- (void)setLocalParticipantUUID:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMobileCountryCode:(id)arg1;
- (void)setMobileNetworkCode:(id)arg1;
- (void)setMobileOriginated:(bool)arg1;
- (void)setMultiCall:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOutgoingLocalParticipantUUID:(id)arg1;
- (void)setParticipantGroupUUID:(id)arg1;
- (void)setPhoneBookManager:(id)arg1;
- (void)setRead:(bool)arg1;
- (void)setRemoteParticipantHandles:(id)arg1;
- (void)setScreenSharingType:(unsigned long long)arg1;
- (void)setServiceProvider:(id)arg1;
- (void)setTimeToEstablish:(id)arg1;
- (void)setTtyType:(long long)arg1;
- (void)setUniqueId:(id)arg1;
- (void)setUnreadCount:(unsigned long long)arg1;
- (void)setUsedEmergencyVideoStreaming:(bool)arg1;
- (void)setVerificationStatus:(long long)arg1;
- (void)setWasAutoAnswered:(bool)arg1;
- (void)setWasEmergencyCall:(bool)arg1;
- (id)timeToEstablish;
- (long long)ttyType;
- (id)uniqueId;
- (unsigned long long)unreadCount;
- (void)updateTTYAndMediaType;
- (bool)usedEmergencyVideoStreaming;
- (id)validRemoteParticipantHandles;
- (long long)verificationStatus;
- (bool)wasAutoAnswered;
- (bool)wasEmergencyCall;

@end

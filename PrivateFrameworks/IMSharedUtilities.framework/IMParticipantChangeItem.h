/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMParticipantChangeItem : IMItem <IMItemErrorProtocol, IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    NSUUID * _activeTelephonyConversationUUID;
    long long  _changeType;
    unsigned int  _errorCode;
    NSDictionary * _messageSummaryInfo;
    NSString * _otherCountryCode;
    NSString * _otherHandle;
    NSString * _otherUnformattedID;
    NSDate * _timeRead;
}

@property (nonatomic, retain) NSUUID *activeTelephonyConversationUUID;
@property (nonatomic) long long changeType;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic, retain) NSDictionary *messageSummaryInfo;
@property (nonatomic, retain) NSString *otherCountryCode;
@property (nonatomic, retain) NSString *otherHandle;
@property (nonatomic, retain) NSString *otherUnformattedID;
@property (nonatomic, retain) NSDate *timeRead;
@property (nonatomic) bool unattributed;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (bool)supportsSecureCoding;

- (id)activeTelephonyConversationUUID;
- (long long)changeType;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)errorCode;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)messageSummaryInfo;
- (id)otherCountryCode;
- (id)otherHandle;
- (id)otherUnformattedID;
- (void)setActiveTelephonyConversationUUID:(id)arg1;
- (void)setChangeType:(long long)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setMessageSummaryInfo:(id)arg1;
- (void)setOtherCountryCode:(id)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setOtherUnformattedID:(id)arg1;
- (void)setTimeRead:(id)arg1;
- (void)setUnattributed:(bool)arg1;
- (id)timeRead;
- (bool)unattributed;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_newChatItems;
- (id)_newChatItemsWithChatContext:(id)arg1;

@end

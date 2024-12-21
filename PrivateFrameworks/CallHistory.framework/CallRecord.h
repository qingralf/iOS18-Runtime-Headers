/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallRecord : NSManagedObject

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSNumber *answered;
@property (nonatomic, copy) NSNumber *autoAnsweredReason;
@property (nonatomic, copy) NSString *blockedByExtension;
@property (nonatomic, copy) NSString *blockedByExtensionName;
@property (nonatomic, copy) NSNumber *callDirectoryIdentityType;
@property (nonatomic, copy) NSNumber *call_category;
@property (nonatomic, copy) NSNumber *calltype;
@property (nonatomic) unsigned int chCallStatus;
@property (nonatomic, readonly, copy) NSSet *chEmergencyMediaItems;
@property (nonatomic, readonly) long long chHandleType;
@property (nonatomic, readonly, copy) CHHandle *chInitiator;
@property (nonatomic, readonly) CHRecentCall *chRecentCall;
@property (nonatomic, readonly, copy) NSSet *chRemoteParticipantHandles;
@property (nonatomic, copy) NSUUID *conversationID;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSNumber *disconnected_cause;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic, retain) NSSet *emergencyMediaItems;
@property (nonatomic, copy) NSNumber *face_time_data;
@property (nonatomic, copy) NSNumber *filtered_out_reason;
@property (nonatomic, copy) NSNumber *handle_type;
@property (nonatomic, copy) NSNumber *hasMessage;
@property (nonatomic, copy) NSString *identityExtension;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, retain) CHManagedHandle *initiator;
@property (nonatomic, copy) NSString *iso_country_code;
@property (nonatomic, copy) NSNumber *junkConfidence;
@property (nonatomic, copy) NSString *junkIdentificationCategory;
@property (nonatomic, copy) NSUUID *localParticipantUUID;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *number_availability;
@property (nonatomic, copy) NSNumber *originated;
@property (nonatomic, copy) NSUUID *outgoingLocalParticipantUUID;
@property (nonatomic, copy) NSUUID *participantGroupUUID;
@property (nonatomic, copy) NSNumber *read;
@property (nonatomic, retain) NSSet *remoteParticipantHandles;
@property (nonatomic, copy) NSNumber *screenSharingType;
@property (nonatomic, copy) NSString *service_provider;
@property (nonatomic, readonly) bool supportsAutoAnsweredReason;
@property (nonatomic, readonly) bool supportsBlockedBy;
@property (nonatomic, readonly) bool supportsBlockedByName;
@property (nonatomic, readonly) bool supportsCallCategory;
@property (nonatomic, readonly) bool supportsCallDirectoryIdentityType;
@property (nonatomic, readonly) bool supportsEmergencyMedia;
@property (nonatomic, readonly) bool supportsHandleType;
@property (nonatomic, readonly) bool supportsHasMessage;
@property (nonatomic, readonly) bool supportsIdentityExtension;
@property (nonatomic, readonly) bool supportsImageURL;
@property (nonatomic, readonly) bool supportsInitiator;
@property (nonatomic, readonly) bool supportsJunkIdentificationCategory;
@property (nonatomic, readonly) bool supportsLocalParticipantUUID;
@property (nonatomic, readonly) bool supportsOutgoingLocalParticipantUUID;
@property (nonatomic, readonly) bool supportsParticipantGroupUUID;
@property (nonatomic, readonly) bool supportsRemoteParticipantHandles;
@property (nonatomic, readonly) bool supportsScreenSharingType;
@property (nonatomic, readonly) bool supportsServiceProvider;
@property (nonatomic, readonly) bool supportsVerificationStatus;
@property (nonatomic, copy) NSString *unique_id;
@property (nonatomic) bool usedEmergencyVideoStreaming;
@property (nonatomic, copy) NSNumber *verificationStatus;
@property (nonatomic) bool wasEmergencyCall;

+ (id)fetchRequest;

- (bool)addEmergencyMediaItem:(id)arg1;
- (unsigned int)chCallStatus;
- (id)chEmergencyMediaItems;
- (long long)chHandleType;
- (id)chInitiator;
- (id)chRecentCall;
- (id)chRemoteParticipantHandles;
- (id)compositeCallCategoryForContext:(id)arg1;
- (id)compositeCallDirectoryIdentityType:(id)arg1;
- (id)compositeEmergencyMediaItemsForContext:(id)arg1;
- (id)compositeHandleTypeForContext:(id)arg1;
- (id)compositeInitiatorHandleForContext:(id)arg1;
- (id)compositeJunkConfidenceForContext:(id)arg1;
- (id)compositeLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeOutgoingLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeParticipantGroupUUIDForContext:(id)arg1;
- (id)compositeRemoteParticipantHandlesForContext:(id)arg1;
- (id)compositeServiceProviderForContext:(id)arg1;
- (id)compositeVerificationStatusForContext:(id)arg1;
- (void)setChCallStatus:(unsigned int)arg1;
- (bool)supportsAutoAnsweredReason;
- (bool)supportsBlockedBy;
- (bool)supportsBlockedByName;
- (bool)supportsCallCategory;
- (bool)supportsCallDirectoryIdentityType;
- (bool)supportsEmergencyMedia;
- (bool)supportsHandleType;
- (bool)supportsHasMessage;
- (bool)supportsIdentityExtension;
- (bool)supportsImageURL;
- (bool)supportsInitiator;
- (bool)supportsJunkConfidence;
- (bool)supportsJunkIdentificationCategory;
- (bool)supportsLocalParticipantUUID;
- (bool)supportsOutgoingLocalParticipantUUID;
- (bool)supportsParticipantGroupUUID;
- (bool)supportsRemoteParticipantHandles;
- (bool)supportsScreenSharingType;
- (bool)supportsServiceProvider;
- (bool)supportsVerificationStatus;

@end
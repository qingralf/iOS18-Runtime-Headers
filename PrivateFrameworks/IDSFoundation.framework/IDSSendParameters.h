/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSendParameters : NSObject <NSCopying> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _params;
}

@property (nonatomic, retain) NSData *accessToken;
@property (nonatomic, retain) NSString *accountUUID;
@property (nonatomic) bool activityContinuation;
@property (nonatomic) bool allowCloudDelivery;
@property (nonatomic, retain) NSString *alternateCallbackID;
@property (nonatomic) bool alwaysIncludeSelf;
@property (nonatomic) bool alwaysSkipSelf;
@property (nonatomic, retain) NSArray *bulkedPayload;
@property (nonatomic) bool bypassDuet;
@property (nonatomic) bool bypassSizeCheck;
@property (nonatomic) bool bypassStorage;
@property (nonatomic, retain) NSNumber *command;
@property (nonatomic, retain) NSNumber *commandContext;
@property (nonatomic) bool compressPayload;
@property (nonatomic) bool compressed;
@property (nonatomic) bool daemonDeathResend;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSData *dataToEncrypt;
@property (nonatomic, retain) NSNumber *deliveryMinimumTime;
@property (nonatomic, retain) NSNumber *deliveryMinimumTimeDelay;
@property (nonatomic, retain) NSDictionary *deliveryStatusContext;
@property (nonatomic, retain) NSString *destinationCorrelationIdentifier;
@property (nonatomic, retain) IDSDestination *destinations;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool disableAliasValidation;
@property (nonatomic) bool disallowRefresh;
@property (nonatomic, retain) NSNumber *dropMessageIndicatorCommand;
@property (nonatomic, retain) NSArray *duetIdentifiersOverride;
@property (nonatomic) bool encryptPayload;
@property (nonatomic, retain) NSDictionary *encryptionAttributes;
@property (nonatomic) bool enforceRemoteTimeouts;
@property (nonatomic) bool expectsPeerResponse;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic) bool fakeMessage;
@property (nonatomic, retain) NSArray *finalDestinationURIs;
@property (nonatomic) bool fireAndForget;
@property (nonatomic) bool forceEncryptionOff;
@property (nonatomic) long long forceQuery;
@property (nonatomic, retain) NSString *fromID;
@property (nonatomic, retain) NSString *fromShortHandle;
@property (nonatomic, retain) NSData *groupData;
@property (nonatomic) bool homeKitPayload;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool ignoreMaxRetryCount;
@property (nonatomic, retain) NSArray *interestingRegistrationProperties;
@property (nonatomic, retain) NSNumber *isInitiator;
@property (nonatomic) bool isProxiedOutgoingMessage;
@property (nonatomic) bool isUPlusOne;
@property (nonatomic, retain) NSDictionary *keyTransparencyURIVerificationMap;
@property (nonatomic) bool liveMessageDelivery;
@property (nonatomic) bool localDelivery;
@property (nonatomic, retain) NSString *localDestinationDeviceUUID;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSString *mainAccountUUID;
@property (nonatomic, retain) NSDictionary *message;
@property (nonatomic, retain) NSNumber *messageType;
@property (nonatomic, retain) NSData *messageUUID;
@property (nonatomic, retain) NSString *metricReportIdentifier;
@property (nonatomic) bool nonCloudWaking;
@property (nonatomic) bool nonWaking;
@property (nonatomic, retain) NSNumber *originalTimestamp;
@property (nonatomic, retain) NSString *originalfromID;
@property (nonatomic, retain) NSMutableDictionary *params;
@property (nonatomic, retain) NSString *peerResponseIdentifier;
@property (nonatomic, retain) <IDSPrioritizedTokenList> *prioritizedTokenList;
@property (nonatomic) long long priority;
@property (nonatomic, retain) NSDictionary *protobuf;
@property (nonatomic, retain) NSNumber *pushPriority;
@property (nonatomic, retain) NSString *queueOneIdentifier;
@property (nonatomic, retain) NSNumber *quickRelayUserType;
@property (nonatomic, retain) NSArray *requireAllRegistrationProperties;
@property (nonatomic) bool requireBluetooth;
@property (nonatomic, retain) NSArray *requireLackOfRegistrationProperties;
@property (nonatomic) bool requireLocalWiFi;
@property (nonatomic, retain) NSDictionary *resourceMetadata;
@property (nonatomic, retain) NSString *resourcePath;
@property (nonatomic, retain) NSNumber *sendMode;
@property (nonatomic) bool sessionForceInternetInvitation;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, retain) NSString *subService;
@property (nonatomic, retain) NSString *subServiceAccountUUID;
@property (nonatomic) double timeout;
@property (nonatomic) bool useDictAsTopLevel;
@property (nonatomic) bool wantsAppAck;
@property (nonatomic) bool wantsCertifiedDelivery;
@property (nonatomic) bool wantsDeliveryStatus;
@property (nonatomic) bool wantsFirewallDonation;
@property (nonatomic) bool wantsProgress;
@property (nonatomic) bool wantsResponse;

- (void).cxx_destruct;
- (id)accessToken;
- (id)accountUUID;
- (bool)activityContinuation;
- (bool)allowCloudDelivery;
- (id)alternateCallbackID;
- (bool)alwaysIncludeSelf;
- (bool)alwaysSkipSelf;
- (id)bulkedPayload;
- (bool)bypassDuet;
- (bool)bypassSizeCheck;
- (bool)bypassStorage;
- (id)command;
- (id)commandContext;
- (bool)compressPayload;
- (bool)compressed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)daemonDeathResend;
- (id)data;
- (id)dataToEncrypt;
- (id)deliveryMinimumTime;
- (id)deliveryMinimumTimeDelay;
- (id)deliveryStatusContext;
- (id)destinationCorrelationIdentifier;
- (id)destinations;
- (id)dictionaryRepresentation;
- (bool)disableAliasValidation;
- (bool)disallowRefresh;
- (id)dropMessageIndicatorCommand;
- (id)duetIdentifiersOverride;
- (void)encodeWithCoder:(id)arg1;
- (bool)encryptPayload;
- (id)encryptionAttributes;
- (bool)enforceRemoteTimeouts;
- (bool)expectsPeerResponse;
- (id)expirationDate;
- (bool)fakeMessage;
- (id)finalDestinationURIs;
- (bool)fireAndForget;
- (bool)forceEncryptionOff;
- (long long)forceQuery;
- (id)fromID;
- (id)fromShortHandle;
- (id)groupData;
- (bool)homeKitPayload;
- (id)identifier;
- (bool)ignoreMaxRetryCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)interestingRegistrationProperties;
- (id)isInitiator;
- (bool)isProxiedOutgoingMessage;
- (bool)isUPlusOne;
- (id)keyTransparencyURIVerificationMap;
- (bool)liveMessageDelivery;
- (bool)localDelivery;
- (id)localDestinationDeviceUUID;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)mainAccountUUID;
- (id)message;
- (id)messageType;
- (id)messageUUID;
- (id)metricReportIdentifier;
- (bool)nonCloudWaking;
- (bool)nonWaking;
- (id)objectForKey:(id)arg1;
- (id)originalTimestamp;
- (id)originalfromID;
- (id)params;
- (id)peerResponseIdentifier;
- (id)prioritizedTokenList;
- (long long)priority;
- (id)protobuf;
- (id)pushPriority;
- (id)queueOneIdentifier;
- (id)quickRelayUserType;
- (id)requireAllRegistrationProperties;
- (bool)requireBluetooth;
- (id)requireLackOfRegistrationProperties;
- (bool)requireLocalWiFi;
- (id)resourceMetadata;
- (id)resourcePath;
- (id)sendMode;
- (bool)sessionForceInternetInvitation;
- (id)sessionID;
- (void)setAccessToken:(id)arg1;
- (void)setAccountUUID:(id)arg1;
- (void)setActivityContinuation:(bool)arg1;
- (void)setAllowCloudDelivery:(bool)arg1;
- (void)setAlternateCallbackID:(id)arg1;
- (void)setAlwaysIncludeSelf:(bool)arg1;
- (void)setAlwaysSkipSelf:(bool)arg1;
- (void)setBulkedPayload:(id)arg1;
- (void)setBypassDuet:(bool)arg1;
- (void)setBypassSizeCheck:(bool)arg1;
- (void)setBypassStorage:(bool)arg1;
- (void)setCommand:(id)arg1;
- (void)setCommandContext:(id)arg1;
- (void)setCompressPayload:(bool)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setDaemonDeathResend:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setDataToEncrypt:(id)arg1;
- (void)setDeliveryMinimumTime:(id)arg1;
- (void)setDeliveryMinimumTimeDelay:(id)arg1;
- (void)setDeliveryStatusContext:(id)arg1;
- (void)setDestinationCorrelationIdentifier:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setDisableAliasValidation:(bool)arg1;
- (void)setDisallowRefresh:(bool)arg1;
- (void)setDropMessageIndicatorCommand:(id)arg1;
- (void)setDuetIdentifiersOverride:(id)arg1;
- (void)setEncryptPayload:(bool)arg1;
- (void)setEncryptionAttributes:(id)arg1;
- (void)setEnforceRemoteTimeouts:(bool)arg1;
- (void)setExpectsPeerResponse:(bool)arg1;
- (void)setFakeMessage:(bool)arg1;
- (void)setFinalDestinationURIs:(id)arg1;
- (void)setFireAndForget:(bool)arg1;
- (void)setForceEncryptionOff:(bool)arg1;
- (void)setForceQuery:(long long)arg1;
- (void)setFromID:(id)arg1;
- (void)setFromShortHandle:(id)arg1;
- (void)setGroupData:(id)arg1;
- (void)setHomeKitPayload:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIgnoreMaxRetryCount:(bool)arg1;
- (void)setInterestingRegistrationProperties:(id)arg1;
- (void)setIsInitiator:(id)arg1;
- (void)setIsProxiedOutgoingMessage:(bool)arg1;
- (void)setIsUPlusOne:(bool)arg1;
- (void)setKeyTransparencyURIVerificationMap:(id)arg1;
- (void)setLiveMessageDelivery:(bool)arg1;
- (void)setLocalDelivery:(bool)arg1;
- (void)setLocalDestinationDeviceUUID:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setMainAccountUUID:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageType:(id)arg1;
- (void)setMessageUUID:(id)arg1;
- (void)setMetricReportIdentifier:(id)arg1;
- (void)setNonCloudWaking:(bool)arg1;
- (void)setNonWaking:(bool)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOriginalTimestamp:(id)arg1;
- (void)setOriginalfromID:(id)arg1;
- (void)setParams:(id)arg1;
- (void)setPeerResponseIdentifier:(id)arg1;
- (void)setPrioritizedTokenList:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setProtobuf:(id)arg1;
- (void)setPushPriority:(id)arg1;
- (void)setQueueOneIdentifier:(id)arg1;
- (void)setQuickRelayUserType:(id)arg1;
- (void)setRequireAllRegistrationProperties:(id)arg1;
- (void)setRequireBluetooth:(bool)arg1;
- (void)setRequireLackOfRegistrationProperties:(id)arg1;
- (void)setRequireLocalWiFi:(bool)arg1;
- (void)setResourceMetadata:(id)arg1;
- (void)setResourcePath:(id)arg1;
- (void)setSendMode:(id)arg1;
- (void)setSessionForceInternetInvitation:(bool)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSubService:(id)arg1;
- (void)setSubServiceAccountUUID:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUseDictAsTopLevel:(bool)arg1;
- (void)setWantsAppAck:(bool)arg1;
- (void)setWantsCertifiedDelivery:(bool)arg1;
- (void)setWantsDeliveryStatus:(bool)arg1;
- (void)setWantsFirewallDonation:(bool)arg1;
- (void)setWantsProgress:(bool)arg1;
- (void)setWantsResponse:(bool)arg1;
- (id)subService;
- (id)subServiceAccountUUID;
- (double)timeout;
- (bool)useDictAsTopLevel;
- (bool)wantsAppAck;
- (bool)wantsCertifiedDelivery;
- (bool)wantsDeliveryStatus;
- (bool)wantsFirewallDonation;
- (bool)wantsProgress;
- (bool)wantsResponse;

@end

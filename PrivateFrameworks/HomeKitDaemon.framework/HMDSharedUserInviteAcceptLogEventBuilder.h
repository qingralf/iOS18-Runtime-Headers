/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDSharedUserInviteAcceptLogEventBuilder : HMDSharedUserInviteLogEventBuilder <HMFLogging> {
    HMDSharedUserInviteAcceptLogEvent * _acceptLogEvent;
    HMDHomeManager * _homeManager;
    unsigned long long  addUserToShareBeginTime;
    unsigned long long  createMKFCKSharedUserDataRootBeginTime;
    unsigned long long  createReverseShareBeginTime;
    unsigned long long  discoverPrimaryResidentBeginTime;
    unsigned long long  joinOwnerShareBeginTime;
    unsigned long long  residentSyncBeginTime;
    unsigned long long  sendAcceptanceToOwnerBeginTime;
}

@property (readonly) HMDSharedUserInviteAcceptLogEvent *acceptLogEvent;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)acceptLogEvent;
- (id)homeManager;
- (id)initWithHomeUUID:(id)arg1 homeManager:(id)arg2 sessionIdentifier:(id)arg3 invitationType:(unsigned long long)arg4 logEventSubmitter:(id)arg5 wifiManager:(id)arg6 currentUpTicksBlock:(id /* block */)arg7 submissionTimerFactory:(id /* block */)arg8;
- (id)initWithHomeUUID:(id)arg1 homeManager:(id)arg2 sessionIdentifier:(id)arg3 invitationType:(unsigned long long)arg4 wifiManager:(id)arg5;
- (bool)isReady;
- (void)markAddUserBegin;
- (void)markAddUserEnd;
- (void)markCreateMKFCKSharedUserDataRootBegin;
- (void)markCreateMKFCKSharedUserDataRootEnd;
- (void)markCreateReverseShareBegin;
- (void)markCreateReverseShareEnd;
- (void)markCreatedHome;
- (void)markDiscoverPrimaryResidentBegin;
- (void)markDiscoverPrimaryResidentEnd;
- (void)markJoinOwnerShareBegin;
- (void)markJoinOwnerShareEnd;
- (void)markResidentSyncBegin;
- (void)markResidentSyncEnd;
- (void)markSendAcceptanceToOwnerBegin;
- (void)markSendAcceptanceToOwnerEnd;
- (void)submit;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, InterfaceListenerDelegate, VideoConferenceSpeakingDelegate> {
    unsigned int  _conferenceID;
    NSMutableArray * _connectedFocusPeers;
    NSMutableArray * _connectedPeers;
    NSMutableArray * _connectedVoicePeers;
    bool  _currentWifiState;
    <GKVoiceChatPeerInfoProvider><GKVoiceChatReliableChannel> * _gameStateSession;
    NSMutableArray * _mutedPeers;
    NSMutableArray * _myPausedList;
    NSMutableDictionary * _peerChannelQuality;
    NSString * _peerID;
    id  _publicWrapper;
    VoiceChatSessionRoster * _roster;
    GKRWLock * _rwLock;
    NSObject<OS_dispatch_queue> * _sendQueue;
    NSString * _sessionName;
    unsigned int  _sessionState;
    GKVoiceChatServiceFocus * _vcService;
    GKInterfaceListener * _wifiListener;
    bool  activeSession;
    unsigned int  congestionState;
    <GKVoiceChatSessionDelegate> * delegate;
    bool  focusCallbacks;
    int  goodChannels;
    bool  isUsingSuppression;
    bool  needsRecalculateGoodChannels;
    float  sessionVolume;
    unsigned int  talkingPeersLimit;
}

@property (getter=isActiveSession) bool activeSession;
@property (nonatomic, readonly) unsigned int conferenceID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <GKVoiceChatSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <GKVoiceChatPeerInfoProvider><GKVoiceChatReliableChannel> *gameStateSession;
@property (readonly) unsigned long long hash;
@property bool isUsingSuppression;
@property (readonly) NSArray *peerList;
@property (nonatomic, readonly) NSString *sessionName;
@property float sessionVolume;
@property (readonly) Class superclass;
@property unsigned int talkingPeersLimit;

+ (void)brokenHash:(id)arg1 response:(char *)arg2;

- (void)addPeerToFocusPausedList:(id)arg1;
- (int)calculateChannelQualities;
- (void)calculateConferenceID;
- (void)cleanup;
- (void)cleanupProc:(id)arg1;
- (unsigned int)conferenceID;
- (void)dealloc;
- (id)decodePeerID:(id)arg1;
- (id)delegate;
- (void)didStartSpeaking:(id)arg1;
- (void)didStopSpeaking:(id)arg1;
- (id)encodePeerID:(id)arg1;
- (id)gameStateSession;
- (bool)getMuteStateForPeer:(id)arg1;
- (int)goodChannels;
- (void)handlePeerDisconnected:(id)arg1;
- (void)informClientVoiceChatConnecting:(id)arg1;
- (void)informClientVoiceChatCouldNotConnect:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)informClientVoiceChatFocusChange:(id)arg1;
- (void)informClientVoiceChatSilent:(id)arg1;
- (void)informClientVoiceChatSpeaking:(id)arg1;
- (id)initWithGameStateSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3;
- (void)interfaceStateDidChangeWithWifiUp:(bool)arg1 cellUp:(bool)arg2;
- (bool)isActiveSession;
- (bool)isEqual:(id)arg1;
- (bool)isUsingSuppression;
- (void)lossRate:(float)arg1 forParticipantID:(id)arg2;
- (void)networkStateDidChange;
- (void)parseConnectedPeers:(id)arg1;
- (void)parseMutedPeers:(id)arg1 forPeer:(id)arg2;
- (id)participantID;
- (void)pauseAll;
- (unsigned int)peerCount;
- (id)peerList;
- (void)pruneBadLinks;
- (void)removeFromFocusPausedList:(id)arg1;
- (void)sendConnectedPeers;
- (void)sendMutedPeers;
- (void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(unsigned int)arg3;
- (id)sessionName;
- (float)sessionVolume;
- (void)setActiveSession:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsUsingSuppression:(bool)arg1;
- (void)setMute:(bool)arg1 forPeer:(id)arg2;
- (void)setSessionVolume:(float)arg1;
- (void)setTalkingPeersLimit:(unsigned int)arg1;
- (void)startSession;
- (void)startSessionInternal;
- (void)stopSession;
- (void)stopSessionInternal;
- (unsigned int)talkingPeersLimit;
- (void)unPauseAll;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedFocusID:(unsigned int)arg1;
- (void)updatedFocusPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)updatedSubscribedBeaconList:(id)arg1;
- (void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(unsigned int)arg3;
- (void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;
- (void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;

@end

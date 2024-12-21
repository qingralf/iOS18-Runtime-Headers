/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSharedTripSenderStrategyController : NSObject {
    MSPSharedTripGroupSession * _groupSession;
    MSPSenderLiveStrategy * _liveSender;
    <MSPSenderMessageStrategyDelegate> * _messageStrategyDelegate;
    NSMutableArray * _nestedVirtualReceiverEnablement;
    NSMutableDictionary * _senderStrategiesByServiceName;
    MSPSenderVirtualLiveStrategy * _virtualLiveSender;
    NSMutableDictionary * _virtualSenderStrategiesByServiceName;
}

+ (void)updateGroupSessionStorage:(id)arg1 fromController:(id)arg2;

- (void).cxx_destruct;
- (id)_createMinimalSenderForServiceName:(id)arg1;
- (id)_createMinimalSenderWithMapsClass:(Class)arg1 messagesClass:(Class)arg2 serviceName:(id)arg3;
- (id)_currentLiveSender:(bool)arg1;
- (id)_currentMinimalSenderForServiceName:(id)arg1 createIfNeeded:(bool)arg2;
- (id)_currentSendersByServiceName;
- (bool)_enableVirtualReceivers;
- (void)_performBlockWithMinimalSenders:(id /* block */)arg1;
- (void)_updateGroupSessionStorage:(id)arg1;
- (bool)addLiveParticipants:(id)arg1;
- (bool)addParticipants:(id)arg1 forServiceName:(id)arg2;
- (id)initWithGroupSession:(id)arg1 messageStrategyDelegate:(id)arg2;
- (void)performWithAllMinimalSenders:(id /* block */)arg1;
- (void)performWithVirtualSenders:(bool)arg1 block:(id /* block */)arg2;
- (bool)removeLiveParticipant:(id)arg1;
- (void)removeLiveParticipants:(id)arg1;
- (bool)removeParticipant:(id)arg1 forServiceName:(id)arg2 reason:(unsigned long long)arg3;
- (bool)removeParticipant:(id)arg1 reason:(unsigned long long)arg2;
- (void)restoreFromGroupSessionStorage:(id)arg1;
- (void)setState:(id)arg1 forEvent:(unsigned long long)arg2;

@end
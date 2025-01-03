/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionStatisticsCollector : NSObject {
    id /* block */  _copyPacketCountCallbackRecv;
    id /* block */  _copyPacketCountCallbackSend;
    unsigned int  _currentPacketRecvCount;
    unsigned int  _currentPacketRecvUpdateTicks;
    unsigned int  _currentPacketSentCount;
    unsigned int  _currentPacketSentUpdateTicks;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _historyStateRWlock;
    NSMutableDictionary * _packetCountsHistoryRecv;
    NSMutableDictionary * _packetCountsHistorySent;
    NSObject<OS_dispatch_source> * _periodicHistoryUpdateRecvTimer;
    NSObject<OS_dispatch_source> * _periodicHistoryUpdateSentTimer;
}

- (void)addConnectionBasedTopPacketCountsTelemetry:(id)arg1 reportingKey:(id)arg2 mapLinkIDToLinkUUID:(id)arg3 isOutgoing:(bool)arg4;
- (void)addConnectionBasedTopPacketCountsTelemetry:(id)arg1 reportingKey:(id)arg2 reportingTickCounts:(unsigned int)arg3 mapLinkIDToLinkUUID:(id)arg4 packetCountsPerConnection:(id)arg5;
- (id)connectionBasedTopPacketCountsWithUpdateTickCounts:(unsigned int*)arg1 isOutgoing:(bool)arg2;
- (void)copyCopyPacketCountCallbackForOutgoing:(bool)arg1 withCallback:(id /* block */)arg2;
- (void)dealloc;
- (void)deallocCopyPacketCountCallBack:(bool)arg1;
- (id)init;
- (void)startPeriodicUpdateHistory:(bool)arg1 withCopyPacketCountCallback:(id /* block */)arg2;
- (void)startUpdateHistoryTimerForOutgoing:(bool)arg1;
- (void)stopPeriodicHistoryUpdate;
- (void)updateHistory:(bool)arg1;

@end

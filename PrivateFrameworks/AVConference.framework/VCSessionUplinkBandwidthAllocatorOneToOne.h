/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionUplinkBandwidthAllocatorOneToOne : VCObject <VCSessionUplinkBandwidthAllocator> {
    NSMutableDictionary * _bandwithAllocationTable;
    bool  _redundancyEnabled;
    NSMutableDictionary * _streamTokenToEnableMap;
    NSMutableDictionary * _streamTokenToTableEntryMap;
}

@property (getter=isCamera1080pAvailable, nonatomic) bool camera1080pAvailable;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRedundancyEnabled, nonatomic) bool redundancyEnabled;
@property (getter=isRedundancyEnabledFor720Stream, nonatomic) bool redundancyEnabledFor720Stream;
@property (readonly) Class superclass;

+ (id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned int)arg2;

- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(bool)arg2;
- (id)baseNetworkBitrateSplitForTargetBitrate:(unsigned int)arg1 baseNetworkBitrate:(unsigned long long*)arg2;
- (void)dealloc;
- (unsigned long long)findAndSplitExtraBitrateFromCappedStreams:(id)arg1 remainderBitrate:(long long)arg2 currentStreamGroupBitrate:(unsigned long long)arg3 streamToken:(long long)arg4 totalRemainderBitrateWeight:(unsigned long long)arg5;
- (id)findBitrateSplitForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2;
- (void)generateBandwidthAllocationTableWithTierTables:(id)arg1 qualityIndices:(id)arg2 qualityIndexToStreamToken:(id)arg3;
- (void)getCurrentEnabledTierTables:(id)arg1 qualityIndices:(id)arg2 qualityIndexToStreamToken:(id)arg3;
- (id)init;
- (bool)isCamera1080pAvailable;
- (bool)isEnabledStreamToken:(long long)arg1;
- (bool)isRedundancyEnabled;
- (bool)isRedundancyEnabledFor720Stream;
- (bool)isStreamGroupEnabled:(unsigned int)arg1;
- (bool)peerSubscription:(bool)arg1 streamID:(unsigned short)arg2;
- (void)recomputeAllocationTableIfRequired;
- (id)repairStreamIDsForStreamToken:(long long)arg1;
- (void)setCamera1080pAvailable:(bool)arg1;
- (void)setRedundancyEnabled:(bool)arg1;
- (void)setRedundancyEnabledFor720Stream:(bool)arg1;
- (bool)shouldUseMinMicBitrate:(unsigned long long)arg1 streamToken:(long long)arg2 remainderBitrate:(long long)arg3;
- (bool)shouldUseMultipleStreamGroupAlgorithm;
- (id)streamIDsForStreamToken:(long long)arg1;
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2;
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrateCap:(unsigned int)arg2;
- (id)streamIDsIfStreamTokenIsEnabled:(long long)arg1;
- (id)streamIDsIfStreamTokenIsPresent:(long long)arg1;
- (void)streamToken:(long long)arg1 enabled:(bool)arg2;
- (id)targetBitratesForStreamToken:(long long)arg1 targetNetworkBitrate:(unsigned int)arg2 preferNetworkBitrates:(bool)arg3;

@end

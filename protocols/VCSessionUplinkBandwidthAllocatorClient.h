/* Generated by RuntimeBrowser.
 */

@protocol VCSessionUplinkBandwidthAllocatorClient

@required

- (NSDictionary *)microphoneOnlyBandwidthTable;
- (NSDictionary *)qualityTierTableForStreamToken:(long long)arg1;
- (unsigned int)remainderBitrateSplitForStreamToken:(long long)arg1;
- (bool)shouldCapStream:(long long)arg1 cappedBitrate:(unsigned int*)arg2;
- (NSDictionary *)videoCallMicrophoneBandwidthTable;

@end
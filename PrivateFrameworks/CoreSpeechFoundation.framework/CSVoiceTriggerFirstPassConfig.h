/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSVoiceTriggerFirstPassConfig : NSObject {
    NSString * _configPathNDAPI;
    float  _delaySecondsForChannelSelection;
    int  _masterChannel;
    float  _masterChannelScoreBoost;
    unsigned long long  _processingChannelsBitset;
    float  _processingChunkSeconds;
    float  _threshold;
    int  _voiceIsolationChannel;
    float  _voiceIsolationChannelScoreBoost;
}

@property (nonatomic, readonly) NSString *configPathNDAPI;
@property (nonatomic, readonly) float delaySecondsForChannelSelection;
@property (nonatomic, readonly) int masterChannel;
@property (nonatomic, readonly) float masterChannelScoreBoost;
@property (nonatomic, readonly) unsigned long long processingChannelsBitset;
@property (nonatomic, readonly) float processingChunkSeconds;
@property (nonatomic, readonly) float threshold;
@property (nonatomic, readonly) int voiceIsolationChannel;
@property (nonatomic, readonly) float voiceIsolationChannelScoreBoost;

- (void).cxx_destruct;
- (id)configPathNDAPI;
- (float)delaySecondsForChannelSelection;
- (id)initWithConfigPathNDAPI:(id)arg1 threshold:(float)arg2 delaySecondsForChannelSelection:(float)arg3 masterChannelScoreBoost:(float)arg4 voiceIsolationChannelScoreBoost:(float)arg5 processingChunkSeconds:(float)arg6 processingChannelsBitset:(unsigned long long)arg7 masterChannel:(int)arg8 voiceIsolationChannel:(int)arg9;
- (int)masterChannel;
- (float)masterChannelScoreBoost;
- (unsigned long long)processingChannelsBitset;
- (float)processingChunkSeconds;
- (float)threshold;
- (int)voiceIsolationChannel;
- (float)voiceIsolationChannelScoreBoost;

@end

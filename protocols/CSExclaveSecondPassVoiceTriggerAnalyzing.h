/* Generated by RuntimeBrowser.
 */

@protocol CSExclaveSecondPassVoiceTriggerAnalyzing <NSObject>

@required

- (bool)initializeSecondPass;
- (void)processSecondPassVoiceTriggerWithShouldFlushAudio:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 15: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, double, float, float, unsigned int, float, unsigned long long, unsigned long long, void*
- (bool)setSpeakerProfile:(NSData *)arg1 numEmbeddings:(unsigned long long)arg2 dimension:(unsigned long long)arg3 speakerRecognizerType:(unsigned long long)arg4;
- (void)startSecondPassVoiceTriggerWithFirstPassSource:(unsigned long long)arg1 enablePHS:(bool)arg2 supportMultiPhrase:(bool)arg3 activeChannel:(unsigned int)arg4;
- (void)stopSecondPassVoiceTrigger;

@end

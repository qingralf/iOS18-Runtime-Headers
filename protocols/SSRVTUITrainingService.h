/* Generated by RuntimeBrowser.
 */

@protocol SSRVTUITrainingService <NSObject>

@required

- (void)didDetectForceEndPoint;
- (void)prepareWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)reset;
- (void)setLocaleIdentifier:(NSString *)arg1;
- (void)startRMS;
- (void)stopRMS;

@optional

- (void)audioSourceWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)cancelTrainingViaXPCForID:(long long)arg1;
- (void)cleanupViaXPCWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)getAudioSessionID:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*
- (void)playSoundEffectWithAudioTone:(int)arg1;
- (void)setupWithLocaleID:(NSString *)arg1 appDomain:(NSString *)arg2 siriSharedUserId:(NSString *)arg3;
- (void)trainUtteranceViaXPC:(void *)arg1 shouldUseASR:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, int, bool, id*, void*
- (void)trainUtteranceViaXPC:(void *)arg1 shouldUseASR:(void *)arg2 mhUUID:(void *)arg3 completionWithResult:(void *)arg4; // needs 4 arg types, found 11: long long, bool, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CSVTUITrainingResult *, bool, id*, void*
- (void)voiceProfileWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SSRVoiceProfile *, void*

@end
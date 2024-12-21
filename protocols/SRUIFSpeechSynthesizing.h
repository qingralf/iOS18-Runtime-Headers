/* Generated by RuntimeBrowser.
 */

@protocol SRUIFSpeechSynthesizing <NSObject>

@required

- (void)cancel;
- (<SRUIFSpeechSynthesizerDelegate> *)delegate;
- (void)duckTTSVolumeTo:(void *)arg1 rampTime:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: float, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)enqueuePhaticWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)enqueueSpeechSynthesisRequest:(SRUIFSpeechSynthesisRequest *)arg1;
- (void)invalidate;
- (void)isSynthesisQueueEmpty:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)prewarmIfNeeded;
- (void)processDelayedItem:(NSString *)arg1;
- (void)setDelegate:(id <SRUIFSpeechSynthesizerDelegate>)arg1;
- (void)skipCurrentSynthesis;

@end
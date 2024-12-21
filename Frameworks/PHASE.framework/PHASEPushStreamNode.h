/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PHASE.framework/PHASE
 */

@interface PHASEPushStreamNode : PHASEStreamNode

@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) PHASENumberMetaParameter *gainMetaParameter;
@property (nonatomic, readonly) PHASEMixer *mixer;
@property (nonatomic, readonly) PHASENumberMetaParameter *rateMetaParameter;

- (void)scheduleBuffer:(id)arg1;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionCallbackType:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)scheduleBuffer:(id)arg1 completionCallbackType:(long long)arg2 completionHandler:(id /* block */)arg3;

@end
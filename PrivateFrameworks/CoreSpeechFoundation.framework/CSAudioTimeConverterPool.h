/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSAudioTimeConverterPool : NSObject {
    CSAudioTimeConverter * _exclaveTimeConverter;
    NSMutableDictionary * _pool;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CSAudioTimeConverter *exclaveTimeConverter;
@property (nonatomic, retain) NSMutableDictionary *pool;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getAudioTimeConverterWithAudioStreamId:(unsigned long long)arg1;
- (id)converterForAudioStreamId:(unsigned long long)arg1;
- (id)defaultConverter;
- (id)defaultExclaveConverter;
- (id)exclaveTimeConverter;
- (id)init;
- (id)pool;
- (id)queue;
- (void)setExclaveTimeConverter:(id)arg1;
- (void)setPool:(id)arg1;
- (void)setQueue:(id)arg1;

@end
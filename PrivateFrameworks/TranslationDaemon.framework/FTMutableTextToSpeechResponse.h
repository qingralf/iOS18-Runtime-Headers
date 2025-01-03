/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon
 */

@interface FTMutableTextToSpeechResponse : FTTextToSpeechResponse

@property (nonatomic, copy) NSData *audio;
@property (nonatomic) long long audio_type;
@property (nonatomic, copy) FTAudioDescription *decoder_description;
@property (nonatomic, copy) FTTextToSpeechResponseDevData *dev_data;
@property (nonatomic) int error_code;
@property (nonatomic, copy) NSString *error_str;
@property (nonatomic, copy) FTTextToSpeechFeature *feature;
@property (nonatomic, copy) FTTextToSpeechMeta *meta_info;
@property (nonatomic, copy) FTAudioDescription *playback_description;
@property (nonatomic) int sample_rate;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSArray *word_timing_info;

- (id)audio;
- (void)audio:(id /* block */)arg1;
- (long long)audio_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decoder_description;
- (id)dev_data;
- (int)error_code;
- (id)error_str;
- (id)feature;
- (id)init;
- (id)meta_info;
- (id)playback_description;
- (int)sample_rate;
- (id)session_id;
- (void)setAudio:(id)arg1;
- (void)setAudio_type:(long long)arg1;
- (void)setDecoder_description:(id)arg1;
- (void)setDev_data:(id)arg1;
- (void)setError_code:(int)arg1;
- (void)setError_str:(id)arg1;
- (void)setFeature:(id)arg1;
- (void)setMeta_info:(id)arg1;
- (void)setPlayback_description:(id)arg1;
- (void)setSample_rate:(int)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setWord_timing_info:(id)arg1;
- (id)speech_id;
- (id)word_timing_info;

@end

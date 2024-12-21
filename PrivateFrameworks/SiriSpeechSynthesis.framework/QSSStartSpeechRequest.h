/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
 */

@interface QSSStartSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StartSpeechRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *application_name;
@property (nonatomic, readonly) NSString *client_endpointer_model_version;
@property (nonatomic, readonly) long long codec;
@property (nonatomic, readonly) NSString *device_os;
@property (nonatomic, readonly) NSString *device_type;
@property (nonatomic, readonly) bool disable_auto_punctuation;
@property (nonatomic, readonly) bool enable_endpoint_candidate;
@property (nonatomic, readonly) bool enable_hybrid_endpoint;
@property (nonatomic, readonly) bool enable_server_side_endpoint;
@property (nonatomic, readonly) bool enable_utterance_detection;
@property (nonatomic, readonly) long long end_point_mode;
@property (nonatomic, readonly) NSString *experiment_id;
@property (nonatomic, readonly) NSString *fork_id;
@property (nonatomic, readonly) unsigned int initial_recognition_candidate_id;
@property (nonatomic, readonly) NSString *input_origin;
@property (nonatomic, readonly) bool is_far_field;
@property (nonatomic, readonly) bool keyboard_dictation;
@property (nonatomic, readonly) NSString *keyboard_identifier;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *metadata;
@property (nonatomic, readonly) NSString *mic_type;
@property (nonatomic, readonly) NSString *request_locale;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) long long speech_request_source;
@property (nonatomic, readonly) int start_audio_bookmark;
@property (nonatomic, readonly) unsigned long long start_endpointing_at;
@property (nonatomic, readonly) unsigned long long start_recognition_at;
@property (nonatomic, readonly) bool store_audio;
@property (nonatomic, readonly) bool stream_results;
@property (nonatomic, readonly) bool stream_unstable_results;
@property (nonatomic, readonly) bool tandem_mode;
@property (nonatomic, readonly) NSString *task_name;
@property (nonatomic, readonly) NSString *udm_host;
@property (nonatomic, readonly) int udm_port;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::StartSpeechRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)application_name;
- (id)client_endpointer_model_version;
- (long long)codec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device_os;
- (id)device_type;
- (bool)disable_auto_punctuation;
- (bool)enable_endpoint_candidate;
- (bool)enable_hybrid_endpoint;
- (bool)enable_server_side_endpoint;
- (bool)enable_utterance_detection;
- (long long)end_point_mode;
- (id)experiment_id;
- (id)flatbuffData;
- (id)fork_id;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (unsigned int)initial_recognition_candidate_id;
- (id)input_origin;
- (bool)is_far_field;
- (bool)keyboard_dictation;
- (id)keyboard_identifier;
- (id)language;
- (id)metadata;
- (id)mic_type;
- (id)request_locale;
- (id)session_id;
- (id)speech_id;
- (long long)speech_request_source;
- (int)start_audio_bookmark;
- (unsigned long long)start_endpointing_at;
- (unsigned long long)start_recognition_at;
- (bool)store_audio;
- (bool)stream_results;
- (bool)stream_unstable_results;
- (bool)tandem_mode;
- (id)task_name;
- (id)udm_host;
- (int)udm_port;

@end
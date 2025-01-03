/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon
 */

@interface FTMutableTtsTextToSpeechSpeechFeatureMessage : FTTtsTextToSpeechSpeechFeatureMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTTextToSpeechSpeechFeatureRequest *session_messageAsFTTextToSpeechSpeechFeatureRequest;
@property (nonatomic, copy) FTTextToSpeechSpeechFeatureResponse *session_messageAsFTTextToSpeechSpeechFeatureResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTTextToSpeechSpeechFeatureRequest;
- (id)session_messageAsFTTextToSpeechSpeechFeatureResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTTextToSpeechSpeechFeatureRequest:(id)arg1;
- (void)setSession_messageAsFTTextToSpeechSpeechFeatureResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end

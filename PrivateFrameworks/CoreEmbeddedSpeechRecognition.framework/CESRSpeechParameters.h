/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CESRSpeechParameters : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationName;
    NSUUID * _asrId;
    bool  _censorSpeech;
    NSString * _codec;
    bool  _continuousListening;
    bool  _deliverEagerPackage;
    bool  _detectUtterances;
    NSString * _dictationUIInteractionIdentifier;
    bool  _disableDeliveringAsrFeatures;
    bool  _enableAutoPunctuation;
    bool  _enableEmojiRecognition;
    bool  _enableVoiceCommands;
    double  _endpointStart;
    bool  _farField;
    NSString * _inputOrigin;
    bool  _isSpeechAPIRequest;
    NSArray * _jitGrammar;
    NSString * _language;
    CLLocation * _location;
    NSArray * _loggingContext;
    double  _maximumRecognitionDuration;
    NSURL * _modelOverrideURL;
    bool  _narrowband;
    NSURL * _originalAudioFileURL;
    NSDictionary * _overrides;
    NSString * _postfixText;
    AFPowerContextPolicy * _powerContext;
    NSString * _prefixText;
    NSData * _profile;
    double  _recognitionStart;
    NSString * _requestIdentifier;
    bool  _secureOfflineOnly;
    NSString * _selectedText;
    NSArray * _sharedUserInfos;
    bool  _shouldGenerateVoiceCommandCandidates;
    bool  _shouldHandleCapitalization;
    bool  _shouldStoreAudioOnDevice;
    NSString * _task;
}

@property (nonatomic, readonly, copy) NSString *applicationName;
@property (nonatomic, readonly, copy) NSUUID *asrId;
@property (nonatomic, readonly) bool censorSpeech;
@property (nonatomic, readonly, copy) NSString *codec;
@property (nonatomic, readonly) bool continuousListening;
@property (nonatomic, readonly) bool deliverEagerPackage;
@property (nonatomic, readonly) bool detectUtterances;
@property (nonatomic, readonly, copy) NSString *dictationUIInteractionIdentifier;
@property (nonatomic, readonly) bool disableDeliveringAsrFeatures;
@property (nonatomic, readonly) bool enableAutoPunctuation;
@property (nonatomic, readonly) bool enableEmojiRecognition;
@property (nonatomic, readonly) bool enableVoiceCommands;
@property (nonatomic, readonly) double endpointStart;
@property (nonatomic, readonly) bool farField;
@property (nonatomic, readonly, copy) NSString *inputOrigin;
@property (nonatomic, readonly) bool isSpeechAPIRequest;
@property (nonatomic, readonly, copy) NSArray *jitGrammar;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly, copy) NSArray *loggingContext;
@property (nonatomic, readonly) double maximumRecognitionDuration;
@property (nonatomic, readonly, copy) NSURL *modelOverrideURL;
@property (nonatomic, readonly) bool narrowband;
@property (nonatomic, readonly, copy) NSURL *originalAudioFileURL;
@property (nonatomic, readonly, copy) NSDictionary *overrides;
@property (nonatomic, readonly, copy) NSString *postfixText;
@property (nonatomic, readonly, copy) AFPowerContextPolicy *powerContext;
@property (nonatomic, readonly, copy) NSString *prefixText;
@property (nonatomic, readonly, copy) NSData *profile;
@property (nonatomic, readonly) double recognitionStart;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly) bool secureOfflineOnly;
@property (nonatomic, readonly, copy) NSString *selectedText;
@property (nonatomic, readonly, copy) NSArray *sharedUserInfos;
@property (nonatomic, readonly) bool shouldGenerateVoiceCommandCandidates;
@property (nonatomic, readonly) bool shouldHandleCapitalization;
@property (nonatomic, readonly) bool shouldStoreAudioOnDevice;
@property (nonatomic, readonly, copy) NSString *task;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)applicationName;
- (id)asrId;
- (bool)censorSpeech;
- (id)codec;
- (bool)continuousListening;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deliverEagerPackage;
- (id)description;
- (bool)detectUtterances;
- (id)dictationUIInteractionIdentifier;
- (bool)disableDeliveringAsrFeatures;
- (bool)enableAutoPunctuation;
- (bool)enableEmojiRecognition;
- (bool)enableVoiceCommands;
- (void)encodeWithCoder:(id)arg1;
- (double)endpointStart;
- (bool)farField;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguage:(id)arg1 requestIdentifier:(id)arg2 dictationUIInteractionIdentifier:(id)arg3 task:(id)arg4 loggingContext:(id)arg5 applicationName:(id)arg6 profile:(id)arg7 overrides:(id)arg8 modelOverrideURL:(id)arg9 originalAudioFileURL:(id)arg10 codec:(id)arg11 narrowband:(bool)arg12 detectUtterances:(bool)arg13 censorSpeech:(bool)arg14 farField:(bool)arg15 secureOfflineOnly:(bool)arg16 shouldStoreAudioOnDevice:(bool)arg17 continuousListening:(bool)arg18 shouldHandleCapitalization:(bool)arg19 isSpeechAPIRequest:(bool)arg20 maximumRecognitionDuration:(double)arg21 endpointStart:(double)arg22 inputOrigin:(id)arg23 location:(id)arg24 jitGrammar:(id)arg25 deliverEagerPackage:(bool)arg26 disableDeliveringAsrFeatures:(bool)arg27 enableEmojiRecognition:(bool)arg28 enableAutoPunctuation:(bool)arg29 enableVoiceCommands:(bool)arg30;
- (id)initWithLanguage:(id)arg1 requestIdentifier:(id)arg2 dictationUIInteractionIdentifier:(id)arg3 task:(id)arg4 loggingContext:(id)arg5 applicationName:(id)arg6 profile:(id)arg7 overrides:(id)arg8 modelOverrideURL:(id)arg9 originalAudioFileURL:(id)arg10 codec:(id)arg11 narrowband:(bool)arg12 detectUtterances:(bool)arg13 censorSpeech:(bool)arg14 farField:(bool)arg15 secureOfflineOnly:(bool)arg16 shouldStoreAudioOnDevice:(bool)arg17 continuousListening:(bool)arg18 shouldHandleCapitalization:(bool)arg19 isSpeechAPIRequest:(bool)arg20 maximumRecognitionDuration:(double)arg21 endpointStart:(double)arg22 inputOrigin:(id)arg23 location:(id)arg24 jitGrammar:(id)arg25 deliverEagerPackage:(bool)arg26 disableDeliveringAsrFeatures:(bool)arg27 enableEmojiRecognition:(bool)arg28 enableAutoPunctuation:(bool)arg29 enableVoiceCommands:(bool)arg30 sharedUserInfos:(id)arg31 prefixText:(id)arg32 postfixText:(id)arg33 selectedText:(id)arg34 powerContext:(id)arg35;
- (id)initWithLanguage:(id)arg1 requestIdentifier:(id)arg2 dictationUIInteractionIdentifier:(id)arg3 task:(id)arg4 loggingContext:(id)arg5 applicationName:(id)arg6 profile:(id)arg7 overrides:(id)arg8 modelOverrideURL:(id)arg9 originalAudioFileURL:(id)arg10 codec:(id)arg11 narrowband:(bool)arg12 detectUtterances:(bool)arg13 censorSpeech:(bool)arg14 farField:(bool)arg15 secureOfflineOnly:(bool)arg16 shouldStoreAudioOnDevice:(bool)arg17 continuousListening:(bool)arg18 shouldHandleCapitalization:(bool)arg19 isSpeechAPIRequest:(bool)arg20 maximumRecognitionDuration:(double)arg21 endpointStart:(double)arg22 inputOrigin:(id)arg23 location:(id)arg24 jitGrammar:(id)arg25 deliverEagerPackage:(bool)arg26 disableDeliveringAsrFeatures:(bool)arg27 enableEmojiRecognition:(bool)arg28 enableAutoPunctuation:(bool)arg29 enableVoiceCommands:(bool)arg30 sharedUserInfos:(id)arg31 prefixText:(id)arg32 postfixText:(id)arg33 selectedText:(id)arg34 powerContext:(id)arg35 recognitionStart:(double)arg36;
- (id)initWithLanguage:(id)arg1 requestIdentifier:(id)arg2 dictationUIInteractionIdentifier:(id)arg3 task:(id)arg4 loggingContext:(id)arg5 applicationName:(id)arg6 profile:(id)arg7 overrides:(id)arg8 modelOverrideURL:(id)arg9 originalAudioFileURL:(id)arg10 codec:(id)arg11 narrowband:(bool)arg12 detectUtterances:(bool)arg13 censorSpeech:(bool)arg14 farField:(bool)arg15 secureOfflineOnly:(bool)arg16 shouldStoreAudioOnDevice:(bool)arg17 continuousListening:(bool)arg18 shouldHandleCapitalization:(bool)arg19 isSpeechAPIRequest:(bool)arg20 maximumRecognitionDuration:(double)arg21 endpointStart:(double)arg22 inputOrigin:(id)arg23 location:(id)arg24 jitGrammar:(id)arg25 deliverEagerPackage:(bool)arg26 disableDeliveringAsrFeatures:(bool)arg27 enableEmojiRecognition:(bool)arg28 enableAutoPunctuation:(bool)arg29 enableVoiceCommands:(bool)arg30 sharedUserInfos:(id)arg31 prefixText:(id)arg32 postfixText:(id)arg33 selectedText:(id)arg34 powerContext:(id)arg35 recognitionStart:(double)arg36 shouldGenerateVoiceCommandCandidates:(bool)arg37;
- (id)initWithLanguage:(id)arg1 requestIdentifier:(id)arg2 dictationUIInteractionIdentifier:(id)arg3 task:(id)arg4 loggingContext:(id)arg5 applicationName:(id)arg6 profile:(id)arg7 overrides:(id)arg8 modelOverrideURL:(id)arg9 originalAudioFileURL:(id)arg10 codec:(id)arg11 narrowband:(bool)arg12 detectUtterances:(bool)arg13 censorSpeech:(bool)arg14 farField:(bool)arg15 secureOfflineOnly:(bool)arg16 shouldStoreAudioOnDevice:(bool)arg17 continuousListening:(bool)arg18 shouldHandleCapitalization:(bool)arg19 isSpeechAPIRequest:(bool)arg20 maximumRecognitionDuration:(double)arg21 endpointStart:(double)arg22 inputOrigin:(id)arg23 location:(id)arg24 jitGrammar:(id)arg25 deliverEagerPackage:(bool)arg26 disableDeliveringAsrFeatures:(bool)arg27 enableEmojiRecognition:(bool)arg28 enableAutoPunctuation:(bool)arg29 enableVoiceCommands:(bool)arg30 sharedUserInfos:(id)arg31 prefixText:(id)arg32 postfixText:(id)arg33 selectedText:(id)arg34 powerContext:(id)arg35 recognitionStart:(double)arg36 shouldGenerateVoiceCommandCandidates:(bool)arg37 asrId:(id)arg38;
- (id)initWithLanguage:(id)arg1 requestIdentifier:(id)arg2 dictationUIInteractionIdentifier:(id)arg3 task:(id)arg4 loggingContext:(id)arg5 applicationName:(id)arg6 profile:(id)arg7 overrides:(id)arg8 modelOverrideURL:(id)arg9 originalAudioFileURL:(id)arg10 codec:(id)arg11 narrowband:(bool)arg12 detectUtterances:(bool)arg13 censorSpeech:(bool)arg14 farField:(bool)arg15 secureOfflineOnly:(bool)arg16 shouldStoreAudioOnDevice:(bool)arg17 continuousListening:(bool)arg18 shouldHandleCapitalization:(bool)arg19 isSpeechAPIRequest:(bool)arg20 maximumRecognitionDuration:(double)arg21 endpointStart:(double)arg22 inputOrigin:(id)arg23 location:(id)arg24 jitGrammar:(id)arg25 deliverEagerPackage:(bool)arg26 disableDeliveringAsrFeatures:(bool)arg27 sharedUserIds:(id)arg28 enableEmojiRecognition:(bool)arg29 enableAutoPunctuation:(bool)arg30;
- (id)initWithLanguage:(id)arg1 requestIdentifier:(id)arg2 dictationUIInteractionIdentifier:(id)arg3 task:(id)arg4 loggingContext:(id)arg5 applicationName:(id)arg6 profile:(id)arg7 overrides:(id)arg8 modelOverrideURL:(id)arg9 originalAudioFileURL:(id)arg10 codec:(id)arg11 narrowband:(bool)arg12 detectUtterances:(bool)arg13 censorSpeech:(bool)arg14 farField:(bool)arg15 secureOfflineOnly:(bool)arg16 shouldStoreAudioOnDevice:(bool)arg17 continuousListening:(bool)arg18 shouldHandleCapitalization:(bool)arg19 isSpeechAPIRequest:(bool)arg20 maximumRecognitionDuration:(double)arg21 endpointStart:(double)arg22 inputOrigin:(id)arg23 location:(id)arg24 jitGrammar:(id)arg25 deliverEagerPackage:(bool)arg26 disableDeliveringAsrFeatures:(bool)arg27 sharedUserIds:(id)arg28 enableEmojiRecognition:(bool)arg29 enableAutoPunctuation:(bool)arg30 enableVoiceCommands:(bool)arg31;
- (id)initWithLanguage:(id)arg1 requestIdentifier:(id)arg2 interactionIdentifier:(id)arg3 task:(id)arg4 loggingContext:(id)arg5 applicationName:(id)arg6 profile:(id)arg7 overrides:(id)arg8 modelOverrideURL:(id)arg9 originalAudioFileURL:(id)arg10 codec:(id)arg11 narrowband:(bool)arg12 detectUtterances:(bool)arg13 censorSpeech:(bool)arg14 farField:(bool)arg15 secureOfflineOnly:(bool)arg16 shouldStoreAudioOnDevice:(bool)arg17 continuousListening:(bool)arg18 shouldHandleCapitalization:(bool)arg19 isSpeechAPIRequest:(bool)arg20 maximumRecognitionDuration:(double)arg21 endpointStart:(double)arg22 inputOrigin:(id)arg23 location:(id)arg24 jitGrammar:(id)arg25 deliverEagerPackage:(bool)arg26 disableDeliveringAsrFeatures:(bool)arg27;
- (id)initWithLanguage:(id)arg1 requestIdentifier:(id)arg2 interactionIdentifier:(id)arg3 task:(id)arg4 loggingContext:(id)arg5 applicationName:(id)arg6 profile:(id)arg7 overrides:(id)arg8 modelOverrideURL:(id)arg9 originalAudioFileURL:(id)arg10 codec:(id)arg11 narrowband:(bool)arg12 detectUtterances:(bool)arg13 censorSpeech:(bool)arg14 farField:(bool)arg15 secureOfflineOnly:(bool)arg16 shouldStoreAudioOnDevice:(bool)arg17 continuousListening:(bool)arg18 shouldHandleCapitalization:(bool)arg19 maximumRecognitionDuration:(double)arg20 endpointStart:(double)arg21 inputOrigin:(id)arg22 location:(id)arg23 jitGrammar:(id)arg24 deliverEagerPackage:(bool)arg25 disableDeliveringAsrFeatures:(bool)arg26;
- (id)inputOrigin;
- (bool)isEqual:(id)arg1;
- (bool)isSpeechAPIRequest;
- (id)jitGrammar;
- (id)language;
- (id)location;
- (id)loggingContext;
- (double)maximumRecognitionDuration;
- (id)modelOverrideURL;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (bool)narrowband;
- (id)originalAudioFileURL;
- (id)overrides;
- (id)postfixText;
- (id)powerContext;
- (id)prefixText;
- (id)profile;
- (double)recognitionStart;
- (id)requestIdentifier;
- (bool)secureOfflineOnly;
- (id)selectedText;
- (id)sharedUserInfos;
- (bool)shouldGenerateVoiceCommandCandidates;
- (bool)shouldHandleCapitalization;
- (bool)shouldStoreAudioOnDevice;
- (id)task;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalSpeechRecognitionBridge.framework/LocalSpeechRecognitionBridge
 */

@interface LBLocalSpeechRecognitionSettings : NSObject <NSCopying, NSSecureCoding> {
    NSString * _UILanguage;
    NSString * _applicationName;
    NSString * _asrLocale;
    unsigned long long  _audioCaptureStartHostTime;
    NSString * _audioRecordDeviceId;
    long long  _audioRecordType;
    bool  _continuousListening;
    bool  _deliverEagerPackage;
    bool  _detectUtterances;
    NSString * _dictationUIInteractionId;
    bool  _enableAutoPunctuation;
    bool  _enableEmojiRecognition;
    bool  _enableVoiceCommands;
    NSString * _inputOrigin;
    NSArray * _jitGrammar;
    CLLocation * _location;
    double  _maximumRecognitionDuration;
    NSString * _overrideModelPath;
    NSString * _postfixText;
    AFPowerContextPolicy * _powerContext;
    NSString * _prefixText;
    NSDictionary * _recognitionOverrides;
    NSString * _requestId;
    bool  _secureOfflineOnly;
    NSString * _selectedText;
    NSArray * _sharedUserInfos;
    bool  _shouldGenerateVoiceCommandCandidates;
    bool  _shouldHandleCapitalization;
    bool  _shouldStartAudioCapture;
    bool  _shouldStoreAudioOnDevice;
    unsigned long long  _speechRecognitionMode;
    unsigned long long  _speechRecognitionTask;
}

@property (nonatomic, readonly) NSString *UILanguage;
@property (nonatomic, readonly) NSString *applicationName;
@property (nonatomic, readonly) NSString *asrLocale;
@property (nonatomic, readonly) unsigned long long audioCaptureStartHostTime;
@property (nonatomic, readonly) NSString *audioRecordDeviceId;
@property (nonatomic, readonly) long long audioRecordType;
@property (nonatomic, readonly) bool continuousListening;
@property (nonatomic, readonly) bool deliverEagerPackage;
@property (nonatomic, readonly) bool detectUtterances;
@property (nonatomic, readonly) NSString *dictationUIInteractionId;
@property (nonatomic, readonly) bool enableAutoPunctuation;
@property (nonatomic, readonly) bool enableEmojiRecognition;
@property (nonatomic, readonly) bool enableVoiceCommands;
@property (nonatomic, readonly) NSString *inputOrigin;
@property (nonatomic, readonly) NSArray *jitGrammar;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double maximumRecognitionDuration;
@property (nonatomic, readonly) NSString *overrideModelPath;
@property (nonatomic, readonly) NSString *postfixText;
@property (nonatomic, readonly) AFPowerContextPolicy *powerContext;
@property (nonatomic, readonly) NSString *prefixText;
@property (nonatomic, readonly) NSDictionary *recognitionOverrides;
@property (nonatomic, readonly) NSString *requestId;
@property (nonatomic, readonly) bool secureOfflineOnly;
@property (nonatomic, readonly) NSString *selectedText;
@property (nonatomic, readonly) NSArray *sharedUserInfos;
@property (nonatomic, readonly) bool shouldGenerateVoiceCommandCandidates;
@property (nonatomic, readonly) bool shouldHandleCapitalization;
@property (nonatomic, readonly) bool shouldStartAudioCapture;
@property (nonatomic, readonly) bool shouldStoreAudioOnDevice;
@property (nonatomic, readonly) unsigned long long speechRecognitionMode;
@property (nonatomic, readonly) unsigned long long speechRecognitionTask;

+ (id)getTaskStringFromSpeechRecognitionSettings:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)UILanguage;
- (id)applicationName;
- (id)asrLocale;
- (unsigned long long)audioCaptureStartHostTime;
- (id)audioRecordDeviceId;
- (long long)audioRecordType;
- (bool)continuousListening;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deliverEagerPackage;
- (id)description;
- (bool)detectUtterances;
- (id)dictationUIInteractionId;
- (bool)enableAutoPunctuation;
- (bool)enableEmojiRecognition;
- (bool)enableVoiceCommands;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13 shouldStoreAudioOnDevice:(bool)arg14;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13 shouldStoreAudioOnDevice:(bool)arg14 deliverEagerPackage:(bool)arg15;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13 shouldStoreAudioOnDevice:(bool)arg14 deliverEagerPackage:(bool)arg15 enableEmojiRecognition:(bool)arg16 enableAutoPunctuation:(bool)arg17 UILanguage:(id)arg18 enableVoiceCommands:(bool)arg19 dictationUIInteractionId:(id)arg20 sharedUserInfos:(id)arg21;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13 shouldStoreAudioOnDevice:(bool)arg14 deliverEagerPackage:(bool)arg15 enableEmojiRecognition:(bool)arg16 enableAutoPunctuation:(bool)arg17 UILanguage:(id)arg18 enableVoiceCommands:(bool)arg19 dictationUIInteractionId:(id)arg20 sharedUserInfos:(id)arg21 prefixText:(id)arg22 postfixText:(id)arg23 selectedText:(id)arg24;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13 shouldStoreAudioOnDevice:(bool)arg14 deliverEagerPackage:(bool)arg15 enableEmojiRecognition:(bool)arg16 enableAutoPunctuation:(bool)arg17 UILanguage:(id)arg18 enableVoiceCommands:(bool)arg19 dictationUIInteractionId:(id)arg20 sharedUserInfos:(id)arg21 prefixText:(id)arg22 postfixText:(id)arg23 selectedText:(id)arg24 powerContext:(id)arg25;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13 shouldStoreAudioOnDevice:(bool)arg14 deliverEagerPackage:(bool)arg15 sharedUserIds:(id)arg16;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13 shouldStoreAudioOnDevice:(bool)arg14 deliverEagerPackage:(bool)arg15 sharedUserIds:(id)arg16 enableEmojiRecognition:(bool)arg17 enableAutoPunctuation:(bool)arg18;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13 shouldStoreAudioOnDevice:(bool)arg14 deliverEagerPackage:(bool)arg15 sharedUserIds:(id)arg16 enableEmojiRecognition:(bool)arg17 enableAutoPunctuation:(bool)arg18 UILanguage:(id)arg19;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13 shouldStoreAudioOnDevice:(bool)arg14 deliverEagerPackage:(bool)arg15 sharedUserIds:(id)arg16 enableEmojiRecognition:(bool)arg17 enableAutoPunctuation:(bool)arg18 UILanguage:(id)arg19 enableVoiceCommands:(bool)arg20;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 location:(id)arg4 jitGrammar:(id)arg5 overrideModelPath:(id)arg6 applicationName:(id)arg7 detectUtterances:(bool)arg8 continuousListening:(bool)arg9 shouldHandleCapitalization:(bool)arg10 secureOfflineOnly:(bool)arg11 maximumRecognitionDuration:(double)arg12 recognitionOverrides:(id)arg13 shouldStoreAudioOnDevice:(bool)arg14 deliverEagerPackage:(bool)arg15 sharedUserIds:(id)arg16 enableEmojiRecognition:(bool)arg17 enableAutoPunctuation:(bool)arg18 UILanguage:(id)arg19 enableVoiceCommands:(bool)arg20 dictationUIInteractionId:(id)arg21;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 speechRecognitionMode:(unsigned long long)arg4 location:(id)arg5 jitGrammar:(id)arg6 overrideModelPath:(id)arg7 applicationName:(id)arg8 detectUtterances:(bool)arg9 continuousListening:(bool)arg10 shouldHandleCapitalization:(bool)arg11 secureOfflineOnly:(bool)arg12 maximumRecognitionDuration:(double)arg13 recognitionOverrides:(id)arg14 shouldStoreAudioOnDevice:(bool)arg15 deliverEagerPackage:(bool)arg16 enableEmojiRecognition:(bool)arg17 enableAutoPunctuation:(bool)arg18 UILanguage:(id)arg19 enableVoiceCommands:(bool)arg20 dictationUIInteractionId:(id)arg21 sharedUserInfos:(id)arg22 prefixText:(id)arg23 postfixText:(id)arg24 selectedText:(id)arg25 powerContext:(id)arg26 shouldStartAudioCapture:(bool)arg27 audioCaptureStartHostTime:(unsigned long long)arg28 audioRecordType:(long long)arg29 audioRecordDeviceId:(id)arg30;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 speechRecognitionMode:(unsigned long long)arg4 location:(id)arg5 jitGrammar:(id)arg6 overrideModelPath:(id)arg7 applicationName:(id)arg8 detectUtterances:(bool)arg9 continuousListening:(bool)arg10 shouldHandleCapitalization:(bool)arg11 secureOfflineOnly:(bool)arg12 maximumRecognitionDuration:(double)arg13 recognitionOverrides:(id)arg14 shouldStoreAudioOnDevice:(bool)arg15 deliverEagerPackage:(bool)arg16 enableEmojiRecognition:(bool)arg17 enableAutoPunctuation:(bool)arg18 UILanguage:(id)arg19 enableVoiceCommands:(bool)arg20 dictationUIInteractionId:(id)arg21 sharedUserInfos:(id)arg22 prefixText:(id)arg23 postfixText:(id)arg24 selectedText:(id)arg25 powerContext:(id)arg26 shouldStartAudioCapture:(bool)arg27 audioCaptureStartHostTime:(unsigned long long)arg28 audioRecordType:(long long)arg29 audioRecordDeviceId:(id)arg30 shouldGenerateVoiceCommandCandidates:(bool)arg31;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 speechRecognitionMode:(unsigned long long)arg4 location:(id)arg5 jitGrammar:(id)arg6 overrideModelPath:(id)arg7 applicationName:(id)arg8 detectUtterances:(bool)arg9 continuousListening:(bool)arg10 shouldHandleCapitalization:(bool)arg11 secureOfflineOnly:(bool)arg12 maximumRecognitionDuration:(double)arg13 recognitionOverrides:(id)arg14 shouldStoreAudioOnDevice:(bool)arg15 deliverEagerPackage:(bool)arg16 enableEmojiRecognition:(bool)arg17 enableAutoPunctuation:(bool)arg18 UILanguage:(id)arg19 enableVoiceCommands:(bool)arg20 dictationUIInteractionId:(id)arg21 sharedUserInfos:(id)arg22 prefixText:(id)arg23 postfixText:(id)arg24 selectedText:(id)arg25 powerContext:(id)arg26 shouldStartAudioCapture:(bool)arg27 audioCaptureStartHostTime:(unsigned long long)arg28 audioRecordType:(long long)arg29 audioRecordDeviceId:(id)arg30 shouldGenerateVoiceCommandCandidates:(bool)arg31 asrLocale:(id)arg32;
- (id)initWithRequestId:(id)arg1 inputOrigin:(id)arg2 speechRecognitionTaskName:(unsigned long long)arg3 speechRecognitionMode:(unsigned long long)arg4 location:(id)arg5 jitGrammar:(id)arg6 overrideModelPath:(id)arg7 applicationName:(id)arg8 detectUtterances:(bool)arg9 continuousListening:(bool)arg10 shouldHandleCapitalization:(bool)arg11 secureOfflineOnly:(bool)arg12 maximumRecognitionDuration:(double)arg13 recognitionOverrides:(id)arg14 shouldStoreAudioOnDevice:(bool)arg15 deliverEagerPackage:(bool)arg16 enableEmojiRecognition:(bool)arg17 enableAutoPunctuation:(bool)arg18 enableVoiceCommands:(bool)arg19 dictationUIInteractionId:(id)arg20 sharedUserInfos:(id)arg21 prefixText:(id)arg22 postfixText:(id)arg23 selectedText:(id)arg24 powerContext:(id)arg25 shouldStartAudioCapture:(bool)arg26 audioCaptureStartHostTime:(unsigned long long)arg27 audioRecordType:(long long)arg28 audioRecordDeviceId:(id)arg29 shouldGenerateVoiceCommandCandidates:(bool)arg30 asrLocale:(id)arg31;
- (id)inputOrigin;
- (id)jitGrammar;
- (id)location;
- (double)maximumRecognitionDuration;
- (id)overrideModelPath;
- (id)postfixText;
- (id)powerContext;
- (id)prefixText;
- (id)recognitionOverrides;
- (id)requestId;
- (bool)secureOfflineOnly;
- (id)selectedText;
- (id)sharedUserInfos;
- (bool)shouldGenerateVoiceCommandCandidates;
- (bool)shouldHandleCapitalization;
- (bool)shouldStartAudioCapture;
- (bool)shouldStoreAudioOnDevice;
- (unsigned long long)speechRecognitionMode;
- (unsigned long long)speechRecognitionTask;

@end

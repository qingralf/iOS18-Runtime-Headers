/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSUncompressedAudioLogging : NSObject {
    NSString * _asrId;
    NSFileHandle * _audioFileHandle;
    NSString * _audioFilePath;
    NSString * _audioId;
    NSString * _dictationInteractionId;
    bool  _isCancelled;
    bool  _isSamplingForDictation;
    NSString * _languageCode;
    NSDate * _loggingDate;
    NSString * _plistFilePath;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _requestId;
    NSString * _rpiAudioFilePath;
    bool  _rpiEnabled;
    NSString * _rpiPlistFilePath;
    NSString * _rpiSamplingDirectory;
    NSString * _samplingDate;
    NSString * _samplingDirectory;
    NSString * _samplingTimestamp;
    NSString * _samplingTimestampDetail;
    NSString * _task;
    NSString * _tmpAudioFilePath;
    NSString * _tmpDirectory;
}

@property (nonatomic, retain) NSString *asrId;
@property (nonatomic, retain) NSFileHandle *audioFileHandle;
@property (nonatomic, retain) NSString *audioFilePath;
@property (nonatomic, retain) NSString *audioId;
@property (nonatomic, retain) NSString *dictationInteractionId;
@property (nonatomic) bool isCancelled;
@property (nonatomic) bool isSamplingForDictation;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSDate *loggingDate;
@property (nonatomic, retain) NSString *plistFilePath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *requestId;
@property (nonatomic, retain) NSString *rpiAudioFilePath;
@property (nonatomic) bool rpiEnabled;
@property (nonatomic, retain) NSString *rpiPlistFilePath;
@property (nonatomic, retain) NSString *rpiSamplingDirectory;
@property (nonatomic, retain) NSString *samplingDate;
@property (nonatomic, retain) NSString *samplingDirectory;
@property (nonatomic, retain) NSString *samplingTimestamp;
@property (nonatomic, retain) NSString *samplingTimestampDetail;
@property (nonatomic, retain) NSString *task;
@property (nonatomic, retain) NSString *tmpAudioFilePath;
@property (nonatomic, retain) NSString *tmpDirectory;

+ (int)loggingFileProtectionClass;

- (void).cxx_destruct;
- (int)_createFileDescriptor:(id)arg1 protectionClass:(int)arg2;
- (bool)_moveAudioLoggingToCollectionDirectory:(id*)arg1;
- (bool)_prepareFileForLogging:(id*)arg1;
- (void)_removeTmpAudioFile;
- (bool)_setupFilePath:(id*)arg1;
- (bool)_writePlistFile:(id*)arg1;
- (void)appendAudioData:(id)arg1;
- (id)asrId;
- (id)audioFileHandle;
- (id)audioFilePath;
- (id)audioId;
- (void)cancelAudioLogging;
- (id)dictationInteractionId;
- (void)endAudioWithCancellation:(bool)arg1 completion:(id /* block */)arg2;
- (id)getLoggingDate;
- (id)initWithDictationInteractionId:(id)arg1 asrId:(id)arg2 languageCode:(id)arg3 task:(id)arg4;
- (id)initWithDictationInteractionId:(id)arg1 languageCode:(id)arg2 task:(id)arg3;
- (id)initWithRequestId:(id)arg1 asrId:(id)arg2 dictationInteractionId:(id)arg3 languageCode:(id)arg4 task:(id)arg5 isSamplingForDictation:(bool)arg6;
- (id)initWithRequestId:(id)arg1 asrId:(id)arg2 dictationInteractionId:(id)arg3 languageCode:(id)arg4 task:(id)arg5 isSamplingForDictation:(bool)arg6 rpiEnabled:(bool)arg7;
- (id)initWithRequestId:(id)arg1 asrId:(id)arg2 languageCode:(id)arg3 task:(id)arg4;
- (id)initWithRequestId:(id)arg1 asrId:(id)arg2 languageCode:(id)arg3 task:(id)arg4 rpiEnabled:(bool)arg5;
- (id)initWithRequestId:(id)arg1 languageCode:(id)arg2 task:(id)arg3;
- (bool)isCancelled;
- (bool)isRPISamplingEnabled;
- (bool)isSamplingForDictation;
- (id)languageCode;
- (id)loggingDate;
- (id)plistFilePath;
- (void)prepareLogging:(id /* block */)arg1;
- (id)queue;
- (id)requestId;
- (id)rpiAudioFilePath;
- (bool)rpiEnabled;
- (id)rpiPlistFilePath;
- (id)rpiSamplingDirectory;
- (id)samplingDate;
- (id)samplingDirectory;
- (id)samplingString;
- (id)samplingTimestamp;
- (id)samplingTimestampDetail;
- (void)setAsrId:(id)arg1;
- (void)setAudioFileHandle:(id)arg1;
- (void)setAudioFilePath:(id)arg1;
- (void)setAudioId:(id)arg1;
- (void)setDictationInteractionId:(id)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setIsSamplingForDictation:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLoggingDate:(id)arg1;
- (void)setPlistFilePath:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setRpiAudioFilePath:(id)arg1;
- (void)setRpiEnabled:(bool)arg1;
- (void)setRpiPlistFilePath:(id)arg1;
- (void)setRpiSamplingDirectory:(id)arg1;
- (void)setSamplingDate:(id)arg1;
- (void)setSamplingDirectory:(id)arg1;
- (void)setSamplingTimestamp:(id)arg1;
- (void)setSamplingTimestampDetail:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTmpAudioFilePath:(id)arg1;
- (void)setTmpDirectory:(id)arg1;
- (id)task;
- (id)tmpAudioFilePath;
- (id)tmpDirectory;

@end
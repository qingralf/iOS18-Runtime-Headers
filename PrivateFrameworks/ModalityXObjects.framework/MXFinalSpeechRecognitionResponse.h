/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ModalityXObjects.framework/ModalityXObjects
 */

@interface MXFinalSpeechRecognitionResponse : PBCodable <NSCopying> {
    MXAudioAnalytics * _audioAnalytics;
    struct { 
        unsigned int watermarkPeakAverage : 1; 
        unsigned int langProfileRecreateCodes : 1; 
        unsigned int returnCode : 1; 
        unsigned int watermarkDetection : 1; 
        unsigned int hasResult : 1; 
    }  _has;
    bool  _hasResult;
    int  _langProfileRecreateCodes;
    NSString * _language;
    MXLatnnMitigatorResult * _latnnMitigatorResult;
    MXRecognitionResult * _recognitionResult;
    NSString * _requestLocale;
    int  _returnCode;
    NSString * _returnStr;
    NSString * _sessionId;
    NSString * _speechId;
    int  _watermarkDetection;
    double  _watermarkPeakAverage;
}

@property (nonatomic, retain) MXAudioAnalytics *audioAnalytics;
@property (nonatomic, readonly) bool hasAudioAnalytics;
@property (nonatomic) bool hasHasResult;
@property (nonatomic) bool hasLangProfileRecreateCodes;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasLatnnMitigatorResult;
@property (nonatomic, readonly) bool hasRecognitionResult;
@property (nonatomic, readonly) bool hasRequestLocale;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasReturnCode;
@property (nonatomic, readonly) bool hasReturnStr;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic, readonly) bool hasSpeechId;
@property (nonatomic) bool hasWatermarkDetection;
@property (nonatomic) bool hasWatermarkPeakAverage;
@property (nonatomic) int langProfileRecreateCodes;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) MXLatnnMitigatorResult *latnnMitigatorResult;
@property (nonatomic, retain) MXRecognitionResult *recognitionResult;
@property (nonatomic, retain) NSString *requestLocale;
@property (nonatomic) int returnCode;
@property (nonatomic, retain) NSString *returnStr;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic, retain) NSString *speechId;
@property (nonatomic) int watermarkDetection;
@property (nonatomic) double watermarkPeakAverage;

- (void).cxx_destruct;
- (int)StringAsLangProfileRecreateCodes:(id)arg1;
- (int)StringAsWatermarkDetection:(id)arg1;
- (id)audioAnalytics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioAnalytics;
- (bool)hasHasResult;
- (bool)hasLangProfileRecreateCodes;
- (bool)hasLanguage;
- (bool)hasLatnnMitigatorResult;
- (bool)hasRecognitionResult;
- (bool)hasRequestLocale;
- (bool)hasResult;
- (bool)hasReturnCode;
- (bool)hasReturnStr;
- (bool)hasSessionId;
- (bool)hasSpeechId;
- (bool)hasWatermarkDetection;
- (bool)hasWatermarkPeakAverage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)langProfileRecreateCodes;
- (id)langProfileRecreateCodesAsString:(int)arg1;
- (id)language;
- (id)latnnMitigatorResult;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recognitionResult;
- (id)requestLocale;
- (int)returnCode;
- (id)returnStr;
- (id)sessionId;
- (void)setAudioAnalytics:(id)arg1;
- (void)setHasHasResult:(bool)arg1;
- (void)setHasLangProfileRecreateCodes:(bool)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasReturnCode:(bool)arg1;
- (void)setHasWatermarkDetection:(bool)arg1;
- (void)setHasWatermarkPeakAverage:(bool)arg1;
- (void)setLangProfileRecreateCodes:(int)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLatnnMitigatorResult:(id)arg1;
- (void)setRecognitionResult:(id)arg1;
- (void)setRequestLocale:(id)arg1;
- (void)setReturnCode:(int)arg1;
- (void)setReturnStr:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (void)setWatermarkDetection:(int)arg1;
- (void)setWatermarkPeakAverage:(double)arg1;
- (id)speechId;
- (int)watermarkDetection;
- (id)watermarkDetectionAsString:(int)arg1;
- (double)watermarkPeakAverage;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DonationSchemaSDSpeechSampleDonation : SISchemaInstrumentationMessage {
    int  _asrTask;
    NSArray * _attributes;
    int  _audioCaptureDevice;
    unsigned long long  _captureDate;
    SISchemaUUID * _donationID;
    NSString * _donorBundleID;
    int  _evaluation;
    NSString * _expected;
    struct { 
        unsigned int captureDate : 1; 
        unsigned int audioCaptureDevice : 1; 
        unsigned int locale : 1; 
        unsigned int asrTask : 1; 
        unsigned int evaluation : 1; 
    }  _has;
    bool  _hasDonationID;
    bool  _hasDonorBundleID;
    bool  _hasExpected;
    bool  _hasTranscription;
    int  _locale;
    NSString * _transcription;
}

@property (nonatomic) int asrTask;
@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic) int audioCaptureDevice;
@property (nonatomic) unsigned long long captureDate;
@property (nonatomic, retain) SISchemaUUID *donationID;
@property (nonatomic, copy) NSString *donorBundleID;
@property (nonatomic) int evaluation;
@property (nonatomic, copy) NSString *expected;
@property (nonatomic) bool hasAsrTask;
@property (nonatomic) bool hasAudioCaptureDevice;
@property (nonatomic) bool hasCaptureDate;
@property (nonatomic) bool hasDonationID;
@property (nonatomic) bool hasDonorBundleID;
@property (nonatomic) bool hasEvaluation;
@property (nonatomic) bool hasExpected;
@property (nonatomic) bool hasLocale;
@property (nonatomic) bool hasTranscription;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int locale;
@property (nonatomic, copy) NSString *transcription;

- (void).cxx_destruct;
- (void)addAttributes:(int)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)asrTask;
- (id)attributes;
- (int)attributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (int)audioCaptureDevice;
- (unsigned long long)captureDate;
- (void)clearAttributes;
- (void)deleteAsrTask;
- (void)deleteAttributes;
- (void)deleteAudioCaptureDevice;
- (void)deleteCaptureDate;
- (void)deleteDonationID;
- (void)deleteDonorBundleID;
- (void)deleteEvaluation;
- (void)deleteExpected;
- (void)deleteLocale;
- (void)deleteTranscription;
- (id)dictionaryRepresentation;
- (id)donationID;
- (id)donorBundleID;
- (int)evaluation;
- (id)expected;
- (bool)hasAsrTask;
- (bool)hasAudioCaptureDevice;
- (bool)hasCaptureDate;
- (bool)hasDonationID;
- (bool)hasDonorBundleID;
- (bool)hasEvaluation;
- (bool)hasExpected;
- (bool)hasLocale;
- (bool)hasTranscription;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)locale;
- (bool)readFrom:(id)arg1;
- (void)setAsrTask:(int)arg1;
- (void)setAttributes:(id)arg1;
- (void)setAudioCaptureDevice:(int)arg1;
- (void)setCaptureDate:(unsigned long long)arg1;
- (void)setDonationID:(id)arg1;
- (void)setDonorBundleID:(id)arg1;
- (void)setEvaluation:(int)arg1;
- (void)setExpected:(id)arg1;
- (void)setHasAsrTask:(bool)arg1;
- (void)setHasAudioCaptureDevice:(bool)arg1;
- (void)setHasCaptureDate:(bool)arg1;
- (void)setHasDonationID:(bool)arg1;
- (void)setHasDonorBundleID:(bool)arg1;
- (void)setHasEvaluation:(bool)arg1;
- (void)setHasExpected:(bool)arg1;
- (void)setHasLocale:(bool)arg1;
- (void)setHasTranscription:(bool)arg1;
- (void)setLocale:(int)arg1;
- (void)setTranscription:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)transcription;
- (void)writeTo:(id)arg1;

@end

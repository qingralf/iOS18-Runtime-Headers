/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface TTSSchemaTTSVoiceContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int voiceType : 1; 
        unsigned int voiceFootprint : 1; 
        unsigned int voiceVersion : 1; 
        unsigned int resourceVersion : 1; 
        unsigned int voiceName : 1; 
    }  _has;
    unsigned int  _resourceVersion;
    int  _voiceFootprint;
    int  _voiceName;
    int  _voiceType;
    unsigned int  _voiceVersion;
}

@property (nonatomic) bool hasResourceVersion;
@property (nonatomic) bool hasVoiceFootprint;
@property (nonatomic) bool hasVoiceName;
@property (nonatomic) bool hasVoiceType;
@property (nonatomic) bool hasVoiceVersion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int resourceVersion;
@property (nonatomic) int voiceFootprint;
@property (nonatomic) int voiceName;
@property (nonatomic) int voiceType;
@property (nonatomic) unsigned int voiceVersion;

- (void)deleteResourceVersion;
- (void)deleteVoiceFootprint;
- (void)deleteVoiceName;
- (void)deleteVoiceType;
- (void)deleteVoiceVersion;
- (id)dictionaryRepresentation;
- (bool)hasResourceVersion;
- (bool)hasVoiceFootprint;
- (bool)hasVoiceName;
- (bool)hasVoiceType;
- (bool)hasVoiceVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned int)resourceVersion;
- (void)setHasResourceVersion:(bool)arg1;
- (void)setHasVoiceFootprint:(bool)arg1;
- (void)setHasVoiceName:(bool)arg1;
- (void)setHasVoiceType:(bool)arg1;
- (void)setHasVoiceVersion:(bool)arg1;
- (void)setResourceVersion:(unsigned int)arg1;
- (void)setVoiceFootprint:(int)arg1;
- (void)setVoiceName:(int)arg1;
- (void)setVoiceType:(int)arg1;
- (void)setVoiceVersion:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (int)voiceFootprint;
- (int)voiceName;
- (int)voiceType;
- (unsigned int)voiceVersion;
- (void)writeTo:(id)arg1;

@end
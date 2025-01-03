/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface TTSSchemaTTSSpeechStarted : SISchemaInstrumentationMessage {
    float  _assetSelectionLatencyInSecond;
    TTSSchemaTTSAudioInterface * _audioInterface;
    int  _audioOutputRoute;
    float  _customerPerceivedLatencyInSecond;
    struct { 
        unsigned int audioOutputRoute : 1; 
        unsigned int customerPerceivedLatencyInSecond : 1; 
        unsigned int synthesisSource : 1; 
        unsigned int synthesisEffect : 1; 
        unsigned int volume : 1; 
        unsigned int thermalState : 1; 
        unsigned int assetSelectionLatencyInSecond : 1; 
    }  _has;
    bool  _hasAudioInterface;
    bool  _hasVoiceContext;
    int  _synthesisEffect;
    int  _synthesisSource;
    int  _thermalState;
    TTSSchemaTTSVoiceContext * _voiceContext;
    float  _volume;
}

@property (nonatomic) float assetSelectionLatencyInSecond;
@property (nonatomic, retain) TTSSchemaTTSAudioInterface *audioInterface;
@property (nonatomic) int audioOutputRoute;
@property (nonatomic) float customerPerceivedLatencyInSecond;
@property (nonatomic) bool hasAssetSelectionLatencyInSecond;
@property (nonatomic) bool hasAudioInterface;
@property (nonatomic) bool hasAudioOutputRoute;
@property (nonatomic) bool hasCustomerPerceivedLatencyInSecond;
@property (nonatomic) bool hasSynthesisEffect;
@property (nonatomic) bool hasSynthesisSource;
@property (nonatomic) bool hasThermalState;
@property (nonatomic) bool hasVoiceContext;
@property (nonatomic) bool hasVolume;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int synthesisEffect;
@property (nonatomic) int synthesisSource;
@property (nonatomic) int thermalState;
@property (nonatomic, retain) TTSSchemaTTSVoiceContext *voiceContext;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (float)assetSelectionLatencyInSecond;
- (id)audioInterface;
- (int)audioOutputRoute;
- (float)customerPerceivedLatencyInSecond;
- (void)deleteAssetSelectionLatencyInSecond;
- (void)deleteAudioInterface;
- (void)deleteAudioOutputRoute;
- (void)deleteCustomerPerceivedLatencyInSecond;
- (void)deleteSynthesisEffect;
- (void)deleteSynthesisSource;
- (void)deleteThermalState;
- (void)deleteVoiceContext;
- (void)deleteVolume;
- (id)dictionaryRepresentation;
- (bool)hasAssetSelectionLatencyInSecond;
- (bool)hasAudioInterface;
- (bool)hasAudioOutputRoute;
- (bool)hasCustomerPerceivedLatencyInSecond;
- (bool)hasSynthesisEffect;
- (bool)hasSynthesisSource;
- (bool)hasThermalState;
- (bool)hasVoiceContext;
- (bool)hasVolume;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssetSelectionLatencyInSecond:(float)arg1;
- (void)setAudioInterface:(id)arg1;
- (void)setAudioOutputRoute:(int)arg1;
- (void)setCustomerPerceivedLatencyInSecond:(float)arg1;
- (void)setHasAssetSelectionLatencyInSecond:(bool)arg1;
- (void)setHasAudioInterface:(bool)arg1;
- (void)setHasAudioOutputRoute:(bool)arg1;
- (void)setHasCustomerPerceivedLatencyInSecond:(bool)arg1;
- (void)setHasSynthesisEffect:(bool)arg1;
- (void)setHasSynthesisSource:(bool)arg1;
- (void)setHasThermalState:(bool)arg1;
- (void)setHasVoiceContext:(bool)arg1;
- (void)setHasVolume:(bool)arg1;
- (void)setSynthesisEffect:(int)arg1;
- (void)setSynthesisSource:(int)arg1;
- (void)setThermalState:(int)arg1;
- (void)setVoiceContext:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)suppressMessageUnderConditions;
- (int)synthesisEffect;
- (int)synthesisSource;
- (int)thermalState;
- (id)voiceContext;
- (float)volume;
- (void)writeTo:(id)arg1;

@end

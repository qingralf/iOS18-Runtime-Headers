/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MHSchemaMHVoiceTriggerRejectDetected : SISchemaInstrumentationMessage {
    unsigned int  _checkerHSRejectBeforeActivationCount;
    NSArray * _checkerHSRejectBeforeActivationScores;
    NSArray * _checkerHSRejectBeforeActivationTimeDiffInNs;
    float  _checkerHSThreshold;
    unsigned int  _checkerJSRejectBeforeActivationCount;
    NSArray * _checkerJSRejectBeforeActivationScores;
    NSArray * _checkerJSRejectBeforeActivationTimeDiffInNs;
    float  _checkerJSThreshold;
    struct { 
        unsigned int phsRejectBeforeActivationCount : 1; 
        unsigned int checkerHSRejectBeforeActivationCount : 1; 
        unsigned int checkerJSRejectBeforeActivationCount : 1; 
        unsigned int phsThreshold : 1; 
        unsigned int pjsThreshold : 1; 
        unsigned int checkerHSThreshold : 1; 
        unsigned int checkerJSThreshold : 1; 
    }  _has;
    unsigned int  _phsRejectBeforeActivationCount;
    NSArray * _phsRejectBeforeActivationScores;
    NSArray * _phsRejectBeforeActivationTimeDiffInNs;
    float  _phsThreshold;
    float  _pjsThreshold;
}

@property (nonatomic) unsigned int checkerHSRejectBeforeActivationCount;
@property (nonatomic, copy) NSArray *checkerHSRejectBeforeActivationScores;
@property (nonatomic, copy) NSArray *checkerHSRejectBeforeActivationTimeDiffInNs;
@property (nonatomic) float checkerHSThreshold;
@property (nonatomic) unsigned int checkerJSRejectBeforeActivationCount;
@property (nonatomic, copy) NSArray *checkerJSRejectBeforeActivationScores;
@property (nonatomic, copy) NSArray *checkerJSRejectBeforeActivationTimeDiffInNs;
@property (nonatomic) float checkerJSThreshold;
@property (nonatomic) bool hasCheckerHSRejectBeforeActivationCount;
@property (nonatomic) bool hasCheckerHSThreshold;
@property (nonatomic) bool hasCheckerJSRejectBeforeActivationCount;
@property (nonatomic) bool hasCheckerJSThreshold;
@property (nonatomic) bool hasPhsRejectBeforeActivationCount;
@property (nonatomic) bool hasPhsThreshold;
@property (nonatomic) bool hasPjsThreshold;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int phsRejectBeforeActivationCount;
@property (nonatomic, copy) NSArray *phsRejectBeforeActivationScores;
@property (nonatomic, copy) NSArray *phsRejectBeforeActivationTimeDiffInNs;
@property (nonatomic) float phsThreshold;
@property (nonatomic) float pjsThreshold;

- (void).cxx_destruct;
- (void)addCheckerHSRejectBeforeActivationScores:(float)arg1;
- (void)addCheckerHSRejectBeforeActivationTimeDiffInNs:(unsigned long long)arg1;
- (void)addCheckerJSRejectBeforeActivationScores:(float)arg1;
- (void)addCheckerJSRejectBeforeActivationTimeDiffInNs:(unsigned long long)arg1;
- (void)addPhsRejectBeforeActivationScores:(float)arg1;
- (void)addPhsRejectBeforeActivationTimeDiffInNs:(unsigned long long)arg1;
- (unsigned int)checkerHSRejectBeforeActivationCount;
- (id)checkerHSRejectBeforeActivationScores;
- (float)checkerHSRejectBeforeActivationScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)checkerHSRejectBeforeActivationScoresCount;
- (id)checkerHSRejectBeforeActivationTimeDiffInNs;
- (unsigned long long)checkerHSRejectBeforeActivationTimeDiffInNsAtIndex:(unsigned long long)arg1;
- (unsigned long long)checkerHSRejectBeforeActivationTimeDiffInNsCount;
- (float)checkerHSThreshold;
- (unsigned int)checkerJSRejectBeforeActivationCount;
- (id)checkerJSRejectBeforeActivationScores;
- (float)checkerJSRejectBeforeActivationScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)checkerJSRejectBeforeActivationScoresCount;
- (id)checkerJSRejectBeforeActivationTimeDiffInNs;
- (unsigned long long)checkerJSRejectBeforeActivationTimeDiffInNsAtIndex:(unsigned long long)arg1;
- (unsigned long long)checkerJSRejectBeforeActivationTimeDiffInNsCount;
- (float)checkerJSThreshold;
- (void)clearCheckerHSRejectBeforeActivationScores;
- (void)clearCheckerHSRejectBeforeActivationTimeDiffInNs;
- (void)clearCheckerJSRejectBeforeActivationScores;
- (void)clearCheckerJSRejectBeforeActivationTimeDiffInNs;
- (void)clearPhsRejectBeforeActivationScores;
- (void)clearPhsRejectBeforeActivationTimeDiffInNs;
- (void)deleteCheckerHSRejectBeforeActivationCount;
- (void)deleteCheckerHSRejectBeforeActivationScores;
- (void)deleteCheckerHSRejectBeforeActivationTimeDiffInNs;
- (void)deleteCheckerHSThreshold;
- (void)deleteCheckerJSRejectBeforeActivationCount;
- (void)deleteCheckerJSRejectBeforeActivationScores;
- (void)deleteCheckerJSRejectBeforeActivationTimeDiffInNs;
- (void)deleteCheckerJSThreshold;
- (void)deletePhsRejectBeforeActivationCount;
- (void)deletePhsRejectBeforeActivationScores;
- (void)deletePhsRejectBeforeActivationTimeDiffInNs;
- (void)deletePhsThreshold;
- (void)deletePjsThreshold;
- (id)dictionaryRepresentation;
- (bool)hasCheckerHSRejectBeforeActivationCount;
- (bool)hasCheckerHSThreshold;
- (bool)hasCheckerJSRejectBeforeActivationCount;
- (bool)hasCheckerJSThreshold;
- (bool)hasPhsRejectBeforeActivationCount;
- (bool)hasPhsThreshold;
- (bool)hasPjsThreshold;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)phsRejectBeforeActivationCount;
- (id)phsRejectBeforeActivationScores;
- (float)phsRejectBeforeActivationScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)phsRejectBeforeActivationScoresCount;
- (id)phsRejectBeforeActivationTimeDiffInNs;
- (unsigned long long)phsRejectBeforeActivationTimeDiffInNsAtIndex:(unsigned long long)arg1;
- (unsigned long long)phsRejectBeforeActivationTimeDiffInNsCount;
- (float)phsThreshold;
- (float)pjsThreshold;
- (bool)readFrom:(id)arg1;
- (void)setCheckerHSRejectBeforeActivationCount:(unsigned int)arg1;
- (void)setCheckerHSRejectBeforeActivationScores:(id)arg1;
- (void)setCheckerHSRejectBeforeActivationTimeDiffInNs:(id)arg1;
- (void)setCheckerHSThreshold:(float)arg1;
- (void)setCheckerJSRejectBeforeActivationCount:(unsigned int)arg1;
- (void)setCheckerJSRejectBeforeActivationScores:(id)arg1;
- (void)setCheckerJSRejectBeforeActivationTimeDiffInNs:(id)arg1;
- (void)setCheckerJSThreshold:(float)arg1;
- (void)setHasCheckerHSRejectBeforeActivationCount:(bool)arg1;
- (void)setHasCheckerHSThreshold:(bool)arg1;
- (void)setHasCheckerJSRejectBeforeActivationCount:(bool)arg1;
- (void)setHasCheckerJSThreshold:(bool)arg1;
- (void)setHasPhsRejectBeforeActivationCount:(bool)arg1;
- (void)setHasPhsThreshold:(bool)arg1;
- (void)setHasPjsThreshold:(bool)arg1;
- (void)setPhsRejectBeforeActivationCount:(unsigned int)arg1;
- (void)setPhsRejectBeforeActivationScores:(id)arg1;
- (void)setPhsRejectBeforeActivationTimeDiffInNs:(id)arg1;
- (void)setPhsThreshold:(float)arg1;
- (void)setPjsThreshold:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

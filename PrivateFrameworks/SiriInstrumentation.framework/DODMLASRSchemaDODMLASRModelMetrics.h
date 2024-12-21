/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DODMLASRSchemaDODMLASRModelMetrics : SISchemaInstrumentationMessage {
    NSString * _configName;
    unsigned long long  _conversionDurationInMs;
    struct { 
        unsigned int trainingDurationInMs : 1; 
        unsigned int conversionDurationInMs : 1; 
        unsigned int optimizationDurationInMs : 1; 
        unsigned int totalDurationInMs : 1; 
        unsigned int ngramOrder : 1; 
        unsigned int residualAdaptationWeight : 1; 
        unsigned int modelTrainingStatusCode : 1; 
        unsigned int numFiniteStateTransducerArcs : 1; 
        unsigned int numFiniteStateTransducerStates : 1; 
    }  _has;
    bool  _hasConfigName;
    unsigned int  _modelTrainingStatusCode;
    unsigned int  _ngramOrder;
    unsigned int  _numFiniteStateTransducerArcs;
    unsigned int  _numFiniteStateTransducerStates;
    unsigned long long  _optimizationDurationInMs;
    float  _residualAdaptationWeight;
    unsigned long long  _totalDurationInMs;
    unsigned long long  _trainingDurationInMs;
}

@property (nonatomic, copy) NSString *configName;
@property (nonatomic) unsigned long long conversionDurationInMs;
@property (nonatomic) bool hasConfigName;
@property (nonatomic) bool hasConversionDurationInMs;
@property (nonatomic) bool hasModelTrainingStatusCode;
@property (nonatomic) bool hasNgramOrder;
@property (nonatomic) bool hasNumFiniteStateTransducerArcs;
@property (nonatomic) bool hasNumFiniteStateTransducerStates;
@property (nonatomic) bool hasOptimizationDurationInMs;
@property (nonatomic) bool hasResidualAdaptationWeight;
@property (nonatomic) bool hasTotalDurationInMs;
@property (nonatomic) bool hasTrainingDurationInMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int modelTrainingStatusCode;
@property (nonatomic) unsigned int ngramOrder;
@property (nonatomic) unsigned int numFiniteStateTransducerArcs;
@property (nonatomic) unsigned int numFiniteStateTransducerStates;
@property (nonatomic) unsigned long long optimizationDurationInMs;
@property (nonatomic) float residualAdaptationWeight;
@property (nonatomic) unsigned long long totalDurationInMs;
@property (nonatomic) unsigned long long trainingDurationInMs;

- (void).cxx_destruct;
- (id)configName;
- (unsigned long long)conversionDurationInMs;
- (void)deleteConfigName;
- (void)deleteConversionDurationInMs;
- (void)deleteModelTrainingStatusCode;
- (void)deleteNgramOrder;
- (void)deleteNumFiniteStateTransducerArcs;
- (void)deleteNumFiniteStateTransducerStates;
- (void)deleteOptimizationDurationInMs;
- (void)deleteResidualAdaptationWeight;
- (void)deleteTotalDurationInMs;
- (void)deleteTrainingDurationInMs;
- (id)dictionaryRepresentation;
- (bool)hasConfigName;
- (bool)hasConversionDurationInMs;
- (bool)hasModelTrainingStatusCode;
- (bool)hasNgramOrder;
- (bool)hasNumFiniteStateTransducerArcs;
- (bool)hasNumFiniteStateTransducerStates;
- (bool)hasOptimizationDurationInMs;
- (bool)hasResidualAdaptationWeight;
- (bool)hasTotalDurationInMs;
- (bool)hasTrainingDurationInMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)modelTrainingStatusCode;
- (unsigned int)ngramOrder;
- (unsigned int)numFiniteStateTransducerArcs;
- (unsigned int)numFiniteStateTransducerStates;
- (unsigned long long)optimizationDurationInMs;
- (bool)readFrom:(id)arg1;
- (float)residualAdaptationWeight;
- (void)setConfigName:(id)arg1;
- (void)setConversionDurationInMs:(unsigned long long)arg1;
- (void)setHasConfigName:(bool)arg1;
- (void)setHasConversionDurationInMs:(bool)arg1;
- (void)setHasModelTrainingStatusCode:(bool)arg1;
- (void)setHasNgramOrder:(bool)arg1;
- (void)setHasNumFiniteStateTransducerArcs:(bool)arg1;
- (void)setHasNumFiniteStateTransducerStates:(bool)arg1;
- (void)setHasOptimizationDurationInMs:(bool)arg1;
- (void)setHasResidualAdaptationWeight:(bool)arg1;
- (void)setHasTotalDurationInMs:(bool)arg1;
- (void)setHasTrainingDurationInMs:(bool)arg1;
- (void)setModelTrainingStatusCode:(unsigned int)arg1;
- (void)setNgramOrder:(unsigned int)arg1;
- (void)setNumFiniteStateTransducerArcs:(unsigned int)arg1;
- (void)setNumFiniteStateTransducerStates:(unsigned int)arg1;
- (void)setOptimizationDurationInMs:(unsigned long long)arg1;
- (void)setResidualAdaptationWeight:(float)arg1;
- (void)setTotalDurationInMs:(unsigned long long)arg1;
- (void)setTrainingDurationInMs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)totalDurationInMs;
- (unsigned long long)trainingDurationInMs;
- (void)writeTo:(id)arg1;

@end
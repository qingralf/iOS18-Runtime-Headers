/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ASRSchemaASRPackageGenerated : SISchemaInstrumentationMessage {
    NSString * _acousticModelVersion;
    struct { 
        unsigned int isFinal : 1; 
        unsigned int hasVoiceCommandInExhaustiveParses : 1; 
        unsigned int hasVoiceCommandParses : 1; 
        unsigned int hasVoiceCommandEditIntent : 1; 
        unsigned int hasVoiceCommandAfterReranking : 1; 
        unsigned int hasNoVoiceCommandAfterRespeakCheck : 1; 
    }  _has;
    bool  _hasAcousticModelVersion;
    bool  _hasLoggableSharedUserId;
    bool  _hasModelVersion;
    bool  _hasNoVoiceCommandAfterRespeakCheck;
    bool  _hasPackage;
    bool  _hasResultCandidateId;
    bool  _hasVoiceCommandAfterReranking;
    bool  _hasVoiceCommandEditIntent;
    bool  _hasVoiceCommandInExhaustiveParses;
    bool  _hasVoiceCommandParses;
    bool  _isFinal;
    NSString * _loggableSharedUserId;
    NSString * _modelVersion;
    ASRSchemaASRPackage * _package;
    NSString * _resultCandidateId;
}

@property (nonatomic, copy) NSString *acousticModelVersion;
@property (nonatomic) bool hasAcousticModelVersion;
@property (nonatomic) bool hasHasNoVoiceCommandAfterRespeakCheck;
@property (nonatomic) bool hasHasVoiceCommandAfterReranking;
@property (nonatomic) bool hasHasVoiceCommandEditIntent;
@property (nonatomic) bool hasHasVoiceCommandInExhaustiveParses;
@property (nonatomic) bool hasHasVoiceCommandParses;
@property (nonatomic) bool hasIsFinal;
@property (nonatomic) bool hasLoggableSharedUserId;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasNoVoiceCommandAfterRespeakCheck;
@property (nonatomic) bool hasPackage;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool hasVoiceCommandAfterReranking;
@property (nonatomic) bool hasVoiceCommandEditIntent;
@property (nonatomic) bool hasVoiceCommandInExhaustiveParses;
@property (nonatomic) bool hasVoiceCommandParses;
@property (nonatomic) bool isFinal;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *loggableSharedUserId;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic, retain) ASRSchemaASRPackage *package;
@property (nonatomic, copy) NSString *resultCandidateId;

- (void).cxx_destruct;
- (id)acousticModelVersion;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAcousticModelVersion;
- (void)deleteHasNoVoiceCommandAfterRespeakCheck;
- (void)deleteHasVoiceCommandAfterReranking;
- (void)deleteHasVoiceCommandEditIntent;
- (void)deleteHasVoiceCommandInExhaustiveParses;
- (void)deleteHasVoiceCommandParses;
- (void)deleteIsFinal;
- (void)deleteLoggableSharedUserId;
- (void)deleteModelVersion;
- (void)deletePackage;
- (void)deleteResultCandidateId;
- (id)dictionaryRepresentation;
- (bool)hasAcousticModelVersion;
- (bool)hasHasNoVoiceCommandAfterRespeakCheck;
- (bool)hasHasVoiceCommandAfterReranking;
- (bool)hasHasVoiceCommandEditIntent;
- (bool)hasHasVoiceCommandInExhaustiveParses;
- (bool)hasHasVoiceCommandParses;
- (bool)hasIsFinal;
- (bool)hasLoggableSharedUserId;
- (bool)hasModelVersion;
- (bool)hasNoVoiceCommandAfterRespeakCheck;
- (bool)hasPackage;
- (bool)hasResultCandidateId;
- (bool)hasVoiceCommandAfterReranking;
- (bool)hasVoiceCommandEditIntent;
- (bool)hasVoiceCommandInExhaustiveParses;
- (bool)hasVoiceCommandParses;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFinal;
- (id)jsonData;
- (id)loggableSharedUserId;
- (id)modelVersion;
- (id)package;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setAcousticModelVersion:(id)arg1;
- (void)setHasAcousticModelVersion:(bool)arg1;
- (void)setHasHasNoVoiceCommandAfterRespeakCheck:(bool)arg1;
- (void)setHasHasVoiceCommandAfterReranking:(bool)arg1;
- (void)setHasHasVoiceCommandEditIntent:(bool)arg1;
- (void)setHasHasVoiceCommandInExhaustiveParses:(bool)arg1;
- (void)setHasHasVoiceCommandParses:(bool)arg1;
- (void)setHasIsFinal:(bool)arg1;
- (void)setHasLoggableSharedUserId:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasNoVoiceCommandAfterRespeakCheck:(bool)arg1;
- (void)setHasPackage:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setHasVoiceCommandAfterReranking:(bool)arg1;
- (void)setHasVoiceCommandEditIntent:(bool)arg1;
- (void)setHasVoiceCommandInExhaustiveParses:(bool)arg1;
- (void)setHasVoiceCommandParses:(bool)arg1;
- (void)setIsFinal:(bool)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setPackage:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDDeviceCohort : SISchemaInstrumentationMessage {
    int  _cohortDataAvailabilityState;
    ODDSiriSchemaODDTimeInterval * _cohortInterval;
    int  _cohortType;
    struct { 
        unsigned int cohortType : 1; 
        unsigned int cohortDataAvailabilityState : 1; 
    }  _has;
    bool  _hasCohortInterval;
}

@property (nonatomic) int cohortDataAvailabilityState;
@property (nonatomic, retain) ODDSiriSchemaODDTimeInterval *cohortInterval;
@property (nonatomic) int cohortType;
@property (nonatomic) bool hasCohortDataAvailabilityState;
@property (nonatomic) bool hasCohortInterval;
@property (nonatomic) bool hasCohortType;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)cohortDataAvailabilityState;
- (id)cohortInterval;
- (int)cohortType;
- (void)deleteCohortDataAvailabilityState;
- (void)deleteCohortInterval;
- (void)deleteCohortType;
- (id)dictionaryRepresentation;
- (bool)hasCohortDataAvailabilityState;
- (bool)hasCohortInterval;
- (bool)hasCohortType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCohortDataAvailabilityState:(int)arg1;
- (void)setCohortInterval:(id)arg1;
- (void)setCohortType:(int)arg1;
- (void)setHasCohortDataAvailabilityState:(bool)arg1;
- (void)setHasCohortInterval:(bool)arg1;
- (void)setHasCohortType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

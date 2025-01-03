/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface POMMESSchemaPOMMESSearchRequestClassifierExecuted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isPegasusSearchPerformed : 1; 
        unsigned int mitigationResponseDecision : 1; 
    }  _has;
    bool  _isPegasusSearchPerformed;
    int  _mitigationResponseDecision;
}

@property (nonatomic) bool hasIsPegasusSearchPerformed;
@property (nonatomic) bool hasMitigationResponseDecision;
@property (nonatomic) bool isPegasusSearchPerformed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mitigationResponseDecision;

- (void)deleteIsPegasusSearchPerformed;
- (void)deleteMitigationResponseDecision;
- (id)dictionaryRepresentation;
- (bool)hasIsPegasusSearchPerformed;
- (bool)hasMitigationResponseDecision;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPegasusSearchPerformed;
- (id)jsonData;
- (int)mitigationResponseDecision;
- (bool)readFrom:(id)arg1;
- (void)setHasIsPegasusSearchPerformed:(bool)arg1;
- (void)setHasMitigationResponseDecision:(bool)arg1;
- (void)setIsPegasusSearchPerformed:(bool)arg1;
- (void)setMitigationResponseDecision:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

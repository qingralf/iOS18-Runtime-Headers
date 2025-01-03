/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SRSchemaSRCheckErrorResponse : SISchemaInstrumentationMessage {
    struct { 
        unsigned int predictedErrorType : 1; 
        unsigned int selectedRecoveryStrategy : 1; 
    }  _has;
    int  _predictedErrorType;
    int  _selectedRecoveryStrategy;
}

@property (nonatomic) bool hasPredictedErrorType;
@property (nonatomic) bool hasSelectedRecoveryStrategy;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int predictedErrorType;
@property (nonatomic) int selectedRecoveryStrategy;

- (void)deletePredictedErrorType;
- (void)deleteSelectedRecoveryStrategy;
- (id)dictionaryRepresentation;
- (bool)hasPredictedErrorType;
- (bool)hasSelectedRecoveryStrategy;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)predictedErrorType;
- (bool)readFrom:(id)arg1;
- (int)selectedRecoveryStrategy;
- (void)setHasPredictedErrorType:(bool)arg1;
- (void)setHasSelectedRecoveryStrategy:(bool)arg1;
- (void)setPredictedErrorType:(int)arg1;
- (void)setSelectedRecoveryStrategy:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

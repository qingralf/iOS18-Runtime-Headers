/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface QDSchemaQDSubComponentContext : SISchemaInstrumentationMessage {
    QDSchemaQDSubComponentEnded * _ended;
    QDSchemaQDSubComponentFailed * _failed;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasStartedOrChanged;
    bool  _hasTraceId;
    QDSchemaQDSubComponentStarted * _startedOrChanged;
    SISchemaUUID * _traceId;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) QDSchemaQDSubComponentEnded *ended;
@property (nonatomic, retain) QDSchemaQDSubComponentFailed *failed;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic) bool hasTraceId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) QDSchemaQDSubComponentStarted *startedOrChanged;
@property (nonatomic, retain) SISchemaUUID *traceId;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasStartedOrChanged;
- (bool)hasTraceId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setHasTraceId:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (void)setTraceId:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (id)traceId;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHSubRequestContext : SISchemaInstrumentationMessage {
    ORCHSchemaORCHSubRequestEnded * _ended;
    ORCHSchemaORCHSubRequestFailed * _failed;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasStartedOrChanged;
    bool  _hasSubRequestId;
    ORCHSchemaORCHSubRequestStarted * _startedOrChanged;
    SISchemaUUID * _subRequestId;
    unsigned long long  _whichSubrequestevent;
}

@property (nonatomic, retain) ORCHSchemaORCHSubRequestEnded *ended;
@property (nonatomic, retain) ORCHSchemaORCHSubRequestFailed *failed;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic) bool hasSubRequestId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ORCHSchemaORCHSubRequestStarted *startedOrChanged;
@property (nonatomic, retain) SISchemaUUID *subRequestId;
@property (nonatomic, readonly) unsigned long long whichSubrequestevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteSubRequestId;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasStartedOrChanged;
- (bool)hasSubRequestId;
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
- (void)setHasSubRequestId:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (void)setSubRequestId:(id)arg1;
- (id)startedOrChanged;
- (id)subRequestId;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichSubrequestevent;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaBluetoothCarPreferredAudioRouteChanged : SISchemaInstrumentationMessage {
    int  _after;
    int  _before;
    struct { 
        unsigned int before : 1; 
        unsigned int after : 1; 
    }  _has;
}

@property (nonatomic) int after;
@property (nonatomic) int before;
@property (nonatomic) bool hasAfter;
@property (nonatomic) bool hasBefore;
@property (nonatomic, readonly) NSData *jsonData;

- (int)after;
- (int)before;
- (void)deleteAfter;
- (void)deleteBefore;
- (id)dictionaryRepresentation;
- (bool)hasAfter;
- (bool)hasBefore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAfter:(int)arg1;
- (void)setBefore:(int)arg1;
- (void)setHasAfter:(bool)arg1;
- (void)setHasBefore:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

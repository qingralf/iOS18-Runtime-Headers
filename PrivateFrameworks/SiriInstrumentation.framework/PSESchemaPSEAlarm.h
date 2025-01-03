/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PSESchemaPSEAlarm : SISchemaInstrumentationMessage {
    int  _followUpType;
    struct { 
        unsigned int isSiriResultUseful : 1; 
        unsigned int followUpType : 1; 
    }  _has;
    bool  _isSiriResultUseful;
}

@property (nonatomic) int followUpType;
@property (nonatomic) bool hasFollowUpType;
@property (nonatomic) bool hasIsSiriResultUseful;
@property (nonatomic) bool isSiriResultUseful;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteFollowUpType;
- (void)deleteIsSiriResultUseful;
- (id)dictionaryRepresentation;
- (int)followUpType;
- (bool)hasFollowUpType;
- (bool)hasIsSiriResultUseful;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSiriResultUseful;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFollowUpType:(int)arg1;
- (void)setHasFollowUpType:(bool)arg1;
- (void)setHasIsSiriResultUseful:(bool)arg1;
- (void)setIsSiriResultUseful:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

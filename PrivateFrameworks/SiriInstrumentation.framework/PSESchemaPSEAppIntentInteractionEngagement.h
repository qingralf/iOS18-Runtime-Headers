/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PSESchemaPSEAppIntentInteractionEngagement : SISchemaInstrumentationMessage {
    NSString * _appIntentName;
    int  _followUpActionType;
    int  _followUpEntityComparison;
    struct { 
        unsigned int followUpActionType : 1; 
        unsigned int followUpEntityComparison : 1; 
        unsigned int isSiriResultUseful : 1; 
        unsigned int isFirstPartyApp : 1; 
    }  _has;
    bool  _hasAppIntentName;
    bool  _isFirstPartyApp;
    bool  _isSiriResultUseful;
}

@property (nonatomic, copy) NSString *appIntentName;
@property (nonatomic) int followUpActionType;
@property (nonatomic) int followUpEntityComparison;
@property (nonatomic) bool hasAppIntentName;
@property (nonatomic) bool hasFollowUpActionType;
@property (nonatomic) bool hasFollowUpEntityComparison;
@property (nonatomic) bool hasIsFirstPartyApp;
@property (nonatomic) bool hasIsSiriResultUseful;
@property (nonatomic) bool isFirstPartyApp;
@property (nonatomic) bool isSiriResultUseful;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)appIntentName;
- (void)deleteAppIntentName;
- (void)deleteFollowUpActionType;
- (void)deleteFollowUpEntityComparison;
- (void)deleteIsFirstPartyApp;
- (void)deleteIsSiriResultUseful;
- (id)dictionaryRepresentation;
- (int)followUpActionType;
- (int)followUpEntityComparison;
- (bool)hasAppIntentName;
- (bool)hasFollowUpActionType;
- (bool)hasFollowUpEntityComparison;
- (bool)hasIsFirstPartyApp;
- (bool)hasIsSiriResultUseful;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFirstPartyApp;
- (bool)isSiriResultUseful;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppIntentName:(id)arg1;
- (void)setFollowUpActionType:(int)arg1;
- (void)setFollowUpEntityComparison:(int)arg1;
- (void)setHasAppIntentName:(bool)arg1;
- (void)setHasFollowUpActionType:(bool)arg1;
- (void)setHasFollowUpEntityComparison:(bool)arg1;
- (void)setHasIsFirstPartyApp:(bool)arg1;
- (void)setHasIsSiriResultUseful:(bool)arg1;
- (void)setIsFirstPartyApp:(bool)arg1;
- (void)setIsSiriResultUseful:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
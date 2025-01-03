/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PSESchemaPSEMapsUserFollowup : SISchemaInstrumentationMessage {
    int  _followupType;
    struct { 
        unsigned int followupType : 1; 
        unsigned int mapsAction : 1; 
    }  _has;
    bool  _hasMapsActionType;
    int  _mapsAction;
    NSString * _mapsActionType;
}

@property (nonatomic) int followupType;
@property (nonatomic) bool hasFollowupType;
@property (nonatomic) bool hasMapsAction;
@property (nonatomic) bool hasMapsActionType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mapsAction;
@property (nonatomic, copy) NSString *mapsActionType;

- (void).cxx_destruct;
- (void)deleteFollowupType;
- (void)deleteMapsAction;
- (void)deleteMapsActionType;
- (id)dictionaryRepresentation;
- (int)followupType;
- (bool)hasFollowupType;
- (bool)hasMapsAction;
- (bool)hasMapsActionType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)mapsAction;
- (id)mapsActionType;
- (bool)readFrom:(id)arg1;
- (void)setFollowupType:(int)arg1;
- (void)setHasFollowupType:(bool)arg1;
- (void)setHasMapsAction:(bool)arg1;
- (void)setHasMapsActionType:(bool)arg1;
- (void)setMapsAction:(int)arg1;
- (void)setMapsActionType:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface RFSchemaRFGradingDialogLineTier1 : SISchemaInstrumentationMessage {
    NSString * _dialogId;
    NSString * _displayedDialog;
    struct { 
        unsigned int isApprovedForGrading : 1; 
    }  _has;
    bool  _hasDialogId;
    bool  _hasDisplayedDialog;
    bool  _hasSpokenDialog;
    bool  _isApprovedForGrading;
    NSString * _spokenDialog;
}

@property (nonatomic, copy) NSString *dialogId;
@property (nonatomic, copy) NSString *displayedDialog;
@property (nonatomic) bool hasDialogId;
@property (nonatomic) bool hasDisplayedDialog;
@property (nonatomic) bool hasIsApprovedForGrading;
@property (nonatomic) bool hasSpokenDialog;
@property (nonatomic) bool isApprovedForGrading;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *spokenDialog;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDialogId;
- (void)deleteDisplayedDialog;
- (void)deleteIsApprovedForGrading;
- (void)deleteSpokenDialog;
- (id)dialogId;
- (id)dictionaryRepresentation;
- (id)displayedDialog;
- (bool)hasDialogId;
- (bool)hasDisplayedDialog;
- (bool)hasIsApprovedForGrading;
- (bool)hasSpokenDialog;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isApprovedForGrading;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDialogId:(id)arg1;
- (void)setDisplayedDialog:(id)arg1;
- (void)setHasDialogId:(bool)arg1;
- (void)setHasDisplayedDialog:(bool)arg1;
- (void)setHasIsApprovedForGrading:(bool)arg1;
- (void)setHasSpokenDialog:(bool)arg1;
- (void)setIsApprovedForGrading:(bool)arg1;
- (void)setSpokenDialog:(id)arg1;
- (id)spokenDialog;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

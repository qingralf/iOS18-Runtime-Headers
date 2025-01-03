/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaInvocation : SISchemaInstrumentationMessage {
    SISchemaBluetoothCarInvocationContext * _bluetoothCarInvocationContext;
    SISchemaCarPlayInvocationContext * _carPlayInvocationContext;
    SISchemaVerticalLayoutCardSectionInvocationContext * _cardInvocationContext;
    SISchemaHardwareButtonInvocationContext * _hardwareButtonInvocationContext;
    struct { 
        unsigned int invocationAction : 1; 
        unsigned int invocationSource : 1; 
        unsigned int isDeviceLocked : 1; 
    }  _has;
    bool  _hasBluetoothCarInvocationContext;
    bool  _hasCarPlayInvocationContext;
    bool  _hasCardInvocationContext;
    bool  _hasHardwareButtonInvocationContext;
    bool  _hasKeyboardInvocationContext;
    bool  _hasLinkId;
    bool  _hasTapToEditContext;
    bool  _hasTvRemoteInvocationContext;
    bool  _hasViewContainer;
    int  _invocationAction;
    int  _invocationSource;
    bool  _isDeviceLocked;
    SISchemaCardSectionKeyboardInvocationContext * _keyboardInvocationContext;
    SISchemaUUID * _linkId;
    SISchemaTapToEditInvocationContext * _tapToEditContext;
    SISchemaTVRemoteInvocationContext * _tvRemoteInvocationContext;
    SISchemaViewContainer * _viewContainer;
    unsigned long long  _whichInvocationcontext;
}

@property (nonatomic, retain) SISchemaBluetoothCarInvocationContext *bluetoothCarInvocationContext;
@property (nonatomic, retain) SISchemaCarPlayInvocationContext *carPlayInvocationContext;
@property (nonatomic, retain) SISchemaVerticalLayoutCardSectionInvocationContext *cardInvocationContext;
@property (nonatomic, retain) SISchemaHardwareButtonInvocationContext *hardwareButtonInvocationContext;
@property (nonatomic) bool hasBluetoothCarInvocationContext;
@property (nonatomic) bool hasCarPlayInvocationContext;
@property (nonatomic) bool hasCardInvocationContext;
@property (nonatomic) bool hasHardwareButtonInvocationContext;
@property (nonatomic) bool hasInvocationAction;
@property (nonatomic) bool hasInvocationSource;
@property (nonatomic) bool hasIsDeviceLocked;
@property (nonatomic) bool hasKeyboardInvocationContext;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasTapToEditContext;
@property (nonatomic) bool hasTvRemoteInvocationContext;
@property (nonatomic) bool hasViewContainer;
@property (nonatomic) int invocationAction;
@property (nonatomic) int invocationSource;
@property (nonatomic) bool isDeviceLocked;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaCardSectionKeyboardInvocationContext *keyboardInvocationContext;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, retain) SISchemaTapToEditInvocationContext *tapToEditContext;
@property (nonatomic, retain) SISchemaTVRemoteInvocationContext *tvRemoteInvocationContext;
@property (nonatomic, retain) SISchemaViewContainer *viewContainer;
@property (nonatomic, readonly) unsigned long long whichInvocationcontext;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)bluetoothCarInvocationContext;
- (id)carPlayInvocationContext;
- (id)cardInvocationContext;
- (void)deleteBluetoothCarInvocationContext;
- (void)deleteCarPlayInvocationContext;
- (void)deleteCardInvocationContext;
- (void)deleteHardwareButtonInvocationContext;
- (void)deleteInvocationAction;
- (void)deleteInvocationSource;
- (void)deleteIsDeviceLocked;
- (void)deleteKeyboardInvocationContext;
- (void)deleteLinkId;
- (void)deleteTapToEditContext;
- (void)deleteTvRemoteInvocationContext;
- (void)deleteViewContainer;
- (id)dictionaryRepresentation;
- (id)hardwareButtonInvocationContext;
- (bool)hasBluetoothCarInvocationContext;
- (bool)hasCarPlayInvocationContext;
- (bool)hasCardInvocationContext;
- (bool)hasHardwareButtonInvocationContext;
- (bool)hasInvocationAction;
- (bool)hasInvocationSource;
- (bool)hasIsDeviceLocked;
- (bool)hasKeyboardInvocationContext;
- (bool)hasLinkId;
- (bool)hasTapToEditContext;
- (bool)hasTvRemoteInvocationContext;
- (bool)hasViewContainer;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)invocationAction;
- (int)invocationSource;
- (bool)isDeviceLocked;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)keyboardInvocationContext;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setBluetoothCarInvocationContext:(id)arg1;
- (void)setCarPlayInvocationContext:(id)arg1;
- (void)setCardInvocationContext:(id)arg1;
- (void)setHardwareButtonInvocationContext:(id)arg1;
- (void)setHasBluetoothCarInvocationContext:(bool)arg1;
- (void)setHasCarPlayInvocationContext:(bool)arg1;
- (void)setHasCardInvocationContext:(bool)arg1;
- (void)setHasHardwareButtonInvocationContext:(bool)arg1;
- (void)setHasInvocationAction:(bool)arg1;
- (void)setHasInvocationSource:(bool)arg1;
- (void)setHasIsDeviceLocked:(bool)arg1;
- (void)setHasKeyboardInvocationContext:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasTapToEditContext:(bool)arg1;
- (void)setHasTvRemoteInvocationContext:(bool)arg1;
- (void)setHasViewContainer:(bool)arg1;
- (void)setInvocationAction:(int)arg1;
- (void)setInvocationSource:(int)arg1;
- (void)setIsDeviceLocked:(bool)arg1;
- (void)setKeyboardInvocationContext:(id)arg1;
- (void)setLinkId:(id)arg1;
- (void)setTapToEditContext:(id)arg1;
- (void)setTvRemoteInvocationContext:(id)arg1;
- (void)setViewContainer:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tapToEditContext;
- (id)tvRemoteInvocationContext;
- (id)viewContainer;
- (unsigned long long)whichInvocationcontext;
- (void)writeTo:(id)arg1;

@end

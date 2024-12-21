/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTActionFailureFailure : SISchemaInstrumentationMessage {
    bool  _actionCanceled;
    IFTSchemaIFTActionFailureDeveloperDefinedError * _actionFailureDeveloperDefinedError;
    bool  _actionNotAllowed;
    bool  _bluetoothDisabled;
    bool  _developerDefinedError;
    bool  _entityNotFound;
    bool  _featureCurrentlyRestricted;
    bool  _hasActionCanceled;
    bool  _hasActionFailureDeveloperDefinedError;
    bool  _hasActionNotAllowed;
    bool  _hasBluetoothDisabled;
    bool  _hasDeveloperDefinedError;
    bool  _hasEntityNotFound;
    bool  _hasFeatureCurrentlyRestricted;
    bool  _hasLocationDisabled;
    bool  _hasNetworkFailure;
    bool  _hasNoMatchingTool;
    bool  _hasPartialFailure;
    bool  _hasPreciseLocationDisabled;
    bool  _hasPreflightCheckFailure;
    bool  _hasUnableToUndo;
    bool  _hasUnsupportedOnDevice;
    bool  _hasValueDisambiguationRejected;
    bool  _hasWifiDisabled;
    bool  _locationDisabled;
    bool  _networkFailure;
    bool  _noMatchingTool;
    bool  _partialFailure;
    bool  _preciseLocationDisabled;
    bool  _preflightCheckFailure;
    bool  _unableToUndo;
    bool  _unsupportedOnDevice;
    bool  _valueDisambiguationRejected;
    unsigned long long  _whichOneof_Actionfailurefailure;
    bool  _wifiDisabled;
}

@property (nonatomic) bool actionCanceled;
@property (nonatomic, retain) IFTSchemaIFTActionFailureDeveloperDefinedError *actionFailureDeveloperDefinedError;
@property (nonatomic) bool actionNotAllowed;
@property (nonatomic) bool bluetoothDisabled;
@property (nonatomic) bool developerDefinedError;
@property (nonatomic) bool entityNotFound;
@property (nonatomic) bool featureCurrentlyRestricted;
@property (nonatomic) bool hasActionCanceled;
@property (nonatomic) bool hasActionFailureDeveloperDefinedError;
@property (nonatomic) bool hasActionNotAllowed;
@property (nonatomic) bool hasBluetoothDisabled;
@property (nonatomic) bool hasDeveloperDefinedError;
@property (nonatomic) bool hasEntityNotFound;
@property (nonatomic) bool hasFeatureCurrentlyRestricted;
@property (nonatomic) bool hasLocationDisabled;
@property (nonatomic) bool hasNetworkFailure;
@property (nonatomic) bool hasNoMatchingTool;
@property (nonatomic) bool hasPartialFailure;
@property (nonatomic) bool hasPreciseLocationDisabled;
@property (nonatomic) bool hasPreflightCheckFailure;
@property (nonatomic) bool hasUnableToUndo;
@property (nonatomic) bool hasUnsupportedOnDevice;
@property (nonatomic) bool hasValueDisambiguationRejected;
@property (nonatomic) bool hasWifiDisabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool locationDisabled;
@property (nonatomic) bool networkFailure;
@property (nonatomic) bool noMatchingTool;
@property (nonatomic) bool partialFailure;
@property (nonatomic) bool preciseLocationDisabled;
@property (nonatomic) bool preflightCheckFailure;
@property (nonatomic) bool unableToUndo;
@property (nonatomic) bool unsupportedOnDevice;
@property (nonatomic) bool valueDisambiguationRejected;
@property (nonatomic, readonly) unsigned long long whichOneof_Actionfailurefailure;
@property (nonatomic) bool wifiDisabled;

- (void).cxx_destruct;
- (bool)actionCanceled;
- (id)actionFailureDeveloperDefinedError;
- (bool)actionNotAllowed;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (bool)bluetoothDisabled;
- (void)deleteActionCanceled;
- (void)deleteActionFailureDeveloperDefinedError;
- (void)deleteActionNotAllowed;
- (void)deleteBluetoothDisabled;
- (void)deleteDeveloperDefinedError;
- (void)deleteEntityNotFound;
- (void)deleteFeatureCurrentlyRestricted;
- (void)deleteLocationDisabled;
- (void)deleteNetworkFailure;
- (void)deleteNoMatchingTool;
- (void)deletePartialFailure;
- (void)deletePreciseLocationDisabled;
- (void)deletePreflightCheckFailure;
- (void)deleteUnableToUndo;
- (void)deleteUnsupportedOnDevice;
- (void)deleteValueDisambiguationRejected;
- (void)deleteWifiDisabled;
- (bool)developerDefinedError;
- (id)dictionaryRepresentation;
- (bool)entityNotFound;
- (bool)featureCurrentlyRestricted;
- (bool)hasActionCanceled;
- (bool)hasActionFailureDeveloperDefinedError;
- (bool)hasActionNotAllowed;
- (bool)hasBluetoothDisabled;
- (bool)hasDeveloperDefinedError;
- (bool)hasEntityNotFound;
- (bool)hasFeatureCurrentlyRestricted;
- (bool)hasLocationDisabled;
- (bool)hasNetworkFailure;
- (bool)hasNoMatchingTool;
- (bool)hasPartialFailure;
- (bool)hasPreciseLocationDisabled;
- (bool)hasPreflightCheckFailure;
- (bool)hasUnableToUndo;
- (bool)hasUnsupportedOnDevice;
- (bool)hasValueDisambiguationRejected;
- (bool)hasWifiDisabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)locationDisabled;
- (bool)networkFailure;
- (bool)noMatchingTool;
- (bool)partialFailure;
- (bool)preciseLocationDisabled;
- (bool)preflightCheckFailure;
- (bool)readFrom:(id)arg1;
- (void)setActionCanceled:(bool)arg1;
- (void)setActionFailureDeveloperDefinedError:(id)arg1;
- (void)setActionNotAllowed:(bool)arg1;
- (void)setBluetoothDisabled:(bool)arg1;
- (void)setDeveloperDefinedError:(bool)arg1;
- (void)setEntityNotFound:(bool)arg1;
- (void)setFeatureCurrentlyRestricted:(bool)arg1;
- (void)setHasActionCanceled:(bool)arg1;
- (void)setHasActionFailureDeveloperDefinedError:(bool)arg1;
- (void)setHasActionNotAllowed:(bool)arg1;
- (void)setHasBluetoothDisabled:(bool)arg1;
- (void)setHasDeveloperDefinedError:(bool)arg1;
- (void)setHasEntityNotFound:(bool)arg1;
- (void)setHasFeatureCurrentlyRestricted:(bool)arg1;
- (void)setHasLocationDisabled:(bool)arg1;
- (void)setHasNetworkFailure:(bool)arg1;
- (void)setHasNoMatchingTool:(bool)arg1;
- (void)setHasPartialFailure:(bool)arg1;
- (void)setHasPreciseLocationDisabled:(bool)arg1;
- (void)setHasPreflightCheckFailure:(bool)arg1;
- (void)setHasUnableToUndo:(bool)arg1;
- (void)setHasUnsupportedOnDevice:(bool)arg1;
- (void)setHasValueDisambiguationRejected:(bool)arg1;
- (void)setHasWifiDisabled:(bool)arg1;
- (void)setLocationDisabled:(bool)arg1;
- (void)setNetworkFailure:(bool)arg1;
- (void)setNoMatchingTool:(bool)arg1;
- (void)setPartialFailure:(bool)arg1;
- (void)setPreciseLocationDisabled:(bool)arg1;
- (void)setPreflightCheckFailure:(bool)arg1;
- (void)setUnableToUndo:(bool)arg1;
- (void)setUnsupportedOnDevice:(bool)arg1;
- (void)setValueDisambiguationRejected:(bool)arg1;
- (void)setWifiDisabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (bool)unableToUndo;
- (bool)unsupportedOnDevice;
- (bool)valueDisambiguationRejected;
- (unsigned long long)whichOneof_Actionfailurefailure;
- (bool)wifiDisabled;
- (void)writeTo:(id)arg1;

@end
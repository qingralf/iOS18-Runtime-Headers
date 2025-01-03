/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTSystemRequirement : SISchemaInstrumentationMessage {
    bool  _appLaunchRequired;
    bool  _authenticationRequired;
    bool  _carBluetoothIncompatible;
    bool  _carPlayIncompatible;
    bool  _deviceUnlockRequired;
    bool  _hasAppLaunchRequired;
    bool  _hasAuthenticationRequired;
    bool  _hasCarBluetoothIncompatible;
    bool  _hasCarPlayIncompatible;
    bool  _hasDeviceUnlockRequired;
    bool  _hasProtectedAppApprovalRequired;
    bool  _hasUserAuthenticationRequired;
    IFTSchemaIFTSystemRequirementProtectedAppRequest * _protectedAppApprovalRequired;
    IFTSchemaIFTSystemRequirementAuthenticationRequest * _userAuthenticationRequired;
    unsigned long long  _whichOneof_Systemrequirement;
}

@property (nonatomic) bool appLaunchRequired;
@property (nonatomic) bool authenticationRequired;
@property (nonatomic) bool carBluetoothIncompatible;
@property (nonatomic) bool carPlayIncompatible;
@property (nonatomic) bool deviceUnlockRequired;
@property (nonatomic) bool hasAppLaunchRequired;
@property (nonatomic) bool hasAuthenticationRequired;
@property (nonatomic) bool hasCarBluetoothIncompatible;
@property (nonatomic) bool hasCarPlayIncompatible;
@property (nonatomic) bool hasDeviceUnlockRequired;
@property (nonatomic) bool hasProtectedAppApprovalRequired;
@property (nonatomic) bool hasUserAuthenticationRequired;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IFTSchemaIFTSystemRequirementProtectedAppRequest *protectedAppApprovalRequired;
@property (nonatomic, retain) IFTSchemaIFTSystemRequirementAuthenticationRequest *userAuthenticationRequired;
@property (nonatomic, readonly) unsigned long long whichOneof_Systemrequirement;

- (void).cxx_destruct;
- (bool)appLaunchRequired;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (bool)authenticationRequired;
- (bool)carBluetoothIncompatible;
- (bool)carPlayIncompatible;
- (void)deleteAppLaunchRequired;
- (void)deleteAuthenticationRequired;
- (void)deleteCarBluetoothIncompatible;
- (void)deleteCarPlayIncompatible;
- (void)deleteDeviceUnlockRequired;
- (void)deleteProtectedAppApprovalRequired;
- (void)deleteUserAuthenticationRequired;
- (bool)deviceUnlockRequired;
- (id)dictionaryRepresentation;
- (bool)hasAppLaunchRequired;
- (bool)hasAuthenticationRequired;
- (bool)hasCarBluetoothIncompatible;
- (bool)hasCarPlayIncompatible;
- (bool)hasDeviceUnlockRequired;
- (bool)hasProtectedAppApprovalRequired;
- (bool)hasUserAuthenticationRequired;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)protectedAppApprovalRequired;
- (bool)readFrom:(id)arg1;
- (void)setAppLaunchRequired:(bool)arg1;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setCarBluetoothIncompatible:(bool)arg1;
- (void)setCarPlayIncompatible:(bool)arg1;
- (void)setDeviceUnlockRequired:(bool)arg1;
- (void)setHasAppLaunchRequired:(bool)arg1;
- (void)setHasAuthenticationRequired:(bool)arg1;
- (void)setHasCarBluetoothIncompatible:(bool)arg1;
- (void)setHasCarPlayIncompatible:(bool)arg1;
- (void)setHasDeviceUnlockRequired:(bool)arg1;
- (void)setHasProtectedAppApprovalRequired:(bool)arg1;
- (void)setHasUserAuthenticationRequired:(bool)arg1;
- (void)setProtectedAppApprovalRequired:(id)arg1;
- (void)setUserAuthenticationRequired:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userAuthenticationRequired;
- (unsigned long long)whichOneof_Systemrequirement;
- (void)writeTo:(id)arg1;

@end

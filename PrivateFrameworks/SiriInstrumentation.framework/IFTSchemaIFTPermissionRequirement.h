/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTPermissionRequirement : SISchemaInstrumentationMessage {
    bool  _bluetoothPermissionRequired;
    bool  _contactsPermissionRequired;
    bool  _hasBluetoothPermissionRequired;
    bool  _hasContactsPermissionRequired;
    bool  _hasLocationPermissionRequired;
    bool  _hasPhotosPermissionRequired;
    bool  _hasPreciseLocationPermissionRequired;
    bool  _hasShortcutsPermissionRequired;
    bool  _hasSiriPermissionRequired;
    bool  _hasWifiPermissionRequired;
    bool  _locationPermissionRequired;
    bool  _photosPermissionRequired;
    bool  _preciseLocationPermissionRequired;
    bool  _shortcutsPermissionRequired;
    bool  _siriPermissionRequired;
    unsigned long long  _whichOneof_Permissionrequirement;
    bool  _wifiPermissionRequired;
}

@property (nonatomic) bool bluetoothPermissionRequired;
@property (nonatomic) bool contactsPermissionRequired;
@property (nonatomic) bool hasBluetoothPermissionRequired;
@property (nonatomic) bool hasContactsPermissionRequired;
@property (nonatomic) bool hasLocationPermissionRequired;
@property (nonatomic) bool hasPhotosPermissionRequired;
@property (nonatomic) bool hasPreciseLocationPermissionRequired;
@property (nonatomic) bool hasShortcutsPermissionRequired;
@property (nonatomic) bool hasSiriPermissionRequired;
@property (nonatomic) bool hasWifiPermissionRequired;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool locationPermissionRequired;
@property (nonatomic) bool photosPermissionRequired;
@property (nonatomic) bool preciseLocationPermissionRequired;
@property (nonatomic) bool shortcutsPermissionRequired;
@property (nonatomic) bool siriPermissionRequired;
@property (nonatomic, readonly) unsigned long long whichOneof_Permissionrequirement;
@property (nonatomic) bool wifiPermissionRequired;

- (bool)bluetoothPermissionRequired;
- (bool)contactsPermissionRequired;
- (void)deleteBluetoothPermissionRequired;
- (void)deleteContactsPermissionRequired;
- (void)deleteLocationPermissionRequired;
- (void)deletePhotosPermissionRequired;
- (void)deletePreciseLocationPermissionRequired;
- (void)deleteShortcutsPermissionRequired;
- (void)deleteSiriPermissionRequired;
- (void)deleteWifiPermissionRequired;
- (id)dictionaryRepresentation;
- (bool)hasBluetoothPermissionRequired;
- (bool)hasContactsPermissionRequired;
- (bool)hasLocationPermissionRequired;
- (bool)hasPhotosPermissionRequired;
- (bool)hasPreciseLocationPermissionRequired;
- (bool)hasShortcutsPermissionRequired;
- (bool)hasSiriPermissionRequired;
- (bool)hasWifiPermissionRequired;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)locationPermissionRequired;
- (bool)photosPermissionRequired;
- (bool)preciseLocationPermissionRequired;
- (bool)readFrom:(id)arg1;
- (void)setBluetoothPermissionRequired:(bool)arg1;
- (void)setContactsPermissionRequired:(bool)arg1;
- (void)setHasBluetoothPermissionRequired:(bool)arg1;
- (void)setHasContactsPermissionRequired:(bool)arg1;
- (void)setHasLocationPermissionRequired:(bool)arg1;
- (void)setHasPhotosPermissionRequired:(bool)arg1;
- (void)setHasPreciseLocationPermissionRequired:(bool)arg1;
- (void)setHasShortcutsPermissionRequired:(bool)arg1;
- (void)setHasSiriPermissionRequired:(bool)arg1;
- (void)setHasWifiPermissionRequired:(bool)arg1;
- (void)setLocationPermissionRequired:(bool)arg1;
- (void)setPhotosPermissionRequired:(bool)arg1;
- (void)setPreciseLocationPermissionRequired:(bool)arg1;
- (void)setShortcutsPermissionRequired:(bool)arg1;
- (void)setSiriPermissionRequired:(bool)arg1;
- (void)setWifiPermissionRequired:(bool)arg1;
- (bool)shortcutsPermissionRequired;
- (bool)siriPermissionRequired;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichOneof_Permissionrequirement;
- (bool)wifiPermissionRequired;
- (void)writeTo:(id)arg1;

@end

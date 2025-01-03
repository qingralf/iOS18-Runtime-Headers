/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedSettingsObjC.framework/ManagedSettingsObjC
 */

@interface MOSettingsStore : NSObject {
    MOAccountSettingsGroup * _account;
    MOAirDropSettingsGroup * _airDrop;
    MOAllowedClientSettingsGroup * _allowedClient;
    MOAppStoreSettingsGroup * _appStore;
    MOApplicationSettingsGroup * _application;
    MOCalculatorSettingsGroup * _calculator;
    MOCameraSettingsGroup * _camera;
    MOCarPlaySettingsGroup * _carPlay;
    MOCellularSettingsGroup * _cellular;
    MODateAndTimeSettingsGroup * _dateAndTime;
    MODeviceActivitySettingsGroup * _deviceActivity;
    MOFaceTimeSettingsGroup * _faceTime;
    MOFindMySettingsGroup * _findMy;
    MOGameCenterSettingsGroup * _gameCenter;
    MOIntelligenceSettingsGroup * _intelligence;
    MOKeyboardSettingsGroup * _keyboard;
    MOManagedSettingsSettingsGroup * _managedSettings;
    MOMediaSettingsGroup * _media;
    MOMessagesSettingsGroup * _messages;
    MONewsSettingsGroup * _news;
    MONotificationSettingsGroup * _notification;
    MOPasscodeSettingsGroup * _passcode;
    MOPrivacySettingsGroup * _privacy;
    MOSafariSettingsGroup * _safari;
    MOScreenTimeSettingsGroup * _screenTime;
    MOShieldSettingsGroup * _shield;
    MOSiriSettingsGroup * _siri;
    MOUserSettingsGroup * _user;
    MOUserSafetySettingsGroup * _userSafety;
    MOWebContentSettingsGroup * _webContent;
}

@property (nonatomic, readonly) MOAccountSettingsGroup *account;
@property (nonatomic, readonly) MOAirDropSettingsGroup *airDrop;
@property (nonatomic, readonly) MOAllowedClientSettingsGroup *allowedClient;
@property (nonatomic, readonly) MOAppStoreSettingsGroup *appStore;
@property (nonatomic, readonly) MOApplicationSettingsGroup *application;
@property (nonatomic, readonly) MOCalculatorSettingsGroup *calculator;
@property (nonatomic, readonly) MOCameraSettingsGroup *camera;
@property (nonatomic, readonly) MOCarPlaySettingsGroup *carPlay;
@property (nonatomic, readonly) MOCellularSettingsGroup *cellular;
@property (nonatomic, readonly) MODateAndTimeSettingsGroup *dateAndTime;
@property (nonatomic, readonly) MODeviceActivitySettingsGroup *deviceActivity;
@property (nonatomic, readonly) MOFaceTimeSettingsGroup *faceTime;
@property (nonatomic, readonly) MOFindMySettingsGroup *findMy;
@property (nonatomic, readonly) MOGameCenterSettingsGroup *gameCenter;
@property (nonatomic, readonly) MOIntelligenceSettingsGroup *intelligence;
@property (nonatomic, readonly) MOKeyboardSettingsGroup *keyboard;
@property (nonatomic, readonly) MOManagedSettingsSettingsGroup *managedSettings;
@property (nonatomic, readonly) MOMediaSettingsGroup *media;
@property (nonatomic, readonly) MOMessagesSettingsGroup *messages;
@property (nonatomic, readonly) MONewsSettingsGroup *news;
@property (nonatomic, readonly) MONotificationSettingsGroup *notification;
@property (nonatomic, readonly) MOPasscodeSettingsGroup *passcode;
@property (nonatomic, readonly) MOPrivacySettingsGroup *privacy;
@property (readonly) <MOSettingsReader> *reader;
@property (nonatomic, readonly) MOSafariSettingsGroup *safari;
@property (nonatomic, readonly) MOScreenTimeSettingsGroup *screenTime;
@property (nonatomic, readonly) MOShieldSettingsGroup *shield;
@property (nonatomic, readonly) MOSiriSettingsGroup *siri;
@property (nonatomic, readonly) MOUserSettingsGroup *user;
@property (nonatomic, readonly) MOUserSafetySettingsGroup *userSafety;
@property (nonatomic, readonly) MOWebContentSettingsGroup *webContent;
@property (readonly) <MOSettingsWriter> *writer;

+ (void)createSettingsDirectoryAtURL:(id)arg1;
+ (id)directoryAttributes;
+ (id)fileAttributes;
+ (id)loadDataAtURL:(id)arg1 outError:(id*)arg2;
+ (id)loadSettingsAtURL:(id)arg1;
+ (void)migrateSettingsIfNecessary:(id)arg1;
+ (bool)saveSettings:(id)arg1 toURL:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (id)airDrop;
- (id)allowedClient;
- (id)appStore;
- (id)application;
- (id)calculator;
- (id)camera;
- (id)carPlay;
- (id)cellular;
- (id)dateAndTime;
- (id)deviceActivity;
- (id)faceTime;
- (id)findMy;
- (id)gameCenter;
- (bool)hasSensitiveDataInSettings:(id)arg1;
- (id)initStore;
- (id)intelligence;
- (id)keyboard;
- (id)managedSettings;
- (id)media;
- (id)messages;
- (id)metadataForSettingKey:(id)arg1;
- (id)news;
- (id)notification;
- (id)passcode;
- (id)privacy;
- (id)reader;
- (id)safari;
- (id)screenTime;
- (id)settingKeyFromSetting:(id)arg1 group:(id)arg2;
- (id)shield;
- (id)siri;
- (id)user;
- (id)userSafety;
- (id)webContent;
- (id)writer;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYBackupMetadata : PBCodable <NSCopying> {
    NSData * _actionButtonData;
    unsigned int  _appAnalyticsOptIn;
    bool  _autoDownloadEnabled;
    bool  _autoUpdateEnabled;
    unsigned int  _deviceAnalyticsOptIn;
    bool  _didSeeTrueTonePane;
    bool  _findMyiPhoneOptIn;
    struct { 
        unsigned int userInterfaceStyleMode : 1; 
        unsigned int appAnalyticsOptIn : 1; 
        unsigned int deviceAnalyticsOptIn : 1; 
        unsigned int homeButtonHapticKind : 1; 
        unsigned int autoDownloadEnabled : 1; 
        unsigned int autoUpdateEnabled : 1; 
        unsigned int didSeeTrueTonePane : 1; 
        unsigned int findMyiPhoneOptIn : 1; 
        unsigned int locationServicesOptIn : 1; 
        unsigned int messagesContactsPresented : 1; 
        unsigned int screenTimeEnabled : 1; 
        unsigned int settingsContactsPresented : 1; 
        unsigned int settingsDataUsagePresented : 1; 
        unsigned int siriDataSharingOptIn : 1; 
        unsigned int siriOptIn : 1; 
    }  _has;
    unsigned int  _homeButtonHapticKind;
    bool  _locationServicesOptIn;
    bool  _messagesContactsPresented;
    NSData * _nanoRegistryData;
    bool  _screenTimeEnabled;
    NSString * _seedEnrollmentAssetAudience;
    NSString * _seedEnrollmentCatalogID;
    NSString * _seedEnrollmentProgram;
    bool  _settingsContactsPresented;
    bool  _settingsDataUsagePresented;
    bool  _siriDataSharingOptIn;
    bool  _siriOptIn;
    NSData * _universalData;
    long long  _userInterfaceStyleMode;
    unsigned int  _version;
    NSData * _walletData;
}

@property (nonatomic, retain) NSData *actionButtonData;
@property (nonatomic) unsigned int appAnalyticsOptIn;
@property (nonatomic) bool autoDownloadEnabled;
@property (nonatomic) bool autoUpdateEnabled;
@property (nonatomic) unsigned int deviceAnalyticsOptIn;
@property (nonatomic) bool didSeeTrueTonePane;
@property (nonatomic) bool findMyiPhoneOptIn;
@property (nonatomic, readonly) bool hasActionButtonData;
@property (nonatomic) bool hasAppAnalyticsOptIn;
@property (nonatomic) bool hasAutoDownloadEnabled;
@property (nonatomic) bool hasAutoUpdateEnabled;
@property (nonatomic) bool hasDeviceAnalyticsOptIn;
@property (nonatomic) bool hasDidSeeTrueTonePane;
@property (nonatomic) bool hasFindMyiPhoneOptIn;
@property (nonatomic) bool hasHomeButtonHapticKind;
@property (nonatomic) bool hasLocationServicesOptIn;
@property (nonatomic) bool hasMessagesContactsPresented;
@property (nonatomic, readonly) bool hasNanoRegistryData;
@property (nonatomic) bool hasScreenTimeEnabled;
@property (nonatomic, readonly) bool hasSeedEnrollmentAssetAudience;
@property (nonatomic, readonly) bool hasSeedEnrollmentCatalogID;
@property (nonatomic, readonly) bool hasSeedEnrollmentProgram;
@property (nonatomic) bool hasSettingsContactsPresented;
@property (nonatomic) bool hasSettingsDataUsagePresented;
@property (nonatomic) bool hasSiriDataSharingOptIn;
@property (nonatomic) bool hasSiriOptIn;
@property (nonatomic, readonly) bool hasUniversalData;
@property (nonatomic) bool hasUserInterfaceStyleMode;
@property (nonatomic, readonly) bool hasWalletData;
@property (nonatomic) unsigned int homeButtonHapticKind;
@property (nonatomic) bool locationServicesOptIn;
@property (nonatomic) bool messagesContactsPresented;
@property (nonatomic, retain) NSData *nanoRegistryData;
@property (nonatomic) bool screenTimeEnabled;
@property (nonatomic, retain) NSString *seedEnrollmentAssetAudience;
@property (nonatomic, retain) NSString *seedEnrollmentCatalogID;
@property (nonatomic, retain) NSString *seedEnrollmentProgram;
@property (nonatomic) bool settingsContactsPresented;
@property (nonatomic) bool settingsDataUsagePresented;
@property (nonatomic) bool siriDataSharingOptIn;
@property (nonatomic) bool siriOptIn;
@property (nonatomic, retain) NSData *universalData;
@property (nonatomic) long long userInterfaceStyleMode;
@property (nonatomic) unsigned int version;
@property (nonatomic, retain) NSData *walletData;

- (void).cxx_destruct;
- (id)actionButtonData;
- (unsigned int)appAnalyticsOptIn;
- (bool)autoDownloadEnabled;
- (bool)autoUpdateEnabled;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceAnalyticsOptIn;
- (id)dictionaryRepresentation;
- (bool)didSeeTrueTonePane;
- (id)expressSettings;
- (bool)findMyiPhoneOptIn;
- (bool)hasActionButtonData;
- (bool)hasAppAnalyticsOptIn;
- (bool)hasAutoDownloadEnabled;
- (bool)hasAutoUpdateEnabled;
- (bool)hasDeviceAnalyticsOptIn;
- (bool)hasDidSeeTrueTonePane;
- (bool)hasFindMyiPhoneOptIn;
- (bool)hasHomeButtonHapticKind;
- (bool)hasLocationServicesOptIn;
- (bool)hasMessagesContactsPresented;
- (bool)hasNanoRegistryData;
- (bool)hasScreenTimeEnabled;
- (bool)hasSeedEnrollmentAssetAudience;
- (bool)hasSeedEnrollmentCatalogID;
- (bool)hasSeedEnrollmentProgram;
- (bool)hasSettingsContactsPresented;
- (bool)hasSettingsDataUsagePresented;
- (bool)hasSiriDataSharingOptIn;
- (bool)hasSiriOptIn;
- (bool)hasUniversalData;
- (bool)hasUserInterfaceStyleMode;
- (bool)hasWalletData;
- (unsigned long long)hash;
- (unsigned int)homeButtonHapticKind;
- (bool)isEqual:(id)arg1;
- (bool)locationServicesOptIn;
- (void)mergeFrom:(id)arg1;
- (bool)messagesContactsPresented;
- (id)nanoRegistryData;
- (bool)readFrom:(id)arg1;
- (bool)screenTimeEnabled;
- (id)seedEnrollmentAssetAudience;
- (id)seedEnrollmentCatalogID;
- (id)seedEnrollmentProgram;
- (void)setActionButtonData:(id)arg1;
- (void)setAppAnalyticsOptIn:(unsigned int)arg1;
- (void)setAutoDownloadEnabled:(bool)arg1;
- (void)setAutoUpdateEnabled:(bool)arg1;
- (void)setDeviceAnalyticsOptIn:(unsigned int)arg1;
- (void)setDidSeeTrueTonePane:(bool)arg1;
- (void)setFindMyiPhoneOptIn:(bool)arg1;
- (void)setHasAppAnalyticsOptIn:(bool)arg1;
- (void)setHasAutoDownloadEnabled:(bool)arg1;
- (void)setHasAutoUpdateEnabled:(bool)arg1;
- (void)setHasDeviceAnalyticsOptIn:(bool)arg1;
- (void)setHasDidSeeTrueTonePane:(bool)arg1;
- (void)setHasFindMyiPhoneOptIn:(bool)arg1;
- (void)setHasHomeButtonHapticKind:(bool)arg1;
- (void)setHasLocationServicesOptIn:(bool)arg1;
- (void)setHasMessagesContactsPresented:(bool)arg1;
- (void)setHasScreenTimeEnabled:(bool)arg1;
- (void)setHasSettingsContactsPresented:(bool)arg1;
- (void)setHasSettingsDataUsagePresented:(bool)arg1;
- (void)setHasSiriDataSharingOptIn:(bool)arg1;
- (void)setHasSiriOptIn:(bool)arg1;
- (void)setHasUserInterfaceStyleMode:(bool)arg1;
- (void)setHomeButtonHapticKind:(unsigned int)arg1;
- (void)setLocationServicesOptIn:(bool)arg1;
- (void)setMessagesContactsPresented:(bool)arg1;
- (void)setNanoRegistryData:(id)arg1;
- (void)setScreenTimeEnabled:(bool)arg1;
- (void)setSeedEnrollmentAssetAudience:(id)arg1;
- (void)setSeedEnrollmentCatalogID:(id)arg1;
- (void)setSeedEnrollmentProgram:(id)arg1;
- (void)setSettingsContactsPresented:(bool)arg1;
- (void)setSettingsDataUsagePresented:(bool)arg1;
- (void)setSiriDataSharingOptIn:(bool)arg1;
- (void)setSiriOptIn:(bool)arg1;
- (void)setUniversalData:(id)arg1;
- (void)setUserInterfaceStyleMode:(long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setWalletData:(id)arg1;
- (bool)settingsContactsPresented;
- (bool)settingsDataUsagePresented;
- (bool)siriDataSharingOptIn;
- (bool)siriOptIn;
- (id)universalData;
- (long long)userInterfaceStyleMode;
- (unsigned int)version;
- (id)walletData;
- (void)writeTo:(id)arg1;

@end
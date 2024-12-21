/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
 */

@interface PASettings : HCSettings

@property (nonatomic, retain) NSDictionary *accommodationTypesByRouteUID;
@property (nonatomic, retain) PAConfiguration *audiogramConfiguration;
@property (nonatomic, retain) NSDictionary *audiogramConfigurationByRouteUID;
@property (nonatomic) bool configurationCameFromEnrollment;
@property (nonatomic) bool configurationCameFromUser;
@property (nonatomic) unsigned long long currentEnrollmentProgress;
@property (nonatomic) unsigned long long personalAudioAccommodationTypes;
@property (nonatomic) bool personalMediaAutomationSkipHeadphoneRequirement;
@property (nonatomic, retain) PAConfiguration *personalMediaConfiguration;
@property (nonatomic, retain) NSDictionary *personalMediaConfigurationByRouteUID;
@property (nonatomic) bool personalMediaDebugMode;
@property (nonatomic) bool personalMediaEnabled;
@property (nonatomic, retain) NSDictionary *personalMediaEnabledByRouteUID;
@property (nonatomic) bool personalSoundVisible;
@property (nonatomic) bool shouldUpdateAccessory;
@property (nonatomic, retain) NSDictionary *sslEnabled;
@property (nonatomic, retain) NSDictionary *transparencyAmplification;
@property (nonatomic, retain) NSDictionary *transparencyBalance;
@property (nonatomic, retain) NSDictionary *transparencyBeamforming;
@property (nonatomic, retain) NSDictionary *transparencyCustomized;
@property (nonatomic, retain) NSDictionary *transparencyNoiseSupressor;
@property (nonatomic, retain) NSDictionary *transparencyTone;

+ (id)sharedInstance;

- (id)accommodationTypesByRouteUID;
- (unsigned long long)accommodationTypesForRouteUID:(id)arg1;
- (id)archivedDataFromConfiguration:(id)arg1;
- (id)audiogramConfiguration;
- (id)audiogramConfigurationByRouteUID;
- (id)audiogramConfigurationForRouteUID:(id)arg1;
- (bool)configurationCameFromEnrollment;
- (bool)configurationCameFromUser;
- (id)configurationFromData:(id)arg1;
- (unsigned long long)currentEnrollmentProgress;
- (id)keysToSync;
- (void)logMessage:(id)arg1;
- (unsigned long long)personalAudioAccommodationTypes;
- (bool)personalMediaAutomationSkipHeadphoneRequirement;
- (id)personalMediaConfiguration;
- (id)personalMediaConfigurationByRouteUID;
- (id)personalMediaConfigurationForRouteUID:(id)arg1;
- (bool)personalMediaDebugMode;
- (bool)personalMediaEnabled;
- (id)personalMediaEnabledByRouteUID;
- (bool)personalMediaEnabledForRouteUID:(id)arg1;
- (bool)personalSoundVisible;
- (id)preferenceDomainForPreferenceKey:(id)arg1;
- (id)preferenceKeyForSelector:(SEL)arg1;
- (id)sanitizedRouteUID:(id)arg1;
- (void)setAccommodationTypes:(unsigned long long)arg1 forRouteUID:(id)arg2;
- (void)setAccommodationTypesByRouteUID:(id)arg1;
- (void)setAudiogramConfiguration:(id)arg1;
- (void)setAudiogramConfiguration:(id)arg1 forRouteUID:(id)arg2;
- (void)setAudiogramConfigurationByRouteUID:(id)arg1;
- (void)setConfigurationCameFromEnrollment:(bool)arg1;
- (void)setConfigurationCameFromUser:(bool)arg1;
- (void)setCurrentEnrollmentProgress:(unsigned long long)arg1;
- (void)setPersonalAudioAccommodationTypes:(unsigned long long)arg1;
- (void)setPersonalMediaAutomationSkipHeadphoneRequirement:(bool)arg1;
- (void)setPersonalMediaConfiguration:(id)arg1;
- (void)setPersonalMediaConfiguration:(id)arg1 forRouteUID:(id)arg2;
- (void)setPersonalMediaConfigurationByRouteUID:(id)arg1;
- (void)setPersonalMediaDebugMode:(bool)arg1;
- (void)setPersonalMediaEnabled:(bool)arg1;
- (void)setPersonalMediaEnabled:(bool)arg1 forRouteUID:(id)arg2;
- (void)setPersonalMediaEnabledByRouteUID:(id)arg1;
- (void)setPersonalSoundVisible:(bool)arg1;
- (void)setShouldUpdateAccessory:(bool)arg1;
- (void)setSslEnabled:(id)arg1;
- (void)setSslEnabled:(bool)arg1 forAddress:(id)arg2;
- (void)setTransparencyAmplification:(id)arg1;
- (void)setTransparencyAmplification:(double)arg1 forAddress:(id)arg2;
- (void)setTransparencyBalance:(id)arg1;
- (void)setTransparencyBalance:(double)arg1 forAddress:(id)arg2;
- (void)setTransparencyBeamforming:(id)arg1;
- (void)setTransparencyBeamforming:(bool)arg1 forAddress:(id)arg2;
- (void)setTransparencyCustomized:(id)arg1;
- (void)setTransparencyCustomized:(bool)arg1 forAddress:(id)arg2;
- (void)setTransparencyNoiseSupressor:(id)arg1;
- (void)setTransparencyNoiseSupressor:(double)arg1 forAddress:(id)arg2;
- (void)setTransparencyTone:(id)arg1;
- (void)setTransparencyTone:(double)arg1 forAddress:(id)arg2;
- (bool)shouldStoreLocally;
- (bool)shouldUpdateAccessory;
- (id)sslEnabled;
- (bool)sslEnabledForAddress:(id)arg1;
- (id)transparencyAmplification;
- (double)transparencyAmplificationForAddress:(id)arg1;
- (id)transparencyBalance;
- (double)transparencyBalanceForAddress:(id)arg1;
- (id)transparencyBeamforming;
- (bool)transparencyBeamformingForAddress:(id)arg1;
- (id)transparencyCustomized;
- (bool)transparencyCustomizedForAddress:(id)arg1;
- (id)transparencyNoiseSupressor;
- (double)transparencyNoiseSupressorForAddress:(id)arg1;
- (id)transparencyTone;
- (double)transparencyToneForAddress:(id)arg1;
- (void)updateConfiguration:(struct { bool x1; bool x2; id x3; id x4; id x5; id x6; }*)arg1 forRouteID:(id)arg2;
- (void)updateConfiguration:(struct { struct { unsigned char x_1_1_1; unsigned char x_1_1_2; } x1; float x2[8]; float x3[8]; }*)arg1 forRouteUID:(id)arg2;
- (id)valueForRouteUID:(id)arg1 fromCombinedValue:(id)arg2;

@end
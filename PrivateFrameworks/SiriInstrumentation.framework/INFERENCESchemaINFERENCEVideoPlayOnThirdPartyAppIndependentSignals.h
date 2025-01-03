/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals : SISchemaInstrumentationMessage {
    int  _bucketedDeviceMotionState;
    int  _clientHourOfDay;
    long long  _clientLanguage;
    long long  _clientLocale;
    long long  _clientRegion;
    int  _deviceClass;
    int  _deviceMotionState;
    struct { 
        unsigned int isDeviceLockStatus : 1; 
        unsigned int deviceMotionState : 1; 
        unsigned int intentType : 1; 
        unsigned int nowPlayingState : 1; 
        unsigned int deviceClass : 1; 
        unsigned int clientHourOfDay : 1; 
        unsigned int clientLocale : 1; 
        unsigned int clientLanguage : 1; 
        unsigned int clientRegion : 1; 
        unsigned int bucketedDeviceMotionState : 1; 
    }  _has;
    int  _intentType;
    bool  _isDeviceLockStatus;
    int  _nowPlayingState;
}

@property (nonatomic) int bucketedDeviceMotionState;
@property (nonatomic) int clientHourOfDay;
@property (nonatomic) long long clientLanguage;
@property (nonatomic) long long clientLocale;
@property (nonatomic) long long clientRegion;
@property (nonatomic) int deviceClass;
@property (nonatomic) int deviceMotionState;
@property (nonatomic) bool hasBucketedDeviceMotionState;
@property (nonatomic) bool hasClientHourOfDay;
@property (nonatomic) bool hasClientLanguage;
@property (nonatomic) bool hasClientLocale;
@property (nonatomic) bool hasClientRegion;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic) bool hasDeviceMotionState;
@property (nonatomic) bool hasIntentType;
@property (nonatomic) bool hasIsDeviceLockStatus;
@property (nonatomic) bool hasNowPlayingState;
@property (nonatomic) int intentType;
@property (nonatomic) bool isDeviceLockStatus;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int nowPlayingState;

- (int)bucketedDeviceMotionState;
- (int)clientHourOfDay;
- (long long)clientLanguage;
- (long long)clientLocale;
- (long long)clientRegion;
- (void)deleteBucketedDeviceMotionState;
- (void)deleteClientHourOfDay;
- (void)deleteClientLanguage;
- (void)deleteClientLocale;
- (void)deleteClientRegion;
- (void)deleteDeviceClass;
- (void)deleteDeviceMotionState;
- (void)deleteIntentType;
- (void)deleteIsDeviceLockStatus;
- (void)deleteNowPlayingState;
- (int)deviceClass;
- (int)deviceMotionState;
- (id)dictionaryRepresentation;
- (bool)hasBucketedDeviceMotionState;
- (bool)hasClientHourOfDay;
- (bool)hasClientLanguage;
- (bool)hasClientLocale;
- (bool)hasClientRegion;
- (bool)hasDeviceClass;
- (bool)hasDeviceMotionState;
- (bool)hasIntentType;
- (bool)hasIsDeviceLockStatus;
- (bool)hasNowPlayingState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)intentType;
- (bool)isDeviceLockStatus;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)nowPlayingState;
- (bool)readFrom:(id)arg1;
- (void)setBucketedDeviceMotionState:(int)arg1;
- (void)setClientHourOfDay:(int)arg1;
- (void)setClientLanguage:(long long)arg1;
- (void)setClientLocale:(long long)arg1;
- (void)setClientRegion:(long long)arg1;
- (void)setDeviceClass:(int)arg1;
- (void)setDeviceMotionState:(int)arg1;
- (void)setHasBucketedDeviceMotionState:(bool)arg1;
- (void)setHasClientHourOfDay:(bool)arg1;
- (void)setHasClientLanguage:(bool)arg1;
- (void)setHasClientLocale:(bool)arg1;
- (void)setHasClientRegion:(bool)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setHasDeviceMotionState:(bool)arg1;
- (void)setHasIntentType:(bool)arg1;
- (void)setHasIsDeviceLockStatus:(bool)arg1;
- (void)setHasNowPlayingState:(bool)arg1;
- (void)setIntentType:(int)arg1;
- (void)setIsDeviceLockStatus:(bool)arg1;
- (void)setNowPlayingState:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

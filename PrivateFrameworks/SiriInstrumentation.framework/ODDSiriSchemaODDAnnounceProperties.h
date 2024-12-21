/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDAnnounceProperties : SISchemaInstrumentationMessage {
    int  _carPlayStatus;
    struct { 
        unsigned int isAnnounceCallsEnabled : 1; 
        unsigned int isAnnounceNotificationsEnabled : 1; 
        unsigned int isProximityCardSeen : 1; 
        unsigned int isReplyWithoutConfirmationEnabled : 1; 
        unsigned int isEnabledForHeadphones : 1; 
        unsigned int isSpokenNotificationsControlCenterModuleEnabled : 1; 
        unsigned int isCarPlayMuted : 1; 
        unsigned int carPlayStatus : 1; 
    }  _has;
    bool  _isAnnounceCallsEnabled;
    bool  _isAnnounceNotificationsEnabled;
    bool  _isCarPlayMuted;
    bool  _isEnabledForHeadphones;
    bool  _isProximityCardSeen;
    bool  _isReplyWithoutConfirmationEnabled;
    bool  _isSpokenNotificationsControlCenterModuleEnabled;
}

@property (nonatomic) int carPlayStatus;
@property (nonatomic) bool hasCarPlayStatus;
@property (nonatomic) bool hasIsAnnounceCallsEnabled;
@property (nonatomic) bool hasIsAnnounceNotificationsEnabled;
@property (nonatomic) bool hasIsCarPlayMuted;
@property (nonatomic) bool hasIsEnabledForHeadphones;
@property (nonatomic) bool hasIsProximityCardSeen;
@property (nonatomic) bool hasIsReplyWithoutConfirmationEnabled;
@property (nonatomic) bool hasIsSpokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) bool isAnnounceCallsEnabled;
@property (nonatomic) bool isAnnounceNotificationsEnabled;
@property (nonatomic) bool isCarPlayMuted;
@property (nonatomic) bool isEnabledForHeadphones;
@property (nonatomic) bool isProximityCardSeen;
@property (nonatomic) bool isReplyWithoutConfirmationEnabled;
@property (nonatomic) bool isSpokenNotificationsControlCenterModuleEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (int)carPlayStatus;
- (void)deleteCarPlayStatus;
- (void)deleteIsAnnounceCallsEnabled;
- (void)deleteIsAnnounceNotificationsEnabled;
- (void)deleteIsCarPlayMuted;
- (void)deleteIsEnabledForHeadphones;
- (void)deleteIsProximityCardSeen;
- (void)deleteIsReplyWithoutConfirmationEnabled;
- (void)deleteIsSpokenNotificationsControlCenterModuleEnabled;
- (id)dictionaryRepresentation;
- (bool)hasCarPlayStatus;
- (bool)hasIsAnnounceCallsEnabled;
- (bool)hasIsAnnounceNotificationsEnabled;
- (bool)hasIsCarPlayMuted;
- (bool)hasIsEnabledForHeadphones;
- (bool)hasIsProximityCardSeen;
- (bool)hasIsReplyWithoutConfirmationEnabled;
- (bool)hasIsSpokenNotificationsControlCenterModuleEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAnnounceCallsEnabled;
- (bool)isAnnounceNotificationsEnabled;
- (bool)isCarPlayMuted;
- (bool)isEnabledForHeadphones;
- (bool)isEqual:(id)arg1;
- (bool)isProximityCardSeen;
- (bool)isReplyWithoutConfirmationEnabled;
- (bool)isSpokenNotificationsControlCenterModuleEnabled;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCarPlayStatus:(int)arg1;
- (void)setHasCarPlayStatus:(bool)arg1;
- (void)setHasIsAnnounceCallsEnabled:(bool)arg1;
- (void)setHasIsAnnounceNotificationsEnabled:(bool)arg1;
- (void)setHasIsCarPlayMuted:(bool)arg1;
- (void)setHasIsEnabledForHeadphones:(bool)arg1;
- (void)setHasIsProximityCardSeen:(bool)arg1;
- (void)setHasIsReplyWithoutConfirmationEnabled:(bool)arg1;
- (void)setHasIsSpokenNotificationsControlCenterModuleEnabled:(bool)arg1;
- (void)setIsAnnounceCallsEnabled:(bool)arg1;
- (void)setIsAnnounceNotificationsEnabled:(bool)arg1;
- (void)setIsCarPlayMuted:(bool)arg1;
- (void)setIsEnabledForHeadphones:(bool)arg1;
- (void)setIsProximityCardSeen:(bool)arg1;
- (void)setIsReplyWithoutConfirmationEnabled:(bool)arg1;
- (void)setIsSpokenNotificationsControlCenterModuleEnabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
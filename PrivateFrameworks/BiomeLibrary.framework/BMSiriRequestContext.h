/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSiriRequestContext : BMEventBase <BMStoreData> {
    bool  _allowUserGeneratedContent;
    NSArray * _bargeInModes;
    bool  _censorSpeech;
    BMSiriRequestContextContentRestriction * _contentRestrictions;
    NSString * _countryCode;
    unsigned int  _dataVersion;
    int  _deviceIdiom;
    NSArray * _deviceRestrictions;
    bool  _didPSCFire;
    NSData * _encodedLocation;
    bool  _hasAllowUserGeneratedContent;
    bool  _hasCensorSpeech;
    bool  _hasDidPSCFire;
    bool  _hasIsEyesFree;
    bool  _hasIsMultiUser;
    bool  _hasIsTextToSpeechEnabled;
    bool  _hasIsTriggerlessFollowup;
    bool  _hasIsVoiceTriggerEnabled;
    bool  _hasUiScale;
    BMSiriRequestContextUser * _identifiedUser;
    NSString * _inputOrigin;
    bool  _isEyesFree;
    bool  _isMultiUser;
    bool  _isTextToSpeechEnabled;
    bool  _isTriggerlessFollowup;
    bool  _isVoiceTriggerEnabled;
    BMSiriRequestContextMeCard * _meCard;
    NSString * _requestID;
    NSString * _responseMode;
    NSString * _sessionID;
    NSString * _siriLocale;
    NSString * _temperatureUnit;
    double  _uiScale;
}

@property (nonatomic, readonly) bool allowUserGeneratedContent;
@property (nonatomic, readonly) NSArray *bargeInModes;
@property (nonatomic, readonly) bool censorSpeech;
@property (nonatomic, readonly) BMSiriRequestContextContentRestriction *contentRestrictions;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceIdiom;
@property (nonatomic, readonly) NSArray *deviceRestrictions;
@property (nonatomic, readonly) bool didPSCFire;
@property (nonatomic, readonly) NSData *encodedLocation;
@property (nonatomic) bool hasAllowUserGeneratedContent;
@property (nonatomic) bool hasCensorSpeech;
@property (nonatomic) bool hasDidPSCFire;
@property (nonatomic) bool hasIsEyesFree;
@property (nonatomic) bool hasIsMultiUser;
@property (nonatomic) bool hasIsTextToSpeechEnabled;
@property (nonatomic) bool hasIsTriggerlessFollowup;
@property (nonatomic) bool hasIsVoiceTriggerEnabled;
@property (nonatomic) bool hasUiScale;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMSiriRequestContextUser *identifiedUser;
@property (nonatomic, readonly) NSString *inputOrigin;
@property (nonatomic, readonly) bool isEyesFree;
@property (nonatomic, readonly) bool isMultiUser;
@property (nonatomic, readonly) bool isTextToSpeechEnabled;
@property (nonatomic, readonly) bool isTriggerlessFollowup;
@property (nonatomic, readonly) bool isVoiceTriggerEnabled;
@property (nonatomic, readonly) BMSiriRequestContextMeCard *meCard;
@property (nonatomic, readonly) NSString *requestID;
@property (nonatomic, readonly) NSString *responseMode;
@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) NSString *siriLocale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *temperatureUnit;
@property (nonatomic, readonly) double uiScale;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_bargeInModesJSONArray;
- (id)_deviceRestrictionsJSONArray;
- (bool)allowUserGeneratedContent;
- (id)bargeInModes;
- (bool)censorSpeech;
- (id)contentRestrictions;
- (id)countryCode;
- (unsigned int)dataVersion;
- (id)description;
- (int)deviceIdiom;
- (id)deviceRestrictions;
- (bool)didPSCFire;
- (id)encodedLocation;
- (bool)hasAllowUserGeneratedContent;
- (bool)hasCensorSpeech;
- (bool)hasDidPSCFire;
- (bool)hasIsEyesFree;
- (bool)hasIsMultiUser;
- (bool)hasIsTextToSpeechEnabled;
- (bool)hasIsTriggerlessFollowup;
- (bool)hasIsVoiceTriggerEnabled;
- (bool)hasUiScale;
- (id)identifiedUser;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSessionID:(id)arg1 requestID:(id)arg2 inputOrigin:(id)arg3 responseMode:(id)arg4 isEyesFree:(id)arg5 isMultiUser:(id)arg6 isVoiceTriggerEnabled:(id)arg7 isTextToSpeechEnabled:(id)arg8 isTriggerlessFollowup:(id)arg9 deviceRestrictions:(id)arg10 bargeInModes:(id)arg11 identifiedUser:(id)arg12 encodedLocation:(id)arg13 countryCode:(id)arg14 siriLocale:(id)arg15 contentRestrictions:(id)arg16 uiScale:(id)arg17 temperatureUnit:(id)arg18 allowUserGeneratedContent:(id)arg19 censorSpeech:(id)arg20 meCard:(id)arg21;
- (id)initWithSessionID:(id)arg1 requestID:(id)arg2 inputOrigin:(id)arg3 responseMode:(id)arg4 isEyesFree:(id)arg5 isMultiUser:(id)arg6 isVoiceTriggerEnabled:(id)arg7 isTextToSpeechEnabled:(id)arg8 isTriggerlessFollowup:(id)arg9 deviceRestrictions:(id)arg10 bargeInModes:(id)arg11 identifiedUser:(id)arg12 encodedLocation:(id)arg13 countryCode:(id)arg14 siriLocale:(id)arg15 contentRestrictions:(id)arg16 uiScale:(id)arg17 temperatureUnit:(id)arg18 allowUserGeneratedContent:(id)arg19 censorSpeech:(id)arg20 meCard:(id)arg21 deviceIdiom:(int)arg22 didPSCFire:(id)arg23;
- (id)inputOrigin;
- (bool)isEqual:(id)arg1;
- (bool)isEyesFree;
- (bool)isMultiUser;
- (bool)isTextToSpeechEnabled;
- (bool)isTriggerlessFollowup;
- (bool)isVoiceTriggerEnabled;
- (id)jsonDictionary;
- (id)meCard;
- (id)requestID;
- (id)responseMode;
- (id)serialize;
- (id)sessionID;
- (void)setHasAllowUserGeneratedContent:(bool)arg1;
- (void)setHasCensorSpeech:(bool)arg1;
- (void)setHasDidPSCFire:(bool)arg1;
- (void)setHasIsEyesFree:(bool)arg1;
- (void)setHasIsMultiUser:(bool)arg1;
- (void)setHasIsTextToSpeechEnabled:(bool)arg1;
- (void)setHasIsTriggerlessFollowup:(bool)arg1;
- (void)setHasIsVoiceTriggerEnabled:(bool)arg1;
- (void)setHasUiScale:(bool)arg1;
- (id)siriLocale;
- (id)temperatureUnit;
- (double)uiScale;
- (void)writeTo:(id)arg1;

@end

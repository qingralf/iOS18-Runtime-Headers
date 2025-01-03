/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPrivateMediaIntentData : PBCodable <NSCopying, NSSecureCoding, _INPBPrivateMediaIntentData> {
    int  _asrConfidenceLevel;
    float  _asrConfidenceScore;
    _INPBString * _fallbackUsername;
    struct { 
        unsigned int asrConfidenceLevel : 1; 
        unsigned int asrConfidenceScore : 1; 
        unsigned int isAppAttributionRequired : 1; 
        unsigned int isAppCorrection : 1; 
        unsigned int nlConfidenceLevel : 1; 
        unsigned int nlConfidenceScore : 1; 
        unsigned int useDialogMemoryForAttribution : 1; 
    }  _has;
    _INPBHomeAutomationEntityProvider * _homeAutomationEntityProvider;
    bool  _isAppAttributionRequired;
    bool  _isAppCorrection;
    int  _nlConfidenceLevel;
    float  _nlConfidenceScore;
    _INPBAppIdentifier * _proxiedThirdPartyAppInfo;
    _INPBString * _resolvedSharedUserID;
    _INPBSpeakerIDInfo * _speakerIDInfo;
    bool  _useDialogMemoryForAttribution;
    _INPBWholeHouseAudioMetadata * _wholeHouseAudioMetadata;
}

@property (nonatomic) int asrConfidenceLevel;
@property (nonatomic) float asrConfidenceScore;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBString *fallbackUsername;
@property (nonatomic) bool hasAsrConfidenceLevel;
@property (nonatomic) bool hasAsrConfidenceScore;
@property (nonatomic, readonly) bool hasFallbackUsername;
@property (nonatomic, readonly) bool hasHomeAutomationEntityProvider;
@property (nonatomic) bool hasIsAppAttributionRequired;
@property (nonatomic) bool hasIsAppCorrection;
@property (nonatomic) bool hasNlConfidenceLevel;
@property (nonatomic) bool hasNlConfidenceScore;
@property (nonatomic, readonly) bool hasProxiedThirdPartyAppInfo;
@property (nonatomic, readonly) bool hasResolvedSharedUserID;
@property (nonatomic, readonly) bool hasSpeakerIDInfo;
@property (nonatomic) bool hasUseDialogMemoryForAttribution;
@property (nonatomic, readonly) bool hasWholeHouseAudioMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBHomeAutomationEntityProvider *homeAutomationEntityProvider;
@property (nonatomic) bool isAppAttributionRequired;
@property (nonatomic) bool isAppCorrection;
@property (nonatomic) int nlConfidenceLevel;
@property (nonatomic) float nlConfidenceScore;
@property (nonatomic, retain) _INPBAppIdentifier *proxiedThirdPartyAppInfo;
@property (nonatomic, retain) _INPBString *resolvedSharedUserID;
@property (nonatomic, retain) _INPBSpeakerIDInfo *speakerIDInfo;
@property (readonly) Class superclass;
@property (nonatomic) bool useDialogMemoryForAttribution;
@property (nonatomic, retain) _INPBWholeHouseAudioMetadata *wholeHouseAudioMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAsrConfidenceLevel:(id)arg1;
- (int)StringAsNlConfidenceLevel:(id)arg1;
- (int)asrConfidenceLevel;
- (id)asrConfidenceLevelAsString:(int)arg1;
- (float)asrConfidenceScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackUsername;
- (bool)hasAsrConfidenceLevel;
- (bool)hasAsrConfidenceScore;
- (bool)hasFallbackUsername;
- (bool)hasHomeAutomationEntityProvider;
- (bool)hasIsAppAttributionRequired;
- (bool)hasIsAppCorrection;
- (bool)hasNlConfidenceLevel;
- (bool)hasNlConfidenceScore;
- (bool)hasProxiedThirdPartyAppInfo;
- (bool)hasResolvedSharedUserID;
- (bool)hasSpeakerIDInfo;
- (bool)hasUseDialogMemoryForAttribution;
- (bool)hasWholeHouseAudioMetadata;
- (unsigned long long)hash;
- (id)homeAutomationEntityProvider;
- (id)initWithCoder:(id)arg1;
- (bool)isAppAttributionRequired;
- (bool)isAppCorrection;
- (bool)isEqual:(id)arg1;
- (int)nlConfidenceLevel;
- (id)nlConfidenceLevelAsString:(int)arg1;
- (float)nlConfidenceScore;
- (id)proxiedThirdPartyAppInfo;
- (bool)readFrom:(id)arg1;
- (id)resolvedSharedUserID;
- (void)setAsrConfidenceLevel:(int)arg1;
- (void)setAsrConfidenceScore:(float)arg1;
- (void)setFallbackUsername:(id)arg1;
- (void)setHasAsrConfidenceLevel:(bool)arg1;
- (void)setHasAsrConfidenceScore:(bool)arg1;
- (void)setHasIsAppAttributionRequired:(bool)arg1;
- (void)setHasIsAppCorrection:(bool)arg1;
- (void)setHasNlConfidenceLevel:(bool)arg1;
- (void)setHasNlConfidenceScore:(bool)arg1;
- (void)setHasUseDialogMemoryForAttribution:(bool)arg1;
- (void)setHomeAutomationEntityProvider:(id)arg1;
- (void)setIsAppAttributionRequired:(bool)arg1;
- (void)setIsAppCorrection:(bool)arg1;
- (void)setNlConfidenceLevel:(int)arg1;
- (void)setNlConfidenceScore:(float)arg1;
- (void)setProxiedThirdPartyAppInfo:(id)arg1;
- (void)setResolvedSharedUserID:(id)arg1;
- (void)setSpeakerIDInfo:(id)arg1;
- (void)setUseDialogMemoryForAttribution:(bool)arg1;
- (void)setWholeHouseAudioMetadata:(id)arg1;
- (id)speakerIDInfo;
- (bool)useDialogMemoryForAttribution;
- (id)wholeHouseAudioMetadata;
- (void)writeTo:(id)arg1;

@end

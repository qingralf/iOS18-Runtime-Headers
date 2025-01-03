/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPrivateSearchForMediaIntentData : PBCodable <NSCopying, NSSecureCoding, _INPBPrivateSearchForMediaIntentData> {
    bool  _appInferred;
    NSArray * _audioSearchResults;
    struct { 
        unsigned int appInferred : 1; 
    }  _has;
    NSArray * _internalSignals;
    NSData * _pegasusMetaData;
    _INPBPrivateMediaIntentData * _privateMediaIntentData;
}

@property (nonatomic) bool appInferred;
@property (nonatomic, copy) NSArray *audioSearchResults;
@property (nonatomic, readonly) unsigned long long audioSearchResultsCount;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAppInferred;
@property (nonatomic, readonly) bool hasPegasusMetaData;
@property (nonatomic, readonly) bool hasPrivateMediaIntentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *internalSignals;
@property (nonatomic, readonly) unsigned long long internalSignalsCount;
@property (nonatomic, copy) NSData *pegasusMetaData;
@property (nonatomic, retain) _INPBPrivateMediaIntentData *privateMediaIntentData;
@property (readonly) Class superclass;

+ (Class)audioSearchResultsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAudioSearchResults:(id)arg1;
- (void)addInternalSignal:(id)arg1;
- (bool)appInferred;
- (id)audioSearchResults;
- (id)audioSearchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioSearchResultsCount;
- (void)clearAudioSearchResults;
- (void)clearInternalSignals;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAppInferred;
- (bool)hasPegasusMetaData;
- (bool)hasPrivateMediaIntentData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)internalSignalAtIndex:(unsigned long long)arg1;
- (id)internalSignals;
- (unsigned long long)internalSignalsCount;
- (bool)isEqual:(id)arg1;
- (id)pegasusMetaData;
- (id)privateMediaIntentData;
- (bool)readFrom:(id)arg1;
- (void)setAppInferred:(bool)arg1;
- (void)setAudioSearchResults:(id)arg1;
- (void)setHasAppInferred:(bool)arg1;
- (void)setInternalSignals:(id)arg1;
- (void)setPegasusMetaData:(id)arg1;
- (void)setPrivateMediaIntentData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

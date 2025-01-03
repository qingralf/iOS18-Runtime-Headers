/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPrivateMediaItemValueData : PBCodable <NSCopying, NSSecureCoding, _INPBPrivateMediaItemValueData> {
    int  _ampConfidenceLevel;
    float  _ampConfidenceScore;
    NSString * _assetInfo;
    NSString * _bundleId;
    struct { 
        unsigned int ampConfidenceLevel : 1; 
        unsigned int ampConfidenceScore : 1; 
        unsigned int isAvailable : 1; 
        unsigned int isHardBan : 1; 
        unsigned int requiresSubscription : 1; 
    }  _has;
    NSArray * _internalSignals;
    bool  _isAvailable;
    bool  _isHardBan;
    NSArray * _mediaSubItems;
    NSData * _pegasusMetaData;
    NSString * _provider;
    NSString * _providerAppName;
    NSString * _punchoutURI;
    NSString * _recommendationId;
    bool  _requiresSubscription;
    NSString * _sharedUserIdFromPlayableMusicAccount;
    NSString * _universalResourceLink;
}

@property (nonatomic) int ampConfidenceLevel;
@property (nonatomic) float ampConfidenceScore;
@property (nonatomic, copy) NSString *assetInfo;
@property (nonatomic, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAmpConfidenceLevel;
@property (nonatomic) bool hasAmpConfidenceScore;
@property (nonatomic, readonly) bool hasAssetInfo;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasIsAvailable;
@property (nonatomic) bool hasIsHardBan;
@property (nonatomic, readonly) bool hasPegasusMetaData;
@property (nonatomic, readonly) bool hasProvider;
@property (nonatomic, readonly) bool hasProviderAppName;
@property (nonatomic, readonly) bool hasPunchoutURI;
@property (nonatomic, readonly) bool hasRecommendationId;
@property (nonatomic) bool hasRequiresSubscription;
@property (nonatomic, readonly) bool hasSharedUserIdFromPlayableMusicAccount;
@property (nonatomic, readonly) bool hasUniversalResourceLink;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *internalSignals;
@property (nonatomic, readonly) unsigned long long internalSignalsCount;
@property (nonatomic) bool isAvailable;
@property (nonatomic) bool isHardBan;
@property (nonatomic, copy) NSArray *mediaSubItems;
@property (nonatomic, readonly) unsigned long long mediaSubItemsCount;
@property (nonatomic, copy) NSData *pegasusMetaData;
@property (nonatomic, copy) NSString *provider;
@property (nonatomic, copy) NSString *providerAppName;
@property (nonatomic, copy) NSString *punchoutURI;
@property (nonatomic, copy) NSString *recommendationId;
@property (nonatomic) bool requiresSubscription;
@property (nonatomic, copy) NSString *sharedUserIdFromPlayableMusicAccount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *universalResourceLink;

+ (Class)mediaSubItemsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAmpConfidenceLevel:(id)arg1;
- (void)addInternalSignal:(id)arg1;
- (void)addMediaSubItems:(id)arg1;
- (int)ampConfidenceLevel;
- (id)ampConfidenceLevelAsString:(int)arg1;
- (float)ampConfidenceScore;
- (id)assetInfo;
- (id)bundleId;
- (void)clearInternalSignals;
- (void)clearMediaSubItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAmpConfidenceLevel;
- (bool)hasAmpConfidenceScore;
- (bool)hasAssetInfo;
- (bool)hasBundleId;
- (bool)hasIsAvailable;
- (bool)hasIsHardBan;
- (bool)hasPegasusMetaData;
- (bool)hasProvider;
- (bool)hasProviderAppName;
- (bool)hasPunchoutURI;
- (bool)hasRecommendationId;
- (bool)hasRequiresSubscription;
- (bool)hasSharedUserIdFromPlayableMusicAccount;
- (bool)hasUniversalResourceLink;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)internalSignalAtIndex:(unsigned long long)arg1;
- (id)internalSignals;
- (unsigned long long)internalSignalsCount;
- (bool)isAvailable;
- (bool)isEqual:(id)arg1;
- (bool)isHardBan;
- (id)mediaSubItems;
- (id)mediaSubItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaSubItemsCount;
- (id)pegasusMetaData;
- (id)provider;
- (id)providerAppName;
- (id)punchoutURI;
- (bool)readFrom:(id)arg1;
- (id)recommendationId;
- (bool)requiresSubscription;
- (void)setAmpConfidenceLevel:(int)arg1;
- (void)setAmpConfidenceScore:(float)arg1;
- (void)setAssetInfo:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasAmpConfidenceLevel:(bool)arg1;
- (void)setHasAmpConfidenceScore:(bool)arg1;
- (void)setHasIsAvailable:(bool)arg1;
- (void)setHasIsHardBan:(bool)arg1;
- (void)setHasRequiresSubscription:(bool)arg1;
- (void)setInternalSignals:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setIsHardBan:(bool)arg1;
- (void)setMediaSubItems:(id)arg1;
- (void)setPegasusMetaData:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setProviderAppName:(id)arg1;
- (void)setPunchoutURI:(id)arg1;
- (void)setRecommendationId:(id)arg1;
- (void)setRequiresSubscription:(bool)arg1;
- (void)setSharedUserIdFromPlayableMusicAccount:(id)arg1;
- (void)setUniversalResourceLink:(id)arg1;
- (id)sharedUserIdFromPlayableMusicAccount;
- (id)universalResourceLink;
- (void)writeTo:(id)arg1;

@end

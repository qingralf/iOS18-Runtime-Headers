/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMMessagesSharedWithYouFeedbackRankableSocialHighlight : BMEventBase <BMStoreData> {
    NSArray * _applicationIdentifiers;
    NSString * _attributionIdentifier;
    NSString * _batchIdentifier;
    NSArray * _calculatedFeatures;
    NSString * _clientIdentifier;
    NSString * _clientVariant;
    double  _contentCreationSecondsSinceReferenceDate;
    unsigned int  _dataVersion;
    NSString * _displayName;
    NSString * _domainIdentifier;
    NSString * _groupPhotoPathDigest;
    bool  _hasContentCreationSecondsSinceReferenceDate;
    bool  _hasIsConversationAutoDonating;
    bool  _hasIsPrimary;
    bool  _hasRank;
    bool  _hasRankingSecondsSinceReferenceDate;
    bool  _hasScore;
    bool  _hasSyndicationSecondsSinceReferenceDate;
    NSString * _highlightIdentifier;
    int  _highlightType;
    bool  _isConversationAutoDonating;
    bool  _isPrimary;
    NSString * _originatingDeviceId;
    unsigned int  _rank;
    double  _rankingSecondsSinceReferenceDate;
    NSString * _resolvedUrl;
    NSString * _resourceURL;
    double  _score;
    BMMessagesSharedWithYouFeedbackRankableSocialHighlightContact * _sender;
    NSString * _sourceBundleID;
    double  _syndicationSecondsSinceReferenceDate;
}

@property (nonatomic, readonly) NSArray *applicationIdentifiers;
@property (nonatomic, readonly) NSString *attributionIdentifier;
@property (nonatomic, readonly) NSString *batchIdentifier;
@property (nonatomic, readonly) NSArray *calculatedFeatures;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientVariant;
@property (nonatomic, readonly) double contentCreationSecondsSinceReferenceDate;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) NSString *groupPhotoPathDigest;
@property (nonatomic) bool hasContentCreationSecondsSinceReferenceDate;
@property (nonatomic) bool hasIsConversationAutoDonating;
@property (nonatomic) bool hasIsPrimary;
@property (nonatomic) bool hasRank;
@property (nonatomic) bool hasRankingSecondsSinceReferenceDate;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasSyndicationSecondsSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *highlightIdentifier;
@property (nonatomic, readonly) int highlightType;
@property (nonatomic, readonly) bool isConversationAutoDonating;
@property (nonatomic, readonly) bool isPrimary;
@property (nonatomic, readonly) NSString *originatingDeviceId;
@property (nonatomic, readonly) unsigned int rank;
@property (nonatomic, readonly) double rankingSecondsSinceReferenceDate;
@property (nonatomic, readonly) NSString *resolvedUrl;
@property (nonatomic, readonly) NSString *resourceURL;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) BMMessagesSharedWithYouFeedbackRankableSocialHighlightContact *sender;
@property (nonatomic, readonly) NSString *sourceBundleID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double syndicationSecondsSinceReferenceDate;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_applicationIdentifiersJSONArray;
- (id)_calculatedFeaturesJSONArray;
- (id)applicationIdentifiers;
- (id)attributionIdentifier;
- (id)batchIdentifier;
- (id)calculatedFeatures;
- (id)clientIdentifier;
- (id)clientVariant;
- (double)contentCreationSecondsSinceReferenceDate;
- (unsigned int)dataVersion;
- (id)description;
- (id)displayName;
- (id)domainIdentifier;
- (id)groupPhotoPathDigest;
- (bool)hasContentCreationSecondsSinceReferenceDate;
- (bool)hasIsConversationAutoDonating;
- (bool)hasIsPrimary;
- (bool)hasRank;
- (bool)hasRankingSecondsSinceReferenceDate;
- (bool)hasScore;
- (bool)hasSyndicationSecondsSinceReferenceDate;
- (id)highlightIdentifier;
- (int)highlightType;
- (id)initByReadFrom:(id)arg1;
- (id)initWithHighlightIdentifier:(id)arg1 highlightType:(int)arg2 syndicationSecondsSinceReferenceDate:(id)arg3 sourceBundleID:(id)arg4 applicationIdentifiers:(id)arg5 resourceURL:(id)arg6 sender:(id)arg7 domainIdentifier:(id)arg8 batchIdentifier:(id)arg9 calculatedFeatures:(id)arg10 clientIdentifier:(id)arg11 contentCreationSecondsSinceReferenceDate:(id)arg12 groupPhotoPathDigest:(id)arg13 displayName:(id)arg14 isPrimary:(id)arg15 attributionIdentifier:(id)arg16 rank:(id)arg17 score:(id)arg18 isConversationAutoDonating:(id)arg19 originatingDeviceId:(id)arg20 rankingSecondsSinceReferenceDate:(id)arg21 resolvedUrl:(id)arg22 clientVariant:(id)arg23;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isConversationAutoDonating;
- (bool)isEqual:(id)arg1;
- (bool)isPrimary;
- (id)jsonDictionary;
- (id)originatingDeviceId;
- (unsigned int)rank;
- (double)rankingSecondsSinceReferenceDate;
- (id)resolvedUrl;
- (id)resourceURL;
- (double)score;
- (id)sender;
- (id)serialize;
- (void)setHasContentCreationSecondsSinceReferenceDate:(bool)arg1;
- (void)setHasIsConversationAutoDonating:(bool)arg1;
- (void)setHasIsPrimary:(bool)arg1;
- (void)setHasRank:(bool)arg1;
- (void)setHasRankingSecondsSinceReferenceDate:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasSyndicationSecondsSinceReferenceDate:(bool)arg1;
- (id)sourceBundleID;
- (double)syndicationSecondsSinceReferenceDate;
- (void)writeTo:(id)arg1;

@end

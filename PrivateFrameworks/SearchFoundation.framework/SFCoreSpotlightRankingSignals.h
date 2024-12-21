/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCoreSpotlightRankingSignals : NSObject <NSCopying, NSSecureCoding, SFCoreSpotlightRankingSignals> {
    int  _embeddingStatus;
    NSNumber * _engagementScore;
    NSNumber * _freshness;
    struct { 
        unsigned int wasNominatedAsTopHit : 1; 
        unsigned int isExactMatchOfLaunchString : 1; 
        unsigned int wasEngagedInSpotlight : 1; 
        unsigned int resultQueryRecency : 1; 
        unsigned int isSemanticMatch : 1; 
        unsigned int isSyntacticMatch : 1; 
        unsigned int embeddingStatus : 1; 
        unsigned int itemAgeInDays : 1; 
    }  _has;
    bool  _isExactMatchOfLaunchString;
    bool  _isSemanticMatch;
    bool  _isSyntacticMatch;
    unsigned long long  _itemAgeInDays;
    NSNumber * _pommesL2Score;
    NSNumber * _predictedLikelihoodOfEngagement;
    int  _resultQueryRecency;
    NSNumber * _semanticScore;
    NSNumber * _sodiumL2Score;
    NSNumber * _syntacticScore;
    NSNumber * _topicalityScore;
    bool  _wasEngagedInSpotlight;
    bool  _wasNominatedAsTopHit;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int embeddingStatus;
@property (nonatomic, copy) NSNumber *engagementScore;
@property (nonatomic, copy) NSNumber *freshness;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExactMatchOfLaunchString;
@property (nonatomic) bool isSemanticMatch;
@property (nonatomic) bool isSyntacticMatch;
@property (nonatomic) unsigned long long itemAgeInDays;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSNumber *pommesL2Score;
@property (nonatomic, copy) NSNumber *predictedLikelihoodOfEngagement;
@property (nonatomic) int resultQueryRecency;
@property (nonatomic, copy) NSNumber *semanticScore;
@property (nonatomic, copy) NSNumber *sodiumL2Score;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *syntacticScore;
@property (nonatomic, copy) NSNumber *topicalityScore;
@property (nonatomic) bool wasEngagedInSpotlight;
@property (nonatomic) bool wasNominatedAsTopHit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (int)embeddingStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementScore;
- (id)freshness;
- (bool)hasEmbeddingStatus;
- (bool)hasIsExactMatchOfLaunchString;
- (bool)hasIsSemanticMatch;
- (bool)hasIsSyntacticMatch;
- (bool)hasItemAgeInDays;
- (bool)hasResultQueryRecency;
- (bool)hasWasEngagedInSpotlight;
- (bool)hasWasNominatedAsTopHit;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExactMatchOfLaunchString;
- (bool)isSemanticMatch;
- (bool)isSyntacticMatch;
- (unsigned long long)itemAgeInDays;
- (id)jsonData;
- (id)pommesL2Score;
- (id)predictedLikelihoodOfEngagement;
- (int)resultQueryRecency;
- (id)semanticScore;
- (void)setEmbeddingStatus:(int)arg1;
- (void)setEngagementScore:(id)arg1;
- (void)setFreshness:(id)arg1;
- (void)setIsExactMatchOfLaunchString:(bool)arg1;
- (void)setIsSemanticMatch:(bool)arg1;
- (void)setIsSyntacticMatch:(bool)arg1;
- (void)setItemAgeInDays:(unsigned long long)arg1;
- (void)setPommesL2Score:(id)arg1;
- (void)setPredictedLikelihoodOfEngagement:(id)arg1;
- (void)setResultQueryRecency:(int)arg1;
- (void)setSemanticScore:(id)arg1;
- (void)setSodiumL2Score:(id)arg1;
- (void)setSyntacticScore:(id)arg1;
- (void)setTopicalityScore:(id)arg1;
- (void)setWasEngagedInSpotlight:(bool)arg1;
- (void)setWasNominatedAsTopHit:(bool)arg1;
- (id)sodiumL2Score;
- (id)syntacticScore;
- (id)topicalityScore;
- (bool)wasEngagedInSpotlight;
- (bool)wasNominatedAsTopHit;

@end
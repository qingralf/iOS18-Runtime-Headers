/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface INFERENCESchemaINFERENCEContactSignalSet : SISchemaInstrumentationMessage {
    bool  _areAllPrimaryContactTokensInQuery;
    bool  _areAllQueryTokensInContact;
    bool  _areQueryDiacriticsRemoved;
    float  _fractionOfCommunalDevicesMatchingCandidate;
    NSArray * _handlesWithPrivacySignalSets;
    struct { 
        unsigned int isQueryStrippedOfTitles : 1; 
        unsigned int isSuggestedContact : 1; 
        unsigned int areAllQueryTokensInContact : 1; 
        unsigned int areAllPrimaryContactTokensInQuery : 1; 
        unsigned int isHypocorism : 1; 
        unsigned int hasSuggestedProperties : 1; 
        unsigned int isPartialNameMatch : 1; 
        unsigned int isFromStandardSearch : 1; 
        unsigned int isFromNLXSearch : 1; 
        unsigned int isFromSRRSearch : 1; 
        unsigned int nlxScore : 1; 
        unsigned int srrScore : 1; 
        unsigned int isRecent : 1; 
        unsigned int isRecentInSameDomain : 1; 
        unsigned int isRecentInSiriRequest : 1; 
        unsigned int isRecentlyCorrected : 1; 
        unsigned int recencyRank : 1; 
        unsigned int recencyRankInSameDomain : 1; 
        unsigned int recencyRankInSiriRequest : 1; 
        unsigned int isMeCard : 1; 
        unsigned int isMeCardRelation : 1; 
        unsigned int isMeCardRelationExactMatch : 1; 
        unsigned int isRelationAlias : 1; 
        unsigned int areQueryDiacriticsRemoved : 1; 
        unsigned int isQueryNameDerivedFromRelationshipLabel : 1; 
        unsigned int isQueryRelationshipLabelDerivedFromName : 1; 
        unsigned int isThirdPartyMatch : 1; 
        unsigned int isFavorite : 1; 
        unsigned int isTransliterated : 1; 
        unsigned int hasHandleWithPreferredType : 1; 
        unsigned int hasHandleWithAllowedType : 1; 
        unsigned int isCommunalRequest : 1; 
        unsigned int fractionOfCommunalDevicesMatchingCandidate : 1; 
        unsigned int isPlusSignal : 1; 
        unsigned int isOnlyCandidate : 1; 
        unsigned int isQueryNormalized : 1; 
        unsigned int isQueryStrippedOfPunctuation : 1; 
        unsigned int isQueryStrippedOfWhitespace : 1; 
        unsigned int isQueryStrippedOfSymbols : 1; 
        unsigned int isAsrE3Signal : 1; 
    }  _has;
    bool  _hasHandleWithAllowedType;
    bool  _hasHandleWithPreferredType;
    bool  _hasHistoryStats;
    bool  _hasHistoryStatsInSameDomain;
    bool  _hasHistoryStatsInSiriRequests;
    bool  _hasRequestMatchSignalSet;
    bool  _hasSpeechAlternativeRanks;
    bool  _hasSuggestedProperties;
    bool  _hasThirdPartyAppBundleId;
    INFERENCESchemaINFERENCEPrivatizedHistoryStats * _historyStats;
    INFERENCESchemaINFERENCEPrivatizedHistoryStats * _historyStatsInSameDomain;
    INFERENCESchemaINFERENCEPrivatizedHistoryStats * _historyStatsInSiriRequests;
    bool  _isAsrE3Signal;
    bool  _isCommunalRequest;
    bool  _isFavorite;
    bool  _isFromNLXSearch;
    bool  _isFromSRRSearch;
    bool  _isFromStandardSearch;
    bool  _isHypocorism;
    bool  _isMeCard;
    bool  _isMeCardRelation;
    bool  _isMeCardRelationExactMatch;
    bool  _isOnlyCandidate;
    bool  _isPartialNameMatch;
    bool  _isPlusSignal;
    bool  _isQueryNameDerivedFromRelationshipLabel;
    bool  _isQueryNormalized;
    bool  _isQueryRelationshipLabelDerivedFromName;
    bool  _isQueryStrippedOfPunctuation;
    bool  _isQueryStrippedOfSymbols;
    bool  _isQueryStrippedOfTitles;
    bool  _isQueryStrippedOfWhitespace;
    bool  _isRecent;
    bool  _isRecentInSameDomain;
    bool  _isRecentInSiriRequest;
    bool  _isRecentlyCorrected;
    bool  _isRelationAlias;
    bool  _isSuggestedContact;
    bool  _isThirdPartyMatch;
    bool  _isTransliterated;
    float  _nlxScore;
    int  _recencyRank;
    int  _recencyRankInSameDomain;
    int  _recencyRankInSiriRequest;
    INFERENCESchemaINFERENCERequestMatchSignalSet * _requestMatchSignalSet;
    INFERENCESchemaINFERENCESpeechAlternativeRanks * _speechAlternativeRanks;
    float  _srrScore;
    NSString * _thirdPartyAppBundleId;
}

@property (nonatomic) bool areAllPrimaryContactTokensInQuery;
@property (nonatomic) bool areAllQueryTokensInContact;
@property (nonatomic) bool areQueryDiacriticsRemoved;
@property (nonatomic) float fractionOfCommunalDevicesMatchingCandidate;
@property (nonatomic, copy) NSArray *handlesWithPrivacySignalSets;
@property (nonatomic) bool hasAreAllPrimaryContactTokensInQuery;
@property (nonatomic) bool hasAreAllQueryTokensInContact;
@property (nonatomic) bool hasAreQueryDiacriticsRemoved;
@property (nonatomic) bool hasFractionOfCommunalDevicesMatchingCandidate;
@property (nonatomic) bool hasHandleWithAllowedType;
@property (nonatomic) bool hasHandleWithPreferredType;
@property (nonatomic) bool hasHasHandleWithAllowedType;
@property (nonatomic) bool hasHasHandleWithPreferredType;
@property (nonatomic) bool hasHasSuggestedProperties;
@property (nonatomic) bool hasHistoryStats;
@property (nonatomic) bool hasHistoryStatsInSameDomain;
@property (nonatomic) bool hasHistoryStatsInSiriRequests;
@property (nonatomic) bool hasIsAsrE3Signal;
@property (nonatomic) bool hasIsCommunalRequest;
@property (nonatomic) bool hasIsFavorite;
@property (nonatomic) bool hasIsFromNLXSearch;
@property (nonatomic) bool hasIsFromSRRSearch;
@property (nonatomic) bool hasIsFromStandardSearch;
@property (nonatomic) bool hasIsHypocorism;
@property (nonatomic) bool hasIsMeCard;
@property (nonatomic) bool hasIsMeCardRelation;
@property (nonatomic) bool hasIsMeCardRelationExactMatch;
@property (nonatomic) bool hasIsOnlyCandidate;
@property (nonatomic) bool hasIsPartialNameMatch;
@property (nonatomic) bool hasIsPlusSignal;
@property (nonatomic) bool hasIsQueryNameDerivedFromRelationshipLabel;
@property (nonatomic) bool hasIsQueryNormalized;
@property (nonatomic) bool hasIsQueryRelationshipLabelDerivedFromName;
@property (nonatomic) bool hasIsQueryStrippedOfPunctuation;
@property (nonatomic) bool hasIsQueryStrippedOfSymbols;
@property (nonatomic) bool hasIsQueryStrippedOfTitles;
@property (nonatomic) bool hasIsQueryStrippedOfWhitespace;
@property (nonatomic) bool hasIsRecent;
@property (nonatomic) bool hasIsRecentInSameDomain;
@property (nonatomic) bool hasIsRecentInSiriRequest;
@property (nonatomic) bool hasIsRecentlyCorrected;
@property (nonatomic) bool hasIsRelationAlias;
@property (nonatomic) bool hasIsSuggestedContact;
@property (nonatomic) bool hasIsThirdPartyMatch;
@property (nonatomic) bool hasIsTransliterated;
@property (nonatomic) bool hasNlxScore;
@property (nonatomic) bool hasRecencyRank;
@property (nonatomic) bool hasRecencyRankInSameDomain;
@property (nonatomic) bool hasRecencyRankInSiriRequest;
@property (nonatomic) bool hasRequestMatchSignalSet;
@property (nonatomic) bool hasSpeechAlternativeRanks;
@property (nonatomic) bool hasSrrScore;
@property (nonatomic) bool hasSuggestedProperties;
@property (nonatomic) bool hasThirdPartyAppBundleId;
@property (nonatomic, retain) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStats;
@property (nonatomic, retain) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStatsInSameDomain;
@property (nonatomic, retain) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStatsInSiriRequests;
@property (nonatomic) bool isAsrE3Signal;
@property (nonatomic) bool isCommunalRequest;
@property (nonatomic) bool isFavorite;
@property (nonatomic) bool isFromNLXSearch;
@property (nonatomic) bool isFromSRRSearch;
@property (nonatomic) bool isFromStandardSearch;
@property (nonatomic) bool isHypocorism;
@property (nonatomic) bool isMeCard;
@property (nonatomic) bool isMeCardRelation;
@property (nonatomic) bool isMeCardRelationExactMatch;
@property (nonatomic) bool isOnlyCandidate;
@property (nonatomic) bool isPartialNameMatch;
@property (nonatomic) bool isPlusSignal;
@property (nonatomic) bool isQueryNameDerivedFromRelationshipLabel;
@property (nonatomic) bool isQueryNormalized;
@property (nonatomic) bool isQueryRelationshipLabelDerivedFromName;
@property (nonatomic) bool isQueryStrippedOfPunctuation;
@property (nonatomic) bool isQueryStrippedOfSymbols;
@property (nonatomic) bool isQueryStrippedOfTitles;
@property (nonatomic) bool isQueryStrippedOfWhitespace;
@property (nonatomic) bool isRecent;
@property (nonatomic) bool isRecentInSameDomain;
@property (nonatomic) bool isRecentInSiriRequest;
@property (nonatomic) bool isRecentlyCorrected;
@property (nonatomic) bool isRelationAlias;
@property (nonatomic) bool isSuggestedContact;
@property (nonatomic) bool isThirdPartyMatch;
@property (nonatomic) bool isTransliterated;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float nlxScore;
@property (nonatomic) int recencyRank;
@property (nonatomic) int recencyRankInSameDomain;
@property (nonatomic) int recencyRankInSiriRequest;
@property (nonatomic, retain) INFERENCESchemaINFERENCERequestMatchSignalSet *requestMatchSignalSet;
@property (nonatomic, retain) INFERENCESchemaINFERENCESpeechAlternativeRanks *speechAlternativeRanks;
@property (nonatomic) float srrScore;
@property (nonatomic, copy) NSString *thirdPartyAppBundleId;

- (void).cxx_destruct;
- (void)addHandlesWithPrivacySignalSets:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (bool)areAllPrimaryContactTokensInQuery;
- (bool)areAllQueryTokensInContact;
- (bool)areQueryDiacriticsRemoved;
- (void)clearHandlesWithPrivacySignalSets;
- (void)deleteAreAllPrimaryContactTokensInQuery;
- (void)deleteAreAllQueryTokensInContact;
- (void)deleteAreQueryDiacriticsRemoved;
- (void)deleteFractionOfCommunalDevicesMatchingCandidate;
- (void)deleteHandlesWithPrivacySignalSets;
- (void)deleteHasHandleWithAllowedType;
- (void)deleteHasHandleWithPreferredType;
- (void)deleteHasSuggestedProperties;
- (void)deleteHistoryStats;
- (void)deleteHistoryStatsInSameDomain;
- (void)deleteHistoryStatsInSiriRequests;
- (void)deleteIsAsrE3Signal;
- (void)deleteIsCommunalRequest;
- (void)deleteIsFavorite;
- (void)deleteIsFromNLXSearch;
- (void)deleteIsFromSRRSearch;
- (void)deleteIsFromStandardSearch;
- (void)deleteIsHypocorism;
- (void)deleteIsMeCard;
- (void)deleteIsMeCardRelation;
- (void)deleteIsMeCardRelationExactMatch;
- (void)deleteIsOnlyCandidate;
- (void)deleteIsPartialNameMatch;
- (void)deleteIsPlusSignal;
- (void)deleteIsQueryNameDerivedFromRelationshipLabel;
- (void)deleteIsQueryNormalized;
- (void)deleteIsQueryRelationshipLabelDerivedFromName;
- (void)deleteIsQueryStrippedOfPunctuation;
- (void)deleteIsQueryStrippedOfSymbols;
- (void)deleteIsQueryStrippedOfTitles;
- (void)deleteIsQueryStrippedOfWhitespace;
- (void)deleteIsRecent;
- (void)deleteIsRecentInSameDomain;
- (void)deleteIsRecentInSiriRequest;
- (void)deleteIsRecentlyCorrected;
- (void)deleteIsRelationAlias;
- (void)deleteIsSuggestedContact;
- (void)deleteIsThirdPartyMatch;
- (void)deleteIsTransliterated;
- (void)deleteNlxScore;
- (void)deleteRecencyRank;
- (void)deleteRecencyRankInSameDomain;
- (void)deleteRecencyRankInSiriRequest;
- (void)deleteRequestMatchSignalSet;
- (void)deleteSpeechAlternativeRanks;
- (void)deleteSrrScore;
- (void)deleteThirdPartyAppBundleId;
- (id)dictionaryRepresentation;
- (float)fractionOfCommunalDevicesMatchingCandidate;
- (id)handlesWithPrivacySignalSets;
- (id)handlesWithPrivacySignalSetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)handlesWithPrivacySignalSetsCount;
- (bool)hasAreAllPrimaryContactTokensInQuery;
- (bool)hasAreAllQueryTokensInContact;
- (bool)hasAreQueryDiacriticsRemoved;
- (bool)hasFractionOfCommunalDevicesMatchingCandidate;
- (bool)hasHandleWithAllowedType;
- (bool)hasHandleWithPreferredType;
- (bool)hasHasHandleWithAllowedType;
- (bool)hasHasHandleWithPreferredType;
- (bool)hasHasSuggestedProperties;
- (bool)hasHistoryStats;
- (bool)hasHistoryStatsInSameDomain;
- (bool)hasHistoryStatsInSiriRequests;
- (bool)hasIsAsrE3Signal;
- (bool)hasIsCommunalRequest;
- (bool)hasIsFavorite;
- (bool)hasIsFromNLXSearch;
- (bool)hasIsFromSRRSearch;
- (bool)hasIsFromStandardSearch;
- (bool)hasIsHypocorism;
- (bool)hasIsMeCard;
- (bool)hasIsMeCardRelation;
- (bool)hasIsMeCardRelationExactMatch;
- (bool)hasIsOnlyCandidate;
- (bool)hasIsPartialNameMatch;
- (bool)hasIsPlusSignal;
- (bool)hasIsQueryNameDerivedFromRelationshipLabel;
- (bool)hasIsQueryNormalized;
- (bool)hasIsQueryRelationshipLabelDerivedFromName;
- (bool)hasIsQueryStrippedOfPunctuation;
- (bool)hasIsQueryStrippedOfSymbols;
- (bool)hasIsQueryStrippedOfTitles;
- (bool)hasIsQueryStrippedOfWhitespace;
- (bool)hasIsRecent;
- (bool)hasIsRecentInSameDomain;
- (bool)hasIsRecentInSiriRequest;
- (bool)hasIsRecentlyCorrected;
- (bool)hasIsRelationAlias;
- (bool)hasIsSuggestedContact;
- (bool)hasIsThirdPartyMatch;
- (bool)hasIsTransliterated;
- (bool)hasNlxScore;
- (bool)hasRecencyRank;
- (bool)hasRecencyRankInSameDomain;
- (bool)hasRecencyRankInSiriRequest;
- (bool)hasRequestMatchSignalSet;
- (bool)hasSpeechAlternativeRanks;
- (bool)hasSrrScore;
- (bool)hasSuggestedProperties;
- (bool)hasThirdPartyAppBundleId;
- (unsigned long long)hash;
- (id)historyStats;
- (id)historyStatsInSameDomain;
- (id)historyStatsInSiriRequests;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAsrE3Signal;
- (bool)isCommunalRequest;
- (bool)isEqual:(id)arg1;
- (bool)isFavorite;
- (bool)isFromNLXSearch;
- (bool)isFromSRRSearch;
- (bool)isFromStandardSearch;
- (bool)isHypocorism;
- (bool)isMeCard;
- (bool)isMeCardRelation;
- (bool)isMeCardRelationExactMatch;
- (bool)isOnlyCandidate;
- (bool)isPartialNameMatch;
- (bool)isPlusSignal;
- (bool)isQueryNameDerivedFromRelationshipLabel;
- (bool)isQueryNormalized;
- (bool)isQueryRelationshipLabelDerivedFromName;
- (bool)isQueryStrippedOfPunctuation;
- (bool)isQueryStrippedOfSymbols;
- (bool)isQueryStrippedOfTitles;
- (bool)isQueryStrippedOfWhitespace;
- (bool)isRecent;
- (bool)isRecentInSameDomain;
- (bool)isRecentInSiriRequest;
- (bool)isRecentlyCorrected;
- (bool)isRelationAlias;
- (bool)isSuggestedContact;
- (bool)isThirdPartyMatch;
- (bool)isTransliterated;
- (id)jsonData;
- (float)nlxScore;
- (bool)readFrom:(id)arg1;
- (int)recencyRank;
- (int)recencyRankInSameDomain;
- (int)recencyRankInSiriRequest;
- (id)requestMatchSignalSet;
- (void)setAreAllPrimaryContactTokensInQuery:(bool)arg1;
- (void)setAreAllQueryTokensInContact:(bool)arg1;
- (void)setAreQueryDiacriticsRemoved:(bool)arg1;
- (void)setFractionOfCommunalDevicesMatchingCandidate:(float)arg1;
- (void)setHandlesWithPrivacySignalSets:(id)arg1;
- (void)setHasAreAllPrimaryContactTokensInQuery:(bool)arg1;
- (void)setHasAreAllQueryTokensInContact:(bool)arg1;
- (void)setHasAreQueryDiacriticsRemoved:(bool)arg1;
- (void)setHasFractionOfCommunalDevicesMatchingCandidate:(bool)arg1;
- (void)setHasHandleWithAllowedType:(bool)arg1;
- (void)setHasHandleWithPreferredType:(bool)arg1;
- (void)setHasHasHandleWithAllowedType:(bool)arg1;
- (void)setHasHasHandleWithPreferredType:(bool)arg1;
- (void)setHasHasSuggestedProperties:(bool)arg1;
- (void)setHasHistoryStats:(bool)arg1;
- (void)setHasHistoryStatsInSameDomain:(bool)arg1;
- (void)setHasHistoryStatsInSiriRequests:(bool)arg1;
- (void)setHasIsAsrE3Signal:(bool)arg1;
- (void)setHasIsCommunalRequest:(bool)arg1;
- (void)setHasIsFavorite:(bool)arg1;
- (void)setHasIsFromNLXSearch:(bool)arg1;
- (void)setHasIsFromSRRSearch:(bool)arg1;
- (void)setHasIsFromStandardSearch:(bool)arg1;
- (void)setHasIsHypocorism:(bool)arg1;
- (void)setHasIsMeCard:(bool)arg1;
- (void)setHasIsMeCardRelation:(bool)arg1;
- (void)setHasIsMeCardRelationExactMatch:(bool)arg1;
- (void)setHasIsOnlyCandidate:(bool)arg1;
- (void)setHasIsPartialNameMatch:(bool)arg1;
- (void)setHasIsPlusSignal:(bool)arg1;
- (void)setHasIsQueryNameDerivedFromRelationshipLabel:(bool)arg1;
- (void)setHasIsQueryNormalized:(bool)arg1;
- (void)setHasIsQueryRelationshipLabelDerivedFromName:(bool)arg1;
- (void)setHasIsQueryStrippedOfPunctuation:(bool)arg1;
- (void)setHasIsQueryStrippedOfSymbols:(bool)arg1;
- (void)setHasIsQueryStrippedOfTitles:(bool)arg1;
- (void)setHasIsQueryStrippedOfWhitespace:(bool)arg1;
- (void)setHasIsRecent:(bool)arg1;
- (void)setHasIsRecentInSameDomain:(bool)arg1;
- (void)setHasIsRecentInSiriRequest:(bool)arg1;
- (void)setHasIsRecentlyCorrected:(bool)arg1;
- (void)setHasIsRelationAlias:(bool)arg1;
- (void)setHasIsSuggestedContact:(bool)arg1;
- (void)setHasIsThirdPartyMatch:(bool)arg1;
- (void)setHasIsTransliterated:(bool)arg1;
- (void)setHasNlxScore:(bool)arg1;
- (void)setHasRecencyRank:(bool)arg1;
- (void)setHasRecencyRankInSameDomain:(bool)arg1;
- (void)setHasRecencyRankInSiriRequest:(bool)arg1;
- (void)setHasRequestMatchSignalSet:(bool)arg1;
- (void)setHasSpeechAlternativeRanks:(bool)arg1;
- (void)setHasSrrScore:(bool)arg1;
- (void)setHasSuggestedProperties:(bool)arg1;
- (void)setHasThirdPartyAppBundleId:(bool)arg1;
- (void)setHistoryStats:(id)arg1;
- (void)setHistoryStatsInSameDomain:(id)arg1;
- (void)setHistoryStatsInSiriRequests:(id)arg1;
- (void)setIsAsrE3Signal:(bool)arg1;
- (void)setIsCommunalRequest:(bool)arg1;
- (void)setIsFavorite:(bool)arg1;
- (void)setIsFromNLXSearch:(bool)arg1;
- (void)setIsFromSRRSearch:(bool)arg1;
- (void)setIsFromStandardSearch:(bool)arg1;
- (void)setIsHypocorism:(bool)arg1;
- (void)setIsMeCard:(bool)arg1;
- (void)setIsMeCardRelation:(bool)arg1;
- (void)setIsMeCardRelationExactMatch:(bool)arg1;
- (void)setIsOnlyCandidate:(bool)arg1;
- (void)setIsPartialNameMatch:(bool)arg1;
- (void)setIsPlusSignal:(bool)arg1;
- (void)setIsQueryNameDerivedFromRelationshipLabel:(bool)arg1;
- (void)setIsQueryNormalized:(bool)arg1;
- (void)setIsQueryRelationshipLabelDerivedFromName:(bool)arg1;
- (void)setIsQueryStrippedOfPunctuation:(bool)arg1;
- (void)setIsQueryStrippedOfSymbols:(bool)arg1;
- (void)setIsQueryStrippedOfTitles:(bool)arg1;
- (void)setIsQueryStrippedOfWhitespace:(bool)arg1;
- (void)setIsRecent:(bool)arg1;
- (void)setIsRecentInSameDomain:(bool)arg1;
- (void)setIsRecentInSiriRequest:(bool)arg1;
- (void)setIsRecentlyCorrected:(bool)arg1;
- (void)setIsRelationAlias:(bool)arg1;
- (void)setIsSuggestedContact:(bool)arg1;
- (void)setIsThirdPartyMatch:(bool)arg1;
- (void)setIsTransliterated:(bool)arg1;
- (void)setNlxScore:(float)arg1;
- (void)setRecencyRank:(int)arg1;
- (void)setRecencyRankInSameDomain:(int)arg1;
- (void)setRecencyRankInSiriRequest:(int)arg1;
- (void)setRequestMatchSignalSet:(id)arg1;
- (void)setSpeechAlternativeRanks:(id)arg1;
- (void)setSrrScore:(float)arg1;
- (void)setThirdPartyAppBundleId:(id)arg1;
- (id)speechAlternativeRanks;
- (float)srrScore;
- (id)suppressMessageUnderConditions;
- (id)thirdPartyAppBundleId;
- (void)writeTo:(id)arg1;

@end

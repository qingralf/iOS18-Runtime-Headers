/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientACSuggestionEntry : PBCodable <NSCopying> {
    int  _age;
    int  _autocompleteResultCellType;
    double  _contactRelevanceScore;
    bool  _discreteFeatureValuesAvailable;
    int  _distanceToSuggestion;
    double  _distanceToSuggestionFromViewportCenter;
    struct { 
        unsigned int has_contactRelevanceScore : 1; 
        unsigned int has_distanceToSuggestionFromViewportCenter : 1; 
        unsigned int has_fractionOfMatch : 1; 
        unsigned int has_mapsSuggestionsContactRevelanceScore : 1; 
        unsigned int has_mapsSuggestionsIsTouristScore : 1; 
        unsigned int has_mapsSuggestionsPoiRevelanceScore : 1; 
        unsigned int has_timeSinceLastInteractedSeconds : 1; 
        unsigned int has_timeSinceMapViewportChangedSeconds : 1; 
        unsigned int has_age : 1; 
        unsigned int has_autocompleteResultCellType : 1; 
        unsigned int has_distanceToSuggestion : 1; 
        unsigned int has_peopleSuggesterRank : 1; 
        unsigned int has_poiOpenState : 1; 
        unsigned int has_prefixLastTokenMatchCover : 1; 
        unsigned int has_prefixMatchCover : 1; 
        unsigned int has_prefixMatchPosition : 1; 
        unsigned int has_prefixMatchWordBoundary : 1; 
        unsigned int has_prefixTokenMatchLengthFirstQueryToken : 1; 
        unsigned int has_prefixTokenMatchLengthSecondQueryToken : 1; 
        unsigned int has_prefixTokenMatchLocationFirstQueryToken : 1; 
        unsigned int has_prefixTokenMatchLocationSecondQueryToken : 1; 
        unsigned int has_prefixTokenMatchPositionFirstQueryToken : 1; 
        unsigned int has_prefixTokenMatchPositionSecondQueryToken : 1; 
        unsigned int has_serverEntryType : 1; 
        unsigned int has_serverItemIndexInSection : 1; 
        unsigned int has_serverSectionIndex : 1; 
        unsigned int has_suggestionType : 1; 
        unsigned int has_tapBehavior : 1; 
        unsigned int has_discreteFeatureValuesAvailable : 1; 
        unsigned int has_isContactWithHomeLocation : 1; 
        unsigned int has_isContactWithLiveLocation : 1; 
        unsigned int has_isContactWithNoLocation : 1; 
        unsigned int has_isContactWithOtherLocation : 1; 
        unsigned int has_isContactWithSchoolLocation : 1; 
        unsigned int has_isContactWithWorkLocation : 1; 
        unsigned int has_isContainedInViewport : 1; 
        unsigned int has_isFavorite : 1; 
        unsigned int has_isProminentResult : 1; 
        unsigned int has_matchedUsingAddress : 1; 
        unsigned int has_matchedUsingEventName : 1; 
        unsigned int has_matchedUsingLabel : 1; 
        unsigned int has_matchedUsingName : 1; 
        unsigned int has_matchedUsingOrganization : 1; 
        unsigned int has_prefixTokenIsNumberFirstQueryToken : 1; 
        unsigned int has_prefixTokenIsNumberSecondQueryToken : 1; 
        unsigned int has_shownToUser : 1; 
        unsigned int read_hyperlinkMetadata : 1; 
        unsigned int read_subactionMetaData : 1; 
        unsigned int read_suggestionSectionType : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    double  _fractionOfMatch;
    GEOHyperlinkMetaData * _hyperlinkMetadata;
    bool  _isContactWithHomeLocation;
    bool  _isContactWithLiveLocation;
    bool  _isContactWithNoLocation;
    bool  _isContactWithOtherLocation;
    bool  _isContactWithSchoolLocation;
    bool  _isContactWithWorkLocation;
    bool  _isContainedInViewport;
    bool  _isFavorite;
    bool  _isProminentResult;
    double  _mapsSuggestionsContactRevelanceScore;
    double  _mapsSuggestionsIsTouristScore;
    double  _mapsSuggestionsPoiRevelanceScore;
    bool  _matchedUsingAddress;
    bool  _matchedUsingEventName;
    bool  _matchedUsingLabel;
    bool  _matchedUsingName;
    bool  _matchedUsingOrganization;
    int  _peopleSuggesterRank;
    int  _poiOpenState;
    float  _prefixLastTokenMatchCover;
    float  _prefixMatchCover;
    int  _prefixMatchPosition;
    int  _prefixMatchWordBoundary;
    bool  _prefixTokenIsNumberFirstQueryToken;
    bool  _prefixTokenIsNumberSecondQueryToken;
    int  _prefixTokenMatchLengthFirstQueryToken;
    int  _prefixTokenMatchLengthSecondQueryToken;
    int  _prefixTokenMatchLocationFirstQueryToken;
    int  _prefixTokenMatchLocationSecondQueryToken;
    int  _prefixTokenMatchPositionFirstQueryToken;
    int  _prefixTokenMatchPositionSecondQueryToken;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _serverEntryType;
    int  _serverItemIndexInSection;
    int  _serverSectionIndex;
    bool  _shownToUser;
    GEOSubactionMetaData * _subactionMetaData;
    NSString * _suggestionSectionType;
    int  _suggestionType;
    int  _tapBehavior;
    double  _timeSinceLastInteractedSeconds;
    double  _timeSinceMapViewportChangedSeconds;
}

@property (nonatomic) int age;
@property (nonatomic) int autocompleteResultCellType;
@property (nonatomic) double contactRelevanceScore;
@property (nonatomic) bool discreteFeatureValuesAvailable;
@property (nonatomic) int distanceToSuggestion;
@property (nonatomic) double distanceToSuggestionFromViewportCenter;
@property (nonatomic) double fractionOfMatch;
@property (nonatomic) bool hasAge;
@property (nonatomic) bool hasAutocompleteResultCellType;
@property (nonatomic) bool hasContactRelevanceScore;
@property (nonatomic) bool hasDiscreteFeatureValuesAvailable;
@property (nonatomic) bool hasDistanceToSuggestion;
@property (nonatomic) bool hasDistanceToSuggestionFromViewportCenter;
@property (nonatomic) bool hasFractionOfMatch;
@property (nonatomic, readonly) bool hasHyperlinkMetadata;
@property (nonatomic) bool hasIsContactWithHomeLocation;
@property (nonatomic) bool hasIsContactWithLiveLocation;
@property (nonatomic) bool hasIsContactWithNoLocation;
@property (nonatomic) bool hasIsContactWithOtherLocation;
@property (nonatomic) bool hasIsContactWithSchoolLocation;
@property (nonatomic) bool hasIsContactWithWorkLocation;
@property (nonatomic) bool hasIsContainedInViewport;
@property (nonatomic) bool hasIsFavorite;
@property (nonatomic) bool hasIsProminentResult;
@property (nonatomic) bool hasMapsSuggestionsContactRevelanceScore;
@property (nonatomic) bool hasMapsSuggestionsIsTouristScore;
@property (nonatomic) bool hasMapsSuggestionsPoiRevelanceScore;
@property (nonatomic) bool hasMatchedUsingAddress;
@property (nonatomic) bool hasMatchedUsingEventName;
@property (nonatomic) bool hasMatchedUsingLabel;
@property (nonatomic) bool hasMatchedUsingName;
@property (nonatomic) bool hasMatchedUsingOrganization;
@property (nonatomic) bool hasPeopleSuggesterRank;
@property (nonatomic) bool hasPoiOpenState;
@property (nonatomic) bool hasPrefixLastTokenMatchCover;
@property (nonatomic) bool hasPrefixMatchCover;
@property (nonatomic) bool hasPrefixMatchPosition;
@property (nonatomic) bool hasPrefixMatchWordBoundary;
@property (nonatomic) bool hasPrefixTokenIsNumberFirstQueryToken;
@property (nonatomic) bool hasPrefixTokenIsNumberSecondQueryToken;
@property (nonatomic) bool hasPrefixTokenMatchLengthFirstQueryToken;
@property (nonatomic) bool hasPrefixTokenMatchLengthSecondQueryToken;
@property (nonatomic) bool hasPrefixTokenMatchLocationFirstQueryToken;
@property (nonatomic) bool hasPrefixTokenMatchLocationSecondQueryToken;
@property (nonatomic) bool hasPrefixTokenMatchPositionFirstQueryToken;
@property (nonatomic) bool hasPrefixTokenMatchPositionSecondQueryToken;
@property (nonatomic) bool hasServerEntryType;
@property (nonatomic) bool hasServerItemIndexInSection;
@property (nonatomic) bool hasServerSectionIndex;
@property (nonatomic) bool hasShownToUser;
@property (nonatomic, readonly) bool hasSubactionMetaData;
@property (nonatomic, readonly) bool hasSuggestionSectionType;
@property (nonatomic) bool hasSuggestionType;
@property (nonatomic) bool hasTapBehavior;
@property (nonatomic) bool hasTimeSinceLastInteractedSeconds;
@property (nonatomic) bool hasTimeSinceMapViewportChangedSeconds;
@property (nonatomic, retain) GEOHyperlinkMetaData *hyperlinkMetadata;
@property (nonatomic) bool isContactWithHomeLocation;
@property (nonatomic) bool isContactWithLiveLocation;
@property (nonatomic) bool isContactWithNoLocation;
@property (nonatomic) bool isContactWithOtherLocation;
@property (nonatomic) bool isContactWithSchoolLocation;
@property (nonatomic) bool isContactWithWorkLocation;
@property (nonatomic) bool isContainedInViewport;
@property (nonatomic) bool isFavorite;
@property (nonatomic) bool isProminentResult;
@property (nonatomic) double mapsSuggestionsContactRevelanceScore;
@property (nonatomic) double mapsSuggestionsIsTouristScore;
@property (nonatomic) double mapsSuggestionsPoiRevelanceScore;
@property (nonatomic) bool matchedUsingAddress;
@property (nonatomic) bool matchedUsingEventName;
@property (nonatomic) bool matchedUsingLabel;
@property (nonatomic) bool matchedUsingName;
@property (nonatomic) bool matchedUsingOrganization;
@property (nonatomic) int peopleSuggesterRank;
@property (nonatomic) int poiOpenState;
@property (nonatomic) float prefixLastTokenMatchCover;
@property (nonatomic) float prefixMatchCover;
@property (nonatomic) int prefixMatchPosition;
@property (nonatomic) int prefixMatchWordBoundary;
@property (nonatomic) bool prefixTokenIsNumberFirstQueryToken;
@property (nonatomic) bool prefixTokenIsNumberSecondQueryToken;
@property (nonatomic) int prefixTokenMatchLengthFirstQueryToken;
@property (nonatomic) int prefixTokenMatchLengthSecondQueryToken;
@property (nonatomic) int prefixTokenMatchLocationFirstQueryToken;
@property (nonatomic) int prefixTokenMatchLocationSecondQueryToken;
@property (nonatomic) int prefixTokenMatchPositionFirstQueryToken;
@property (nonatomic) int prefixTokenMatchPositionSecondQueryToken;
@property (nonatomic) int serverEntryType;
@property (nonatomic) int serverItemIndexInSection;
@property (nonatomic) int serverSectionIndex;
@property (nonatomic) bool shownToUser;
@property (nonatomic, retain) GEOSubactionMetaData *subactionMetaData;
@property (nonatomic, retain) NSString *suggestionSectionType;
@property (nonatomic) int suggestionType;
@property (nonatomic) int tapBehavior;
@property (nonatomic) double timeSinceLastInteractedSeconds;
@property (nonatomic) double timeSinceMapViewportChangedSeconds;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAutocompleteResultCellType:(id)arg1;
- (int)StringAsPoiOpenState:(id)arg1;
- (int)StringAsServerEntryType:(id)arg1;
- (int)StringAsSuggestionType:(id)arg1;
- (int)StringAsTapBehavior:(id)arg1;
- (int)age;
- (int)autocompleteResultCellType;
- (id)autocompleteResultCellTypeAsString:(int)arg1;
- (double)contactRelevanceScore;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)discreteFeatureValuesAvailable;
- (int)distanceToSuggestion;
- (double)distanceToSuggestionFromViewportCenter;
- (double)fractionOfMatch;
- (bool)hasAge;
- (bool)hasAutocompleteResultCellType;
- (bool)hasContactRelevanceScore;
- (bool)hasDiscreteFeatureValuesAvailable;
- (bool)hasDistanceToSuggestion;
- (bool)hasDistanceToSuggestionFromViewportCenter;
- (bool)hasFractionOfMatch;
- (bool)hasHyperlinkMetadata;
- (bool)hasIsContactWithHomeLocation;
- (bool)hasIsContactWithLiveLocation;
- (bool)hasIsContactWithNoLocation;
- (bool)hasIsContactWithOtherLocation;
- (bool)hasIsContactWithSchoolLocation;
- (bool)hasIsContactWithWorkLocation;
- (bool)hasIsContainedInViewport;
- (bool)hasIsFavorite;
- (bool)hasIsProminentResult;
- (bool)hasMapsSuggestionsContactRevelanceScore;
- (bool)hasMapsSuggestionsIsTouristScore;
- (bool)hasMapsSuggestionsPoiRevelanceScore;
- (bool)hasMatchedUsingAddress;
- (bool)hasMatchedUsingEventName;
- (bool)hasMatchedUsingLabel;
- (bool)hasMatchedUsingName;
- (bool)hasMatchedUsingOrganization;
- (bool)hasPeopleSuggesterRank;
- (bool)hasPoiOpenState;
- (bool)hasPrefixLastTokenMatchCover;
- (bool)hasPrefixMatchCover;
- (bool)hasPrefixMatchPosition;
- (bool)hasPrefixMatchWordBoundary;
- (bool)hasPrefixTokenIsNumberFirstQueryToken;
- (bool)hasPrefixTokenIsNumberSecondQueryToken;
- (bool)hasPrefixTokenMatchLengthFirstQueryToken;
- (bool)hasPrefixTokenMatchLengthSecondQueryToken;
- (bool)hasPrefixTokenMatchLocationFirstQueryToken;
- (bool)hasPrefixTokenMatchLocationSecondQueryToken;
- (bool)hasPrefixTokenMatchPositionFirstQueryToken;
- (bool)hasPrefixTokenMatchPositionSecondQueryToken;
- (bool)hasServerEntryType;
- (bool)hasServerItemIndexInSection;
- (bool)hasServerSectionIndex;
- (bool)hasShownToUser;
- (bool)hasSubactionMetaData;
- (bool)hasSuggestionSectionType;
- (bool)hasSuggestionType;
- (bool)hasTapBehavior;
- (bool)hasTimeSinceLastInteractedSeconds;
- (bool)hasTimeSinceMapViewportChangedSeconds;
- (unsigned long long)hash;
- (id)hyperlinkMetadata;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isContactWithHomeLocation;
- (bool)isContactWithLiveLocation;
- (bool)isContactWithNoLocation;
- (bool)isContactWithOtherLocation;
- (bool)isContactWithSchoolLocation;
- (bool)isContactWithWorkLocation;
- (bool)isContainedInViewport;
- (bool)isEqual:(id)arg1;
- (bool)isFavorite;
- (bool)isProminentResult;
- (id)jsonRepresentation;
- (double)mapsSuggestionsContactRevelanceScore;
- (double)mapsSuggestionsIsTouristScore;
- (double)mapsSuggestionsPoiRevelanceScore;
- (bool)matchedUsingAddress;
- (bool)matchedUsingEventName;
- (bool)matchedUsingLabel;
- (bool)matchedUsingName;
- (bool)matchedUsingOrganization;
- (void)mergeFrom:(id)arg1;
- (int)peopleSuggesterRank;
- (int)poiOpenState;
- (id)poiOpenStateAsString:(int)arg1;
- (float)prefixLastTokenMatchCover;
- (float)prefixMatchCover;
- (int)prefixMatchPosition;
- (int)prefixMatchWordBoundary;
- (bool)prefixTokenIsNumberFirstQueryToken;
- (bool)prefixTokenIsNumberSecondQueryToken;
- (int)prefixTokenMatchLengthFirstQueryToken;
- (int)prefixTokenMatchLengthSecondQueryToken;
- (int)prefixTokenMatchLocationFirstQueryToken;
- (int)prefixTokenMatchLocationSecondQueryToken;
- (int)prefixTokenMatchPositionFirstQueryToken;
- (int)prefixTokenMatchPositionSecondQueryToken;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)serverEntryType;
- (id)serverEntryTypeAsString:(int)arg1;
- (int)serverItemIndexInSection;
- (int)serverSectionIndex;
- (void)setAge:(int)arg1;
- (void)setAutocompleteResultCellType:(int)arg1;
- (void)setContactRelevanceScore:(double)arg1;
- (void)setDiscreteFeatureValuesAvailable:(bool)arg1;
- (void)setDistanceToSuggestion:(int)arg1;
- (void)setDistanceToSuggestionFromViewportCenter:(double)arg1;
- (void)setFractionOfMatch:(double)arg1;
- (void)setHasAge:(bool)arg1;
- (void)setHasAutocompleteResultCellType:(bool)arg1;
- (void)setHasContactRelevanceScore:(bool)arg1;
- (void)setHasDiscreteFeatureValuesAvailable:(bool)arg1;
- (void)setHasDistanceToSuggestion:(bool)arg1;
- (void)setHasDistanceToSuggestionFromViewportCenter:(bool)arg1;
- (void)setHasFractionOfMatch:(bool)arg1;
- (void)setHasIsContactWithHomeLocation:(bool)arg1;
- (void)setHasIsContactWithLiveLocation:(bool)arg1;
- (void)setHasIsContactWithNoLocation:(bool)arg1;
- (void)setHasIsContactWithOtherLocation:(bool)arg1;
- (void)setHasIsContactWithSchoolLocation:(bool)arg1;
- (void)setHasIsContactWithWorkLocation:(bool)arg1;
- (void)setHasIsContainedInViewport:(bool)arg1;
- (void)setHasIsFavorite:(bool)arg1;
- (void)setHasIsProminentResult:(bool)arg1;
- (void)setHasMapsSuggestionsContactRevelanceScore:(bool)arg1;
- (void)setHasMapsSuggestionsIsTouristScore:(bool)arg1;
- (void)setHasMapsSuggestionsPoiRevelanceScore:(bool)arg1;
- (void)setHasMatchedUsingAddress:(bool)arg1;
- (void)setHasMatchedUsingEventName:(bool)arg1;
- (void)setHasMatchedUsingLabel:(bool)arg1;
- (void)setHasMatchedUsingName:(bool)arg1;
- (void)setHasMatchedUsingOrganization:(bool)arg1;
- (void)setHasPeopleSuggesterRank:(bool)arg1;
- (void)setHasPoiOpenState:(bool)arg1;
- (void)setHasPrefixLastTokenMatchCover:(bool)arg1;
- (void)setHasPrefixMatchCover:(bool)arg1;
- (void)setHasPrefixMatchPosition:(bool)arg1;
- (void)setHasPrefixMatchWordBoundary:(bool)arg1;
- (void)setHasPrefixTokenIsNumberFirstQueryToken:(bool)arg1;
- (void)setHasPrefixTokenIsNumberSecondQueryToken:(bool)arg1;
- (void)setHasPrefixTokenMatchLengthFirstQueryToken:(bool)arg1;
- (void)setHasPrefixTokenMatchLengthSecondQueryToken:(bool)arg1;
- (void)setHasPrefixTokenMatchLocationFirstQueryToken:(bool)arg1;
- (void)setHasPrefixTokenMatchLocationSecondQueryToken:(bool)arg1;
- (void)setHasPrefixTokenMatchPositionFirstQueryToken:(bool)arg1;
- (void)setHasPrefixTokenMatchPositionSecondQueryToken:(bool)arg1;
- (void)setHasServerEntryType:(bool)arg1;
- (void)setHasServerItemIndexInSection:(bool)arg1;
- (void)setHasServerSectionIndex:(bool)arg1;
- (void)setHasShownToUser:(bool)arg1;
- (void)setHasSuggestionType:(bool)arg1;
- (void)setHasTapBehavior:(bool)arg1;
- (void)setHasTimeSinceLastInteractedSeconds:(bool)arg1;
- (void)setHasTimeSinceMapViewportChangedSeconds:(bool)arg1;
- (void)setHyperlinkMetadata:(id)arg1;
- (void)setIsContactWithHomeLocation:(bool)arg1;
- (void)setIsContactWithLiveLocation:(bool)arg1;
- (void)setIsContactWithNoLocation:(bool)arg1;
- (void)setIsContactWithOtherLocation:(bool)arg1;
- (void)setIsContactWithSchoolLocation:(bool)arg1;
- (void)setIsContactWithWorkLocation:(bool)arg1;
- (void)setIsContainedInViewport:(bool)arg1;
- (void)setIsFavorite:(bool)arg1;
- (void)setIsProminentResult:(bool)arg1;
- (void)setMapsSuggestionsContactRevelanceScore:(double)arg1;
- (void)setMapsSuggestionsIsTouristScore:(double)arg1;
- (void)setMapsSuggestionsPoiRevelanceScore:(double)arg1;
- (void)setMatchedUsingAddress:(bool)arg1;
- (void)setMatchedUsingEventName:(bool)arg1;
- (void)setMatchedUsingLabel:(bool)arg1;
- (void)setMatchedUsingName:(bool)arg1;
- (void)setMatchedUsingOrganization:(bool)arg1;
- (void)setPeopleSuggesterRank:(int)arg1;
- (void)setPoiOpenState:(int)arg1;
- (void)setPrefixLastTokenMatchCover:(float)arg1;
- (void)setPrefixMatchCover:(float)arg1;
- (void)setPrefixMatchPosition:(int)arg1;
- (void)setPrefixMatchWordBoundary:(int)arg1;
- (void)setPrefixTokenIsNumberFirstQueryToken:(bool)arg1;
- (void)setPrefixTokenIsNumberSecondQueryToken:(bool)arg1;
- (void)setPrefixTokenMatchLengthFirstQueryToken:(int)arg1;
- (void)setPrefixTokenMatchLengthSecondQueryToken:(int)arg1;
- (void)setPrefixTokenMatchLocationFirstQueryToken:(int)arg1;
- (void)setPrefixTokenMatchLocationSecondQueryToken:(int)arg1;
- (void)setPrefixTokenMatchPositionFirstQueryToken:(int)arg1;
- (void)setPrefixTokenMatchPositionSecondQueryToken:(int)arg1;
- (void)setServerEntryType:(int)arg1;
- (void)setServerItemIndexInSection:(int)arg1;
- (void)setServerSectionIndex:(int)arg1;
- (void)setShownToUser:(bool)arg1;
- (void)setSubactionMetaData:(id)arg1;
- (void)setSuggestionSectionType:(id)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setTapBehavior:(int)arg1;
- (void)setTimeSinceLastInteractedSeconds:(double)arg1;
- (void)setTimeSinceMapViewportChangedSeconds:(double)arg1;
- (bool)shownToUser;
- (id)subactionMetaData;
- (id)suggestionSectionType;
- (int)suggestionType;
- (id)suggestionTypeAsString:(int)arg1;
- (int)tapBehavior;
- (id)tapBehaviorAsString:(int)arg1;
- (double)timeSinceLastInteractedSeconds;
- (double)timeSinceMapViewportChangedSeconds;
- (void)writeTo:(id)arg1;

@end

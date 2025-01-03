/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SPSearchQueryContext : NSObject <NSCopying> {
    bool  _allowInternet;
    NSArray * _answerAttributes;
    NSString * _arrivalLocationFromQU;
    CSSuggestion * _backingSearchModel;
    NSArray * _bundleIDs;
    NSString * _clientBundleID;
    double  _currentTime;
    NSString * _departureLocationFromQU;
    unsigned long long  _deviceAuthenticationState;
    bool  _disableOCR;
    NSArray * _disabledApps;
    NSArray * _disabledBundles;
    NSArray * _disabledDomains;
    bool  _earliestTokenFromQU;
    bool  _enablePersonalAnswers;
    float  _entityL1Score;
    CSAttributeEvaluator * _evaluator;
    CSAttributeEvaluator * _evaluatorForPersonMatching;
    bool  _fetchL2Signals;
    NSArray * _filterQueries;
    bool  _forceQueryEvenIfSame;
    NSArray * _groupingRules;
    bool  _hasQueryTextEmbedding;
    bool  _hasSearchTerm;
    unsigned long long  _inferredLlmQUIntentType;
    int  _intentFromQU;
    bool  _internalDebug;
    bool  _internalValidation;
    bool  _isAdvancedSyntax;
    bool  _isAppEntitySearch;
    bool  _isEventSearch;
    bool  _isFlightEventSearch;
    bool  _isFromLLMQUParse;
    bool  _isHotelEventSearch;
    bool  _isLLMQUIntentEventSearch;
    bool  _isPlural;
    bool  _isRestaurantEventSearch;
    bool  _isSingle;
    NSString * _keyboardLanguage;
    NSString * _keyboardPrimaryLanguage;
    bool  _latestTokenFromQU;
    unsigned long long  _llmQUIntentType;
    NSArray * _markedTextArray;
    bool  _noTokenize;
    NSString * _normalizedSearchString;
    unsigned long long  _options;
    NSString * _parsedQueryFromQU;
    bool  _promoteLocalResults;
    bool  _promoteParsecResults;
    unsigned long long  _queryIdent;
    SSQueryIntent * _queryIntent;
    unsigned long long  _queryKind;
    NSDictionary * _queryUnderstandingOutput;
    NSDate * _referenceDate;
    bool  _retainBackendData;
    double  _scaleFactor;
    NSArray * _searchDomains;
    NSArray * _searchEntities;
    NSString * _searchString;
    SPQUParse * _spQUParse;
    unsigned long long  _whyClear;
    unsigned long long  _whyQuery;
}

@property (nonatomic) bool allowInternet;
@property (nonatomic, retain) NSArray *answerAttributes;
@property (nonatomic, retain) NSString *arrivalLocationFromQU;
@property (nonatomic, retain) CSSuggestion *backingSearchModel;
@property (nonatomic, retain) NSArray *bundleIDs;
@property (nonatomic, retain) NSString *clientBundleID;
@property (nonatomic) double currentTime;
@property (nonatomic, retain) NSString *departureLocationFromQU;
@property (nonatomic) unsigned long long deviceAuthenticationState;
@property (nonatomic) bool disableOCR;
@property (nonatomic, retain) NSArray *disabledApps;
@property (nonatomic, retain) NSArray *disabledBundles;
@property (nonatomic, retain) NSArray *disabledDomains;
@property (nonatomic, readonly) NSString *displayedText;
@property (nonatomic) bool earliestTokenFromQU;
@property (nonatomic) bool enablePersonalAnswers;
@property (nonatomic) float entityL1Score;
@property (nonatomic) bool fetchL2Signals;
@property (nonatomic, retain) NSArray *filterQueries;
@property (nonatomic) bool forceQueryEvenIfSame;
@property (nonatomic, retain) NSArray *groupingRules;
@property (nonatomic, readonly) bool hasMarkedText;
@property (nonatomic) bool hasQueryTextEmbedding;
@property (nonatomic) bool hasSearchTerm;
@property (nonatomic) unsigned long long inferredLlmQUIntentType;
@property (nonatomic) int intentFromQU;
@property (nonatomic) bool internalDebug;
@property (nonatomic) bool internalValidation;
@property (nonatomic) bool isAdvancedSyntax;
@property (nonatomic) bool isAppEntitySearch;
@property (nonatomic) bool isEventSearch;
@property (nonatomic) bool isFlightEventSearch;
@property (nonatomic) bool isFromLLMQUParse;
@property (nonatomic) bool isHotelEventSearch;
@property (nonatomic) bool isLLMQUIntentEventSearch;
@property (nonatomic) bool isPasscodeLocked;
@property (nonatomic) bool isPlural;
@property (nonatomic) bool isRestaurantEventSearch;
@property (nonatomic) bool isSingle;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic, retain) NSString *keyboardPrimaryLanguage;
@property (nonatomic) bool latestTokenFromQU;
@property (nonatomic) unsigned long long llmQUIntentType;
@property (nonatomic, retain) NSArray *markedTextArray;
@property (nonatomic) bool noTokenize;
@property (nonatomic, readonly) NSString *normalizedSearchString;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSString *parsedQueryFromQU;
@property (nonatomic) bool promoteLocalResults;
@property (nonatomic) bool promoteParsecResults;
@property (nonatomic) unsigned long long queryIdent;
@property (nonatomic, retain) SSQueryIntent *queryIntent;
@property (nonatomic) unsigned long long queryKind;
@property (nonatomic, copy) NSDictionary *queryUnderstandingOutput;
@property (nonatomic, retain) NSDate *referenceDate;
@property (nonatomic) bool retainBackendData;
@property (nonatomic) double scaleFactor;
@property (nonatomic, retain) NSArray *searchDomains;
@property (nonatomic, retain) NSArray *searchEntities;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) SPQUParse *spQUParse;
@property (getter=getTrimmedSearchString, readonly) NSString *trimmedSearchString;
@property (nonatomic) unsigned long long whyClear;
@property (nonatomic) unsigned long long whyQuery;

+ (id)getAppEntityParams:(id)arg1;
+ (id)llmQUIntentString:(unsigned long long)arg1;
+ (id)normalizeSearchString:(id)arg1 queryContext:(id)arg2;
+ (id)queryContextWithSearchString:(id)arg1;
+ (id)removeAppEntitySpecificStopwords:(id)arg1 withEntityTypeIdentifier:(id)arg2 bundleID:(id)arg3;

- (void).cxx_destruct;
- (bool)allowInternet;
- (id)answerAttributes;
- (id)arrivalLocationFromQU;
- (id)backingSearchModel;
- (id)bundleIDs;
- (id)clientBundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentTime;
- (id)departureLocationFromQU;
- (unsigned long long)deviceAuthenticationState;
- (bool)disableOCR;
- (id)disabledApps;
- (id)disabledBundles;
- (id)disabledDomains;
- (id)displayedText;
- (bool)earliestTokenFromQU;
- (bool)enablePersonalAnswers;
- (float)entityL1Score;
- (id)evaluator;
- (id)evaluatorForPersonMatching;
- (id)evaluatorWithSearchString:(id)arg1;
- (bool)fetchL2Signals;
- (id)filterQueries;
- (bool)forceQueryEvenIfSame;
- (id)getTrimmedSearchString;
- (id)groupingRules;
- (bool)hasMarkedText;
- (bool)hasQueryTextEmbedding;
- (bool)hasSearchTerm;
- (void)incrementQueryId;
- (unsigned long long)inferredLlmQUIntentType;
- (id)init;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 currentTime:(double)arg2;
- (int)intentFromQU;
- (bool)internalDebug;
- (bool)internalValidation;
- (bool)isAdvancedSyntax;
- (bool)isAppEntitySearch;
- (bool)isEventSearch;
- (bool)isFlightEventSearch;
- (bool)isFromLLMQUParse;
- (bool)isHotelEventSearch;
- (bool)isLLMQUIntentEventSearch;
- (bool)isPasscodeLocked;
- (bool)isPlural;
- (bool)isRestaurantEventSearch;
- (bool)isSingle;
- (id)keyboardLanguage;
- (id)keyboardPrimaryLanguage;
- (bool)latestTokenFromQU;
- (unsigned long long)llmQUIntentType;
- (id)markedTextArray;
- (bool)noTokenize;
- (id)normalizedSearchString;
- (unsigned long long)options;
- (id)parsedQueryFromQU;
- (bool)promoteLocalResults;
- (bool)promoteParsecResults;
- (unsigned long long)queryIdent;
- (id)queryIntent;
- (unsigned long long)queryKind;
- (id)queryUnderstandingOutput;
- (id)referenceDate;
- (bool)retainBackendData;
- (double)scaleFactor;
- (id)searchDomains;
- (id)searchEntities;
- (id)searchString;
- (void)setAllowInternet:(bool)arg1;
- (void)setAnswerAttributes:(id)arg1;
- (void)setArrivalLocationFromQU:(id)arg1;
- (void)setBackingSearchModel:(id)arg1;
- (void)setBundleIDs:(id)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDepartureLocationFromQU:(id)arg1;
- (void)setDeviceAuthenticationState:(unsigned long long)arg1;
- (void)setDisableOCR:(bool)arg1;
- (void)setDisabledApps:(id)arg1;
- (void)setDisabledBundles:(id)arg1;
- (void)setDisabledDomains:(id)arg1;
- (void)setEarliestTokenFromQU:(bool)arg1;
- (void)setEnablePersonalAnswers:(bool)arg1;
- (void)setEntityL1Score:(float)arg1;
- (void)setFetchL2Signals:(bool)arg1;
- (void)setFilterQueries:(id)arg1;
- (void)setForceQueryEvenIfSame:(bool)arg1;
- (void)setGroupingRules:(id)arg1;
- (void)setHasQueryTextEmbedding:(bool)arg1;
- (void)setHasSearchTerm:(bool)arg1;
- (void)setInferredLlmQUIntentType:(unsigned long long)arg1;
- (void)setIntentFromQU:(int)arg1;
- (void)setInternalDebug:(bool)arg1;
- (void)setInternalValidation:(bool)arg1;
- (void)setIsAdvancedSyntax:(bool)arg1;
- (void)setIsAppEntitySearch:(bool)arg1;
- (void)setIsEventSearch:(bool)arg1;
- (void)setIsFlightEventSearch:(bool)arg1;
- (void)setIsFromLLMQUParse:(bool)arg1;
- (void)setIsHotelEventSearch:(bool)arg1;
- (void)setIsLLMQUIntentEventSearch:(bool)arg1;
- (void)setIsPasscodeLocked:(bool)arg1;
- (void)setIsPlural:(bool)arg1;
- (void)setIsRestaurantEventSearch:(bool)arg1;
- (void)setIsSingle:(bool)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setKeyboardPrimaryLanguage:(id)arg1;
- (void)setLatestTokenFromQU:(bool)arg1;
- (void)setLlmQUIntentType:(unsigned long long)arg1;
- (void)setMarkedTextArray:(id)arg1;
- (void)setNoTokenize:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setParsedQueryFromQU:(id)arg1;
- (void)setPromoteLocalResults:(bool)arg1;
- (void)setPromoteParsecResults:(bool)arg1;
- (void)setQueryIdent:(unsigned long long)arg1;
- (void)setQueryIntent:(id)arg1;
- (void)setQueryKind:(unsigned long long)arg1;
- (void)setQueryUnderstandingOutput:(id)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setRetainBackendData:(bool)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setSearchDomains:(id)arg1;
- (void)setSearchEntities:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSpQUParse:(id)arg1;
- (void)setWhyClear:(unsigned long long)arg1;
- (void)setWhyQuery:(unsigned long long)arg1;
- (id)spQUParse;
- (unsigned long long)whyClear;
- (unsigned long long)whyQuery;

@end

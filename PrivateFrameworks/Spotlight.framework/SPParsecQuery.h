/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPParsecQuery : SPKQuery <PARResultFactory, PRSSearchQueryHandler> {
    bool  _canceled;
    NSDictionary * _category_stats;
    NSSet * _disabledAppSet;
    bool  _done;
    NSArray * _excludedDomainIdentifiers;
    NSString * _fbq;
    unsigned long long  _lastKnownQuality;
    PRSMapsParsecRanker * _mapsParsecRanker;
    SDNetworkQualityInquiry * _networkConditions;
    unsigned long long  _parsecBeyondTimeoutRequestCount;
    bool  _parsecLoaded;
    PRSQueryTask * _parsecQueryTask;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _parsecQueryTaskMutex;
    NSArray * _parsecResults;
    NSArray * _parsecResultsCategoryOrder;
    unsigned long long  _quality;
    double  _queryEndTime;
    struct __MDSimpleQueryEvaluator { } * _queryEval;
    double  _queryStartTime;
    NSArray * _querySuggestionResults;
    NSObject<OS_dispatch_queue> * _queue;
    PRSRankingConfiguration * _rankingInfo;
    NSArray * _rankingPatterns;
    SPFederatedQueryTask * _resultPipe;
    NSDictionary * _server_features;
    NSSet * _setOfHiddenApps;
    NSSet * _setOfVisibleApps;
    unsigned long long  _startTime;
    bool  _suggestionsAreBlended;
    double  _timeOut;
    bool  _webSearchLoaded;
    NSString * _web_fbq;
    bool  _withinThreshold;
}

@property (readonly) NSSet *appBlocklist;
@property bool canceled;
@property (nonatomic, readonly) SSPlistDataReader *cannedCEPValues;
@property (nonatomic, retain) NSDictionary *category_stats;
@property (nonatomic, readonly) SSPlistDataReader *cepDictionary;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property bool done;
@property (nonatomic, retain) NSArray *excludedDomainIdentifiers;
@property (readonly) NSString *fbq;
@property (readonly) unsigned long long hash;
@property unsigned long long lastKnownQuality;
@property (nonatomic, readonly) PRSMapsParsecRanker *mapsParsecRanker;
@property (retain) SDNetworkQualityInquiry *networkConditions;
@property bool parsecLoaded;
@property (retain) PRSQueryTask *parsecQueryTask;
@property (retain) NSArray *parsecResults;
@property (retain) NSArray *parsecResultsCategoryOrder;
@property unsigned long long quality;
@property (nonatomic) struct __MDSimpleQueryEvaluator { }*queryEval;
@property (nonatomic, retain) NSArray *querySuggestionResults;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) PRSRankingConfiguration *rankingInfo;
@property (nonatomic) SPFederatedQueryTask *resultPipe;
@property (nonatomic, retain) NSDictionary *server_features;
@property unsigned long long startTime;
@property bool suggestionsAreBlended;
@property (readonly) Class superclass;
@property bool webSearchLoaded;
@property (readonly) NSString *web_fbq;

+ (void)activate;
+ (void)deactivate;
+ (void)getFTEStringsWithReply:(id /* block */)arg1;
+ (void)initialize;
+ (bool)isParsecEnabled;
+ (void)parsecEnabled:(bool)arg1;
+ (unsigned int)searchDomain;

- (void).cxx_destruct;
- (void)_setScore:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1 forResult:(id)arg2;
- (void)activate;
- (id)appBlocklist;
- (bool)available;
- (void)cancel;
- (bool)canceled;
- (id)cannedCEPValues;
- (id)category_stats;
- (id)cepDictionary;
- (void)checkParsecState;
- (double)computeTimeout:(double)arg1;
- (id)createResultObject;
- (void)deactivate;
- (void)dealloc;
- (bool)done;
- (id)excludedDomainIdentifiers;
- (id)fbq;
- (id)findLocalCopies:(id)arg1 alternativeResults:(id)arg2 withQueryString:(id)arg3;
- (id)findLocalCopies:(id)arg1 appIdentifiers:(id)arg2 adamIDs:(id)arg3 alternativeResults:(id)arg4 withQueryString:(id)arg5;
- (void)finished;
- (void)geoUserSessionEntityString:(id)arg1;
- (id)initWithUserQuery:(id)arg1 queryGroupId:(unsigned long long)arg2 options:(unsigned long long)arg3 queryContext:(id)arg4;
- (unsigned long long)lastKnownQuality;
- (id)mapsParsecRanker;
- (id)networkConditions;
- (bool)parsecLoaded;
- (id)parsecQueryTask;
- (id)parsecResults;
- (id)parsecResultsCategoryOrder;
- (void)preheat;
- (unsigned long long)quality;
- (void)query:(id)arg1 didFinishWithResults:(id)arg2 withSuggestions:(id)arg3 withCorrections:(id)arg4 withAlternativeResults:(id)arg5 suggestionsAreBlended:(bool)arg6;
- (void)queryDidFinishLoading:(id)arg1;
- (struct __MDSimpleQueryEvaluator { }*)queryEval;
- (id)querySuggestionResults;
- (id)queue;
- (id)rankingInfo;
- (id)rerankMapsResultsWithLocalSignals:(id)arg1 forQueryId:(long long)arg2;
- (id)resultPipe;
- (void)resumeWithTimeout:(double)arg1;
- (double)searchTimeOut;
- (id)server_features;
- (void)setCanceled:(bool)arg1;
- (void)setCategory_stats:(id)arg1;
- (void)setDone:(bool)arg1;
- (void)setExcludedDomainIdentifiers:(id)arg1;
- (void)setLastKnownQuality:(unsigned long long)arg1;
- (void)setNetworkConditions:(id)arg1;
- (void)setParsecLoaded:(bool)arg1;
- (void)setParsecQueryTask:(id)arg1;
- (void)setParsecResults:(id)arg1;
- (void)setParsecResultsCategoryOrder:(id)arg1;
- (void)setParsecState:(bool)arg1;
- (void)setQuality:(unsigned long long)arg1;
- (void)setQueryEval:(struct __MDSimpleQueryEvaluator { }*)arg1;
- (void)setQuerySuggestionResults:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRankingInfo:(id)arg1;
- (void)setResultPipe:(id)arg1;
- (void)setServer_features:(id)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setSuggestionsAreBlended:(bool)arg1;
- (void)setWebSearchLoaded:(bool)arg1;
- (bool)shouldReturnEarly;
- (void)start;
- (unsigned long long)startTime;
- (double)suggestionTimeOut;
- (bool)suggestionsAreBlended;
- (double)timeOut:(bool)arg1;
- (void)updateParsecBeyondTimeoutCount:(bool)arg1;
- (bool)webSearchLoaded;
- (id)web_fbq;

@end
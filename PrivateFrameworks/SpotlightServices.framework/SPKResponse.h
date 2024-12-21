/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SPKResponse : NSObject {
    NSArray * _added;
    NSArray * _changed;
    bool  _corespotlightFinished;
    NSString * _correctedQuery;
    bool  _didReceiveLaterThanRenderTimeout;
    NSError * _error;
    NSString * _fbq;
    NSDictionary * _groupedResults;
    bool  _isRewrite;
    int  _kind;
    NSArray * _localSuggestionResults;
    bool  _metadataFinished;
    bool  _noChangeInResultsSinceLastResponse;
    bool  _parsecFinished;
    unsigned long long  _queryId;
    bool  _queryResponseComplete;
    PRSRankingConfiguration * _rankingConfiguration;
    NSArray * _removed;
    NSArray * _sections;
    NSArray * _serverSuggestionResults;
    bool  _suggestionsAreBlended;
    bool  _topHitIsIn;
    NSString * _userQueryString;
}

@property (readonly) NSArray *added;
@property (readonly) NSArray *changed;
@property bool corespotlightFinished;
@property (retain) NSString *correctedQuery;
@property bool didReceiveLaterThanRenderTimeout;
@property (readonly) NSError *error;
@property (retain) NSString *fbq;
@property (readonly) NSDictionary *groupedResults;
@property bool isRewrite;
@property (readonly) int kind;
@property (retain) NSArray *localSuggestionResults;
@property bool metadataFinished;
@property bool noChangeInResultsSinceLastResponse;
@property bool parsecFinished;
@property (readonly) unsigned long long queryId;
@property bool queryResponseComplete;
@property (retain) PRSRankingConfiguration *rankingConfiguration;
@property (readonly) NSArray *removed;
@property (readonly) NSArray *sections;
@property (retain) NSArray *serverSuggestionResults;
@property bool suggestionsAreBlended;
@property bool topHitIsIn;
@property (retain) NSString *userQueryString;

- (void).cxx_destruct;
- (id)added;
- (id)changed;
- (bool)corespotlightFinished;
- (id)correctedQuery;
- (id)description;
- (bool)didReceiveLaterThanRenderTimeout;
- (id)error;
- (id)fbq;
- (id)groupedResults;
- (id)initWithQueryID:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithQueryID:(unsigned long long)arg1 kind:(int)arg2 sections:(id)arg3;
- (id)initWithQueryID:(unsigned long long)arg1 kind:(int)arg2 sections:(id)arg3 groupedResults:(id)arg4;
- (id)initWithQueryID:(unsigned long long)arg1 kind:(int)arg2 sections:(id)arg3 groupedResults:(id)arg4 error:(id)arg5;
- (id)initWithQueryID:(unsigned long long)arg1 sections:(id)arg2;
- (bool)isRewrite;
- (int)kind;
- (id)localSuggestionResults;
- (bool)metadataFinished;
- (bool)noChangeInResultsSinceLastResponse;
- (bool)parsecFinished;
- (unsigned long long)queryId;
- (bool)queryResponseComplete;
- (id)rankingConfiguration;
- (id)removed;
- (id)sections;
- (id)serverSuggestionResults;
- (void)setCorespotlightFinished:(bool)arg1;
- (void)setCorrectedQuery:(id)arg1;
- (void)setDidReceiveLaterThanRenderTimeout:(bool)arg1;
- (void)setFbq:(id)arg1;
- (void)setIsRewrite:(bool)arg1;
- (void)setLocalSuggestionResults:(id)arg1;
- (void)setMetadataFinished:(bool)arg1;
- (void)setNoChangeInResultsSinceLastResponse:(bool)arg1;
- (void)setParsecFinished:(bool)arg1;
- (void)setQueryResponseComplete:(bool)arg1;
- (void)setRankingConfiguration:(id)arg1;
- (void)setServerSuggestionResults:(id)arg1;
- (void)setSuggestionsAreBlended:(bool)arg1;
- (void)setTopHitIsIn:(bool)arg1;
- (void)setUserQueryString:(id)arg1;
- (bool)suggestionsAreBlended;
- (bool)topHitIsIn;
- (id)userQueryString;

@end
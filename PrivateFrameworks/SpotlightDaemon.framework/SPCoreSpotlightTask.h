/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SPCoreSpotlightTask : NSObject {
    bool  _canceled;
    id /* block */  _completionBlock;
    bool  _critical;
    bool  _finished;
    bool  _hasPausedResults;
    NSMutableArray * _jobs;
    NSSet * _knownBundleIds;
    NSMutableArray * _matchInfo;
    CSSearchQueryContext * _queryContext;
    struct { 
        unsigned long long queryId; 
        unsigned long long internalQueryId; 
    }  _queryID;
    NSString * _queryString;
    SPQueryResultsQueue * _resultsQueue;
    id /* block */  _scheduleBlock;
    struct __SIQuery { } * _siQuery;
    double  _startTime;
    bool  _wasCanceledByClient;
    bool  _willAsyncStart;
}

@property bool canceled;
@property (readonly) NSString *clientBundleID;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) bool critical;
@property (nonatomic) bool finished;
@property (nonatomic) bool hasPausedResults;
@property (nonatomic, retain) NSMutableArray *jobs;
@property (nonatomic, copy) NSSet *knownBundleIds;
@property (nonatomic, retain) NSMutableArray *matchInfo;
@property (nonatomic, retain) CSSearchQueryContext *queryContext;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } queryID;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) SPQueryResultsQueue *resultsQueue;
@property (nonatomic, copy) id /* block */ scheduleBlock;
@property (nonatomic) struct __SIQuery { }*siQuery;
@property (nonatomic) double startTime;
@property bool wasCanceledByClient;
@property (nonatomic) bool willAsyncStart;

- (void).cxx_destruct;
- (id)_makeAdditionalQueryStringForQueryContext:(id)arg1;
- (id)_makeBundleQueryStringForField:(id)arg1 withBundleIDs:(id)arg2;
- (id)_makeBundleQueryStringForQueryContext:(id)arg1;
- (id)_makeDisabledBundlesQueryStringForQueryContext:(id)arg1;
- (id)_makeFilterQueryStringForQueryContext:(id)arg1;
- (id)_makeInstantAnswersQueryStringForQueryContext:(id)arg1;
- (id)_makePrefsQueryStringWithBundleIDs:(id)arg1;
- (struct __SIQuery { }*)_makeSIQueryWithQueryString:(id)arg1 queryContext:(id)arg2;
- (id)_pommesBundlesWithQueryContext:(id)arg1;
- (bool)addJob:(id)arg1;
- (void)addMatchInfo:(struct _MDPlistContainer { }*)arg1;
- (void)cancel;
- (bool)canceled;
- (id)clientBundleID;
- (id /* block */)completionBlock;
- (struct __CFArray { }*)copyMatchInfo;
- (bool)critical;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (bool)finished;
- (bool)hasPausedResults;
- (id)initWithQueryString:(id)arg1 queryContext:(id)arg2;
- (id)jobs;
- (id)knownBundleIds;
- (id)matchInfo;
- (void)pauseResults;
- (void)poll;
- (id)queryContext;
- (struct { unsigned long long x1; unsigned long long x2; })queryID;
- (id)queryString;
- (void)removeJob:(id)arg1;
- (id)resultsQueue;
- (void)resumeResults;
- (void)schedule;
- (id /* block */)scheduleBlock;
- (void)setCanceled:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCritical:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setHasPausedResults:(bool)arg1;
- (void)setJobs:(id)arg1;
- (void)setKnownBundleIds:(id)arg1;
- (void)setMatchInfo:(id)arg1;
- (void)setQueryContext:(id)arg1;
- (void)setQueryID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setQueryString:(id)arg1;
- (void)setResultsQueue:(id)arg1;
- (void)setScheduleBlock:(id /* block */)arg1;
- (void)setSiQuery:(struct __SIQuery { }*)arg1;
- (void)setStartTime:(double)arg1;
- (void)setWasCanceledByClient:(bool)arg1;
- (void)setWillAsyncStart:(bool)arg1;
- (struct __SIQuery { }*)siQuery;
- (void)start;
- (double)startTime;
- (bool)wasCanceledByClient;
- (bool)willAsyncStart;

@end

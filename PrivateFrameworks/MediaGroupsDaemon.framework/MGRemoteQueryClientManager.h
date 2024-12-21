/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon
 */

@interface MGRemoteQueryClientManager : NSObject <MGRemoteQueryClientBrowserDelegate, MGRemoteQueryClientDelegate, MGRemoteQueryClientWatchdogDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    MGRemoteQueryClientBrowser * _browser;
    NSArray * _clients;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    MGRemoteQueryClientManagerForwarder * _forwarder;
    NSArray * _homeHashes;
    bool  _invalidated;
    NSDictionary * _queries;
    MGOutstandingQuery * _query;
    MGGroupsQueryAgent * _queryAgent;
    <MGInternalQueryRunner> * _queryRunner;
    NSURLSession * _session;
    NSSet * _targets;
    NSDictionary * _watchdogs;
}

@property (nonatomic, retain) MGRemoteQueryClientBrowser *browser;
@property (nonatomic, retain) NSArray *clients;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) MGRemoteQueryClientManagerForwarder *forwarder;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *homeHashes;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) NSDictionary *queries;
@property (nonatomic, retain) MGOutstandingQuery *query;
@property (nonatomic, readonly) MGGroupsQueryAgent *queryAgent;
@property (nonatomic, readonly) <MGInternalQueryRunner> *queryRunner;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *targets;
@property (nonatomic, retain) NSDictionary *watchdogs;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_browserStart;
- (void)_browserStop;
- (void)_browserUpdateState;
- (id)_clientForTarget:(id)arg1 withQuery:(id)arg2;
- (id)_clientForTask:(id)arg1 includeOthers:(bool)arg2;
- (void)_clientRemove:(id)arg1;
- (void)_clientStartWithQuery:(id)arg1 target:(id)arg2;
- (void)_clientStop:(id)arg1;
- (id)_clientsForTarget:(id)arg1;
- (id)_clientsWithQuery:(id)arg1;
- (void)_invalidate;
- (void)_prepareURLSession;
- (void)_queryAdd:(id)arg1;
- (void)_queryRemove:(id)arg1;
- (void)_setupQuery;
- (void)_targetAdd:(id)arg1;
- (void)_targetRemove:(id)arg1;
- (bool)_targetValidate:(id)arg1;
- (void)_watchdogAdd:(id)arg1;
- (void)_watchdogFired:(id)arg1;
- (id)_watchdogForTarget:(id)arg1;
- (void)_watchdogRemove:(id)arg1;
- (void)_watchdogReset:(id)arg1;
- (void)addOutstandingQuery:(id)arg1;
- (id)browser;
- (void)browser:(id)arg1 foundTarget:(id)arg2;
- (void)browser:(id)arg1 invalidatedWithError:(id)arg2;
- (void)browser:(id)arg1 lostTarget:(id)arg2;
- (void)clientInvalidated:(id)arg1 withError:(id)arg2;
- (id)clients;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)forwarder;
- (id)homeHashes;
- (id)initWithQueryRunner:(id)arg1 groupsQueryAgent:(id)arg2;
- (bool)invalidated;
- (id)queries;
- (id)query;
- (id)queryAgent;
- (id)queryRunner;
- (void)removeOutstandingQuery:(id)arg1;
- (id)session;
- (void)setBrowser:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setHomeHashes:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setQueries:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setTargets:(id)arg1;
- (void)setWatchdogs:(id)arg1;
- (id)targets;
- (void)watchdogFired:(id)arg1;
- (id)watchdogs;

@end
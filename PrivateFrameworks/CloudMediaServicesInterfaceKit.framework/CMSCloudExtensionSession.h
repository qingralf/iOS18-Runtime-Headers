/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
 */

@interface CMSCloudExtensionSession : NSObject <NSURLSessionDelegate> {
    bool  _allowExplicitContent;
    NSString * _authHeader;
    <CMSCloudExtensionAuthProviderDelegate> * _authProvider;
    id /* block */  _closeCompletion;
    NSError * _closeError;
    NSMutableDictionary * _completions;
    CMSCloudExtensionConfiguration * _config;
    bool  _connected;
    NSURLSessionDataTask * _dataTask;
    NSMutableDictionary * _durations;
    NSString * _endpointIdentifier;
    NSMutableDictionary * _exceptions;
    CMSPlayerContext * _intentPlayerContext;
    NSURLRequest * _lastRequest;
    id /* block */  _prepareRequestHook;
    unsigned int  _qosClass;
    NSObject<OS_dispatch_queue> * _requestDispatch;
    NSMutableArray * _requestQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestQueueLock;
    NSString * _requesterHomeUserID;
    NSMutableDictionary * _results;
    NSURLSession * _session;
    NSString * _sessionIdentifier;
    bool  _shuffledPlayback;
    double  _timeoutInterval;
    double  _totalDuration;
    bool  _updateUserTasteProfile;
    bool  _waiting;
}

@property (nonatomic) bool allowExplicitContent;
@property (nonatomic, copy) NSString *authHeader;
@property (nonatomic, retain) NSMutableDictionary *completions;
@property (nonatomic, retain) CMSCloudExtensionConfiguration *config;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *durations;
@property (nonatomic, copy) NSString *endpointIdentifier;
@property (nonatomic, retain) NSMutableDictionary *exceptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CMSPlayerContext *intentPlayerContext;
@property (nonatomic) id /* block */ prepareRequestHook;
@property (nonatomic) unsigned int qosClass;
@property (nonatomic, retain) NSMutableArray *requestQueue;
@property (nonatomic, copy) NSString *requesterHomeUserID;
@property (nonatomic, retain) NSMutableDictionary *results;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic) bool shuffledPlayback;
@property (readonly) Class superclass;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double totalDuration;
@property (nonatomic) bool updateUserTasteProfile;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)_connectSession;
- (id)_constraintsDefinition;
- (void)_handleURLResponse:(id)arg1 before:(id)arg2 networkActivity:(id)arg3 request:(id)arg4 data:(id)arg5 error:(id)arg6;
- (bool)_handleURLResponseCode:(long long)arg1 error:(id)arg2 before:(id)arg3 request:(id)arg4 networkActivity:(id)arg5 retryHandler:(id /* block */)arg6;
- (id)_parsedObjectFromData:(id)arg1 inResponse:(id)arg2 error:(id*)arg3;
- (void)_performActivityUpdate:(id)arg1 completion:(id /* block */)arg2;
- (id)_queuePlayMediaForActivity:(id)arg1;
- (id)_requestForMethods:(id)arg1 before:(id)arg2 error:(id*)arg3;
- (id)_resultsFromData:(id)arg1 inResponse:(id)arg2 error:(id*)arg3;
- (void)_retryRequest:(id)arg1 before:(id)arg2 networkActivity:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_retryRequestAfterAuthTokenRenewal:(id)arg1 parentNetworkActivity:(id)arg2 before:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_sessionDescriptionWithDeadline:(id)arg1;
- (bool)_updateDynamicHeadersOnRequest:(id)arg1 withDeadline:(id)arg2;
- (bool)allowExplicitContent;
- (id)authHeader;
- (void)closeWithForce:(bool)arg1;
- (id)completions;
- (id)config;
- (id)description;
- (double)durationForMethod:(id)arg1;
- (id)durations;
- (id)endpointIdentifier;
- (id)exceptions;
- (void)getAlbumArtDataFromURL:(id)arg1 networkActivity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getContentProtectionKeyForAssetIdentifier:(id)arg1 usingKeySystem:(id)arg2 andKeyRequest:(id)arg3 playerContext:(id)arg4 userActivityDictionary:(id)arg5 networkActivity:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)getFairplayCertificateUsingNetworkActivity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getQueueSegmentFromURL:(id)arg1 referrer:(id)arg2 networkActivity:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (id)initWithConfiguration:(id)arg1 authProviderDelegate:(id)arg2;
- (id)intentPlayerContext;
- (id)peekResponseForMethod:(id)arg1 exception:(id*)arg2;
- (void)performMethod:(id)arg1 withParams:(id)arg2 networkActivity:(id)arg3 completion:(id /* block */)arg4;
- (id /* block */)prepareRequestHook;
- (void)publishContentFailure:(id)arg1 forActivity:(id)arg2 whilePlaying:(id)arg3 previousContentURL:(id)arg4 nextContentURL:(id)arg5 networkActivity:(id)arg6 completion:(id /* block */)arg7;
- (unsigned int)qosClass;
- (void)report:(unsigned long long)arg1 forActivity:(id)arg2 nowPlaying:(id)arg3 previous:(id)arg4 timestamp:(id)arg5 completion:(id /* block */)arg6;
- (void)reportContentFailure:(id)arg1 forActivity:(id)arg2 whilePlaying:(id)arg3 timestamp:(id)arg4 completion:(id /* block */)arg5;
- (id)requestQueue;
- (void)requestQueueForActivity:(id)arg1 networkActivity:(id)arg2 completion:(id /* block */)arg3;
- (id)requesterHomeUserID;
- (id)results;
- (id)session;
- (id)sessionIdentifier;
- (void)setAllowExplicitContent:(bool)arg1;
- (void)setAuthHeader:(id)arg1;
- (void)setCloseCompletion:(id /* block */)arg1;
- (void)setCompletions:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setDurations:(id)arg1;
- (void)setEndpointIdentifier:(id)arg1;
- (void)setExceptions:(id)arg1;
- (void)setIntentPlayerContext:(id)arg1;
- (void)setPrepareRequestHook:(id /* block */)arg1;
- (void)setQosClass:(unsigned int)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setRequesterHomeUserID:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setShuffledPlayback:(bool)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setTotalDuration:(double)arg1;
- (void)setUpdateUserTasteProfile:(bool)arg1;
- (bool)shuffledPlayback;
- (double)timeoutInterval;
- (double)totalDuration;
- (bool)updateUserTasteProfile;

@end

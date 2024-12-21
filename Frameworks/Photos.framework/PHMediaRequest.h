/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMediaRequest : NSObject <PHRetryableRequest> {
    PHAsset * _asset;
    _Atomic bool  _cancelled;
    NSError * _configurationError;
    long long  _contextType;
    <PHMediaRequestDelegate> * _delegate;
    NSString * _identifierString;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _managerID;
    PHProgressContainerForRetryableRequest * _progressContainer;
    PLProgressFollower * _progressFollower;
    NSMutableArray * _progresses;
    int  _requestID;
    unsigned long long  _requestIndex;
    _Atomic unsigned int  _retryAttemptCount;
    unsigned long long  _signpostID;
    bool  _wantsProgress;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) long long contextType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) <PHMediaRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long downloadIntent;
@property (nonatomic, readonly) long long downloadPriority;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long managerID;
@property (getter=isNetworkAccessAllowed, nonatomic, readonly) bool networkAccessAllowed;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) unsigned long long requestIndex;
@property (nonatomic) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (getter=isSynchronous, nonatomic, readonly) bool synchronous;
@property (nonatomic) bool wantsProgress;

- (void).cxx_destruct;
- (id)asset;
- (void)cancel;
- (void)configureWithError:(id)arg1;
- (long long)contextType;
- (void)dealloc;
- (id)delegate;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (unsigned long long)fetchIncrementRetryAttemptCount;
- (void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (id)identifierString;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 delegate:(id)arg6;
- (bool)isCancelled;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (id)lazyProgressContainer;
- (unsigned long long)managerID;
- (void)prepareForRetry;
- (void)recordMetricsWithMetricsHandler:(id /* block */)arg1;
- (int)requestID;
- (unsigned long long)requestIndex;
- (id)sendMakeAvailableRequestForResource:(id)arg1 reply:(id /* block */)arg2;
- (id)sendResourceRepairRequestForResource:(id)arg1 errorCodes:(id)arg2 reply:(id /* block */)arg3;
- (id)sendResourceRepairRequestWithErrorCodes:(id)arg1 reply:(id /* block */)arg2;
- (void)setSignpostID:(unsigned long long)arg1;
- (void)setWantsProgress:(bool)arg1;
- (unsigned long long)signpostID;
- (void)startRequest;
- (bool)wantsProgress;

@end
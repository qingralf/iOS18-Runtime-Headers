/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLLocalStreamTask : NSURLSessionStreamTask {
    NSData * __TCPConnectionMetadata;
    NSData * __initialDataPayload;
    NSMutableArray * _afterConnectQueue;
    int  _allowsCellularOverride;
    int  _allowsConstrainedOverride;
    int  _allowsExpensiveOverride;
    int  _allowsUCAOverride;
    bool  _betterRouteDiscovered;
    NSString * _boundInterfaceIdentifier;
    int  _connectionState;
    long long  _countOfBytesClientExpectsToReceive;
    long long  _countOfBytesClientExpectsToSend;
    long long  _countOfBytesExpectedToReceive;
    long long  _countOfBytesExpectedToSend;
    long long  _countOfBytesReceived;
    long long  _countOfBytesSent;
    NSURLRequest * _currentRequest;
    bool  _deliveredConnectionEstablished;
    bool  _didIssueCancel;
    bool  _disallowCellular;
    id /* block */  _disavow;
    bool  _doingWorkOnThisQueue;
    NSError * _error;
    NSMutableArray * _extraWork;
    NSMutableArray * _finalizationQueue;
    bool  _goneSecure;
    NSDictionary * _legacySocketStreamProperties;
    double  _loadingPriorityValue;
    int  _networkServiceType;
    NSURLRequest * _originalRequest;
    NSMutableArray * _pendingWork;
    long long  _priorityValue;
    NSData * _readBuffer;
    bool  _readEOF;
    struct { 
        long long domain; 
        int error; 
    }  _readError;
    bool  _readSignaled;
    struct __CFReadStream { } * _readStream;
    NSURLResponse * _response;
    struct BaseSocketStreamClient { int (**x1)(); } * _socketStreamClient;
    long long  _state;
    NSString * _taskDescription;
    unsigned long long  _taskIdentifier;
    NSObject<OS_dispatch_source> * _tickerTimeoutTimer;
    double  _timeWindowDelay;
    double  _timeWindowDuration;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueueForStreamTask;
    NSData * _writeBuffer;
    long long  _writeBufferAlreadyWrittenForNextWrite;
    bool  _writeEOF;
    struct { 
        long long domain; 
        int error; 
    }  _writeError;
    bool  _writeSignaled;
    struct __CFWriteStream { } * _writeStream;
    float  priority;
    double  startTime;
}

@property (copy) NSData *_TCPConnectionMetadata;
@property (readonly) bool _goneSecure;
@property (copy) NSData *_initialDataPayload;
@property double _timeoutIntervalForResource;
@property (readonly, copy) NSUUID *_uniqueIdentifier;
@property long long countOfBytesClientExpectsToReceive;
@property long long countOfBytesClientExpectsToSend;
@property long long countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property (copy) NSURLRequest *currentRequest;
@property (copy) NSError *error;
@property (copy) NSURLRequest *originalRequest;
@property (copy) NSURLResponse *response;
@property long long state;
@property (copy) NSString *taskDescription;
@property unsigned long long taskIdentifier;

- (id)_TCPConnectionMetadata;
- (void)_adoptEffectiveConfiguration:(id)arg1;
- (int)_allowsCellularOverride;
- (int)_allowsConstrainedOverride;
- (int)_allowsExpensiveOverride;
- (int)_allowsUCAOverride;
- (id)_boundInterfaceIdentifier;
- (bool)_cacheOnly;
- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (bool)_disallowCellular;
- (id)_effectiveConfiguration;
- (bool)_goneSecure;
- (id)_initWithExistingTask:(id)arg1 disavow:(id /* block */)arg2;
- (id)_initialDataPayload;
- (id)_legacySocketStreamProperties;
- (int)_networkServiceType;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_resume;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (id)_uniqueIdentifier;
- (void)cancel;
- (void)captureStreams;
- (void)closeRead;
- (void)closeWrite;
- (long long)computeAdjustedPoolPriority;
- (void)copyStreamProperty:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfBytesClientExpectsToReceive;
- (long long)countOfBytesClientExpectsToSend;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (id)currentRequest;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(id /* block */)arg4;
- (id)initWithNetService:(id)arg1 taskGroup:(id)arg2 disavow:(id /* block */)arg3;
- (id)originalRequest;
- (float)priority;
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)response;
- (void)resume;
- (void)setCountOfBytesClientExpectsToReceive:(long long)arg1;
- (void)setCountOfBytesClientExpectsToSend:(long long)arg1;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setResponse:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (void)set_TCPConnectionMetadata:(id)arg1;
- (void)set_allowsCellularOverride:(int)arg1;
- (void)set_allowsConstrainedOverride:(int)arg1;
- (void)set_allowsExpensiveOverride:(int)arg1;
- (void)set_allowsUCAOverride:(int)arg1;
- (void)set_boundInterfaceIdentifier:(id)arg1;
- (void)set_disallowCellular:(bool)arg1;
- (void)set_initialDataPayload:(id)arg1;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (void)set_networkServiceType:(int)arg1;
- (void)set_timeWindowDelay:(double)arg1;
- (void)set_timeWindowDuration:(double)arg1;
- (void)startSecureConnection;
- (long long)state;
- (void)stopSecureConnection;
- (void)suspend;
- (id)taskDescription;
- (unsigned long long)taskIdentifier;
- (id)workQueue;
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;

@end
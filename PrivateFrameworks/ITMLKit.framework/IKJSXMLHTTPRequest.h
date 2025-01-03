/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSXMLHTTPRequest : IKJSEventListenerObject <IKJSXMLHTTPRequest, ISStoreURLOperationDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegate> {
    bool  _async;
    NSHTTPURLResponse * _cachedURLResponse;
    NSString * _dataToSend;
    bool  _inProgress;
    ISURLOperation * _jingleOperation;
    bool  _jingleRequest;
    JSManagedValue * _managedSelf;
    <IKNetworkRequestRecord> * _networkRequestRecord;
    NSMutableArray * _onReadyStateChangeMessageQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _onReadyStateChangeMessageQueueLock;
    NSString * _password;
    NSDictionary * _performanceMetrics;
    bool  _primeEnabled;
    long long  _primeRetryCount;
    unsigned int  _readyState;
    NSData * _receivedData;
    long long  _reprimingResponseStatus;
    NSError * _requestError;
    NSString * _requestId;
    long long  _requestReadyState;
    long long  _requestResponseType;
    unsigned int  _requestStatusCode;
    NSString * _requestStatusText;
    NSURL * _requestURL;
    bool  _shouldSquashOnReadyStateEvents;
    unsigned int  _status;
    NSString * _statusText;
    NSURLConnection * _urlConnection;
    NSMutableURLRequest * _urlRequest;
    NSHTTPURLResponse * _urlResponse;
    NSURLSession * _urlSession;
    NSURLSessionConfiguration * _urlSessionConfiguration;
    NSString * _user;
    bool  requireSystemTrust;
    unsigned long long  timeout;
}

@property (retain) NSHTTPURLResponse *cachedURLResponse;
@property (nonatomic, copy) NSString *dataToSend;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) ISURLOperation *jingleOperation;
@property (nonatomic) bool jingleRequest;
@property (nonatomic, retain) JSManagedValue *managedSelf;
@property (readonly) NSDictionary *metrics;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration; /* unknown property attribute: ? */
@property (nonatomic, readonly) <IKNetworkRequestRecord> *networkRequestRecord;
@property (nonatomic, retain) NSMutableArray *onReadyStateChangeMessageQueue;
@property (nonatomic, retain) NSString *password;
@property (retain) NSDictionary *performanceMetrics;
@property (nonatomic, readonly) bool primeEnabled;
@property (nonatomic) long long primeRetryCount;
@property unsigned int readyState;
@property (retain) NSData *receivedData;
@property (nonatomic, readonly) long long reprimingResponseStatus;
@property (nonatomic, retain) NSError *requestError;
@property (nonatomic, retain) NSString *requestId;
@property (nonatomic) long long requestReadyState;
@property (nonatomic) long long requestResponseType;
@property (nonatomic) unsigned int requestStatusCode;
@property (nonatomic, retain) NSString *requestStatusText;
@property (nonatomic, retain) NSURL *requestURL;
@property (nonatomic) bool requireSystemTrust;
@property (readonly) id response;
@property (readonly) NSString *responseText;
@property (retain) NSString *responseType;
@property (readonly) IKDOMDocument *responseXML;
@property unsigned int status;
@property (retain) NSString *statusText;
@property (readonly) Class superclass;
@property unsigned long long timeout;
@property (nonatomic, retain) NSURLConnection *urlConnection;
@property (nonatomic, retain) NSMutableURLRequest *urlRequest;
@property (nonatomic, retain) NSHTTPURLResponse *urlResponse;
@property (nonatomic, retain) NSURLSession *urlSession;
@property (nonatomic, copy) NSURLSessionConfiguration *urlSessionConfiguration;
@property (nonatomic, retain) NSString *user;

+ (id)xhrOperationQueue;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_abort;
- (void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;
- (id)_constructProgressEventData;
- (id)_createStoreOperation:(id)arg1;
- (id)_dequeueReadyStateChangeMessage;
- (bool)_isPrimeError:(long long)arg1 output:(id)arg2;
- (void)_loadingDidFailWithError:(id)arg1;
- (void)_loadingDidFinish;
- (void)_loadingDidReceiveData:(id)arg1;
- (void)_loadingDidReceiveResponse:(id)arg1 timingData:(id)arg2;
- (id)_loadingWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)_openWithMethod:(id)arg1 url:(id)arg2 async:(bool)arg3 user:(id)arg4 password:(id)arg5;
- (void)_operationFinished:(id)arg1;
- (void)_prime:(id)arg1;
- (void)_reprime:(id)arg1;
- (void)_sendWithData:(id)arg1;
- (void)_setException:(id)arg1;
- (id)_timeIntervalSince1970;
- (void)abort;
- (id)cachedURLResponse;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)dataToSend;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)arg1;
- (id)init;
- (id)initWithAppContext:(id)arg1 jingleRequest:(bool)arg2;
- (id)jingleOperation;
- (bool)jingleRequest;
- (id)managedSelf;
- (id)metrics;
- (id)networkRequestRecord;
- (id)onReadyStateChangeMessageQueue;
- (void)open:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5;
- (void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (id)password;
- (id)performanceMetrics;
- (bool)primeEnabled;
- (long long)primeRetryCount;
- (unsigned int)readyState;
- (id)receivedData;
- (long long)reprimingResponseStatus;
- (id)requestError;
- (id)requestId;
- (long long)requestReadyState;
- (long long)requestResponseType;
- (unsigned int)requestStatusCode;
- (id)requestStatusText;
- (id)requestURL;
- (bool)requireSystemTrust;
- (id)response;
- (id)responseArrayBuffer;
- (id)responseBlob;
- (id)responseJSON;
- (id)responseText;
- (id)responseType;
- (id)responseXML;
- (void)send:(id)arg1;
- (void)setCachedURLResponse:(id)arg1;
- (void)setDataToSend:(id)arg1;
- (void)setJingleOperation:(id)arg1;
- (void)setJingleRequest:(bool)arg1;
- (void)setManagedSelf:(id)arg1;
- (void)setOnReadyStateChangeMessageQueue:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPerformanceMetrics:(id)arg1;
- (void)setPrimeRetryCount:(long long)arg1;
- (void)setReadyState:(unsigned int)arg1;
- (void)setReceivedData:(id)arg1;
- (void)setRequestError:(id)arg1;
- (void)setRequestHeader:(id)arg1 :(id)arg2;
- (void)setRequestId:(id)arg1;
- (void)setRequestReadyState:(long long)arg1;
- (void)setRequestResponseType:(long long)arg1;
- (void)setRequestStatusCode:(unsigned int)arg1;
- (void)setRequestStatusText:(id)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setRequireSystemTrust:(bool)arg1;
- (void)setResponseType:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setStatusText:(id)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)setUrlConnection:(id)arg1;
- (void)setUrlRequest:(id)arg1;
- (void)setUrlResponse:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (void)setUrlSessionConfiguration:(id)arg1;
- (void)setUser:(id)arg1;
- (unsigned int)status;
- (id)statusText;
- (unsigned long long)timeout;
- (id)urlConnection;
- (id)urlRequest;
- (id)urlResponse;
- (id)urlSession;
- (id)urlSessionConfiguration;
- (id)user;
- (bool)validateTrust:(struct __SecTrust { }*)arg1;
- (bool)verifyCertificateIsSystemTrustedWithTrust:(struct __SecTrust { }*)arg1;

@end

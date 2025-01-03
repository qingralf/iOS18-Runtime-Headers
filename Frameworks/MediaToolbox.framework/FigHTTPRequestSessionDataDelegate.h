/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigHTTPRequestSessionDataDelegate : NSObject <NSURLSessionDataDelegate> {
    unsigned char  _doesIgnoreDidReceiveResponseDisposition;
    NSMutableDictionary * _taskToFigHTTPRequest;
    struct OpaqueFigReentrantMutex { } * _taskToFigHTTPRequestMutex;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (struct FigRetainProxy { }*)_copyAndLockRequestForTask:(id)arg1;
- (void)_deregisterFigHTTPRequestForDataTask:(id)arg1;
- (void)_registerFigHTTPRequest:(struct OpaqueFigHTTPRequest { }*)arg1 forDataTask:(id)arg2;
- (id)adoptVoucherFromRetainProxy:(struct FigRetainProxy { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithResponseDispositionOption:(bool)arg1;
- (void)restoreVoucher:(id)arg1;

@end

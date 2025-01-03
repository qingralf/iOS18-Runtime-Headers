/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVURLImageLoader : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate, TVImageLoader> {
    bool  _imageRotationEnabled;
    NSMutableDictionary * _loadIDsByURL;
    NSMutableDictionary * _loadOptionsByID;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSURLSession * _session;
    NSMutableDictionary * _taskOptionsByURL;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isImageRotationEnabled, nonatomic) bool imageRotationEnabled;
@property (nonatomic, readonly) NSMutableDictionary *loadIDsByURL;
@property (nonatomic, readonly) NSMutableDictionary *loadOptionsByID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *taskOptionsByURL;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)URLForObject:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_executeOnProcessingQueue:(id /* block */)arg1;
- (void)cancelLoad:(id)arg1;
- (id)imageKeyForObject:(id)arg1;
- (id)init;
- (bool)isImageRotationEnabled;
- (id)loadIDsByURL;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)loadOptionsByID;
- (id)processingQueue;
- (id)session;
- (void)setImageRotationEnabled:(bool)arg1;
- (id)taskOptionsByURL;

@end

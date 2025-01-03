/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLConfigurationFetcher : NSObject {
    NSMutableArray * _completionHandlers;
    NSURL * _configurationURL;
    NSURLSession * _currentSession;
    <CPLConfigurationFetcherDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSURL *configurationURL;
@property (nonatomic, readonly) <CPLConfigurationFetcherDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_updateConfigurationWithFetchData:(id)arg1 fetchError:(id)arg2 fetchURL:(id)arg3 fromConfigurationDictionary:(id)arg4;
- (id)configurationURL;
- (id)delegate;
- (void)fetchConfigurationDictionary:(id)arg1;
- (void)fetchConfigurationDictionary:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithConfigurationURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (id)queue;

@end

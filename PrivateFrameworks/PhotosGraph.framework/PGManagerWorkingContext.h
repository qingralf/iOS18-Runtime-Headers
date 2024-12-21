/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGManagerWorkingContext : NSObject {
    CPAnalytics * _analytics;
    CLSLocationCache * _locationCache;
    NSObject<OS_os_log> * _loggingConnection;
    PGManager * _manager;
}

@property (readonly) CPAnalytics *analytics;
@property (readonly) PGCurationManager *curationManager;
@property (readonly) CLSLocationCache *locationCache;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) CLSServiceManager *serviceManager;

- (void).cxx_destruct;
- (id)analytics;
- (id)curationManager;
- (id)initWithManager:(id)arg1 loggingConnection:(id)arg2;
- (bool)isGraphReady;
- (id)locationCache;
- (id)loggingConnection;
- (id)musicCuratorContextWithCurationOptions:(id)arg1 error:(id*)arg2;
- (id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)arg1 error:(id*)arg2;
- (void)performSynchronousConcurrentGraphReadUsingBlock:(id /* block */)arg1;
- (id)photoLibrary;
- (id)serviceManager;

@end
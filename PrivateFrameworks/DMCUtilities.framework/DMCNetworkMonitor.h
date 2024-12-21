/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DMCUtilities.framework/DMCUtilities
 */

@interface DMCNetworkMonitor : NSObject {
    NSMutableArray * _cachedCompletionHandlers;
    bool  _isMonitoring;
    NWPathEvaluator * _pathEvaluator;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic, retain) NSMutableArray *cachedCompletionHandlers;
@property (nonatomic) bool isMonitoring;
@property (nonatomic, retain) NWPathEvaluator *pathEvaluator;
@property (nonatomic, retain) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workerQueue;

- (void).cxx_destruct;
- (bool)_deviceMightHaveNetwork;
- (void)_evaluateNetwork;
- (id)_interfaceType;
- (void)_notifyAllClients;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (id)cachedCompletionHandlers;
- (void)dealloc;
- (id)init;
- (bool)isMonitoring;
- (id)pathEvaluator;
- (id)pathMonitor;
- (void)setCachedCompletionHandlers:(id)arg1;
- (void)setIsMonitoring:(bool)arg1;
- (void)setPathEvaluator:(id)arg1;
- (void)setPathMonitor:(id)arg1;
- (void)setWorkerQueue:(id)arg1;
- (void)waitForNetworkWithCompletionHandler:(id /* block */)arg1;
- (id)workerQueue;

@end
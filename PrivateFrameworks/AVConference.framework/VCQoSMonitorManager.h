/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCQoSMonitorManager : VCObject {
    long long  _reportingInterval;
    NSMutableDictionary * _sources;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)deregisterBlocksForService;
- (bool)doesQoSSourceExistForStreamToken:(id)arg1;
- (id)init;
- (void)registerBlocksForService;
- (void)registerQoSReportingSourceForToken:(long long)arg1;
- (void)unregisterQoSReportingSourceForToken:(long long)arg1;
- (void)updateEventDrivenQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;
- (void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;

@end

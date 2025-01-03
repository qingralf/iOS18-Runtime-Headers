/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface ChronoServices.ControlsClient : NSObject <CHSControlsXPCClient> {
    void $__lazy_storage_$_liveControlsDidChangePublisher;
    void $__lazy_storage_$_previewControlsDidChangePublisher;
    void _calloutQueue;
    void _calloutQueue_liveControlsDidChangePublisher;
    void _calloutQueue_previewControlsDidChangePublisher;
    void _lock;
    void _lock_environmentData;
    void _lock_sandboxExtensions;
    void _lock_subscriptions;
    void _queue;
    void _queue_connection;
    void _queue_controlHosts;
    void handleSystemEnvironmentDidChange;
}

- (void).cxx_destruct;
- (id)init;
- (void)liveControlsDidChange:(id)arg1;
- (void)previewControlsDidChange:(id)arg1;
- (void)systemEnvironmentDidChange:(id)arg1;

@end

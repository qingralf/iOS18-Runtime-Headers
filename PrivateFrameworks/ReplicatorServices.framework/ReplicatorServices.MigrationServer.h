/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReplicatorServices.framework/ReplicatorServices
 */

@interface ReplicatorServices.MigrationServer : NSObject <BSServiceConnectionListenerDelegate> {
    void clientDescriptorProvider;
    void deviceProvider;
    void eraseHandler;
    void listener;
    void localDeviceIDProvider;
    void lock;
    void lock_clients;
    void queue;
    void recordProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end

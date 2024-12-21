/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface __IOGCDevice : GCIOService {
    struct __CFAllocator { } * _allocator;
    id /* block */  _cancelHandler;
    struct IOGCDeviceInterface {} ** _deviceInterface;
    GCIONotificationPort * _notificationChannel;
    struct IOCFPlugInInterfaceStruct {} ** _pluginInterface;
    NSObject<OS_dispatch_queue> * _queue;
    int (* _removalCallback;
    void * _removalCallbackContext;
    unsigned int  _removalNotification;
    _Atomic unsigned char  _state;
}

- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1 error:(id*)arg2;

@end
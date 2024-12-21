/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReplicatorEngine.framework/ReplicatorEngine
 */

@interface ReplicatorEngine.IDSServiceWrapper : NSObject <IDSServiceDelegate> {
    void $__lazy_storage_$_devicesDidChangePublisher;
    void $__lazy_storage_$_didUpdatePairedDevicePublisher;
    void $__lazy_storage_$_messagePublisher;
    void _devicesDidChangePublisher;
    void _didUpdatePairedDevicePublisher;
    void _lock_pairedDevice;
    void _messagePublisher;
    void idsService;
    void pairedDeviceLock;
    void pairedDeviceNotificationToken;
    void queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)pairedDeviceStateChangedWithNotification:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReplicatorServices.framework/ReplicatorServices
 */

@interface _TtC18ReplicatorServicesP33_0A2EF918E67C2EDB6C17D3829BB080AE9Singleton : NSObject <ReplicatorServices.ReplicationXPCClient> {
    void $__lazy_storage_$_devicePublisher;
    void $__lazy_storage_$_messagePublisher;
    void $__lazy_storage_$_pairedDevicePublisher;
    void $__lazy_storage_$_recordVersionPublisher;
    void _devicePublisher;
    void _messagePublisher;
    void _pairedDevicePublisher;
    void _recordVersionPublisher;
    void connection;
    void queue;
    void queue_clientDefinedIDToInternalRecordID;
    void queue_clientDescriptors;
    void queue_deviceFetchPending;
    void queue_deviceToken;
    void queue_devices;
    void queue_hasFetchedDevices;
    void queue_hasFetchedRecordVersions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  queue_localDeviceID;
    void queue_messageFetchPending;
    void queue_messageTokens;
    void queue_recordFetchPending;
    void queue_recordVersions;
    void queue_zoneChangeTokens;
    void serverStartupToken;
}

- (void).cxx_destruct;
- (id)init;

@end
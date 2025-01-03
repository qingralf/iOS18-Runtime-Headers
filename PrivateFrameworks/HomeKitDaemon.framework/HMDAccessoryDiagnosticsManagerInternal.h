/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDAccessoryDiagnosticsManagerInternal : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDAccessory * _accessory;
    NSString * _clientIdentifier;
    HMDAccessoryDiagnosticsSessionInternal * _currentDiagnosticsSession;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *clientIdentifier;
@property (retain) HMDAccessoryDiagnosticsSessionInternal *currentDiagnosticsSession;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleDiagnosticsTransferRequest:(id)arg1;
- (void)_registerForMessages;
- (id)accessory;
- (id)attributeDescriptions;
- (id)clientIdentifier;
- (id)currentDiagnosticsSession;
- (void)handleDiagnosticsTransferWithOptions:(id)arg1 message:(id)arg2;
- (id)initWithAccessory:(id)arg1;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)notifyClientsOfDiagnosticsTransferSupport:(bool)arg1 supportDiagnosticsTransfer:(id)arg2;
- (void)setCurrentDiagnosticsSession:(id)arg1;
- (void)shutDown;
- (void)start;
- (id)workQueue;

@end

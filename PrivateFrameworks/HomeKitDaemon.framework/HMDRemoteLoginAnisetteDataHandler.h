/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDRemoteLoginAnisetteDataHandler : HMFObject <HMDHomeMessageReceiver, HMFLogging> {
    HMDAppleMediaAccessory * _accessory;
    HMFMessageDispatcher * _msgDispatcher;
    AKAnisetteProvisioningController * _provisioningController;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAppleMediaAccessory *accessory;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) AKAnisetteProvisioningController *provisioningController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleEraseAnisetteDataRequestMessage:(id)arg1;
- (void)_handleFetchAnisetteDataRequestMessage:(id)arg1;
- (void)_handleLegacyAnisetteDataRequestMessage:(id)arg1;
- (void)_handleProvisionAnisetteDataRequestMessage:(id)arg1;
- (void)_handleSyncAnisetteDataRequestMessage:(id)arg1;
- (id)accessory;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)provisioningController;
- (void)registerForMessages;
- (void)setMsgDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end

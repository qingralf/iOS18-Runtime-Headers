/* Generated by RuntimeBrowser.
 */

@protocol HMDCameraStreamControlMessageHandlerDataSource <NSObject>

@required

- (HMDDynamicActivityAttributionPublisher *)createDynamicActivityAttributionPublisher;
- (HMDCameraLocalStreamControlManager *)createLocalStreamControlManagerWithSessionID:(HMDCameraStreamSessionID *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg3 reachabilityPath:(unsigned long long)arg4 device:(HMDDevice *)arg5 delegate:(id <HMDCameraStreamControlManagerDelegate>)arg6 accessory:(HMDHAPAccessory *)arg7 streamManagementService:(HMDService *)arg8 localNetworkConfig:(HMDCameraNetworkConfig *)arg9 remoteCapabilities:(NSDictionary *)arg10 supportedConfigCache:(HMDCameraSupportedConfigurationCache *)arg11 streamPreference:(HMCameraStreamPreferences *)arg12;
- (HMDCameraRemoteStreamControlManager *)createRemoteStreamControlManagerWithSessionID:(HMDCameraStreamSessionID *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg3 reachabilityPath:(unsigned long long)arg4 device:(HMDDevice *)arg5 delegate:(id <HMDCameraStreamControlManagerDelegate>)arg6 accessory:(HMDHAPAccessory *)arg7 streamManagementService:(HMDService *)arg8 remoteCapabilities:(NSDictionary *)arg9 profileUniqueIdentifier:(NSUUID *)arg10 residentMessageHandler:(HMDCameraResidentMessageHandler *)arg11 remoteAccessDevice:(HMDDevice *)arg12 streamPreference:(HMCameraStreamPreferences *)arg13;
- (HMDCameraStreamManagerSession *)createStreamManagerSessionWithSessionID:(HMDCameraStreamSessionID *)arg1 destinationID:(NSString *)arg2 streamClientConnection:(HMDXPCClientConnection *)arg3 streamControlManager:(id <HMDCameraStreamControlManagerProtocol>)arg4 setupWaitPeriod:(double)arg5;
- (bool)isResidentCapable;
- (HMDCameraNetworkConfig *)localNetworkConfig;
- (bool)supportsBidirectionalAudioForCameraStreaming;
- (bool)supportsChangingVolume;
- (bool)supportsReceivingRemoteCameraStream;

@end

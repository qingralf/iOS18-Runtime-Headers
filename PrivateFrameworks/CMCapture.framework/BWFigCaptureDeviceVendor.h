/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWFigCaptureDeviceVendor : NSObject <FigCaptureOSStateDataProvider> {
    NSMutableArray * _activeDeviceClients;
    NSObject<OS_os_transaction> * _activeForClientAssertion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _calibrationStatusLock;
    bool  _calibrationStatusQueried;
    NSMutableDictionary * _cameraPoseMatricesByPortTypeByDeviceID;
    NSMutableArray * _cmioDeviceCreationHistory;
    CMIOExtensionDiscoverySession * _cmioDiscoverySession;
    int (* _cmioExtensionDeviceCreateFunction;
    int  _createDeviceTime;
    int (* _defaultDeviceCreateFunction;
    NSMutableArray * _defaultDeviceCreationHistory;
    NSObject<OS_dispatch_source> * _defaultDeviceOpenTimer;
    NSMutableSet * _defaultDevicePriorStreamPortTypes;
    double  _deviceCloseTimeoutSeconds;
    NSDateFormatter * _deviceDateFormatter;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    NSMutableDictionary * _devicesStatesByDeviceID;
    FigCaptureGameModeMonitor * _gameModeMonitor;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    FigCaptureOSStateHandle * _osStateHandle;
    bool  _rearCameraCalibrationValid;
    NSMutableArray * _registeredDeviceClients;
    NSMutableArray * _victimizedDeviceClients;
}

@property (readonly) int activeClientPriority;
@property (nonatomic, readonly) int createDeviceTime;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *deviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) bool rearCameraCalibrationValid;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedCaptureDeviceVendor;
+ (id)sharedCaptureDeviceVendorWithDefaultDeviceCreateFunction:(int (*)arg1;
+ (bool)videoCaptureDeviceFirmwareIsLoaded;

- (id)_copyStreamsFromDevice:(id)arg1 positions:(id)arg2 deviceTypes:(id)arg3 requestControl:(bool)arg4 deviceClientPriority:(int)arg5 allowsStreamControlLoss:(bool)arg6 error:(int*)arg7;
- (id)_deviceWithID:(id)arg1;
- (void)_handleCMIOExtensionDevicesChangedNotification:(id)arg1;
- (int)activeClientPriority;
- (bool)activeDefaultDeviceEquals:(id)arg1;
- (id)activeDeviceClient;
- (id)cameraPoseMatrixForStreamWithPosition:(int)arg1 deviceType:(int)arg2 deviceID:(id)arg3;
- (id)cmioDeviceCreationHistory;
- (id)copyDefaultDeviceForVibeMitigation:(int*)arg1;
- (id)copyDeviceForClient:(int)arg1 informClientWhenDeviceAvailableAgain:(bool)arg2 error:(int*)arg3;
- (id)copyDeviceForPublishingWithID:(id)arg1 error:(int*)arg2;
- (id)copyDeviceWithID:(id)arg1 forClient:(int)arg2 informClientWhenDeviceAvailableAgain:(bool)arg3 error:(int*)arg4;
- (id)copyStreamFromDevice:(id)arg1 position:(int)arg2 deviceType:(int)arg3 deviceClientPriority:(int)arg4 allowsStreamControlLoss:(bool)arg5 error:(int*)arg6;
- (id)copyStreamWithoutControlFromDevice:(id)arg1 position:(int)arg2 deviceType:(int)arg3 error:(int*)arg4;
- (id)copyStreamsFromDevice:(id)arg1 positions:(id)arg2 deviceTypes:(id)arg3 deviceClientPriority:(int)arg4 allowsStreamControlLoss:(bool)arg5 error:(int*)arg6;
- (id)copyStreamsWithUniqueIDs:(id)arg1 forDevice:(id)arg2 deviceClientPriority:(int)arg3 error:(int*)arg4;
- (id)copyStreamsWithoutControlFromDevice:(id)arg1 positions:(id)arg2 deviceTypes:(id)arg3 error:(int*)arg4;
- (int)createDeviceTime;
- (void)dealloc;
- (id)defaultDeviceCreationHistory;
- (id)deviceIDs;
- (id)deviceWithID:(id)arg1;
- (bool)hasActiveForClientAssertion;
- (id)initWithDefaultDeviceCreateFunction:(int (*)arg1;
- (id)initWithDefaultDeviceCreateFunction:(int (*)arg1 cmioExtensionDeviceCreateFunction:(int (*)arg2 cmioDiscoverySession:(id)arg3;
- (void)invalidateVideoDevice:(id)arg1 forPID:(int)arg2;
- (int)keepControlOfStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(id)arg3;
- (id)osStatePropertyList;
- (void)prewarmDefaultVideoDeviceForPID:(int)arg1 completionHandler:(id /* block */)arg2;
- (bool)rearCameraCalibrationValid;
- (int)registerClientWithPID:(int)arg1 clientApplicationID:(id)arg2 clientDescription:(id)arg3 clientPriority:(int)arg4 canStealFromClientsWithSamePriority:(bool)arg5 deviceSharingWithOtherClientsAllowed:(bool)arg6 deviceSharingWithAVFlashlightAllowed:(bool)arg7 clientIsAVFlashlight:(bool)arg8 deviceAvailabilityChangedHandler:(id /* block */)arg9;
- (int)registerClientWithPID:(int)arg1 clientDescription:(id)arg2 clientPriority:(int)arg3 canStealFromClientsWithSamePriority:(bool)arg4 deviceSharingWithOtherClientsAllowed:(bool)arg5 deviceSharingWithAVFlashlightAllowed:(bool)arg6 clientIsAVFlashlight:(bool)arg7 deviceAvailabilityChangedHandler:(id /* block */)arg8;
- (id)registeredDeviceClientWithID:(int)arg1;
- (id)registeredDeviceClients;
- (int)requestControlOfStreams:(id)arg1 device:(id)arg2 deviceClientPriority:(int)arg3;
- (void)resumeSystemPressuredDevice;
- (void)shutDownSystemPressuredDevice:(id)arg1;
- (bool)streamsInUseForDevice:(id)arg1;
- (float)structuredLightProjectorStandbyTemperatureWithError:(int*)arg1;
- (void)takeBackDevice:(id)arg1 forClient:(int)arg2 informClientWhenDeviceAvailableAgain:(bool)arg3 prefersDeviceInvalidatedImmediately:(bool)arg4;
- (void)takeBackStreams:(id)arg1 device:(id)arg2 totalStreamingDuration:(unsigned int)arg3;
- (int)unregisterClient:(int)arg1;
- (int)usageCountForDevice:(id)arg1;
- (id)victimizedDeviceClients;

@end
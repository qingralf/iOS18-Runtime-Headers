/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter
 */

@interface HMMTRFirmwareUpdateStatus : NSObject <HMFTimerDelegate> {
    HMMTRAccessoryServer * _accessoryServer;
    HMMTRAccessoryServerBrowser * _browser;
    NSNumber * _downloadedFirmwareVersionNumber;
    HMFTimer * _idleResetTimer;
    NSObject<OS_dispatch_queue> * _idleResetTimerQueue;
    HAPMatterFirmwareUpdateStatus * _localFirmwareUpdateStatus;
    long long  _otaProviderState;
}

@property (nonatomic, readonly) HMMTRAccessoryServer *accessoryServer;
@property (nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *downloadedFirmwareVersionNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMFTimer *idleResetTimer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *idleResetTimerQueue;
@property (nonatomic, retain) HAPMatterFirmwareUpdateStatus *localFirmwareUpdateStatus;
@property (nonatomic, readonly) long long otaProviderState;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_updateStateAsString:(unsigned char)arg1;
- (id)accessoryServer;
- (id)browser;
- (void)checkCurrentFirmwareVersionNumber:(id)arg1;
- (id)downloadedFirmwareVersionNumber;
- (void)handleOTARequestorAttributeReport:(id)arg1;
- (id)idleResetTimer;
- (id)idleResetTimerQueue;
- (id)initWithFirmwareUpdateStatus:(id)arg1 accessoryServer:(id)arg2 browser:(id)arg3;
- (id)localFirmwareUpdateStatus;
- (long long)otaProviderState;
- (id)readForHAPFirmwareUpdateReadinessCharacteristic:(id)arg1;
- (id)readForHAPFirmwareUpdateStatusCharacteristic:(id)arg1;
- (id)readForMatterFirmwareUpdateStatusCharacteristic:(id)arg1;
- (void)setBrowser:(id)arg1;
- (void)setDownloadedFirmwareVersionNumber:(id)arg1;
- (void)setIdleResetTimer:(id)arg1;
- (void)setLocalFirmwareUpdateStatus:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)updateDownloadedFirmwareVersionNumber:(id)arg1;
- (void)updateFirmwareUpdateStatus:(long long)arg1;

@end

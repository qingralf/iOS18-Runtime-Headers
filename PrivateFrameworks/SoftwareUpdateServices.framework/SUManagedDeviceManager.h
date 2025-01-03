/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManagedDeviceManager : NSObject {
    NSString * _assetAudience;
    <SUManagedDeviceManagerDelegate> * _delegate;
    SUManagedDeviceUpdateDelay * _mdmDelay;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) <SUManagedDeviceManagerDelegate> *delegate;
@property (nonatomic, retain) SUManagedDeviceUpdateDelay *mdmDelay;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)MCPathToSUMDMPath:(long long)arg1;
- (bool)allowSplat;
- (bool)allowSplatRollback;
- (void)dealloc;
- (unsigned long long)delayPeriodInDays;
- (id)delegate;
- (id)init;
- (bool)isDelayingUpdates;
- (bool)isManagedByMDM;
- (id)mdmDelay;
- (void)profileChanged;
- (void)refreshAssetAudience;
- (void)registerProfileChangeListener;
- (void)setAssetAudience:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMdmDelay:(id)arg1;
- (unsigned long long)softwareUpdatePathRestriction;
- (void)unregisterProfileChangeListener;

@end

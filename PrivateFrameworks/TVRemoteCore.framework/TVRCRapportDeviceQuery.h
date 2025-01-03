/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCRapportDeviceQuery : NSObject {
    RPCompanionLinkClient * _companionLinkClient;
    <TVRCServiceDeviceQueryDelegate> * _delegate;
    _TVRCRapportDeviceManager * _deviceManager;
    _TVRCExpiringStore * _expiringStore;
}

@property (nonatomic, retain) RPCompanionLinkClient *companionLinkClient;
@property (nonatomic) <TVRCServiceDeviceQueryDelegate> *delegate;
@property (nonatomic, retain) _TVRCRapportDeviceManager *deviceManager;
@property (nonatomic, retain) _TVRCExpiringStore *expiringStore;

- (void).cxx_destruct;
- (void)_deviceFound:(id)arg1;
- (void)_deviceLost:(id)arg1;
- (void)_disconnectAllDevices;
- (void)_disconnectAndRemoveDevice:(id)arg1;
- (void)_mdmConfigChanged:(id)arg1;
- (bool)_shouldReportDevice:(id)arg1;
- (id)companionLinkClient;
- (void)dealloc;
- (id)delegate;
- (id)deviceManager;
- (id)expiringStore;
- (id)init;
- (void)setCompanionLinkClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceManager:(id)arg1;
- (void)setExpiringStore:(id)arg1;
- (void)start;
- (void)stop;

@end

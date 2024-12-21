/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUIInCarSignalMonitor : NSObject <CARSessionObserving, PowerUISignalMonitor> {
    bool  _carplayConnected;
    <PowerUISignalMonitorDelegate> * _delegate;
    bool  _inCar;
    NSObject<OS_os_log> * _log;
    bool  _navigationStarted;
    CARSessionStatus * _sessionStatus;
    bool  _vehicleConnected;
}

@property (nonatomic) bool carplayConnected;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) <PowerUISignalMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inCar;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) bool navigationStarted;
@property (nonatomic, retain) CARSessionStatus *sessionStatus;
@property (readonly) Class superclass;
@property (nonatomic) bool vehicleConnected;

+ (id)monitorWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (bool)carplayConnected;
- (id)delegate;
- (bool)inCar;
- (id)initWithDelegate:(id)arg1;
- (id)log;
- (bool)navigationStarted;
- (id)requiredFullChargeDate;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (id)sessionStatus;
- (void)setCarplayConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInCar:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setNavigationStarted:(bool)arg1;
- (void)setSessionStatus:(id)arg1;
- (void)setVehicleConnected:(bool)arg1;
- (unsigned long long)signalID;
- (void)startMonitoring;
- (void)stopMonitoring;
- (bool)vehicleConnected;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SeparationAlerts.framework/SeparationAlerts
 */

@interface SAWithYouDetector : NSObject <SATimeClientProtocol, SATravelTypeClassifierClientProtocol, SAWithYouDetectorServiceProtocol> {
    <SAAnalyticsServiceProtocol> * _analytics;
    <SABluetoothScanRequestProtocol> * _bluetoothScanner;
    NSHashTable * _clients;
    <SATimeServiceProtocol> * _clock;
    SADeviceRecord * _deviceRecord;
    unsigned long long  _extraFoundHELECount;
    unsigned long long  _extraFoundNonHELECount;
    NSMutableDictionary * _foundDevicesDuringCurrentScan;
    NSDate * _initializationTime;
    bool  _isFindingRelevantDevices;
    bool  _isInVehicularTravel;
    bool  _isNotifyWhileTravelingEnabled;
    bool  _isPeriodicScansNeeded;
    NSDate * _lastEndOfScan;
    NSDate * _lastExtraHELEFoundTime;
    NSDate * _lastExtraNonHELEFoundTime;
    unsigned long long  _lastLongScanContext;
    NSDate * _lastLongScanRequest;
    NSDate * _lastRelevantDeviceFoundTime;
    NSDate * _lastStartOfScan;
    <SALocationRequestProtocol> * _locationRequester;
    bool  _longScanIsOngoing;
    NSDate * _nextOpportunisticScanDate;
    NSUUID * _nextScheduledAlarm;
    NSDate * _previousBufferEmptyTime;
    NSMutableSet * _relevantDevicesToFindDuringLongScan;
    bool  _requestedShortScan;
}

@property (nonatomic, retain) <SAAnalyticsServiceProtocol> *analytics;
@property (nonatomic) <SABluetoothScanRequestProtocol> *bluetoothScanner;
@property (nonatomic, retain) NSHashTable *clients;
@property (nonatomic, retain) <SATimeServiceProtocol> *clock;
@property (nonatomic, retain) SADeviceRecord *deviceRecord;
@property (nonatomic) unsigned long long extraFoundHELECount;
@property (nonatomic) unsigned long long extraFoundNonHELECount;
@property (nonatomic, retain) NSMutableDictionary *foundDevicesDuringCurrentScan;
@property (nonatomic, retain) NSDate *initializationTime;
@property (nonatomic) bool isFindingRelevantDevices;
@property (nonatomic) bool isInVehicularTravel;
@property (nonatomic) bool isNotifyWhileTravelingEnabled;
@property (nonatomic) bool isPeriodicScansNeeded;
@property (nonatomic, retain) NSDate *lastEndOfScan;
@property (nonatomic, retain) NSDate *lastExtraHELEFoundTime;
@property (nonatomic, retain) NSDate *lastExtraNonHELEFoundTime;
@property (nonatomic) unsigned long long lastLongScanContext;
@property (nonatomic, retain) NSDate *lastLongScanRequest;
@property (nonatomic, retain) NSDate *lastRelevantDeviceFoundTime;
@property (nonatomic, retain) NSDate *lastStartOfScan;
@property (nonatomic) <SALocationRequestProtocol> *locationRequester;
@property (nonatomic) bool longScanIsOngoing;
@property (nonatomic, retain) NSDate *nextOpportunisticScanDate;
@property (nonatomic, retain) NSUUID *nextScheduledAlarm;
@property (nonatomic, retain) NSDate *previousBufferEmptyTime;
@property (nonatomic, retain) NSMutableSet *relevantDevicesToFindDuringLongScan;
@property (nonatomic) bool requestedShortScan;

+ (id)convertSAWithYouLongScanContextToString:(unsigned long long)arg1;
+ (id)convertSAWithYouStatusToString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_deviceIsWatch:(id)arg1;
- (void)_deviceWithUUID:(id)arg1 isWithYouDuringLongScanOnAdvertisement:(id)arg2;
- (bool)_enoughTimeHasPassedSinceInitializationToMarkNotWithYouForDeviceUUID:(id)arg1;
- (unsigned long long)_finalizeToBeVerifiedStatus:(unsigned long long)arg1;
- (bool)_isOnlyMonitoringLeashOnlyDevices;
- (bool)_isRecentEnoughAdvertisement:(id)arg1 forCurrentDate:(id)arg2;
- (bool)_isStatusBitSetForRelatedDeviceWithShiftIndex:(unsigned long long)arg1 fromAdvertisement:(id)arg2;
- (bool)_isValidPartID:(long long)arg1;
- (double)_maxAgeOfWithYouAdvertisementForDeviceUUID:(id)arg1;
- (void)_notifyAllClientsOfWithYouStatusUpdate:(unsigned long long)arg1 forDeviceWithUUID:(id)arg2;
- (void)_scheduleNextAlarmForScanAfterDate:(id)arg1;
- (void)_updateAllWithYouStatusOnScanEndedEvent:(id)arg1;
- (void)_updateLastWithYouDateAndLocation:(id)arg1 forCurrentDate:(id)arg2;
- (void)_updateWithYouStatusIfNecessaryOnAdvertisement:(id)arg1;
- (void)_updateWithYouStatusIfNecessaryOnConnectionEvent:(id)arg1;
- (void)_updateWithYouStatusOfRelatedDevices:(id)arg1;
- (void)_updateWithYouStatusOnAdvBufferEmptyEvent:(id)arg1;
- (void)addClient:(id)arg1;
- (void)alarmFiredForUUID:(id)arg1;
- (bool)allRelevantDevicesToFindAreFound;
- (bool)allSAEnabledDevicesAreFound;
- (id)analytics;
- (id)bluetoothScanner;
- (id)clients;
- (id)clock;
- (id)deviceRecord;
- (void)didChangeTravelTypeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 hints:(unsigned long long)arg3;
- (unsigned long long)extraFoundHELECount;
- (unsigned long long)extraFoundNonHELECount;
- (void)forceUpdateWithYouStatus;
- (void)forceUpdateWithYouStatusToFindDevices:(id)arg1 withContext:(unsigned long long)arg2;
- (void)forceUpdateWithYouStatusWithShortScan:(bool)arg1;
- (id)foundDevicesDuringCurrentScan;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithBluetoothScanner:(id)arg1 locationRequester:(id)arg2 deviceRecord:(id)arg3 clock:(id)arg4 analytics:(id)arg5;
- (id)initializationTime;
- (bool)isExtraDeviceFound:(id)arg1 onDate:(id)arg2;
- (bool)isFindingRelevantDevices;
- (bool)isInVehicularTravel;
- (bool)isNotifyWhileTravelingEnabled;
- (bool)isPeriodicScansAllowed;
- (bool)isPeriodicScansNeeded;
- (id)lastEndOfScan;
- (id)lastExtraHELEFoundTime;
- (id)lastExtraNonHELEFoundTime;
- (unsigned long long)lastLongScanContext;
- (id)lastLongScanRequest;
- (id)lastRelevantDeviceFoundTime;
- (id)lastStartOfScan;
- (id)locationRequester;
- (bool)longScanIsOngoing;
- (id)nextOpportunisticScanDate;
- (id)nextScheduledAlarm;
- (void)pausePeriodicScan;
- (id)previousBufferEmptyTime;
- (id)relevantDevicesToFindDuringLongScan;
- (void)removeClient:(id)arg1;
- (void)requestScanIfNeeded;
- (bool)requestedShortScan;
- (void)resetAllWithYouStatusAndScanStates;
- (void)resumePeriodicScan;
- (void)sendScanContextToCoreAnalytics:(unsigned long long)arg1 isPartOfLongScan:(bool)arg2 scanDuration:(double)arg3 relevantOnlyScanDuration:(double)arg4 foundExtraHELECount:(unsigned long long)arg5 extraHELEScanDuration:(double)arg6 foundExtraNonHELECount:(unsigned long long)arg7 extraNonHELEScanDuration:(double)arg8 longScanContext:(unsigned long long)arg9;
- (void)setAnalytics:(id)arg1;
- (void)setBluetoothScanner:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setClock:(id)arg1;
- (void)setDeviceRecord:(id)arg1;
- (void)setExtraFoundHELECount:(unsigned long long)arg1;
- (void)setExtraFoundNonHELECount:(unsigned long long)arg1;
- (void)setFoundDevicesDuringCurrentScan:(id)arg1;
- (void)setInitializationTime:(id)arg1;
- (void)setIsFindingRelevantDevices:(bool)arg1;
- (void)setIsInVehicularTravel:(bool)arg1;
- (void)setIsNotifyWhileTravelingEnabled:(bool)arg1;
- (void)setIsPeriodicScansNeeded:(bool)arg1;
- (void)setLastEndOfScan:(id)arg1;
- (void)setLastExtraHELEFoundTime:(id)arg1;
- (void)setLastExtraNonHELEFoundTime:(id)arg1;
- (void)setLastLongScanContext:(unsigned long long)arg1;
- (void)setLastLongScanRequest:(id)arg1;
- (void)setLastRelevantDeviceFoundTime:(id)arg1;
- (void)setLastStartOfScan:(id)arg1;
- (void)setLocationRequester:(id)arg1;
- (void)setLongScanIsOngoing:(bool)arg1;
- (void)setNextOpportunisticScanDate:(id)arg1;
- (void)setNextScheduledAlarm:(id)arg1;
- (void)setPreviousBufferEmptyTime:(id)arg1;
- (void)setRelevantDevicesToFindDuringLongScan:(id)arg1;
- (void)setRequestedShortScan:(bool)arg1;
- (unsigned long long)statusForDeviceWithUUID:(id)arg1;
- (void)updateExtraDeviceInformation:(id)arg1;

@end
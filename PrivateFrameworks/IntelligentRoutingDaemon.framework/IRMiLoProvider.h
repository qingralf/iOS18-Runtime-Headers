/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon
 */

@interface IRMiLoProvider : NSObject <IRMiLoFeedbackProvider> {
    ULConnection * _connection;
    bool  _isLowLatency;
    bool  _isMiLoServiceStateRunning;
    NSUUID * _legacyServiceUUID;
    int  _miLoConnectionProgressStatus;
    long long  _miLoServiceQuality;
    long long  _miLoServiceQualityReasonBitmap;
    long long  _miLoServiceSuspendedReasonBitmap;
    NSString * _miloServiceStatusStringQE;
    int  _numberOfConsecutiveMiLoFailAttempts;
    <IRMiLoProviderObserverProtocol> * _observer;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _requestSinglePredictionIdentifier;
    NSUUID * _serviceUUID;
    bool  _spotOnLocationRequested;
}

@property (nonatomic, retain) ULConnection *connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLowLatency;
@property (nonatomic) bool isMiLoServiceStateRunning;
@property (nonatomic, retain) NSUUID *legacyServiceUUID;
@property (nonatomic) int miLoConnectionProgressStatus;
@property (nonatomic) long long miLoServiceQuality;
@property (nonatomic) long long miLoServiceQualityReasonBitmap;
@property (nonatomic) long long miLoServiceSuspendedReasonBitmap;
@property (nonatomic, retain) NSString *miloServiceStatusStringQE;
@property (nonatomic) int numberOfConsecutiveMiLoFailAttempts;
@property (nonatomic) <IRMiLoProviderObserverProtocol> *observer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSUUID *requestSinglePredictionIdentifier;
@property (nonatomic, retain) NSUUID *serviceUUID;
@property (nonatomic) bool spotOnLocationRequested;
@property (readonly) Class superclass;

+ (bool)deleteServiceWithToken:(id)arg1;
+ (long long)highConfidenceValue;
+ (bool)isConfidenceValid:(long long)arg1;
+ (bool)isInMotion:(unsigned long long)arg1;
+ (bool)isQualityValid:(long long)arg1;

- (void).cxx_destruct;
- (long long)_bitmapFromServiceQualityReasonArray:(id)arg1;
- (long long)_bitmapFromServiceSuspendedReasonArray:(id)arg1;
- (void)_connectToLslService;
- (int)_locationTypeToIRLocationSemantic:(id)arg1;
- (id)_miloServiceStatusLogStringFromStatus:(id)arg1;
- (void)_serviceReset;
- (void)_serviceResetAndIncreaseFailCount;
- (void)addObserver:(id)arg1 withToken:(id)arg2 withLegacyServiceUUID:(id)arg3 isLowLatency:(bool)arg4;
- (id)connection;
- (void)connection:(id)arg1 didCompleteRequest:(id)arg2 withError:(id)arg3;
- (void)connection:(id)arg1 didEnableMicrolocationAtCurrentLocationWithError:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didUpdatePrediction:(id)arg2;
- (void)connection:(id)arg1 didUpdateServiceStatus:(id)arg2;
- (id)getMiloServiceStatusStringQEWithPrediction:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (bool)isLowLatency;
- (bool)isMiLoServiceStateRunning;
- (void)labelPredictionUuid:(id)arg1 withEventUuid:(id)arg2;
- (id)legacyServiceUUID;
- (int)miLoConnectionProgressStatus;
- (long long)miLoServiceQuality;
- (long long)miLoServiceQualityReasonBitmap;
- (long long)miLoServiceSuspendedReasonBitmap;
- (id)miloServiceStatusStringQE;
- (int)numberOfConsecutiveMiLoFailAttempts;
- (id)observer;
- (id)queue;
- (void)recoverServiceIfRequired;
- (void)removeObserver;
- (id)requestSinglePrediction;
- (id)requestSinglePredictionIdentifier;
- (void)resetSpotOnLocationRequest;
- (id)serviceUUID;
- (void)setConnection:(id)arg1;
- (void)setIsLowLatency:(bool)arg1;
- (void)setIsMiLoServiceStateRunning:(bool)arg1;
- (void)setLegacyServiceUUID:(id)arg1;
- (void)setMiLoConnectionProgressStatus:(int)arg1;
- (void)setMiLoServiceQuality:(long long)arg1;
- (void)setMiLoServiceQualityReasonBitmap:(long long)arg1;
- (void)setMiLoServiceSuspendedReasonBitmap:(long long)arg1;
- (void)setMiloServiceStatusStringQE:(id)arg1;
- (void)setNumberOfConsecutiveMiLoFailAttempts:(int)arg1;
- (void)setObserver:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestSinglePredictionIdentifier:(id)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSpotOnLocation;
- (void)setSpotOnLocationRequested:(bool)arg1;
- (bool)spotOnLocationRequested;
- (bool)startLowLatencyMiLo;

@end

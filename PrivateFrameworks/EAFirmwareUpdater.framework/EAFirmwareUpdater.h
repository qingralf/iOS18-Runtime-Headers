/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@interface EAFirmwareUpdater : MobileAssetUpdater <NSStreamDelegate, iAUPServerDelegate> {
    EAAccessory * _accessory;
    NSString * _appProtocol;
    id /* block */  _applyCompletion;
    NSString * _bootloaderProtocol;
    NSArray * _buildIdentities;
    bool  _byteEscape;
    bool  _closeEASession;
    NSNumber * _cumulativeBytesDownloaded;
    NSNumber * _cumulativeCloak;
    NSNumber * _cumulativeCloakTime;
    NSNumber * _cumulativeProgressPercent;
    NSNumber * _cumulativeTimeTaken;
    NSString * _currentFirmwareVersionOnAcc;
    NSNumber * _currentSessionCloakTime;
    NSNumber * _currentSessionTimeTaken;
    NSString * _deviceClass;
    NSDictionary * _deviceOptions;
    NSObject<OS_dispatch_queue> * _eaNotificationDispatchQueue;
    bool  _excludeUniqueAccessoryCheck;
    NSString * _firmwareBundleFilename;
    NSURL * _firmwareBundleURL;
    bool  _firmwareUpdateComplete;
    bool  _firmwareUpdateIsUrgent;
    NSString * _firmwareVersionAvailable;
    unsigned long long  _firmwareVersionMajor;
    unsigned long long  _firmwareVersionMinor;
    unsigned long long  _firmwareVersionRelease;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _flushOutputLock;
    bool  _forceSilentUpdate;
    iAUPServer * _iAUPServer;
    int  _isExpectingReconnect;
    bool  _isMultiAssetSession;
    NSDictionary * _manifestIDs;
    unsigned int  _manifestIndex;
    NSArray * _manifestList;
    NSString * _modelNumber;
    NSString * _multiAssetAppProtocol;
    NSString * _multiassetAppProtocol;
    NSString * _name;
    NSMutableData * _outputData;
    bool  _overrideProtocol;
    id /* block */  _personalizationRequestHandler;
    id /* block */  _progressHandler;
    NSString * _protocolString;
    NSTimer * _reconnectTimer;
    NSNumber * _resumeCount;
    NSNumber * _resumedFromPercentNum;
    NSString * _serialNumber;
    EASession * _session;
    bool  _skipDFUMode;
    bool  _skipReconnect;
    bool  _skipVersionCheck;
    NSNumber * _totalBytesForCompleteUpdate;
    NSString * _transportType;
    NSString * _updateBundleFilename;
    NSURL * _updateBundleURL;
    id /* block */  _updateHandler;
    NSDate * _updateStartTime;
}

@property (nonatomic, retain) EAAccessory *accessory;
@property (nonatomic, retain) NSString *appProtocol;
@property (nonatomic, copy) id /* block */ applyCompletion;
@property (nonatomic, retain) NSString *bootloaderProtocol;
@property (nonatomic) bool closeEASession;
@property (nonatomic, retain) NSNumber *cumulativeCloak;
@property (nonatomic, retain) NSNumber *cumulativeProgressPercent;
@property (nonatomic, retain) NSNumber *cumulativeTimeTaken;
@property (nonatomic, retain) NSString *currentFirmwareVersionOnAcc;
@property (nonatomic, retain) NSNumber *currentSessionTimeTaken;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool excludeUniqueAccessoryCheck;
@property (nonatomic, retain) NSString *firmwareBundleFilename;
@property (nonatomic, retain) NSURL *firmwareBundleURL;
@property (nonatomic, retain) NSString *firmwareVersionAvailable;
@property (nonatomic) bool forceSilentUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMultiAssetSession;
@property (nonatomic, copy) NSDictionary *manifestIDs;
@property (nonatomic, retain) NSString *modelNumber;
@property (nonatomic, retain) NSString *multiAssetAppProtocol;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool overrideProtocol;
@property (nonatomic, retain) NSString *protocolString;
@property (nonatomic, retain) NSNumber *resumeCount;
@property (nonatomic, retain) NSNumber *resumedFromPercentNum;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, retain) EASession *session;
@property (nonatomic) bool skipDFUMode;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *transportType;

+ (id)appProtocolStringWithEAID:(id)arg1;
+ (id)bootloaderProtocolStringWithEAID:(id)arg1;
+ (id)findAccessoryWithProtocolString:(id)arg1 serialNum:(id)arg2;
+ (id)getEAFirmwareRevisionActive:(id)arg1 forProtocol:(id)arg2;
+ (id)getEAFirmwareRevisionPending:(id)arg1 forProtocol:(id)arg2;
+ (id)multiAssetAppProtocolStringWithEAID:(id)arg1;

- (void)_accessoryDidConnect:(id)arg1;
- (void)_accessoryDidDisconnect:(id)arg1;
- (id)accessory;
- (id)appProtocol;
- (id /* block */)applyCompletion;
- (id)applyFirmware:(id /* block */)arg1 progress:(id /* block */)arg2 update:(id /* block */)arg3 personalization:(id /* block */)arg4;
- (id)assetWithMaxVersion:(id)arg1;
- (id)bootloaderProtocol;
- (bool)closeEASession;
- (void)closeSession;
- (id)createEndOfUpdateEventDict:(id)arg1 error:(id)arg2;
- (id)cumulativeCloak;
- (id)cumulativeProgressPercent;
- (id)cumulativeTimeTaken;
- (id)currentFirmwareVersionOnAcc;
- (id)currentSessionTimeTaken;
- (void)dealloc;
- (bool)excludeUniqueAccessoryCheck;
- (bool)findAccessory;
- (id)firmwareBundleFilename;
- (id)firmwareBundleURL;
- (void)firmwareUpdateComplete:(id)arg1 error:(id)arg2;
- (id)firmwareVersionAvailable;
- (id)flushOutput;
- (bool)forceSilentUpdate;
- (id)getDeviceClassName;
- (unsigned char)getPersonalizationID;
- (unsigned int)getWhitelistedPersonalizationFields;
- (void)handleFirmwareUpdateStatus:(id)arg1;
- (void)handleInputData;
- (void)handleSessionError:(unsigned int)arg1 message:(id)arg2;
- (id)initWithDeviceClass:(id)arg1 assetType:(id)arg2 skipDFU:(bool)arg3 byteEscape:(bool)arg4 skipReconnect:(bool)arg5 skipVersionCheck:(bool)arg6 options:(id)arg7 serialNum:(id)arg8;
- (bool)isDeploymentAllowed:(id)arg1;
- (bool)isMultiAssetSession;
- (bool)isRestartRequired;
- (bool)isSleepWakeRequired;
- (bool)isUrgentUpdate;
- (void)logStatusString:(id)arg1;
- (id)manifestIDs;
- (id)modelNumber;
- (id)multiAssetAppProtocol;
- (id)name;
- (id)openSession;
- (bool)overrideProtocol;
- (void)personalizationResponse:(id)arg1 error:(id)arg2;
- (void)processPersonalizationInfoFromAccessory:(id)arg1;
- (id)protocolString;
- (id)queryPredicate;
- (void)reconnectTimerDidFire:(id)arg1;
- (id)resumeCount;
- (id)resumedFromPercentNum;
- (id)serialNumber;
- (id)session;
- (void)setAccessory:(id)arg1;
- (void)setAppProtocol:(id)arg1;
- (void)setApplyCompletion:(id /* block */)arg1;
- (void)setBootloaderProtocol:(id)arg1;
- (void)setCloseEASession:(bool)arg1;
- (void)setCumulativeCloak:(id)arg1;
- (void)setCumulativeProgressPercent:(id)arg1;
- (void)setCumulativeTimeTaken:(id)arg1;
- (void)setCurrentFirmwareVersionOnAcc:(id)arg1;
- (void)setCurrentSessionTimeTaken:(id)arg1;
- (void)setExcludeUniqueAccessoryCheck:(bool)arg1;
- (void)setFirmwareBundle:(id)arg1;
- (void)setFirmwareBundleFilename:(id)arg1;
- (void)setFirmwareBundleURL:(id)arg1;
- (void)setFirmwareLocalURL:(id)arg1;
- (void)setFirmwareURL:(id)arg1 withManifest:(id)arg2 signature:(id)arg3 certificate:(id)arg4 hash:(id)arg5;
- (void)setFirmwareVersionAvailable:(id)arg1;
- (void)setForceSilentUpdate:(bool)arg1;
- (void)setIsMultiAssetSession:(bool)arg1;
- (void)setManifestIDs:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setMultiAssetAppProtocol:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOverrideProtocol:(bool)arg1;
- (void)setProtocolString:(id)arg1;
- (void)setResumeCount:(id)arg1;
- (void)setResumedFromPercentNum:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSkipDFUMode:(bool)arg1;
- (void)setTransportType:(id)arg1;
- (bool)skipDFUMode;
- (void)startReconnectTimer:(int)arg1;
- (bool)stitchManifestInSuperBinary:(id)arg1 withManifest:(id)arg2 withId:(unsigned int)arg3;
- (void)stopReconnectTimer;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)supportedProtocolForAccessory:(id)arg1;
- (id)transportType;
- (void)updateComplete:(id)arg1 error:(id)arg2;
- (void)updateProgress:(double)arg1;
- (bool)updateRequiresPersonalization;
- (bool)updateRequiresSuperBinary;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)arg1;
- (id)writeData:(id)arg1;

@end

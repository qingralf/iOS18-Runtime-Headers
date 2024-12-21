/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

@interface BiometricKitXPCServer : NSObject <CMWakeGestureDelegate, NSXPCListenerDelegate, UMUserListUpdateObserver> {
    NSMutableSet * _accessories;
    NSMutableArray * _activeBioOpsQueue;
    NSObject<OS_dispatch_queue> * _activeOperationNtfQueue;
    int  _activeOperationNtfToken;
    bool  _activeOperationNtfTokenValid;
    bool  _ariadneSignposts;
    unsigned int  _backlightService;
    NSMutableArray * _bioOpsQueue;
    BiometricAutoBugCapture * _biometricABC;
    NSObject<OS_dispatch_queue> * _biometricABCDispatchQueue;
    NSMutableArray * _cachedIdentities;
    BKCatacomb * _catacomb;
    bool  _catacombFileAccessed;
    NSRecursiveLock * _catacombLock;
    bool  _catacombRestored;
    CatacombStateCache * _catacombStateCache;
    NSMutableDictionary * _catacombUserKeybagUUIDs;
    NSMutableDictionary * _catacombUserUUIDs;
    NSObject<OS_dispatch_queue> * _cmdDispatchQueue;
    int  _connectedAccessoriesChgNtfToken;
    bool  _connectedAccessoriesChgNtfTokenValid;
    bool  _connectionsSuspended;
    int  _displayStatusNotifyToken;
    int  _enrollChgNtfToken;
    bool  _enrollChgNtfTokenValid;
    NSMutableSet * _exportedObjects;
    int  _expressModeChgNtfToken;
    bool  _expressModeChgNtfTokenValid;
    long long  _expressModeState;
    int  _lastDisplayState;
    int  _lockoutChgNtfToken;
    bool  _lockoutChgNtfTokenValid;
    unsigned int  _maxSupportedUsers;
    unsigned int  _maxTemplatesPerUser;
    int  _mkbLockStatusNtfToken;
    struct IONotificationPort { } * _notifyport;
    ActivityTracker * _ongoingBiometricOperation;
    ActivityTracker * _ongoingCatacombSaveTimer;
    unsigned long long  _osStateHandle;
    EntitlementABCIssueReporter * _reporter;
    BiometricOperation * _runningBioOp;
    bool  _templatesAtBoot;
    struct { 
        unsigned int currentAccountUserID; 
        unsigned char hasMultipleUserAccounts; 
    }  _userAccountsInfo;
    bool  _userAccountsInfoValid;
    bool  _userListChangeDetected;
}

@property (nonatomic, readonly, retain) NSMutableSet *accessories;
@property (nonatomic, readonly, retain) NSMutableArray *activeBioOpsQueue;
@property (nonatomic) bool ariadneSignposts;
@property (nonatomic, readonly, retain) NSMutableArray *bioOpsQueue;
@property (nonatomic, retain) BiometricAutoBugCapture *biometricABC;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *biometricABCDispatchQueue;
@property (nonatomic, readonly, retain) NSMutableArray *cachedIdentities;
@property (nonatomic, readonly, retain) BKCatacomb *catacomb;
@property (nonatomic) bool catacombFileAccessed;
@property (nonatomic, readonly, retain) NSRecursiveLock *catacombLock;
@property (nonatomic) bool catacombRestored;
@property (nonatomic, readonly, retain) CatacombStateCache *catacombStateCache;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *cmdDispatchQueue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool lastDisplayState;
@property (nonatomic, readonly) struct IONotificationPort { }*notifyport;
@property (nonatomic, readonly, retain) ActivityTracker *ongoingBiometricOperation;
@property (nonatomic, readonly, retain) ActivityTracker *ongoingCatacombSaveTimer;
@property (nonatomic, retain) EntitlementABCIssueReporter *reporter;
@property (nonatomic, readonly, retain) BiometricOperation *runningBioOp;
@property (readonly) Class superclass;
@property (nonatomic) bool templatesAtBoot;

+ (void)initialize;

- (void).cxx_destruct;
- (id)accessories;
- (void)accessoryAdded:(id)arg1;
- (void)accessoryConnected:(id)arg1;
- (void)accessoryDisconnected:(id)arg1;
- (void)accessoryMayHaveChanged;
- (void)accessoryRemoved:(id)arg1;
- (id)activeBioOpsQueue;
- (void)addIdentityObject:(id)arg1;
- (void)addIdentityObjects:(id)arg1;
- (id)allClients;
- (int)archiveCatacombDataForComponent:(id)arg1 toArchiver:(id)arg2;
- (bool)ariadneSignposts;
- (id)bioOpsQueue;
- (id)biometricABC;
- (id)biometricABCDispatchQueue;
- (int)cacheAccessories;
- (void)cacheAndSetUserAccountsInfo;
- (int)cacheCatacombInfo;
- (void)cacheUserAccountsInfo;
- (id)cachedIdentities;
- (int)cancelWithClient:(id)arg1;
- (id)catacomb;
- (id)catacombComponentForIdentity:(id)arg1;
- (bool)catacombFileAccessed;
- (id)catacombFileNameForComponent:(id)arg1;
- (id)catacombLock;
- (bool)catacombRestored;
- (id)catacombStateCache;
- (unsigned int)catacombVersion;
- (int)checkCatacombForUser:(unsigned int)arg1;
- (int)checkTemplatesValidityForUser:(unsigned int)arg1;
- (void)clearTemplateList;
- (void)clearTemplateListForUser:(unsigned int)arg1;
- (id)cmdDispatchQueue;
- (int)completeEnrollmentWithClient:(id)arg1;
- (id)connectedAccessories;
- (id)createEnrollOperation;
- (id)createMatchEventDictionary:(struct { unsigned long long x1; unsigned char x2; struct { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; }*)arg1;
- (id)createMatchOperation;
- (id)createPresenceDetectOperation;
- (unsigned int)currentAccountUserID;
- (void)dealloc;
- (void)deleteUnusedCatacombFiles;
- (int)detectPresenceWithOptions:(id)arg1 withClient:(id)arg2;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(bool*)arg3 withDetails:(id*)arg4 withClient:(id)arg5;
- (void)disconnectingClient:(id)arg1;
- (int)displayStateChanged:(bool)arg1;
- (void)doSharedMemoryTransfers;
- (int)dropUnlockTokenWithClient:(id)arg1;
- (int)enableBackgroundFdet:(bool)arg1 withClient:(id)arg2;
- (int)enableMatchAutoRetry:(bool)arg1 withClient:(id)arg2;
- (int)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 withClient:(id)arg4;
- (int)enrollContinue;
- (void)enrollFeedback:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (bool)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (int)filterIdentities:(id)arg1 withFilter:(id)arg2;
- (int)forceBioLockoutForUser:(unsigned int)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (id)getAccessoryObject:(struct { unsigned int x1; unsigned char x2[16]; }*)arg1;
- (int)getBioLockoutState:(long long*)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (int)getBiometryAvailability:(long long*)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (id)getCalibrationDataInfoWithClient:(id)arg1;
- (int)getCatacombSaveListForComponents:(id)arg1 list:(id*)arg2;
- (int)getCountersignedStoreToken:(id*)arg1 withClient:(id)arg2;
- (int)getDeviceHardwareState:(unsigned int*)arg1 withClient:(id)arg2;
- (long long)getDeviceStateWithClient:(id)arg1;
- (bool)getEnabledForUnlock;
- (int)getExpressModeState:(long long*)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (int)getFreeIdentityCount:(unsigned long long*)arg1 forUser:(unsigned int)arg2 accessoryGroup:(id)arg3 client:(id)arg4;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1 withClient:(id)arg2;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1 withClient:(id)arg2;
- (id)getIdentityFromUUID:(id)arg1 withClient:(id)arg2;
- (id)getIdentityObject:(struct { unsigned int x1; unsigned char x2[16]; }*)arg1;
- (id)getIdentityObjectByUserID:(unsigned int)arg1 UUID:(id)arg2;
- (int)getLastMatchEvent:(id*)arg1 withClient:(id)arg2;
- (id)getLogs:(bool)arg1 withDetails:(id*)arg2;
- (long long)getMaxIdentityCount:(int)arg1 withClient:(id)arg2;
- (id)getNodeTopologyForIdentity:(id)arg1 withClient:(id)arg2;
- (int)getPeriocularMatchStateForUser:(unsigned int)arg1 state:(long long*)arg2 withClient:(id)arg3;
- (int)getPreferencesValue:(id*)arg1 forKey:(id)arg2 withClient:(id)arg3;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1 withClient:(id)arg2;
- (long long)getProvisioningStateWithClient:(id)arg1;
- (long long)getSensorCalibrationStatusWithClient:(id)arg1;
- (id)getSensorInfoWithClient:(id)arg1;
- (id)getSystemProtectedConfigurationWithClient:(id)arg1;
- (id)getUserKeybagUUIDForUID:(unsigned int)arg1;
- (int)getUserUUIDForUID:(unsigned int)arg1 userUUID:(id*)arg2;
- (int)getUserUUIDsForUIDs:(id)arg1 userUUIDs:(id*)arg2;
- (int)handleCatacombUnlock;
- (int)handleFirstUnlock;
- (void)handleSharedMemoryTransfer:(unsigned int)arg1 withHeader:(id)arg2 data:(id)arg3;
- (bool)hasMultipleUserAccounts;
- (id)hexDumpData:(char *)arg1 size:(unsigned long long)arg2;
- (id)identities;
- (id)identities:(id)arg1 withClient:(id)arg2;
- (unsigned long long)identitiesCount;
- (id)identitiesOfComponent:(id)arg1;
- (id)identitiesOfUser:(unsigned int)arg1;
- (id)init;
- (int)initAutoBugCapture;
- (int)initEnrollOperation:(id)arg1 biometricType:(int)arg2 userID:(unsigned int)arg3 options:(id)arg4 client:(id)arg5;
- (int)initMatchOperation:(id)arg1 filter:(id)arg2 options:(id)arg3 client:(id)arg4;
- (int)initPresenceDetectOperation:(id)arg1 options:(id)arg2 client:(id)arg3;
- (bool)isCatacombAccessible;
- (bool)isClassCFileAccessible;
- (bool)isDisplayOn;
- (bool)isFingerOnWithClient:(id)arg1;
- (bool)isFingerprintModificationRestricted;
- (int)isPeriocularEnrollmentSupported:(bool*)arg1 withClient:(id)arg2;
- (int)isValidUser:(unsigned int)arg1;
- (bool)isXARTAvailableWithClient:(id)arg1;
- (bool)lastDisplayState;
- (int)listAccessories:(id*)arg1 client:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (int)loadCatacomb;
- (int)loadCatacombAfterFirstUnlock;
- (int)loadCatacombForComponent:(id)arg1;
- (int)loadCatacombForUser:(unsigned int)arg1;
- (void)logCatacombHashForUser:(unsigned int)arg1 catacombHash:(id)arg2;
- (int)logCatacombInfo:(id)arg1 data:(id)arg2;
- (void)logCatacombUUIDForUser:(unsigned int)arg1 catacombUUID:(id)arg2;
- (int)match:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)matchResult:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)notifyAppIsInactive:(bool)arg1 withClient:(id)arg2;
- (struct IONotificationPort { }*)notifyport;
- (id)ongoingBiometricOperation;
- (id)ongoingCatacombSaveTimer;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)osStateHandler:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)pairedAccessories;
- (int)parseAuthDict:(id)arg1 toAuthData:(struct { unsigned int x1; unsigned int x2; unsigned char x3[32]; }*)arg2;
- (int)pauseBioOperation:(id)arg1;
- (int)pauseFaceDetectTimer:(bool)arg1 withClient:(id)arg2;
- (int)performCancelCommand;
- (int)performCompleteSaveCatacombCommand:(id)arg1 outBuffer:(id)arg2;
- (int)performConfirmSaveCatacombCommand:(id)arg1;
- (int)performDisplayStatusChangedCommand:(bool)arg1;
- (int)performDropUnlockTokenCommand;
- (int)performEnrollCommand:(id)arg1;
- (int)performForceBioLockoutCommand:(unsigned int)arg1;
- (int)performGetBioDeviceListCommand:(id)arg1;
- (int)performGetBiometrickitdInfoCommand:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned char x5; unsigned char x6; unsigned char x7; }*)arg1;
- (int)performGetCatacombGroupStateCommand:(id)arg1;
- (int)performGetCatacombHashCommand:(unsigned int)arg1 outHash:(id*)arg2;
- (int)performGetCatacombStateCommand:(id)arg1;
- (int)performGetCatacombUUIDCommand:(unsigned int)arg1 outUUID:(id*)arg2;
- (int)performGetDeviceHardwareStateCommand:(unsigned int*)arg1;
- (int)performGetFreeIdentityCountCommand:(unsigned int)arg1 group:(struct { unsigned int x1; unsigned char x2[16]; }*)arg2 outCount:(unsigned int*)arg3;
- (int)performGetFreeIdentityCountCommand:(unsigned int)arg1 outCount:(unsigned int*)arg2;
- (int)performGetIdentitiesListCommand:(unsigned int)arg1 outBuffer:(id)arg2;
- (int)performGetIdentityRecordsCommand:(id)arg1;
- (int)performGetLastMatchEventCommand:(struct { unsigned long long x1; unsigned char x2; struct { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; }*)arg1;
- (int)performGetProtectedConfigCommand:(unsigned int)arg1 outSetCfg:(id*)arg2 outEffectiveCfg:(id*)arg3;
- (int)performGetSKSLockStateCommand:(unsigned int)arg1 outState:(unsigned int*)arg2;
- (int)performGetSystemProtectedConfigCommand:(id*)arg1;
- (int)performGetTemplatesValidityCommand:(unsigned int)arg1 isValid:(bool*)arg2;
- (int)performIsXARTAvailableCommand:(bool*)arg1;
- (int)performLoadBioLockoutRecordCommand:(id)arg1;
- (int)performLoadCatacombCommand:(id)arg1 inData:(id)arg2;
- (int)performMatchCommand:(id)arg1;
- (int)performNoCatacombCommand:(unsigned int)arg1;
- (int)performPrepareSaveCatacombCommand:(id)arg1 outDataSize:(unsigned int*)arg2;
- (int)performPresenceDetectCommand:(id)arg1;
- (int)performRemoveIdentityCommand:(struct { unsigned int x1; unsigned char x2[16]; }*)arg1;
- (int)performRemoveUserDataCommand:(unsigned int)arg1;
- (int)performRequestMaxIdentityCountCommand:(unsigned int*)arg1;
- (int)performRequestMessageDataCommand:(unsigned long long)arg1 size:(unsigned long long)arg2 outData:(id*)arg3;
- (int)performSaveBioLockoutRecordCommand:(id)arg1;
- (int)performSetProtectedConfigCommand:(unsigned int)arg1 cfg:(id)arg2 authData:(struct { unsigned int x1; unsigned int x2; unsigned char x3[32]; }*)arg3;
- (int)performSetSystemProtectedConfigCommand:(id)arg1 authData:(struct { unsigned int x1; unsigned int x2; unsigned char x3[32]; }*)arg2;
- (void)postGeneralLockoutStateNotification;
- (int)processBioOperation:(id)arg1;
- (id)pullAlignmentData;
- (id)pullCalibrationDataWithClient:(id)arg1;
- (id)pullCaptureBufferWithClient:(id)arg1;
- (id)pullDebugImageData:(bool)arg1 rotated:(bool)arg2 hasWidth:(unsigned int*)arg3 hasHeight:(unsigned int*)arg4 withClient:(id)arg5;
- (id)pullMatchPolicyInfoData;
- (int)queryIdentityMigrationFailureForUser:(unsigned int)arg1 failed:(bool*)arg2 clear:(bool)arg3 withClient:(id)arg4;
- (int)readCatacombState;
- (int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)registerDelegate:(bool)arg1 withClient:(id)arg2;
- (int)registerStoreToken:(id)arg1 withClient:(id)arg2;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)removeBioOperationOfClient:(id)arg1;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)removeIdentityObject:(id)arg1;
- (int)removePeriocularTemplatesWithOptions:(id)arg1 withClient:(id)arg2;
- (int)removeUser:(unsigned int)arg1;
- (id)reporter;
- (int)resetAppleConnectCounterWithClient:(id)arg1;
- (int)restoreAndSyncTemplates;
- (void)resumeQueuedBioOperation;
- (id)runningBioOp;
- (int)saveCatacomb;
- (int)saveCatacombForComponents:(id)arg1;
- (int)saveCatacombForIdentity:(id)arg1;
- (int)saveCatacombIfDirtyWithInterval:(double)arg1 andDelay:(double)arg2;
- (int)saveTemplateListAfterTemplateUpdate;
- (void)sendStatusMessage:(unsigned int)arg1 toClient:(id)arg2;
- (unsigned int)serviceConnect;
- (void)serviceStatus:(unsigned int)arg1 type:(unsigned int)arg2 inValue:(void*)arg3;
- (int)serviceStatus:(unsigned int)arg1 version:(unsigned int)arg2 ordinal:(unsigned long long)arg3 data:(id)arg4 timestamp:(unsigned long long)arg5;
- (int)setAppleMesaSEPLoggingLevel;
- (void)setAriadneSignposts:(bool)arg1;
- (void)setBiometricABC:(id)arg1;
- (void)setBiometricABCDispatchQueue:(id)arg1;
- (void)setCatacombFileAccessed:(bool)arg1;
- (void)setCatacombRestored:(bool)arg1;
- (int)setDebugImages:(bool)arg1 withClient:(id)arg2;
- (void)setGracePeriod:(unsigned long long)arg1;
- (bool)setPreferencesValue:(id)arg1 forKey:(id)arg2 withClient:(id)arg3;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 withClient:(id)arg4;
- (void)setReporter:(id)arg1;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)setTemplate:(id)arg1 forIdentity:(id)arg2 withClient:(id)arg3;
- (void)setTemplatesAtBoot:(bool)arg1;
- (int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (unsigned int)singleEnrolledUser;
- (int)startBioOperation:(id)arg1;
- (int)startEnrollOperation:(id)arg1;
- (int)startMatchOperation:(id)arg1;
- (int)startNewMatchAttemptWithClient:(id)arg1;
- (int)startPresenceDetectOperation:(id)arg1;
- (id)stateDictionaryWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)statusMessage:(unsigned int)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3;
- (void)stopBioOperationsAfterReconnect;
- (bool)supportsRemovableAccessories;
- (void)suspendAllConnections:(bool)arg1;
- (int)suspendEnrollment:(bool)arg1 withClient:(id)arg2;
- (void)switchToNextBioOperation:(bool)arg1;
- (int)syncTemplateListForUser:(unsigned int)arg1;
- (bool)templatesAtBoot;
- (bool)templatesExistAtBoot;
- (void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2;
- (int)unarchiveCatacombDataForComponent:(id)arg1 fromUnarchiver:(id)arg2 secureData:(id*)arg3 identities:(id*)arg4;
- (void)updateActiveOperationNotification;
- (void)updateActiveOperationNotificationWithOverride:(int)arg1;
- (void)updateEnrollmentChangedNotification:(bool)arg1;
- (void)updateExpressModeState;
- (void)updateExpressModeStateNotification;
- (void)updateExpressModeStateWithEnrollmentCount:(unsigned int)arg1;
- (void)updateExpressModeStateWithLockoutState:(unsigned int)arg1;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)updateLockoutStateNotification:(unsigned int)arg1;
- (int)updatePropertiesOfIdentities;
- (struct { unsigned int x1; unsigned char x2; }*)userAccountsInfo;
- (void)userListDidUpdate;
- (bool)validateAllUsers;
- (void)validateUsersKeybagUUIDs;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
- (int)writeStringToPersistentLog:(id)arg1;

@end
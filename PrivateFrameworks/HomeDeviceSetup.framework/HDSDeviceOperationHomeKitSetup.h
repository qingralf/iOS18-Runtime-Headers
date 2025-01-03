/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeDeviceSetup.framework/HomeDeviceSetup
 */

@interface HDSDeviceOperationHomeKitSetup : NSObject <HMAccessoryBrowserDelegate, HMAccessoryDelegatePrivate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate> {
    bool  _accessorySyncDone;
    double  _accessorySyncSeconds;
    unsigned long long  _accessorySyncStartTicks;
    bool  _active;
    double  _addDeviceNonUserSeconds;
    NSDictionary * _appDataSelf;
    double  _assignRoomNonUserSeconds;
    id /* block */  _completionHandler;
    bool  _configuredStereoPair;
    bool  _configuredTVAudio;
    bool  _createUpdatePSGDone;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    HMMediaGroup * _existingMediaGroup;
    bool  _hasHomePod;
    bool  _hasMultipleUsers;
    <NSObject> * _hdsutilHKToken;
    bool  _homeAppInstallUserDidChoose;
    HMAccessory * _homeKitAccessory;
    bool  _homeKitAddedAccessory;
    bool  _homeKitAddedAppData;
    HMAccessoryBrowser * _homeKitBrowser;
    unsigned long long  _homeKitDataSyncStartTicks;
    HMDeviceSetupOperation * _homeKitDeviceSetupOperation;
    HMHomeManager * _homeKitHomeManager;
    bool  _homeKitHomeManagerReady;
    HMMediaSystem * _homeKitMediaSystem;
    HMHome * _homeKitSelectedHome;
    HMRoom * _homeKitSelectedRoom;
    NSString * _homeKitSelectedRoomName;
    NSMutableDictionary * _homePodsAccessorySyncing;
    double  _homekitDataSyncSeconds;
    ACAccount * _iTunesAccount;
    NSString * _iTunesAccountID;
    bool  _isCLIMode;
    bool  _keyExchangeOnly;
    double  _metricNonUserSeconds;
    double  _metricUserSeconds;
    double  _odeonSeconds;
    unsigned long long  _odeonStartTicks;
    CUPairedPeer * _pairedPeer;
    bool  _pauseAfterUserInput;
    id /* block */  _pauseHandler;
    bool  _paused;
    bool  _personalRequestsDone;
    bool  _personalRequestsEnabled;
    double  _personalRequestsNonUserSeconds;
    id /* block */  _promptForHomeHandler;
    id /* block */  _promptForRoomHandler;
    id /* block */  _promptForRoomHandlerDetailed;
    id /* block */  _promptToInstallHomeAppHandler;
    NSArray * _psgHomePods;
    NSArray * _psgStereoPairs;
    bool  _reselectHome;
    NSUUID * _sessionID;
    double  _setupDeviceNonUserSeconds;
    unsigned long long  _startTicks;
    unsigned long long  _startTicksForHomeKitSteps;
    int  _state;
    HMAccessory * _stereoCounterpart;
    double  _stereoPairSeconds;
    unsigned long long  _stereoPairStartTicks;
    int  _stereoRole;
    double  _timeoutInSeconds;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    TROperationQueue * _trOperationQueue;
    TRSession * _trSession;
    HMAccessory * _tvAudioInput;
    double  _ulhNonUserSeconds;
    bool  _userInteractive;
    bool  _userListeningHistoryDone;
}

@property (nonatomic, readonly) double accessorySyncSeconds;
@property (nonatomic, readonly) double addDeviceNonUserSeconds;
@property (nonatomic, copy) NSDictionary *appDataSelf;
@property (nonatomic, readonly) double assignRoomNonUserSeconds;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) HMMediaGroup *existingMediaGroup;
@property (nonatomic, readonly) bool hasHomePod;
@property (nonatomic, readonly) bool hasMultipleUsers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool homeKitAddedAccessory;
@property (nonatomic, readonly) HMHomeManager *homeKitHomeManager;
@property (nonatomic, readonly) bool homeKitHomeManagerReady;
@property (nonatomic, readonly) HMHome *homeKitSelectedHome;
@property (nonatomic, readonly, copy) NSString *homeKitSelectedRoomName;
@property (nonatomic, readonly) double homekitDataSyncSeconds;
@property (nonatomic, retain) ACAccount *iTunesAccount;
@property (nonatomic, copy) NSString *iTunesAccountID;
@property (nonatomic) bool isCLIMode;
@property (nonatomic) bool keyExchangeOnly;
@property (nonatomic, readonly) double metricNonUserSeconds;
@property (nonatomic, readonly) double metricUserSeconds;
@property (nonatomic) double odeonSeconds;
@property (nonatomic, retain) CUPairedPeer *pairedPeer;
@property (nonatomic) bool pauseAfterUserInput;
@property (nonatomic, copy) id /* block */ pauseHandler;
@property (nonatomic) bool personalRequestsEnabled;
@property (nonatomic, readonly) double personalRequestsNonUserSeconds;
@property (nonatomic, copy) id /* block */ promptForHomeHandler;
@property (nonatomic, copy) id /* block */ promptForRoomHandler;
@property (nonatomic, copy) id /* block */ promptForRoomHandlerDetailed;
@property (nonatomic, copy) id /* block */ promptToInstallHomeAppHandler;
@property (nonatomic, retain) NSArray *psgHomePods;
@property (nonatomic, retain) NSArray *psgStereoPairs;
@property (nonatomic, retain) NSUUID *sessionID;
@property (nonatomic, readonly) double setupDeviceNonUserSeconds;
@property (nonatomic, retain) HMAccessory *stereoCounterpart;
@property (nonatomic, readonly) double stereoPairSeconds;
@property (nonatomic) int stereoRole;
@property (readonly) Class superclass;
@property (nonatomic) double timeoutInSeconds;
@property (nonatomic, retain) TRSession *trSession;
@property (nonatomic, retain) HMAccessory *tvAudioInput;
@property (nonatomic, readonly) double ulhNonUserSeconds;
@property (nonatomic) bool userInteractive;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithError:(id)arg1 errorLabel:(id)arg2;
- (id)_homeKitFindSettingsWithKeyPath:(id)arg1 group:(id)arg2;
- (bool)_isOwnerOfHome:(id)arg1;
- (id)_mediaSystemForAccessory:(id)arg1;
- (id)_normalizedString:(id)arg1;
- (void)_removeAccessoryIfNeeded;
- (void)_removeSimilarRoomNames:(id)arg1 home:(id)arg2;
- (void)_restoreHomeApp;
- (void)_run;
- (void)_runHomeKitAddAccessory;
- (void)_runHomeKitAddAppData;
- (void)_runHomeKitAddHome;
- (void)_runHomeKitAssignRoom;
- (id)_runHomeKitAutoSelectHome:(bool)arg1;
- (bool)_runHomeKitConfigureStereoPairAndReturnError:(id*)arg1;
- (void)_runHomeKitDeviceSetup;
- (void)_runHomeKitSelectRoom;
- (void)_runHomeKitSetupRoom:(bool)arg1;
- (void)_runHomeKitUpdateAppleTVAudioDestination;
- (void)_runInit;
- (void)_runPersonalRequestsStart;
- (void)_runUpdateUserListeningHistoryStart;
- (void)_startTimeout:(double)arg1;
- (void)_syncAccessoriesInSelectedRoom;
- (void)_timeoutForAccessorySync;
- (void)_updateAccount;
- (void)_updateHomeStats;
- (void)accessory:(id)arg1 didUpdateLoggedInAccount:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (double)accessorySyncSeconds;
- (void)activate;
- (double)addDeviceNonUserSeconds;
- (void)addHomePodsToAccessorySync:(id)arg1;
- (id)appDataSelf;
- (double)assignRoomNonUserSeconds;
- (id /* block */)completionHandler;
- (id)dispatchQueue;
- (id)existingMediaGroup;
- (id)findStereoCounterpartsWithSupportedVersions:(unsigned long long)arg1;
- (id)findTVs;
- (bool)hasHomePod;
- (bool)hasMultipleUsers;
- (void)homeAppInstallChoice:(bool)arg1;
- (id)homeKitAccessory;
- (bool)homeKitAddedAccessory;
- (id)homeKitHomeManager;
- (bool)homeKitHomeManagerReady;
- (id)homeKitSelectedHome;
- (id)homeKitSelectedRoomName;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homePodsInHomeRoom:(id)arg1 roomName:(id)arg2;
- (double)homekitDataSyncSeconds;
- (id)iTunesAccount;
- (id)iTunesAccountID;
- (id)init;
- (void)invalidate;
- (bool)isCLIMode;
- (bool)keyExchangeOnly;
- (double)metricNonUserSeconds;
- (double)metricUserSeconds;
- (double)odeonSeconds;
- (id)pairedPeer;
- (bool)pauseAfterUserInput;
- (id /* block */)pauseHandler;
- (void)performReadinessCheck:(id)arg1;
- (bool)personalRequestsEnabled;
- (double)personalRequestsNonUserSeconds;
- (id /* block */)promptForHomeHandler;
- (id /* block */)promptForRoomHandler;
- (id /* block */)promptForRoomHandlerDetailed;
- (id /* block */)promptToInstallHomeAppHandler;
- (id)psgHomePods;
- (id)psgStereoPairs;
- (void)reselectHome;
- (void)resume;
- (void)selectHome:(id)arg1;
- (void)selectRoom:(id)arg1;
- (id)sessionID;
- (void)setAppDataSelf:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setExistingMediaGroup:(id)arg1;
- (void)setITunesAccount:(id)arg1;
- (void)setITunesAccountID:(id)arg1;
- (void)setIsCLIMode:(bool)arg1;
- (void)setKeyExchangeOnly:(bool)arg1;
- (void)setOdeonSeconds:(double)arg1;
- (void)setPairedPeer:(id)arg1;
- (void)setPauseAfterUserInput:(bool)arg1;
- (void)setPauseHandler:(id /* block */)arg1;
- (void)setPersonalRequestsEnabled:(bool)arg1;
- (void)setPromptForHomeHandler:(id /* block */)arg1;
- (void)setPromptForRoomHandler:(id /* block */)arg1;
- (void)setPromptForRoomHandlerDetailed:(id /* block */)arg1;
- (void)setPromptToInstallHomeAppHandler:(id /* block */)arg1;
- (void)setPsgHomePods:(id)arg1;
- (void)setPsgStereoPairs:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStereoCounterpart:(id)arg1;
- (void)setStereoRole:(int)arg1;
- (void)setTimeoutInSeconds:(double)arg1;
- (void)setTrSession:(id)arg1;
- (void)setTvAudioInput:(id)arg1;
- (void)setUserInteractive:(bool)arg1;
- (double)setupDeviceNonUserSeconds;
- (id)stereoCounterpart;
- (double)stereoPairSeconds;
- (int)stereoRole;
- (double)timeoutInSeconds;
- (id)trSession;
- (id)tvAudioInput;
- (double)ulhNonUserSeconds;
- (bool)userInteractive;

@end

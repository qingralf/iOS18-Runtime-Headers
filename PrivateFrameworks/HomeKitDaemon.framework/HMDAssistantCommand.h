/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDAssistantCommand : SAHACommand <AFServiceCommand, HMFLogging> {
    HMDAssistantCommandHelper * _assistantCommandHelper;
    bool  _completionHandlerCalled;
    NSString * _currentHomeAssistantIdentifier;
    NSString * _currentHomeName;
    HMDAssistantGather * _gather;
    HMDHome * _home;
    NSArray * _homeKitObjects;
    HMDHomeManager * _homeManager;
    long long  _numberOfHomes;
    NSString * _primaryHomeAssistantIdentifier;
    NSString * _primaryHomeName;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _startTime;
}

@property (nonatomic, retain) HMDAssistantCommandHelper *assistantCommandHelper;
@property (nonatomic) bool completionHandlerCalled;
@property (nonatomic, retain) NSString *currentHomeAssistantIdentifier;
@property (nonatomic, retain) NSString *currentHomeName;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDAssistantGather *gather;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDHome *home;
@property (nonatomic, retain) NSArray *homeKitObjects;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic) long long numberOfHomes;
@property (nonatomic, retain) NSString *primaryHomeAssistantIdentifier;
@property (nonatomic, retain) NSString *primaryHomeName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long startTime;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_evaluateHomeOptionallyMatchingHomeName:(id)arg1;
- (void)_handleCommandForHAPAction:(id)arg1 serviceType:(id)arg2 objects:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleCommandForMediaAccessoryAction:(id)arg1 objects:(id)arg2 serviceType:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_homeWithSearchFilter:(id)arg1;
- (void)_logEvent:(id)arg1;
- (id)actionOutcomeFromError:(id)arg1;
- (id)actionResultForCharacteristic:(id)arg1 actionSet:(id)arg2 action:(id)arg3 objects:(id)arg4 error:(id)arg5;
- (id)actionResultForMediaProfile:(id)arg1 action:(id)arg2 objects:(id)arg3 error:(id)arg4;
- (void)addActivationCharacteristicsIfNeeded:(id)arg1 forCharacteristic:(id)arg2;
- (void)addBridgedAccessoryCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;
- (void)addCharacteristicWithType:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3 assistantObjects:(id)arg4;
- (id)addCharacteristicsFromRelatedServicesFor:(id)arg1 assistantObjects:(id)arg2;
- (void)addIfNeededActivationCharacteristic:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3;
- (void)addLinkedServiceCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;
- (id)addStatusCharacteristicsIfNeeded:(id)arg1;
- (id)adjustGetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;
- (id)adjustSetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;
- (id)assistantCommandHelper;
- (id)compareCurrentValue:(id)arg1 newValue:(id)arg2 withMetadata:(id)arg3;
- (id)compareForBoundary:(id)arg1 withMetadata:(id)arg2;
- (bool)completionHandlerCalled;
- (id)currentHomeAssistantIdentifier;
- (id)currentHomeName;
- (id)entityFromActionSet:(id)arg1;
- (void)executeActionSet:(id)arg1 action:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)failedActionResultsFromResponse:(id)arg1 inActionSet:(id)arg2 withAction:(id)arg3;
- (id)filterObjects:(id)arg1 forCharacteristicTypes:(id)arg2;
- (id)filterObjects:(id)arg1 forCharacteristics:(id)arg2;
- (id)filteredObjectsFromObjects:(id)arg1 byAttribute:(id)arg2 forActionType:(id)arg3;
- (id)filteredObjectsFromObjects:(id)arg1 byCharacteristicType:(id)arg2;
- (id)filteredObjectsFromObjects:(id)arg1 forGroup:(id)arg2;
- (id)filteredObjectsFromObjects:(id)arg1 forHomeName:(id)arg2 roomName:(id)arg3 zoneName:(id)arg4;
- (id)gather;
- (id)getLocaleUnits:(id)arg1;
- (id)getValueOfType:(id)arg1 action:(id)arg2;
- (void)handleCommandWithCompletionHandler:(id /* block */)arg1;
- (void)handleGetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleGetColor:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleGetMetadataActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleGetNaturalLightingAction:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleMediaAccessorySetActionType:(id)arg1 forObjects:(id)arg2 withServiceType:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleMediaReadWriteResponse:(id)arg1 forAction:(id)arg2 inServiceType:(id)arg3 inHome:(id)arg4 requestProperty:(id)arg5 results:(id)arg6 forObjects:(id)arg7;
- (id)handleReadWriteResponses:(id)arg1 error:(id)arg2 forAction:(id)arg3 inServiceType:(id)arg4 results:(id)arg5 forObjects:(id)arg6;
- (void)handleSetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleSetColor:(id)arg1 forObjects:(id)arg2 service:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleSetNaturalLightingAction:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleUpdateActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)home;
- (id)homeKitObjects;
- (id)homeManager;
- (bool)isAttributeValue:(id)arg1 equalTo:(id)arg2;
- (id)mediaProfileFromObject:(id)arg1;
- (long long)numberOfHomes;
- (id)objectsWithIdentifierList:(id)arg1 error:(id*)arg2;
- (id)objectsWithSearchFilter:(id)arg1 inHome:(id)arg2 serviceTypeIsATV:(bool)arg3 overrideServiceTypeIfNeeded:(id*)arg4;
- (id)parseColorEncoding:(id)arg1;
- (void)performWithGather:(id)arg1 queue:(id)arg2 msgDispatcher:(id)arg3 completion:(id /* block */)arg4;
- (bool)populateColorResult:(id)arg1 serviceType:(id)arg2 service:(id)arg3 action:(id)arg4 responses:(id)arg5 forObjects:(id)arg6;
- (bool)populateMediaProfileWriteResult:(id)arg1 withValue:(id)arg2 serviceType:(id)arg3 action:(id)arg4;
- (bool)populateResult:(id)arg1 fromResponse:(id)arg2 responses:(id)arg3 forAction:(id)arg4 serviceType:(id)arg5 forObjects:(id)arg6;
- (bool)populateResult:(id)arg1 withObject:(id)arg2 serviceType:(id)arg3 action:(id)arg4;
- (bool)populateResult:(id)arg1 withService:(id)arg2 serviceType:(id)arg3 characteristic:(id)arg4 resultAttribute:(id)arg5 action:(id)arg6;
- (bool)populateResultWithEntity:(id)arg1 action:(id)arg2 entity:(id)arg3;
- (id)primaryHomeAssistantIdentifier;
- (id)primaryHomeName;
- (id)queue;
- (id)readRequestsForCharacteristic:(id)arg1;
- (void)reportOutcome:(id)arg1 results:(id)arg2 handler:(id /* block */)arg3;
- (void)reportResults:(id)arg1 handler:(id /* block */)arg2;
- (void)reportUnlockRequired:(id /* block */)arg1;
- (void)returnResults:(id)arg1 serviceType:(id)arg2 forAction:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)serviceFromObject:(id)arg1;
- (void)setAssistantCommandHelper:(id)arg1;
- (void)setCompletionHandlerCalled:(bool)arg1;
- (void)setCurrentHomeAssistantIdentifier:(id)arg1;
- (void)setCurrentHomeName:(id)arg1;
- (void)setGather:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeKitObjects:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setNumberOfHomes:(long long)arg1;
- (void)setPrimaryHomeAssistantIdentifier:(id)arg1;
- (void)setPrimaryHomeName:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)startTime;
- (void)timeoutAndReportResults;
- (id)updateValue:(id)arg1 forAction:(id)arg2;
- (id)updateValueToBoundary:(id)arg1 valueType:(id)arg2 fudgeMinimum:(bool)arg3 metadata:(id)arg4;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUHearingServiceController : NSObject <MRUSystemOutputDeviceRouteControllerObserver> {
    HMServiceClient * _client;
    NSHashTable * _observers;
    MRUSystemOutputDeviceRouteController * _outputDeviceRouteController;
    float  _primaryAmplification;
    HMDeviceRecord * _primaryHealthRecord;
    bool  _primaryHearingAidEnabled;
    bool  _primaryListeningModeOffAllowed;
    float  _secondaryAmplification;
    HMDeviceRecord * _secondaryHealthRecord;
    bool  _secondaryHearingAidEnabled;
    bool  _secondaryListeningModeOffAllowed;
}

@property (nonatomic, retain) HMServiceClient *client;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (nonatomic) float primaryAmplification;
@property (nonatomic, retain) HMDeviceRecord *primaryHealthRecord;
@property (nonatomic, readonly) bool primaryHearingAidEnabled;
@property (nonatomic, readonly) bool primaryListeningModeOffAllowed;
@property (nonatomic) float secondaryAmplification;
@property (nonatomic, retain) HMDeviceRecord *secondaryHealthRecord;
@property (nonatomic, readonly) bool secondaryHearingAidEnabled;
@property (nonatomic, readonly) bool secondaryListeningModeOffAllowed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)client;
- (void)dealloc;
- (id)initWithOutputDeviceRouteController:(id)arg1;
- (id)observers;
- (id)outputDeviceRouteController;
- (float)primaryAmplification;
- (id)primaryHealthRecord;
- (bool)primaryHearingAidEnabled;
- (bool)primaryListeningModeOffAllowed;
- (id)primaryOutputDeviceUID;
- (void)removeObserver:(id)arg1;
- (void)reset;
- (float)secondaryAmplification;
- (id)secondaryHealthRecord;
- (bool)secondaryHearingAidEnabled;
- (bool)secondaryListeningModeOffAllowed;
- (id)secondaryOutputDeviceUID;
- (void)setClient:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPrimaryAmplification:(float)arg1;
- (void)setPrimaryHealthRecord:(id)arg1;
- (void)setSecondaryAmplification:(float)arg1;
- (void)setSecondaryHealthRecord:(id)arg1;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg1;
- (void)updateClient;
- (void)updateHealthRecord;
- (void)updatePrimaryAmplification;
- (void)updatePrimaryHearingAidEnabled;
- (void)updatePrimaryListeningModeOffAllowed;
- (void)updateSecondaryAmplification;
- (void)updateSecondaryHearingAidEnabled;
- (void)updateSecondaryListeningModeOffAllowed;

@end
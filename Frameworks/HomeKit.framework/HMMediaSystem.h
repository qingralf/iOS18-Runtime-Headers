/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMediaSystem : NSObject <HFAccessoryLikeObjectRootHomeKitObjectProvider, HFAccessoryLikeObjectVendor, HFAccessoryRepresentable, HFHomeContainedObject, HFIncludedContextProtocol, HFMediaProfileContainer, HFServiceNameComponentsProviding, HMAccessorySettingsAdapterDelegate, HMAccessorySettingsContainer, HMAccessorySettingsContainerInternal, HMApplicationData, HMControllable, HMFLogging, HMFMessageReceiver, HMMediaDestination, HMMediaDestinationInternal, HMMediaObject, HMObjectMerge, HRERecommendableObjectProtocol, NSSecureCoding> {
    HMAccessorySettingsController * _accessorySettingsController;
    HMAccessorySettingsDataSource * _accessorySettingsDataSource;
    HMApplicationData * _applicationData;
    HMMediaDestination * _audioDestination;
    bool  _compatible;
    HMMutableArray * _componentsArray;
    NSString * _configuredName;
    _HMContext * _context;
    <HMMediaSystemDelegate> * _delegate;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMAccessorySettingsAdapter * _mediaSystemSettingsAdapter;
    NSString * _name;
    HMAccessorySettings * _settings;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSSet *accessories;
@property (nonatomic, retain) HMAccessorySettingsController *accessorySettingsController;
@property (nonatomic, retain) HMAccessorySettingsDataSource *accessorySettingsDataSource;
@property (nonatomic, retain) HMApplicationData *applicationData;
@property (retain) HMMediaDestination *audioDestination;
@property (readonly, copy) NSUUID *audioDestinationGroupIdentifier;
@property (readonly, copy) NSString *audioDestinationIdentifier;
@property (readonly, copy) NSArray *audioDestinationMediaProfiles;
@property (readonly, copy) NSString *audioDestinationName;
@property (readonly, copy) NSString *audioDestinationParentIdentifier;
@property (readonly) long long audioDestinationType;
@property (nonatomic, readonly) HMAccessoryCategory *category;
@property (getter=isCompatible, nonatomic, readonly) bool compatible;
@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, retain) HMMutableArray *componentsArray;
@property (nonatomic, readonly) NSString *configuredName;
@property (readonly) HMHome *containerHome;
@property (readonly) NSUUID *containerUUID;
@property (nonatomic, retain) _HMContext *context;
@property (getter=isControllable, readonly) bool controllable;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <HMMediaObjectDelegate> *delegate;
@property <HMMediaSystemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasValidSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFAccessoryLikeObject *hf_accessoryLikeObject;
@property (nonatomic, readonly) HFAccessoryType *hf_accessoryType;
@property (nonatomic, readonly) NSSet *hf_associatedAccessories;
@property (nonatomic, readonly) HMAccessory *hf_backingAccessory;
@property (nonatomic, readonly) bool hf_canShowInControlCenter;
@property (nonatomic, readonly) bool hf_canSpanMultipleRooms;
@property (nonatomic, readonly, copy) NSString *hf_categoryCapitalizedLocalizedDescription;
@property (nonatomic, readonly, copy) NSString *hf_categoryLowercaseLocalizedDescription;
@property (nonatomic, readonly) NSSet *hf_containedCharacteristics;
@property (nonatomic, readonly) NSSet *hf_containedProfiles;
@property (nonatomic, readonly) NSSet *hf_containedServices;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property (nonatomic, readonly, copy) NSSet *hf_deviceIdentifiers;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) bool hf_effectiveIsFavorite;
@property (nonatomic, readonly) bool hf_effectiveShowInHomeDashboard;
@property (nonatomic, readonly) NSSet *hf_fakeDebugSymptoms;
@property (nonatomic, readonly) bool hf_fakeStereoPairGeneralSymptom;
@property (nonatomic, readonly) bool hf_fakeStereoPairNotFoundSymptom;
@property (nonatomic, readonly) bool hf_fakeStereoPairVersionMismatchSymptom;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) bool hf_hasSetShowInHomeDashboard;
@property (nonatomic, readonly) bool hf_hasSetVisibleInHomeStatus;
@property (nonatomic, readonly) HMHome *hf_home;
@property (nonatomic, readonly) <HFHomeContainedObject> *hf_homeKitObject;
@property (nonatomic, readonly) bool hf_homePodIsCapableOfShowingSplitAccountError;
@property (nonatomic, readonly) bool hf_homePodSupportsMultiUser;
@property (nonatomic, readonly) bool hf_isAccessorySettingsReachable;
@property (nonatomic, readonly) bool hf_isAppleMusicReachable;
@property (nonatomic, readonly) bool hf_isCurrentAccessory;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_isForcedVisibleInHomeStatus;
@property (nonatomic, readonly) bool hf_isIdentifiable;
@property (nonatomic, readonly) bool hf_isMatterOnlyAccessory;
@property (nonatomic, readonly) bool hf_isReachable;
@property (nonatomic, readonly) bool hf_isVisibleInHomeStatus;
@property (nonatomic, readonly) Class hf_itemClass;
@property (nonatomic, readonly, copy) NSString *hf_mediaRouteIdentifier;
@property (nonatomic, readonly) <HFMediaValueSource> *hf_mediaValueSource;
@property (nonatomic, readonly) HMRoom *hf_parentRoom;
@property (nonatomic, readonly) NSString *hf_prettyDescription;
@property (nonatomic, readonly) <HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol> *hf_rootAccessoryLikeHomeKitObject;
@property (nonatomic, readonly) HMRoom *hf_safeRoom;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (nonatomic, readonly) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property (nonatomic, readonly) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) bool hf_showInHomeDashboard;
@property (nonatomic, readonly) bool hf_showsAudioSettings;
@property (nonatomic, readonly) bool hf_supportsHomeStatus;
@property (nonatomic, readonly) bool hf_supportsHomeTheater;
@property (nonatomic, readonly) bool hf_supportsMediaActions;
@property (nonatomic, readonly) bool hf_supportsMultiUser;
@property (nonatomic, readonly) bool hf_supportsMusicAlarm;
@property (nonatomic, readonly) bool hf_supportsPreferredMediaUser;
@property (nonatomic, readonly) bool hf_supportsSoftwareUpdate;
@property (nonatomic, readonly) bool hf_supportsStereoPairing;
@property (nonatomic, readonly) NSString *hf_tileSize;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) NSSet *homekitObjectIdentifiers;
@property (nonatomic, readonly) NSSet *hre_actionTypes;
@property (nonatomic, readonly) NSSet *hre_characteristics;
@property (nonatomic, readonly) HMHome *hre_home;
@property (nonatomic, readonly) bool hre_isActionable;
@property (nonatomic, readonly) bool hre_isMediaObject;
@property (nonatomic, readonly) bool hre_isVisible;
@property (nonatomic, readonly) NSSet *hre_matchingTypes;
@property (nonatomic, readonly) HMRoom *hre_parentRoom;
@property (nonatomic, readonly) NSString *hre_primaryType;
@property (nonatomic, readonly) bool isContainedWithinItemGroup;
@property (nonatomic, readonly) bool isItemGroup;
@property (nonatomic, readonly) NSSet *mediaProfiles;
@property (nonatomic, readonly, copy) HMMediaSession *mediaSession;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (nonatomic, retain) HMAccessorySettingsAdapter *mediaSystemSettingsAdapter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly) HMAccessorySettings *settings;
@property (readonly) Class superclass;
@property (readonly) bool supportsAudioDestination;
@property (readonly) bool supportsAudioGroup;
@property (nonatomic, readonly) bool supportsMessagedHomepodSettings;
@property (readonly, copy) NSSet *symptoms;
@property (nonatomic, readonly) HMSymptomsHandler *symptomsHandler;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)mediaSystemWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_handleRootSettingsUpdated:(id)arg1;
- (void)_handleSystemUpdatedNotification:(id)arg1;
- (bool)_mergeApplicationDataWithNewMediaSystem:(id)arg1;
- (bool)_mergeComponentsWithNewMediaSystem:(id)arg1;
- (bool)_mergeLegacySettingsWithNewMediaSystem:(id)arg1;
- (bool)_mergeNameWithNewMediaSystem:(id)arg1;
- (bool)_mergeSettingsWithNewMediaSystem:(id)arg1;
- (bool)_mergeWithNewMediaSystem:(id)arg1 isFromSerializedData:(bool)arg2;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_updateAccessoryReference;
- (void)_updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)accessorySettingsController;
- (id)accessorySettingsDataSource;
- (void)adapter:(id)arg1 didUpdatePreferredMediaUserUUIDString:(id)arg2 selectionType:(unsigned long long)arg3;
- (void)adapter:(id)arg1 didUpdateSettingKeyPaths:(id)arg2;
- (void)adapter:(id)arg1 didUpdateSettings:(id)arg2;
- (id)applicationData;
- (id)audioDestination;
- (id)audioDestinationGroupIdentifier;
- (id)audioDestinationIdentifier;
- (id)audioDestinationMediaProfiles;
- (id)audioDestinationName;
- (id)audioDestinationParentIdentifier;
- (long long)audioDestinationType;
- (void)callCompletionHandler:(id /* block */)arg1;
- (void)callCompletionHandler:(id /* block */)arg1 error:(id)arg2;
- (id)category;
- (id)components;
- (id)componentsArray;
- (bool)configureSettingsAdaptorIfNeeded;
- (id)configuredName;
- (id)containerHome;
- (id)containerUUID;
- (id)context;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithHome:(id)arg1 uuid:(id)arg2 name:(id)arg3 configuredName:(id)arg4 compatible:(bool)arg5 components:(id)arg6 settings:(id)arg7;
- (bool)isCompatible;
- (bool)isControllable;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)mediaSession;
- (id)mediaSystemSettingsAdapter;
- (bool)mergeAudioDestinationWithNewMediaSystem:(id)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (bool)mergeFromNewObject:(id)arg1 isFromSerializedData:(bool)arg2;
- (bool)mergeSupportsMessagedHomepodSettingsWithNewMediaSystem:(id)arg1;
- (id)messageTargetUUID;
- (id)name;
- (void)notifyDelegateOfUpdatedApplicationData:(id)arg1;
- (void)notifyDelegateOfUpdatedAudioDestination;
- (void)notifyDelegateOfUpdatedComponents:(id)arg1;
- (void)notifyDelegateOfUpdatedConfiguredName:(id)arg1;
- (void)notifyDelegateOfUpdatedMediaSession:(id)arg1;
- (void)notifyDelegateOfUpdatedName:(id)arg1;
- (void)notifyDelegateOfUpdatedSettings:(id)arg1;
- (void)postConfigure;
- (void)setAccessorySettingsController:(id)arg1;
- (void)setAccessorySettingsDataSource:(id)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setAudioDestination:(id)arg1;
- (void)setComponentsArray:(id)arg1;
- (void)setConfiguredName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMediaSystemSettingsAdapter:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (bool)supportsAudioDestination;
- (bool)supportsAudioGroup;
- (bool)supportsMessagedHomepodSettings;
- (id)symptomsHandler;
- (id)targetAccessoryIdentifierBySerial;
- (id)uniqueIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAudioDestinationSupportedOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateComponentsSettingsAdapterToSettingReflected;
- (void)updateMediaSession:(id)arg1 forMediaProfile:(id)arg2;
- (void)updateSettingWithKeyPath:(id)arg1 value:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)accessories;
- (bool)hasValidSettings;
- (id)hf_accessoryForRole:(id)arg1;
- (id)hf_accessoryLikeObject;
- (id)hf_accessoryType;
- (id)hf_appleMusicCurrentLoggedInAccount;
- (id)hf_appleMusicCurrentLoggedInAccountDSID;
- (id)hf_associatedAccessories;
- (id)hf_backingAccessory;
- (bool)hf_canShowInControlCenter;
- (bool)hf_canSpanMultipleRooms;
- (id)hf_categoryCapitalizedLocalizedDescription;
- (id)hf_categoryLowercaseLocalizedDescription;
- (id)hf_containedCharacteristics;
- (id)hf_containedProfiles;
- (id)hf_containedServices;
- (id)hf_dateAdded;
- (id)hf_dependentHomeKitObjectsForDownstreamItems;
- (id)hf_destination;
- (id)hf_deviceIdentifiers;
- (id)hf_displayName;
- (bool)hf_effectiveIsFavorite;
- (bool)hf_effectiveShowInHomeDashboard;
- (bool)hf_fake8021xNetworkSymptom;
- (id)hf_fakeDebugSymptoms;
- (bool)hf_fakeStereoPairGeneralSymptom;
- (bool)hf_fakeStereoPairNotFoundSymptom;
- (bool)hf_fakeStereoPairVersionMismatchSymptom;
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;
- (id)hf_fetchLogListWithTimeout:(double)arg1;
- (bool)hf_hasSetFavorite;
- (bool)hf_hasSetForContextType:(unsigned long long)arg1;
- (bool)hf_hasSetShowInHomeDashboard;
- (bool)hf_hasSetVisibleInHomeStatus;
- (id)hf_home;
- (id)hf_homeKitObject;
- (bool)hf_homePodIsCapableOfShowingSplitAccountError;
- (id)hf_homePodMediaAccountIsMismatchedWithHomeMediaAccount;
- (bool)hf_homePodSupportsMultiUser;
- (id)hf_homePodSupportsMultiUserLanguage;
- (id)hf_identify;
- (id)hf_idsDeviceIdentifierWithError:(id*)arg1;
- (bool)hf_isAccessorySettingsReachable;
- (bool)hf_isAppleMusicReachable;
- (bool)hf_isCurrentAccessory;
- (id)hf_isEitherHomePodMediaAccountOrHomeMediaAccountPresent;
- (bool)hf_isFavorite;
- (bool)hf_isForcedVisibleInHomeStatus;
- (bool)hf_isIdentifiable;
- (bool)hf_isInRoom:(id)arg1;
- (bool)hf_isMatterOnlyAccessory;
- (bool)hf_isOnForContextType:(unsigned long long)arg1;
- (bool)hf_isReachable;
- (bool)hf_isValidObject;
- (bool)hf_isVisibleInHomeStatus;
- (Class)hf_itemClass;
- (id)hf_mediaRouteIdentifier;
- (id)hf_mediaValueSource;
- (id)hf_moveToRoom:(id)arg1;
- (id)hf_parentRoom;
- (id)hf_preferredMediaUser;
- (unsigned long long)hf_preferredUserSelectionType;
- (id)hf_roleForAccessory:(id)arg1;
- (id)hf_rootAccessoryLikeHomeKitObject;
- (id)hf_safeRoom;
- (id)hf_serviceNameComponents;
- (id)hf_setTileSize:(id)arg1;
- (id)hf_settingsAdapterManager;
- (id)hf_settingsValueManager;
- (bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;
- (bool)hf_shouldHideForContextType:(unsigned long long)arg1;
- (bool)hf_shouldShowInFavorites;
- (bool)hf_showInHomeDashboard;
- (bool)hf_showsAudioSettings;
- (id)hf_siriLanguageOptionsManager;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (bool)hf_supportsHomeStatus;
- (bool)hf_supportsHomeTheater;
- (bool)hf_supportsMediaActions;
- (bool)hf_supportsMultiUser;
- (bool)hf_supportsMusicAlarm;
- (bool)hf_supportsPreferredMediaUser;
- (bool)hf_supportsSoftwareUpdate;
- (bool)hf_supportsStereoPairing;
- (id)hf_tileSize;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(bool)arg1;
- (id)hf_updateIsVisibleInHomeStatus:(bool)arg1;
- (id)hf_updateShowInHomeDashboard:(bool)arg1;
- (id)hf_updateValue:(bool)arg1 forContextType:(unsigned long long)arg2;
- (id)homeKitObject;
- (id)homekitObjectIdentifiers;
- (bool)isContainedWithinItemGroup;
- (bool)isItemGroup;
- (id)mediaProfiles;
- (unsigned long long)numberOfItemsContainedWithinGroup;
- (id)symptoms;
- (id)symptomsHandler;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

- (id)hre_actionTypes;
- (id)hre_characteristicTypeForActionType:(id)arg1;
- (id)hre_characteristics;
- (id)hre_home;
- (bool)hre_isActionable;
- (bool)hre_isMediaObject;
- (bool)hre_isVisible;
- (id)hre_matchingTypes;
- (id)hre_parentRoom;
- (id)hre_primaryType;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFLocationSharingViewController : PSListController <FMFSessionDelegateInternal> {
    NSArray * _allFollowersHandles;
    bool  _areMeDeviceInfoLoaded;
    bool  _areSpecifiersLoaded;
    NSArray * _deviceSpecifiers;
    NSMutableDictionary * _dsidToFamilyPhoto;
    NSArray * _familyMembers;
    NSArray * _familySpecifiers;
    NSArray * _followersHandles;
    NSArray * _followersSpecifiers;
    UIAlertController * _genericErrorAlert;
    NSArray * _hashedFamilyDsids;
    bool  _isAccessibilitySize;
    bool  _isFindMyDeviceOn;
    bool  _isMyLocationEnabled;
    FMFHandle * _lastSelectedHandle;
    bool  _meDeviceChangePending;
    NSSet * _meDevices;
    NSObject<OS_dispatch_queue> * _specifiersQueue;
    bool  _useFamilyCirclePhotos;
    bool  _useFamilyCirclePhotosLoaded;
}

@property (nonatomic, retain) NSArray *allFollowersHandles;
@property (nonatomic) bool areMeDeviceInfoLoaded;
@property (nonatomic) bool areSpecifiersLoaded;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *deviceSpecifiers;
@property (nonatomic, retain) NSMutableDictionary *dsidToFamilyPhoto;
@property (nonatomic, retain) NSArray *familyMembers;
@property (nonatomic, retain) NSArray *familySpecifiers;
@property (nonatomic, retain) NSArray *followersHandles;
@property (nonatomic, retain) NSArray *followersSpecifiers;
@property (nonatomic, retain) UIAlertController *genericErrorAlert;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *hashedFamilyDsids;
@property (nonatomic) bool isAccessibilitySize;
@property (nonatomic) bool isFindMyDeviceOn;
@property (nonatomic) bool isMyLocationEnabled;
@property (nonatomic, retain) FMFHandle *lastSelectedHandle;
@property (nonatomic) bool meDeviceChangePending;
@property (nonatomic, retain) NSSet *meDevices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *specifiersQueue;
@property (readonly) Class superclass;
@property (nonatomic) bool useFamilyCirclePhotos;
@property (nonatomic) bool useFamilyCirclePhotosLoaded;

- (void).cxx_destruct;
- (id)_defaultSpecifiers;
- (void)_findMyDeviceSpecifierWasTapped:(id)arg1;
- (id)_findMyDeviceSpecifiers;
- (id)_findMyDeviceStatus:(id)arg1;
- (id)_followerHandleWithHashedDSID:(id)arg1;
- (bool)_isFamilyMemberAFollower:(id)arg1;
- (bool)_isHandleAFollower:(id)arg1;
- (void)_loadFamilyMemberPhotos;
- (void)_loadFamilyMembers:(bool)arg1;
- (void)_loadSpecifiers;
- (void)_meDeviceSpecifierWasTapped:(id)arg1;
- (void)_pushAddressBookUIForHandle:(id)arg1;
- (void)_setShareSwitchEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)_shareSwitchEnabled:(id)arg1;
- (void)_showFamilyMemberDetails:(id)arg1;
- (void)_showHandleDetails:(id)arg1;
- (id)_specifierForFamilyMember:(id)arg1;
- (id)_specifierForHandle:(id)arg1;
- (void)addRemoveActionToContactViewController:(id)arg1;
- (void)addShareActionToContactViewController:(id)arg1;
- (id)allFollowersHandles;
- (id)allHandlesMatchingABCardForSelectedHandle:(id)arg1;
- (bool)areMeDeviceInfoLoaded;
- (bool)areSpecifiersLoaded;
- (void)contactStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)deviceSpecifiers;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveServerError:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (void)didUpdateHidingStatus:(bool)arg1;
- (void)displayAlertController:(id)arg1;
- (id)dsidToFamilyPhoto;
- (void)emitNavigationEvent;
- (id)familyMembers;
- (id)familySpecifiers;
- (id)followersHandles;
- (id)followersSpecifiers;
- (id)formatStringForHours:(long long)arg1 minutes:(long long)arg2;
- (id)genericAlertController;
- (id)genericErrorAlert;
- (id)hashedFamilyDsids;
- (id)identifierForHandle:(id)arg1;
- (id)init;
- (bool)isAccessibilitySize;
- (bool)isFindMyDeviceOn;
- (bool)isMyLocationEnabled;
- (id)lastSelectedHandle;
- (bool)meDeviceChangePending;
- (id)meDevices;
- (id)monogramForHandle:(id)arg1;
- (void)networkReachabilityUpdated:(bool)arg1;
- (bool)noMeDeviceSelected:(id)arg1;
- (id)offerTimeRemaining:(double)arg1;
- (bool)phoneNumberMatches:(id)arg1 phone2:(id)arg2;
- (void)reloadSpecifiersOnMainQueue;
- (void)removeFollower:(id)arg1;
- (id)reverseString:(id)arg1;
- (void)saveActiveDeviceSelection;
- (void)setAllFollowersHandles:(id)arg1;
- (void)setAreMeDeviceInfoLoaded:(bool)arg1;
- (void)setAreSpecifiersLoaded:(bool)arg1;
- (void)setDeviceSpecifiers:(id)arg1;
- (void)setDsidToFamilyPhoto:(id)arg1;
- (void)setFamilyMembers:(id)arg1;
- (void)setFamilySpecifiers:(id)arg1;
- (void)setFollowersHandles:(id)arg1;
- (void)setFollowersSpecifiers:(id)arg1;
- (void)setGenericErrorAlert:(id)arg1;
- (void)setHashedFamilyDsids:(id)arg1;
- (void)setIsAccessibilitySize:(bool)arg1;
- (void)setIsFindMyDeviceOn:(bool)arg1;
- (void)setIsMyLocationEnabled:(bool)arg1;
- (void)setLastSelectedHandle:(id)arg1;
- (void)setMeDeviceChangePending:(bool)arg1;
- (void)setMeDevices:(id)arg1;
- (void)setSpecifiersQueue:(id)arg1;
- (void)setUseFamilyCirclePhotos:(bool)arg1;
- (void)setUseFamilyCirclePhotosLoaded:(bool)arg1;
- (void)shareMyLocation:(id)arg1;
- (id)sortedFollowersWithCombinedRecords:(id)arg1;
- (id)specifiers;
- (id)specifiersQueue;
- (id)stringByKeepingCharacterSet:(id)arg1 inString:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFindMyDeviceStatus;
- (bool)useFamilyCirclePhotos;
- (bool)useFamilyCirclePhotosLoaded;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEditUserItemManager : HFItemManager <HUUserItemManager> {
    HFItem * _allowEditingItem;
    HFTransformItemProvider * _allowedAccessoryCategoryItemProvider;
    HFItem * _camerasItem;
    HMHome * _homeForUser;
    HFItem * _homeScheduleItem;
    HFItem * _localAccessItem;
    HULocationDeviceManager * _locationDeviceManager;
    HFItem * _locksItem;
    HUMediaServiceSettingsItemModule * _mediaServiceItemModule;
    HFItem * _pendingAccessoriesItem;
    HFItem * _personalRequestsFooterItem;
    HFItem * _personalRequestsItem;
    HFItem * _remoteAccessItem;
    HFItem * _removeItem;
    NSArray * _sectionOrderArrayWhenViewingOther;
    NSArray * _sectionOrderArrayWhenViewingSelf;
    NSArray * _supportedMULanguageCodes;
    HFItem * _tvViewingProfilesItem;
    HFItem * _updateListeningHistoryItem;
    HUAccessorySettingsItemModule * _userSettingsItemModule;
}

@property (nonatomic, retain) HFItem *allowEditingItem;
@property (nonatomic, retain) HFTransformItemProvider *allowedAccessoryCategoryItemProvider;
@property (nonatomic, retain) HFItem *camerasItem;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *homeForUser;
@property (nonatomic, retain) HFItem *homeScheduleItem;
@property (nonatomic, retain) HFItem *localAccessItem;
@property (nonatomic, retain) HULocationDeviceManager *locationDeviceManager;
@property (nonatomic, retain) HFItem *locksItem;
@property (nonatomic, retain) HUMediaServiceSettingsItemModule *mediaServiceItemModule;
@property (nonatomic, retain) HFItem *pendingAccessoriesItem;
@property (nonatomic, readonly) HFItem *personalRequestsFooterItem;
@property (nonatomic, retain) HFItem *personalRequestsItem;
@property (nonatomic, retain) HFItem *remoteAccessItem;
@property (nonatomic, retain) HFItem *removeItem;
@property (nonatomic, retain) NSArray *sectionOrderArrayWhenViewingOther;
@property (nonatomic, retain) NSArray *sectionOrderArrayWhenViewingSelf;
@property (nonatomic, retain) HFUserItem *sourceItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedMULanguageCodes;
@property (nonatomic, retain) HFItem *tvViewingProfilesItem;
@property (nonatomic, retain) HFItem *updateListeningHistoryItem;
@property (nonatomic, readonly) HMUser *userBeingEdited;
@property (nonatomic, retain) HUAccessorySettingsItemModule *userSettingsItemModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_canModifyUserBeingEditedPermissions;
- (bool)_hasPendingAccessories;
- (bool)_hasPersonalRequestsDevice;
- (bool)_hasResidentDevice;
- (bool)_hasTVViewingProfilesDevice;
- (id)_homeFuture;
- (bool)_isEditingAllowedForUser:(id)arg1;
- (bool)_isPersonalRequestsEnabledForUser;
- (bool)_isRemoteAccessAllowedForUser:(id)arg1;
- (bool)_isTVViewingProfilesEnabledForUser;
- (bool)_isUserOwner:(id)arg1;
- (bool)_isVoiceIDEnabled:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (void)_registerForExternalUpdates;
- (bool)_shouldShowBoltUI;
- (void)_unregisterForExternalUpdates;
- (void)_updateSiriSectionFooterForSection:(id)arg1;
- (id)allowEditingItem;
- (id)allowedAccessoryCategoryItemProvider;
- (id)camerasItem;
- (id)homeForUser;
- (id)homeScheduleItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3;
- (bool)isUserBeingEditedTheDeviceUser;
- (id)localAccessItem;
- (id)locationDeviceManager;
- (id)locksItem;
- (id)mediaServiceItemModule;
- (id)pendingAccessoriesItem;
- (id)personalRequestsFooterItem;
- (id)personalRequestsItem;
- (id)remoteAccessItem;
- (id)removeItem;
- (id)reuseIdentifierForFooterViewInSection:(unsigned long long)arg1;
- (id)sectionOrderArrayWhenViewingOther;
- (id)sectionOrderArrayWhenViewingSelf;
- (void)setAllowEditingItem:(id)arg1;
- (void)setAllowedAccessoryCategoryItemProvider:(id)arg1;
- (void)setCamerasItem:(id)arg1;
- (void)setHomeForUser:(id)arg1;
- (void)setHomeScheduleItem:(id)arg1;
- (void)setLocalAccessItem:(id)arg1;
- (void)setLocationDeviceManager:(id)arg1;
- (void)setLocksItem:(id)arg1;
- (void)setMediaServiceItemModule:(id)arg1;
- (void)setPendingAccessoriesItem:(id)arg1;
- (void)setPersonalRequestsItem:(id)arg1;
- (void)setRemoteAccessItem:(id)arg1;
- (void)setRemoveItem:(id)arg1;
- (void)setSectionOrderArrayWhenViewingOther:(id)arg1;
- (void)setSectionOrderArrayWhenViewingSelf:(id)arg1;
- (void)setSupportedMULanguageCodes:(id)arg1;
- (void)setTvViewingProfilesItem:(id)arg1;
- (void)setUpdateListeningHistoryItem:(id)arg1;
- (void)setUserSettingsItemModule:(id)arg1;
- (id)supportedMULanguageCodes;
- (id)tvViewingProfilesItem;
- (id)updateListeningHistoryItem;
- (id)userBeingEdited;
- (id)userSettingsItemModule;

@end

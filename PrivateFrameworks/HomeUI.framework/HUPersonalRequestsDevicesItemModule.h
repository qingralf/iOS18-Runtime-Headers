/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPersonalRequestsDevicesItemModule : HFItemModule <HFSiriLanguageOptionsManagerObserver, HULocationDeviceManagerObserver> {
    HMHome * _home;
    NSSet * _itemProviders;
    HULocationDeviceManager * _locationDeviceManager;
    NSMapTable * _mediaProfileToLanguageOptionsManagerMap;
    bool  _onlyShowDeviceSwitches;
    HFItemProvider * _personalRequestsMediaAccessoriesProvider;
    HFItemProvider * _personalRequestsOtherAccessoriesProvider;
    HFItem * _personalRequestsToggleItem;
    HFUserItem * _sourceItem;
    <HFMediaProfileContainer> * _sourceMediaProfileContainer;
    NSArray * _supportedMULanguageCodes;
}

@property (nonatomic, readonly) HMAssistantAccessControl *accessControl;
@property (nonatomic, readonly) NAFuture *activeLocationDeviceFuture;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;
@property (nonatomic, retain) NSMapTable *mediaProfileToLanguageOptionsManagerMap;
@property (nonatomic) bool onlyShowDeviceSwitches;
@property (nonatomic, copy) NSArray *personalRequestsDevices;
@property (nonatomic, retain) HFItemProvider *personalRequestsMediaAccessoriesProvider;
@property (nonatomic, retain) HFItemProvider *personalRequestsOtherAccessoriesProvider;
@property (nonatomic, readonly) HFItem *personalRequestsToggleItem;
@property (nonatomic, readonly) HFUserItem *sourceItem;
@property (nonatomic, retain) <HFMediaProfileContainer> *sourceMediaProfileContainer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedMULanguageCodes;

- (void).cxx_destruct;
- (id)_attributedFooterTitle;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (void)_createItemProviders;
- (id)_createPersonalRequestProviderForMediaAccessories;
- (id)_createPersonalRequestProviderForOtherAccessories;
- (bool)_showPersonalRequestsItems;
- (id)_transformItemForSourceItem:(id)arg1;
- (bool)_voiceRecognitionLanguage:(id)arg1 matchesMultiUserCapableAccessory:(id)arg2;
- (id)accessControl;
- (id)activeLocationDeviceFuture;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 userItem:(id)arg2 home:(id)arg3 onlyShowDeviceSwitches:(bool)arg4;
- (id)initWithItemUpdater:(id)arg1 userItem:(id)arg2 home:(id)arg3 settingsController:(id)arg4 onlyShowDeviceSwitches:(bool)arg5;
- (bool)isCurrentIOSDeviceOnSameVoiceRecognitionLanguageAsPersonalRequestsDeviceForItem:(id)arg1;
- (bool)isItemPersonalRequestsDevice:(id)arg1;
- (bool)isItemPersonalRequestsToggle:(id)arg1;
- (id)itemProviders;
- (id)locationDeviceManager;
- (void)locationDeviceManager:(id)arg1 didUpdateActiveLocationDevice:(id)arg2;
- (id)mediaProfileToLanguageOptionsManagerMap;
- (bool)onlyShowDeviceSwitches;
- (id)personalRequestsDevices;
- (id)personalRequestsMediaAccessoriesProvider;
- (id)personalRequestsOtherAccessoriesProvider;
- (id)personalRequestsToggleItem;
- (id)recognitionLanguageForItem:(id)arg1;
- (bool)recognitionLanguageIsSupportedVRLanguageForCurrentDevice;
- (bool)recognitionLanguageIsSupportedVRLanguageForItem:(id)arg1;
- (void)registerForExternalUpdates;
- (void)setMediaProfileToLanguageOptionsManagerMap:(id)arg1;
- (void)setOnlyShowDeviceSwitches:(bool)arg1;
- (void)setPersonalRequestsDevices:(id)arg1;
- (void)setPersonalRequestsMediaAccessoriesProvider:(id)arg1;
- (void)setPersonalRequestsOtherAccessoriesProvider:(id)arg1;
- (void)setSourceMediaProfileContainer:(id)arg1;
- (void)setSupportedMULanguageCodes:(id)arg1;
- (void)siriLanguageOptionsManager:(id)arg1 availableLanguageOptionsDidChange:(id)arg2;
- (void)siriLanguageOptionsManager:(id)arg1 selectedLanguageOptionDidChange:(id)arg2;
- (id)sourceItem;
- (id)sourceMediaProfileContainer;
- (id)supportedMULanguageCodes;
- (void)toggleAllPersonalRequestsDevices;
- (void)turnOnAllPersonalRequestsDevices;
- (void)turnOnPersonalRequestsForAllVoiceRecognitionCapablePersonalRequestsDevices;
- (void)unregisterForExternalUpdates;
- (id)updateLocationDeviceToThisDevice;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKPigmentEditOptionStore : NSObject <CLKSensitiveUIStateObserver, NTKPigmentPreferenceManagerDelegate> {
    NSCache * _cache;
    CLKDevice * _device;
    NSMutableDictionary * _listenersByDomain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NTKFaceColorPalette * _palette;
    bool  _persistenceCacheEnabled;
    NTKPlistPigmentEditOptionLoader * _plistLoader;
    NTKPigmentPreferenceManager * _preferenceManager;
    bool  _prewarmed;
    NSObject<OS_dispatch_queue> * _privateQueue;
    NSDictionary * _sharedCollections;
    NTKPigmentPersistentStorageController * _storageController;
}

@property (nonatomic, retain) NSCache *cache;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *listenersByDomain;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NTKFaceColorPalette *palette;
@property (nonatomic) bool persistenceCacheEnabled;
@property (nonatomic, retain) NTKPlistPigmentEditOptionLoader *plistLoader;
@property (nonatomic, retain) NTKPigmentPreferenceManager *preferenceManager;
@property (nonatomic) bool prewarmed;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic, copy) NSDictionary *sharedCollections;
@property (nonatomic, retain) NTKPigmentPersistentStorageController *storageController;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_autoSelectPigmentsForSharedCollections:(id)arg1;
- (void)_autoSelectPigmentsFromFacePigmentSet:(id)arg1;
- (id)_companion_loadPigmentSetForDomain:(id)arg1 bundle:(id)arg2;
- (void)_companion_setupPersistentStorage;
- (id)_loadPigmentSetForDomain:(id)arg1 bundle:(id)arg2;
- (id)_migratedOptionForInvalidOption:(id)arg1 collection:(id)arg2;
- (id)_normalizeOptionForOption:(id)arg1 domain:(id)arg2 bundle:(id)arg3 slot:(id)arg4;
- (void)_setupPlistLoader;
- (void)_threadunsafe_resetCache;
- (id)_threadunsafe_sharedCollections;
- (id)_watch_loadPigmentSetForDomain:(id)arg1 bundle:(id)arg2;
- (void)addListener:(id)arg1 forDomain:(id)arg2;
- (id)cache;
- (void)colorBundleContentChanged;
- (id)colorOptionsForDomain:(id)arg1 bundle:(id)arg2 slot:(id)arg3;
- (id)defaultColorOptionForDomain:(id)arg1 bundle:(id)arg2 slot:(id)arg3;
- (id)defaultGalleryColorsForDomain:(id)arg1 bundle:(id)arg2;
- (void)deletePersistenceLayerCache;
- (id)device;
- (void)faceBundlesUpdated;
- (id)fulfilledOptionForOption:(id)arg1 domain:(id)arg2 bundle:(id)arg3 slot:(id)arg4;
- (void)handleActiveDeviceChangedNotification;
- (bool)hasAddableCollectionsForDomain:(id)arg1 bundle:(id)arg2 slot:(id)arg3;
- (unsigned long long)indexOfOption:(id)arg1 domain:(id)arg2 bundle:(id)arg3 slot:(id)arg4;
- (id)init;
- (bool)isCacheRussiaLocaleStateChanged;
- (bool)isOptionVisible:(id)arg1;
- (id)listenersByDomain;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)migratedOptionForInvalidOption:(id)arg1 domain:(id)arg2 bundle:(id)arg3 slot:(id)arg4;
- (void)notifyListenersStoreContentChanged;
- (unsigned long long)numberOfOptionsForDomain:(id)arg1 bundle:(id)arg2 slot:(id)arg3;
- (id)optionAtIndex:(unsigned long long)arg1 domain:(id)arg2 bundle:(id)arg3 slot:(id)arg4;
- (id)palette;
- (bool)persistenceCacheEnabled;
- (void)pigmentPreferenceManagerDidUpdateSelectedColors:(id)arg1;
- (id)pigmentSetForDomain:(id)arg1 bundle:(id)arg2;
- (id)plistLoader;
- (id)preferenceManager;
- (bool)prewarmed;
- (id)privateQueue;
- (void)removeListener:(id)arg1 forDomain:(id)arg2;
- (void)resetCache;
- (void)resetCacheAndNotifyListeners;
- (void)savePersistentCacheVersion;
- (void)sensitiveUIStateChanged;
- (void)setCache:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setIgnoreSensitiveUIItems:(bool)arg1;
- (void)setIncludesAllDeviceSpecificColors:(bool)arg1;
- (void)setListenersByDomain:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setOption:(id)arg1 visible:(bool)arg2;
- (void)setPalette:(id)arg1;
- (void)setPersistenceCacheEnabled:(bool)arg1;
- (void)setPlistLoader:(id)arg1;
- (void)setPreferenceManager:(id)arg1;
- (void)setPrewarmed:(bool)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setSharedCollections:(id)arg1;
- (void)setStorageController:(id)arg1;
- (id)sharedCollections;
- (bool)shouldClearPersistanceStoreCache;
- (bool)shouldForceResetingPersistentCache;
- (id)storageController;

@end
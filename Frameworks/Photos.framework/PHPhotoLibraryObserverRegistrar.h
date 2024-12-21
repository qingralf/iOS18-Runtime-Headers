/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPhotoLibraryObserverRegistrar : NSObject {
    PHChangeHandlingDebugger * _changeHandlingDebugger;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_clearsOIDCacheAfterFetchResultDealloc;
    NSHashTable * _lock_externalChangeObservers;
    NSHashTable * _lock_fetchResults;
    NSHashTable * _lock_internalChangeObservers;
    bool  _lock_isChangeHandlingActive;
    bool  _lock_isChangeHandlingAuthorized;
    bool  _lock_postsPersistentHistoryChangedNotifications;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingLock;
    bool  _pendingLock_isChangeProcessingPending;
    double  _pendingLock_lastChangeProcessingStarted;
    PLPhotoLibraryBundle * _photoLibraryBundle;
    PHUniqueObjectIDCache * _uniqueObjectIDCache;
}

@property bool clearsOIDCacheAfterFetchResultDealloc;
@property (readonly) unsigned long long countOfRegisteredFetchResults;
@property bool postsPersistentHistoryChangedNotifications;

+ (bool)_isInternalObserver:(id)arg1;

- (void).cxx_destruct;
- (void)_lock_clearOIDCache;
- (bool)_lock_hasChangeObservers;
- (void)_lock_pauseChangeHandlingIfNeeded;
- (void)_lock_resumeChangeHandlingIfNeeded;
- (void)addObservers:(id)arg1 authorizationStatus:(long long)arg2;
- (void)clearIsChangeProcessingPending;
- (bool)clearsOIDCacheAfterFetchResultDealloc;
- (unsigned long long)countOfRegisteredFetchResults;
- (void)dealloc;
- (void)getObserversWithBlock:(id /* block */)arg1;
- (id)initWithLibraryBundle:(id)arg1 changeHandlingDebugger:(id)arg2 uniqueObjectIDCache:(id)arg3;
- (bool)postsPersistentHistoryChangedNotifications;
- (void)publishChangesToObserversOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (void)registerFetchResult:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setClearsOIDCacheAfterFetchResultDealloc:(bool)arg1;
- (void)setPostsPersistentHistoryChangedNotifications:(bool)arg1;
- (void)throttlePendingChangesTimerFiredWithBlock:(id /* block */)arg1;
- (void)throttlePendingChangesWithBlock:(id /* block */)arg1;
- (void)unregisterFetchResult:(id)arg1;

@end
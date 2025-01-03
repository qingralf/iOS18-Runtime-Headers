/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVAppServices.framework/TVAppServices
 */

@interface TVAppBag : NSObject <TVAppBagObjCProtocol> {
    void $__lazy_storage_$_logPrefix;
    void $__lazy_storage_$_systemVersion;
    void $__lazy_storage_$_systemVersionInfo;
    void amsBag;
    void cacheStorage;
    void cachedBagAccessLock;
    void cachedBags;
    void diskCachedKeyTypes;
    void diskCachedKeys;
    void isSilentFetching;
    void isSilentFetchingAccessLock;
    void observers;
    void snapshotBag;
    void snapshotBagAccessLock;
}

+ (id)app;

- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (id)booleanForKey:(id)arg1;
- (id)cachedArrayForKey:(id)arg1;
- (id)cachedBooleanForKey:(id)arg1;
- (id)cachedDictionaryForKey:(id)arg1;
- (id)cachedDoubleForKey:(id)arg1;
- (id)cachedIntegerForKey:(id)arg1;
- (id)cachedStringForKey:(id)arg1;
- (id)cachedURLForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)init;
- (id)integerForKey:(id)arg1;
- (void)prewarm;
- (id)stringForKey:(id)arg1;
- (id)urlForKey:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
 */

@interface AXBinaryMonitor : NSObject {
    NSMutableDictionary * _appExtensionHandlerMap;
    NSMutableDictionary * _appHandlerMap;
    NSObject<OS_dispatch_queue> * _binaryMonitorQueue;
    NSMutableDictionary * _bundleHandlerMap;
    NSMutableDictionary * _dylibHandlerMap;
    NSMutableDictionary * _frameworkHandlerMap;
}

@property (nonatomic, retain) NSMutableDictionary *appExtensionHandlerMap;
@property (nonatomic, retain) NSMutableDictionary *appHandlerMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *binaryMonitorQueue;
@property (nonatomic, retain) NSMutableDictionary *bundleHandlerMap;
@property (nonatomic, retain) NSMutableDictionary *dylibHandlerMap;
@property (nonatomic, retain) NSMutableDictionary *frameworkHandlerMap;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addHandler:(id /* block */)arg1 withName:(id)arg2 toMap:(id*)arg3;
- (id)_appExtensionNameForImage:(id)arg1;
- (id)_appNameForImage:(id)arg1;
- (void)_applyHandlerBlocks:(id)arg1 handlerMap:(id)arg2;
- (id)_bundleNameAndType:(id)arg1;
- (id)_bundleNameForImage:(id)arg1;
- (id)_dylibNameForImage:(id)arg1;
- (id)_frameworkNameForImage:(id)arg1;
- (void)_handleLoadedImagePath:(id)arg1;
- (bool)_loadImageIsApp:(id)arg1;
- (bool)_loadImageIsAppExtension:(id)arg1;
- (bool)_loadImageIsBundle:(id)arg1;
- (bool)_loadImageIsDylib:(id)arg1;
- (bool)_loadImageIsFramework:(id)arg1;
- (void)addHandler:(id /* block */)arg1 forApp:(id)arg2;
- (void)addHandler:(id /* block */)arg1 forAppExtension:(id)arg2;
- (void)addHandler:(id /* block */)arg1 forBundleID:(id)arg2;
- (void)addHandler:(id /* block */)arg1 forBundleName:(id)arg2;
- (void)addHandler:(id /* block */)arg1 forDylib:(id)arg2;
- (void)addHandler:(id /* block */)arg1 forFramework:(id)arg2;
- (id)appExtensionHandlerMap;
- (id)appHandlerMap;
- (id)binaryMonitorQueue;
- (id)bundleHandlerMap;
- (id)dylibHandlerMap;
- (void)evaluateExistingBinaries;
- (id)frameworkHandlerMap;
- (id)init;
- (void)setAppExtensionHandlerMap:(id)arg1;
- (void)setAppHandlerMap:(id)arg1;
- (void)setBinaryMonitorQueue:(id)arg1;
- (void)setBundleHandlerMap:(id)arg1;
- (void)setDylibHandlerMap:(id)arg1;
- (void)setFrameworkHandlerMap:(id)arg1;

@end

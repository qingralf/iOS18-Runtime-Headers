/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

@interface PHLiveLookupSettingsController : NSObject <CXCallDirectoryExtensionManagerDelegate> {
    LiveLookupManagerProxy * _extensionManager;
    NSMutableArray * _extensions;
    PSListController * _parent;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) bool canEditExtensions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) LiveLookupManagerProxy *extensionManager;
@property (nonatomic, retain) NSMutableArray *extensions;
@property (nonatomic, readonly) bool hasExtensions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PSListController *parent;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_extensionFrom:(id)arg1;
- (bool)_isUniqueExtension:(id)arg1;
- (id)_localizedExtensionTitleForExtension:(id)arg1 unique:(bool)arg2;
- (void)_updateExtensions;
- (bool)canEditExtensions;
- (id)createExtensionsGroupSpecifiers;
- (void)dealloc;
- (id)extensionForSpecifier:(id)arg1;
- (id)extensionManager;
- (id)extensions;
- (void)handleUIApplicationWillEnterForegroundNotification:(id)arg1;
- (bool)hasExtensions;
- (id)initWithParent:(id)arg1;
- (id)parent;
- (void)presentError:(id)arg1 fromSettingEnabled:(bool)arg2 forExtension:(id)arg3;
- (id)queue;
- (id)readPreferenceValue:(id)arg1;
- (void)refreshView;
- (void)setExtensions:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@end

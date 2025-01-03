/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUINetworkSlicingController : PSListController {
    PSUICoreTelephonyCapabilitiesCache * _capabilityCache;
    NSArray * _fCategories;
}

@property (nonatomic, retain) PSUICoreTelephonyCapabilitiesCache *capabilityCache;
@property (nonatomic, retain) NSArray *fCategories;

- (void).cxx_destruct;
- (void)_enableNetworkSlicing:(bool)arg1 categoryID:(id)arg2;
- (id)capabilityCache;
- (id)fCategories;
- (id)getLogger;
- (id)getNetworkSlicingAppCategory:(id)arg1;
- (id)init;
- (id)initWithCapabilityCache:(id)arg1;
- (void)setCapabilityCache:(id)arg1;
- (void)setFCategories:(id)arg1;
- (void)setNetworkSlicingAppCategory:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end

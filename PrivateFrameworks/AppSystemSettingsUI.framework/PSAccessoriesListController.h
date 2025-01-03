/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAccessoriesListController : PSListController {
    NSArray * _accessorySpecifiers;
    NSString * _appBundleID;
    DASession * _appSession;
}

- (void).cxx_destruct;
- (void)handleSessionEvent:(id)arg1;
- (void)refreshDADevices;
- (bool)shouldReloadSpecifiersOnResume;
- (id)specifierForDevice:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;

@end

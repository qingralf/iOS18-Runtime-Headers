/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudSettings.framework/iCloudSettings
 */

@interface ICSPhotoStreamSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager * _accountManager;
    <AAUISpecifierProviderDelegate> * _delegate;
    NSDictionary * _handleURLResourceDictionary;
    PSListController * _photosSettingsController;
    NSArray * _specifiers;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isPhotoStreamEnabled:(id)arg1;
- (id)_isPhotoStreamEnabledString:(id)arg1;
- (void)_photoStreamSpecifierWasTapped:(id)arg1;
- (void)_showPhotoStreamController:(id)arg1;
- (id)_specifierForPhotoStream;
- (id)account;
- (id)delegate;
- (bool)handleURL:(id)arg1;
- (id)initWithAccountManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end
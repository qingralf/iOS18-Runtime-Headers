/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TransparencyUI.framework/TransparencyUI
 */

@interface TUIDevicesWithIssuesSpecifierProvider : NSObject <AADeviceListDelegate, AAUISpecifierProvider> {
    AIDAAccountManager * _accountManager;
    <AAUISpecifierProviderDelegate> * _delegate;
    AADeviceList * _deviceList;
    NSMutableArray * _devicesWithIssues;
    unsigned long long  _devicesWithIssuesCount;
    NSMutableArray * _devicesWithIssuesIdentifiers;
    TUIIDMSDeviceSource * _idms;
    NSArray * _specifiers;
    NSMutableArray * _unknownDevices;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AADeviceList *deviceList;
@property (nonatomic, retain) NSMutableArray *devicesWithIssues;
@property (nonatomic) unsigned long long devicesWithIssuesCount;
@property (nonatomic, retain) NSMutableArray *devicesWithIssuesIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TUIIDMSDeviceSource *idms;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *unknownDevices;

- (void).cxx_destruct;
- (id)_deviceList;
- (id)_iconURLForDevice:(id)arg1;
- (id)_specifierForDevice:(id)arg1;
- (id)_specifierForError;
- (id)_specifierForSpinner;
- (id)_specifierForUnknownDevice:(id)arg1;
- (id)_specifiersForDeviceList:(id)arg1;
- (id)_spinnerSpecifierGroup;
- (void)_updateDevicesWithIssuesList:(id)arg1;
- (id)accountManager;
- (id)delegate;
- (id)deviceList;
- (void)deviceListModified:(id)arg1;
- (id)devicesWithIssues;
- (unsigned long long)devicesWithIssuesCount;
- (id)devicesWithIssuesIdentifiers;
- (id)idms;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 devicesWithIssuesIdentifiers:(id)arg2;
- (void)setAccountManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceList:(id)arg1;
- (void)setDevicesWithIssues:(id)arg1;
- (void)setDevicesWithIssuesCount:(unsigned long long)arg1;
- (void)setDevicesWithIssuesIdentifiers:(id)arg1;
- (void)setIdms:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setUnknownDevices:(id)arg1;
- (id)specifiers;
- (id)unknownDevices;

@end

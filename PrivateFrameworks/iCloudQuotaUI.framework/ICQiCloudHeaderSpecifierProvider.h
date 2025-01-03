/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQiCloudHeaderSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager * _accountManager;
    <AAUISpecifierProviderDelegate> * _delegate;
    PSListController<AAUISpecifierProviderDelegate> * _listController;
    <AAUISpecifierProvider> * _recommendationsTipSpecifierProvider;
    NSArray * _specifiers;
    ICQCloudStorageSpecifierProvider * _storageGroupSpecifierProvider;
    NSArray * _storageSpecifiers;
    <AAUISpecifierProvider> * _storageViolationTipSpecifierProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleSkippedCFUWithResourceDictionary:(id)arg1;
- (void)_launchServerUIFlowWithOffer:(id)arg1;
- (id)account;
- (id)delegate;
- (bool)handleURL:(id)arg1;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 navigationController:(id)arg2;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end

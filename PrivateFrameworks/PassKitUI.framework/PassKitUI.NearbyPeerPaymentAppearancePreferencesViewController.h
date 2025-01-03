/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PassKitUI.NearbyPeerPaymentAppearancePreferencesViewController : UIViewController <UITableViewDelegate> {
    void $__lazy_storage_$_datasource;
    void context;
    void divider;
    void footer;
    void headerView;
    void identityManager;
    void settings;
    void tableView;
}

@property (nonatomic, readonly) long long preferredUserInterfaceStyle;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)preferredUserInterfaceStyle;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

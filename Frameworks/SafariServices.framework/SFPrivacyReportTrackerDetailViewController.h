/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFPrivacyReportTrackerDetailViewController : UITableViewController {
    UIView * _header;
    NSNumberFormatter * _numberFormatter;
    NSString * _tableViewHeaderText;
    WBSKnownTrackingThirdParty * _tracker;
}

- (void).cxx_destruct;
- (void)_updateHeaderSize;
- (void)_updateHeaderSizeForTraitChanges;
- (id)initWithTracker:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;

@end
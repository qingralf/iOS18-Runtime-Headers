/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CAFUI.framework/CAFUI
 */

@interface CAFUI.CAFUIPickerViewController : CAFUI.CAFUITableViewController <UITableViewDataSource, UITableViewDelegate> {
    void representable;
}

- (void).cxx_destruct;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
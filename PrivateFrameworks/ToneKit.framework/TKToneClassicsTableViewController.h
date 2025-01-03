/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKToneClassicsTableViewController : UITableViewController <PSStateRestoration, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver> {
    TKTonePickerItem * _classicTonesHeaderItem;
    <TKTonePickerTableViewControllerHelper> * _tonePickerTableViewControllerHelper;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <TKTonePickerTableViewControllerHelper> *tonePickerTableViewControllerHelper;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)didReloadTones;
- (void)didUpdateCheckedStatus:(bool)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)didUpdateDetailText:(id)arg1 ofToneClassicsPickerItem:(id)arg2;
- (id)initWithClassicTonesHeaderItem:(id)arg1;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)separatorColorDidChangeInTonePickerTableView:(id)arg1;
- (void)setTonePickerTableViewControllerHelper:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tonePickerTableViewControllerHelper;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

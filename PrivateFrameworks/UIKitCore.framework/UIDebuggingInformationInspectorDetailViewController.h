/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingInformationInspectorDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _data;
    UIView * _inspectedView;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_flush;
- (void)_forceViewLayout;
- (void)_updateData;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inspectView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

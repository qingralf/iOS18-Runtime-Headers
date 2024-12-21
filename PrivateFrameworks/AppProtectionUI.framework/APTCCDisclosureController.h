/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppProtectionUI.framework/AppProtectionUI
 */

@interface APTCCDisclosureController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    APApplication * _app;
    NSArray * _bundleIdentifiersWithAccess;
    OBBoldTrayButton * _doneButton;
    APButtonTrayScrollViewAssistant * _scrollViewAssistant;
    NSArray * _users;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDoneButtonTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithApplication:(id)arg1 users:(id)arg2 includeDoneButton:(bool)arg3 scrollViewAssistant:(id)arg4;
- (void)setScrollContentInsets;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
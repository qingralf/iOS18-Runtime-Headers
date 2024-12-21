/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudiogramIngestion.framework/AudiogramIngestion
 */

@interface AIAudiogramFrequencySelectionViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    void audiogram;
    void continueButton;
    void delegate;
    void doneButton;
    void frequencies;
    void isModal;
    void selectedFrequencies;
    void tableViewHeightConstraint;
}

- (void).cxx_destruct;
- (void)cancelTapped:(id)arg1;
- (void)continueToIndividualSensitivityPointInput:(id)arg1;
- (void)doneTapped:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 selectedFrequencies:(id)arg3 delegate:(id)arg4 isModal:(bool)arg5;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
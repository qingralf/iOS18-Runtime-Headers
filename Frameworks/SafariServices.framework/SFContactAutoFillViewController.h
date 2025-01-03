/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFContactAutoFillViewController : UITableViewController {
    <SFContactAutoFillViewControllerFiller> * _autoFiller;
    CNContact * _contact;
    NSArray * _matches;
    NSArray * _propertyValues;
}

@property (nonatomic) <SFContactAutoFillViewControllerFiller> *autoFiller;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (id)_valueForProperty:(id)arg1 identifier:(id)arg2;
- (void)autoFill:(id)arg1;
- (id)autoFiller;
- (bool)canBecomeFirstResponder;
- (bool)canDrillInCellAtIndexPath:(id)arg1;
- (id)initWithMatches:(id)arg1 contact:(id)arg2;
- (id)matchesForProperty:(id)arg1;
- (id)properties;
- (void)setAutoFiller:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)valuesFromPropertyMatches:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

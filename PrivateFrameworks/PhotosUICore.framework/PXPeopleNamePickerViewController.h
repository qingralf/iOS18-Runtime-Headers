/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleNamePickerViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UITableViewDelegate, UITextFieldDelegate> {
    <PXPeopleNamePickerViewControllerDelegate> * _delegate;
    PXPeopleNamePickerResultsTableViewController * _resultsController;
    NSLayoutConstraint * _resultsViewBottomConstraint;
    NSArray * _savedRightBarItems;
    PXPeopleNamePickerTitleView * _titleView;
    double  _yOffset;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PXPeopleNamePickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPeopleNamePickerResultsTableViewController *resultsController;
@property (nonatomic, retain) NSLayoutConstraint *resultsViewBottomConstraint;
@property (nonatomic, retain) NSArray *savedRightBarItems;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPeopleNamePickerTitleView *titleView;
@property (nonatomic) double yOffset;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_changePlaceholderTextOfTextField:(id)arg1 toColor:(id)arg2;
- (void)_hideResultsView;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_showResultsView;
- (double)_titleViewMaxWidthForEditing:(bool)arg1;
- (void)adjustForAccessoryViewYOffset:(double)arg1;
- (id)delegate;
- (void)endNamingSession;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFace:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPerson:(id)arg1;
- (id)initWithPerson:(id)arg1 orFace:(id)arg2;
- (id)resultsController;
- (id)resultsViewBottomConstraint;
- (id)savedRightBarItems;
- (void)setDelegate:(id)arg1;
- (void)setResultsController:(id)arg1;
- (void)setResultsViewBottomConstraint:(id)arg1;
- (void)setSavedRightBarItems:(id)arg1;
- (void)setYOffset:(double)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (double)yOffset;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUScheduleDateEditorViewController : HUItemTableViewController {
    <HUScheduleDateEditorViewControllerDelegate> * _delegate;
    unsigned long long  _editorContext;
    UIBarButtonItem * _savedButtonBarItem;
}

@property (nonatomic, readonly) <HUScheduleDateEditorViewControllerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long editorContext;
@property (nonatomic, retain) UIBarButtonItem *savedButtonBarItem;

- (void).cxx_destruct;
- (id)_editorItemModule;
- (void)_saveChanges;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)delegate;
- (void)doneButtonPressed:(id)arg1;
- (unsigned long long)editorContext;
- (id)initWithDate:(id)arg1 editorContext:(unsigned long long)arg2 delegate:(id)arg3;
- (id)savedButtonBarItem;
- (void)setSavedButtonBarItem:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
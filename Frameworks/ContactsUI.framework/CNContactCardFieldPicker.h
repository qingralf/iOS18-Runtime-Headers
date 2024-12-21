/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactCardFieldPicker : UIViewController <UITableViewDelegate> {
    NSArray * _contacts;
    CNContact * _defaultFieldSelections;
    <CNContactCardFieldPickerDelegate> * _delegate;
    CNContactCardFieldPickerDataSource * _fieldPickerDataSource;
    bool  _isNameDropSession;
    bool  _shouldSelectDefaultFieldKeys;
    bool  _shouldSelectDefaultIndividualFields;
    UITableView * _tableView;
    UIBarButtonItem * _toggleSelectAllFieldsButton;
}

@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) CNContact *defaultFieldSelections;
@property (nonatomic, retain) <CNContactCardFieldPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactCardFieldPickerDataSource *fieldPickerDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isNameDropSession;
@property (nonatomic) bool shouldSelectDefaultFieldKeys;
@property (nonatomic) bool shouldSelectDefaultIndividualFields;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) UIBarButtonItem *toggleSelectAllFieldsButton;

+ (id)descriptorForRequiredKeys;
+ (id)imageProperties;
+ (bool)isContactObject:(id)arg1 equivalentTo:(id)arg2;
+ (bool)isProperty:(id)arg1 value:(id)arg2 inContact:(id)arg3;
+ (id)privateCardPropertiesForContacts:(id)arg1;

- (void).cxx_destruct;
- (bool)allFieldsSelected;
- (id)contacts;
- (id)defaultFieldSelections;
- (id)delegate;
- (void)deselectAllFields;
- (void)done:(id)arg1;
- (id)fieldPickerDataSource;
- (id)initWithContact:(id)arg1;
- (id)initWithContacts:(id)arg1;
- (id)initWithContacts:(id)arg1 isNameDropSession:(bool)arg2 fieldSelections:(id)arg3;
- (id)initWithNameDrop:(id)arg1 fieldSelections:(id)arg2;
- (bool)isAnyHandleSelected;
- (bool)isInActivityController;
- (bool)isNameDropSession;
- (void)saveFilteredContacts;
- (void)selectAllFields;
- (void)selectDefaultFieldKeys;
- (void)selectDefaultFields;
- (bool)selectRowForKey:(id)arg1 value:(id)arg2 atIndex:(id)arg3;
- (void)setContacts:(id)arg1;
- (void)setDefaultFieldSelections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFieldPickerDataSource:(id)arg1;
- (void)setIsNameDropSession:(bool)arg1;
- (void)setPhotoFromContact:(id)arg1 onFilteredContact:(id)arg2;
- (void)setShouldSelectDefaultFieldKeys:(bool)arg1;
- (void)setShouldSelectDefaultIndividualFields:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setToggleSelectAllFieldsButton:(id)arg1;
- (void)setUpDoneButton;
- (void)setUpTableView;
- (void)setUpToggleSelectAllFieldsButton;
- (bool)shouldSelectDefaultFieldKeys;
- (bool)shouldSelectDefaultIndividualFields;
- (id)tableView;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)titleForSelectAllFieldsButton;
- (id)toggleSelectAllFieldsButton;
- (void)toggleSelectionOfFields:(id)arg1;
- (void)updateControllerButtons;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
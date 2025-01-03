/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate, UIViewControllerRestoration> {
    void * _addressBook;
    bool  _allowsActions;
    bool  _allowsEditing;
    CNContactViewController * _cnContactViewController;
    void * _displayedPerson;
    NSArray * _displayedProperties;
    bool  _highlightedImportant;
    int  _highlightedMultiValueIdentifier;
    int  _highlightedProperty;
    <ABPersonViewControllerDelegate> * _personViewDelegate;
    bool  _shouldShowLinkedPeople;
    int  _style;
}

@property (nonatomic) void*addressBook;
@property (nonatomic) bool allowsActions;
@property (nonatomic) bool allowsEditing;
@property (nonatomic, retain) CNContactViewController *cnContactViewController;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) void*displayedPerson;
@property (nonatomic, copy) NSArray *displayedProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightedImportant;
@property (nonatomic) int highlightedMultiValueIdentifier;
@property (nonatomic) int highlightedProperty;
@property (nonatomic) <ABPersonViewControllerDelegate> *personViewDelegate;
@property (nonatomic) bool shouldShowLinkedPeople;
@property (nonatomic) int style;
@property (readonly) Class superclass;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void*)addressBook;
- (bool)allowsActions;
- (bool)allowsEditing;
- (id)cnContactViewController;
- (id)contactStore;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)dealloc;
- (void*)displayedPerson;
- (id)displayedProperties;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (bool)highlightedImportant;
- (int)highlightedMultiValueIdentifier;
- (int)highlightedProperty;
- (id)init;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (id)personViewDelegate;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)reloadContactViewController;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setCnContactViewController:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setHighlightedImportant:(bool)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(bool)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(bool)arg4;
- (void)setHighlightedMultiValueIdentifier:(int)arg1;
- (void)setHighlightedProperty:(int)arg1;
- (void)setPersonViewDelegate:(id)arg1;
- (void)setShouldShowLinkedPeople:(bool)arg1;
- (void)setStyle:(int)arg1;
- (bool)shouldShowLinkedPeople;
- (int)style;
- (void)viewDidAppear:(bool)arg1;

@end

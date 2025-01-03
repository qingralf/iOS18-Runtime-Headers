/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AutoFillUI.framework/AutoFillUI
 */

@interface AFUICreditCardViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    AFCreditCard * _creditCard;
    NSMutableArray * _creditCards;
    RTIDocumentState * _documentState;
    RTIDocumentTraits * _documentTraits;
    bool  _hasSuggestions;
    UIButton * _manageCreditCardsButton;
    <AFUIModalUIDelegate> * _modalUIDelegate;
    UITableView * _myTableView;
    id /* block */  _performTextOperations;
    UILabel * _selectedCellLabel;
    NSArray * _suggestions;
    id /* block */  _textOperationsHandler;
}

@property (nonatomic, retain) AFCreditCard *creditCard;
@property (nonatomic, retain) NSMutableArray *creditCards;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RTIDocumentState *documentState;
@property (nonatomic, retain) RTIDocumentTraits *documentTraits;
@property (nonatomic) bool hasSuggestions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIButton *manageCreditCardsButton;
@property (nonatomic) <AFUIModalUIDelegate> *modalUIDelegate;
@property (nonatomic, retain) UITableView *myTableView;
@property (nonatomic, copy) id /* block */ performTextOperations;
@property (nonatomic, retain) UILabel *selectedCellLabel;
@property (nonatomic, retain) NSArray *suggestions;
@property (readonly) Class superclass;

+ (id)dateStringTextContentType:(id)arg1 date:(id)arg2 placeholderHint:(id)arg3;

- (void).cxx_destruct;
- (void)_openSettings;
- (void)cancelButtonTapped:(id)arg1;
- (id)cardIconNameForCreditCard:(id)arg1;
- (id)createSectionHeaderViewWithTitle:(id)arg1 iconName:(id)arg2;
- (id)creditCard;
- (id)creditCards;
- (id)documentState;
- (id)documentTraits;
- (void)handleTextInsertion:(id)arg1;
- (bool)hasSuggestions;
- (id)initWithDocumentTraits:(id)arg1 documentState:(id)arg2 textOperationsHandler:(id /* block */)arg3 modalUIDelegate:(id)arg4 suggestions:(id)arg5;
- (id)manageCreditCardsButton;
- (void)manageCreditCardsButtonTapped:(id)arg1;
- (id)modalUIDelegate;
- (id)myTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id /* block */)performTextOperations;
- (id)processSuggestions:(id)arg1;
- (id)selectedCellLabel;
- (void)setCreditCard:(id)arg1;
- (void)setCreditCards:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setDocumentTraits:(id)arg1;
- (void)setHasSuggestions:(bool)arg1;
- (void)setManageCreditCardsButton:(id)arg1;
- (void)setModalPresentationStyleForDevice;
- (void)setModalUIDelegate:(id)arg1;
- (void)setMyTableView:(id)arg1;
- (void)setPerformTextOperations:(id /* block */)arg1;
- (void)setSelectedCellLabel:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidLoad;

@end

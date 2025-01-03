/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpTableOfContentViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    UILabel * _copyrightFooterLabel;
    NSLayoutConstraint * _copyrightFooterLabelHeightConstraint;
    NSLayoutConstraint * _copyrightFooterLabelTopConstraint;
    <HLPHelpTableOfContentViewControllerDelegate> * _delegate;
    NSMutableArray * _displayHelpItems;
    UIButton * _footerViewOverlayButton;
    bool  _fullBookView;
    HLPHelpBookController * _helpBookController;
    HLPHelpSearchIndexController * _helpSearchIndexController;
    bool  _initialized;
    HLPHelpLocale * _locale;
    NSMutableArray * _openSections;
    UIVisualEffectView * _searchBlurEffectView;
    UISearchController * _searchController;
    bool  _searchLogged;
    HLPHelpSearchResultTableViewController * _searchResultTableViewController;
    NSArray * _searchTerms;
    bool  _showTopicViewOnLoad;
    UIView * _tableBackgroundView;
    UIView * _tableFooterSeparatorView;
    UIView * _tableFooterView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HLPHelpTableOfContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *displayHelpItems;
@property (nonatomic) bool fullBookView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HLPHelpBookController *helpBookController;
@property (nonatomic, retain) HLPHelpSearchIndexController *helpSearchIndexController;
@property (nonatomic, retain) HLPHelpLocale *locale;
@property (nonatomic, retain) NSMutableArray *openSections;
@property (nonatomic, retain) UIVisualEffectView *searchBlurEffectView;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic) bool searchLogged;
@property (nonatomic, retain) HLPHelpSearchResultTableViewController *searchResultTableViewController;
@property (nonatomic, retain) NSArray *searchTerms;
@property (nonatomic) bool showTopicViewOnLoad;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *tableFooterView;

- (void).cxx_destruct;
- (void)appendChildrenForSectionItem:(id)arg1;
- (void)cancelSpotlightSearchDelay;
- (void)closeSectionItem:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)copyrightButtonTapped;
- (void)dealloc;
- (id)delegate;
- (void)deselectCurrentRow;
- (void)didDismissSearchController:(id)arg1;
- (id)displayHelpItems;
- (bool)fullBookView;
- (id)helpBookController;
- (id)helpSearchIndexController;
- (id)initWithStyle:(long long)arg1;
- (void)loadError;
- (id)locale;
- (void)logAnalyticsContentViewedWithHelpTopicItem:(id)arg1 sourceType:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfVisibleHelpItemForSectionItem:(id)arg1;
- (void)openHelpItem:(id)arg1 animated:(bool)arg2;
- (void)openHelpItem:(id)arg1 reload:(bool)arg2 animated:(bool)arg3;
- (id)openSections;
- (void)registerTraitChanges;
- (void)scrollToHelpItem:(id)arg1 deselectImmediately:(bool)arg2 animated:(bool)arg3;
- (void)scrollToHelpItem:(id)arg1 deselectImmediately:(bool)arg2 reload:(bool)arg3 animated:(bool)arg4;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchBlurEffectView;
- (id)searchController;
- (bool)searchLogged;
- (id)searchResultTableViewController;
- (id)searchTerms;
- (void)setDelegate:(id)arg1;
- (void)setDisplayHelpItems:(id)arg1;
- (void)setFullBookView:(bool)arg1;
- (void)setHelpBookController:(id)arg1;
- (void)setHelpSearchIndexController:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setOpenSections:(id)arg1;
- (void)setSearchBlurEffectView:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchLogged:(bool)arg1;
- (void)setSearchResultTableViewController:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setShowTopicViewOnLoad:(bool)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)showHelpBookInfo;
- (void)showTopicItem:(id)arg1 fromTableView:(id)arg2;
- (bool)showTopicViewOnLoad;
- (void)spotlightSearchDelay;
- (id)tableFooterView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateCellSelectionWithScrollPosition:(long long)arg1 helpItem:(id)arg2 animated:(bool)arg3;
- (void)updateFooterViewBackgroundColor;
- (void)updateFooterViewLayout;
- (void)updateSearchBarBlur;
- (void)updateSearchBarLayout;
- (void)updateSearchResultViewSeparatorValue;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateWithHelpBookController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKitUI.framework/PrintKitUI
 */

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
    NSMutableArray * _availablePrinters;
    NSMutableArray * _filteredOutPrinters;
    NSMutableArray * _iCloudPrinters;
    UIBarButtonItem * _iCloudPrintersButton;
    bool  _loaded;
    PKPrinter * _lockedPrinter;
    double  _maximumPopoverHeight;
    <UIPrinterBrowserOwner> * _ownerPanelViewController;
    UIPrintInfo * _printInfoForBrowser;
    PKPrinterBrowser * _printerBrowser;
    UIPrinterSearchingView * _searchingView;
    bool  _searchingViewConstraintsSet;
    bool  _shouldFilterPrinters;
}

@property (nonatomic, retain) NSMutableArray *availablePrinters;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *filteredOutPrinters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *iCloudPrinters;
@property (nonatomic, retain) UIBarButtonItem *iCloudPrintersButton;
@property (nonatomic) bool loaded;
@property (nonatomic, retain) PKPrinter *lockedPrinter;
@property double maximumPopoverHeight;
@property (nonatomic) <UIPrinterBrowserOwner> *ownerPanelViewController;
@property (nonatomic, retain) UIPrintInfo *printInfoForBrowser;
@property (nonatomic, retain) PKPrinterBrowser *printerBrowser;
@property (nonatomic, retain) UIPrinterSearchingView *searchingView;
@property (nonatomic) bool searchingViewConstraintsSet;
@property (nonatomic) bool shouldFilterPrinters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPrinter:(id)arg1 moreComing:(bool)arg2;
- (void)adjustPopoverSize;
- (id)availablePrinters;
- (void)dealloc;
- (void)didChangePreferredContentSize;
- (id)discoveredPrinterWithUUID:(id)arg1;
- (id)filteredOutPrinters;
- (id)iCloudPrinters;
- (id)iCloudPrintersButton;
- (void)iCloudPrintersListChanged;
- (id)initWithOwnerViewController:(id)arg1 printInfo:(id)arg2;
- (void)loadView;
- (bool)loaded;
- (id)lockedPrinter;
- (double)maximumPopoverHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)ownerPanelViewController;
- (id)printInfoForBrowser;
- (id)printerAtIndexPath:(id)arg1;
- (id)printerBrowser;
- (void)printerInfoButtonTapped:(id)arg1;
- (void)removePrinter:(id)arg1 moreGoing:(bool)arg2;
- (id)searchingView;
- (bool)searchingViewConstraintsSet;
- (void)selectPrinter:(id)arg1;
- (void)setAvailablePrinters:(id)arg1;
- (void)setFilteredOutPrinters:(id)arg1;
- (void)setICloudPrinters:(id)arg1;
- (void)setICloudPrintersButton:(id)arg1;
- (void)setLoaded:(bool)arg1;
- (void)setLockedPrinter:(id)arg1;
- (void)setMaximumPopoverHeight:(double)arg1;
- (void)setOwnerPanelViewController:(id)arg1;
- (void)setPrintInfoForBrowser:(id)arg1;
- (void)setPrinterBrowser:(id)arg1;
- (void)setSearchingView:(id)arg1;
- (void)setSearchingViewConstraintsSet:(bool)arg1;
- (void)setShouldFilterPrinters:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldFilterPrinters;
- (void)showCancelButton;
- (void)startPrinterBrowser;
- (void)stopPrinterBrowser;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateSearching;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)willEnterForeground;

@end

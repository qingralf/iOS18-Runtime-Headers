/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKitUI.framework/PrintKitUI
 */

@interface UIPrintOptionsTableViewController : UITableViewController <UIPopoverPresentationControllerDelegate> {
    UIPrintAppOptionsSection * _appOptionsSection;
    long long  _appOptionsSectionNum;
    UIViewController<UIPrintAppOptionsProtocol> * _appOptionsViewController;
    UIPrinter * _currentPrinter;
    UIPrintFinishingOptionsSection * _finishingOptionsSection;
    UIPrintLayoutSection * _layoutSection;
    UIPrintMediaQualitySection * _mediaQualitySection;
    UIPrintMoreOptionsSection * _moreOptionsSection;
    UIPrintInfo * _printInfo;
    NSArray * _printOptionSections;
    long long  _printOptionsSectionNum;
    UIPrintPanelViewController * _printPanelViewController;
    UIPrinterAttributesService * _printerAttributesService;
    NSString * _printerWarnings;
    UIPrintScalingSection * _scalingSection;
    bool  _showingGatheringPrinterInfo;
    UIPrintStandardOptionsSection * _standardOptionsSection;
}

@property (nonatomic, retain) UIPrintAppOptionsSection *appOptionsSection;
@property (nonatomic) long long appOptionsSectionNum;
@property (nonatomic, retain) UIViewController<UIPrintAppOptionsProtocol> *appOptionsViewController;
@property (nonatomic, retain) UIPrinter *currentPrinter;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPrintFinishingOptionsSection *finishingOptionsSection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPrintLayoutSection *layoutSection;
@property (nonatomic, retain) UIPrintMediaQualitySection *mediaQualitySection;
@property (nonatomic, retain) UIPrintMoreOptionsSection *moreOptionsSection;
@property (nonatomic, retain) UIPrintInfo *printInfo;
@property (nonatomic, retain) NSArray *printOptionSections;
@property (nonatomic) long long printOptionsSectionNum;
@property (nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (nonatomic, retain) UIPrinterAttributesService *printerAttributesService;
@property (nonatomic, retain) NSString *printerWarnings;
@property (nonatomic, retain) UIPrintScalingSection *scalingSection;
@property (nonatomic) bool showingGatheringPrinterInfo;
@property (nonatomic, retain) UIPrintStandardOptionsSection *standardOptionsSection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appOptionsSection;
- (long long)appOptionsSectionNum;
- (id)appOptionsViewController;
- (bool)canDismissPrintOptions;
- (id)currentPrinter;
- (void)dealloc;
- (void)dismissKeyboard;
- (id)finishingOptionsSection;
- (void)hideGatheringPrinterInfo;
- (id)initWithTableView:(id)arg1 printInfo:(id)arg2 printPanelViewController:(id)arg3;
- (bool)keyboardShowing;
- (id)layoutSection;
- (id)mediaQualitySection;
- (id)moreOptionsSection;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printInfo;
- (id)printOptionAtIndexPath:(id)arg1;
- (id)printOptionSections;
- (long long)printOptionsSectionNum;
- (id)printPanelViewController;
- (id)printerAttributesService;
- (id)printerWarnings;
- (id)scalingSection;
- (void)setAppOptionsSection:(id)arg1;
- (void)setAppOptionsSectionNum:(long long)arg1;
- (void)setAppOptionsViewController:(id)arg1;
- (void)setCurrentPrinter:(id)arg1;
- (void)setFinishingOptionsSection:(id)arg1;
- (void)setLayoutSection:(id)arg1;
- (void)setMediaQualitySection:(id)arg1;
- (void)setMoreOptionsSection:(id)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setPrintOptionSections:(id)arg1;
- (void)setPrintOptionsSectionNum:(long long)arg1;
- (void)setPrintPanelViewController:(id)arg1;
- (void)setPrinterAttributesService:(id)arg1;
- (void)setPrinterWarnings:(id)arg1;
- (void)setScalingSection:(id)arg1;
- (void)setShowContactingPrinter:(bool)arg1;
- (void)setShowingGatheringPrinterInfo:(bool)arg1;
- (void)setStandardOptionsSection:(id)arg1;
- (void)showGatheringPrinterInfo;
- (bool)showingGatheringPrinterInfo;
- (id)standardOptionsSection;
- (void)startPrinterWarningPoll;
- (void)stopPrinterWarningPolling;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)updatePrintSectionList;
- (void)updateWarnings:(id)arg1 forPrinter:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end

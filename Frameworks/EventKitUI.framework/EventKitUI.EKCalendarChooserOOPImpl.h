/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EventKitUI.EKCalendarChooserOOPImpl : UIViewController {
    void _selectedCalendars;
    void allowsPullToRefresh;
    void chooserMode;
    void delegate;
    void disableCalendarsUnselectedByFocus;
    void displayStyle;
    void entityType;
    void eventStore;
    void explanatoryTextMode;
    void hostView;
    void hostViewModel;
    void hostingController;
    void limitedToSource;
    void onlyShowUnmanagedAccounts;
    void selectionStyle;
    void showAccountStatus;
    void showDelegateSetupCell;
    void showDetailAccessories;
    void showIdentityChooser;
    void showsDeclinedEventsSetting;
}

@property (nonatomic) bool allowsPullToRefresh;
@property (nonatomic) long long chooserMode;
@property (nonatomic, retain) <EKCalendarChooserDelegate> *delegate;
@property (nonatomic) bool disableCalendarsUnselectedByFocus;
@property (nonatomic) long long displayStyle;
@property (nonatomic) unsigned long long entityType;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic) int explanatoryTextMode;
@property (nonatomic, retain) EKSource *limitedToSource;
@property (nonatomic) bool onlyShowUnmanagedAccounts;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, retain) EKCalendar *selectedCalendar;
@property (nonatomic, copy) NSSet *selectedCalendars;
@property (nonatomic) long long selectionStyle;
@property (nonatomic) bool showAccountStatus;
@property (nonatomic) bool showDelegateSetupCell;
@property (nonatomic) bool showDetailAccessories;
@property (nonatomic) bool showIdentityChooser;
@property (nonatomic) bool showsDeclinedEventsSetting;

- (void).cxx_destruct;
- (bool)allowsPullToRefresh;
- (long long)chooserMode;
- (id)delegate;
- (bool)disableCalendarsUnselectedByFocus;
- (long long)displayStyle;
- (unsigned long long)entityType;
- (id)eventStore;
- (int)explanatoryTextMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventStore:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)limitedToSource;
- (bool)onlyShowUnmanagedAccounts;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)selectedCalendar;
- (id)selectedCalendars;
- (long long)selectionStyle;
- (void)setAllowsPullToRefresh:(bool)arg1;
- (void)setChooserMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableCalendarsUnselectedByFocus:(bool)arg1;
- (void)setDisplayStyle:(long long)arg1;
- (void)setEntityType:(unsigned long long)arg1;
- (void)setExplanatoryTextMode:(int)arg1;
- (void)setLimitedToSource:(id)arg1;
- (void)setOnlyShowUnmanagedAccounts:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelectedCalendar:(id)arg1;
- (void)setSelectedCalendars:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setShowAccountStatus:(bool)arg1;
- (void)setShowDelegateSetupCell:(bool)arg1;
- (void)setShowDetailAccessories:(bool)arg1;
- (void)setShowIdentityChooser:(bool)arg1;
- (void)setShowsDeclinedEventsSetting:(bool)arg1;
- (bool)showAccountStatus;
- (bool)showDelegateSetupCell;
- (bool)showDetailAccessories;
- (bool)showIdentityChooser;
- (bool)showsDeclinedEventsSetting;
- (void)toggleAllCalendars;
- (void)viewDidLoad;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventViewController : UIViewController <EKUIManagedViewController> {
    UIViewController<EKEventViewControllerImpl> * _impl;
}

@property (getter=isICSPreview, nonatomic) bool ICSPreview;
@property (nonatomic) bool allowsCalendarPreview;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsInviteResponses;
@property (nonatomic) bool allowsSubitems;
@property (nonatomic) bool calendarPreviewIsInlineDayView;
@property (readonly) NSDictionary *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <EKEventViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int editorHideTransition;
@property (nonatomic) int editorShowTransition;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, readonly) UIScrollView *eventDetailsScrollView;
@property (nonatomic, readonly) UIViewController *eventDetailsViewController;
@property (nonatomic) bool eventEditViewPresented;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic) bool isLargeDayView;
@property (nonatomic) bool minimalMode;
@property (nonatomic) <EKUIViewControllerNavigationDelegate> *navigationDelegate;
@property (nonatomic) bool noninteractivePlatterMode;
@property (nonatomic) bool showsAddToCalendarForICSPreview;
@property (nonatomic) bool showsDelegateMessage;
@property (nonatomic) bool showsDelegatorMessage;
@property (nonatomic) bool showsDeleteForICSPreview;
@property (nonatomic) bool showsDetectedConferenceItem;
@property (nonatomic) bool showsDoneButton;
@property (nonatomic) bool showsOutOfDateMessage;
@property (nonatomic) bool showsUpdateCalendarForICSPreview;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performEditKeyCommand;
- (bool)allowsCalendarPreview;
- (bool)allowsEditing;
- (bool)allowsInviteResponses;
- (bool)allowsSubitems;
- (bool)calendarPreviewIsInlineDayView;
- (bool)canManagePresentationStyle;
- (void)commonInit;
- (id)context;
- (id)delegate;
- (void)doneButtonTapped;
- (void)editButtonTapped;
- (int)editorHideTransition;
- (int)editorShowTransition;
- (id)event;
- (id)eventDetailsScrollView;
- (id)eventDetailsViewController;
- (bool)eventEditViewPresented;
- (void)fullReloadWithNewEvent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRemoteUI:(bool)arg1;
- (bool)inlineDayViewRespectsSelectedCalendarsFilter;
- (bool)isICSPreview;
- (bool)isLargeDayView;
- (void)loadView;
- (bool)minimalMode;
- (id)navigationDelegate;
- (bool)noninteractivePlatterMode;
- (void)openAttendeesDetailItem;
- (void)performAddToCalendar;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setAllowsCalendarPreview:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsInviteResponses:(bool)arg1;
- (void)setAllowsSubitems:(bool)arg1;
- (void)setCalendarPreviewIsInlineDayView:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditorHideTransition:(int)arg1;
- (void)setEditorShowTransition:(int)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventEditViewPresented:(bool)arg1;
- (void)setICSPreview:(bool)arg1;
- (void)setInlineDayViewRespectsSelectedCalendarsFilter:(bool)arg1;
- (void)setIsLargeDayView:(bool)arg1;
- (void)setMinimalMode:(bool)arg1;
- (void)setNavigationDelegate:(id)arg1;
- (void)setNeedsReload;
- (void)setNoninteractivePlatterMode:(bool)arg1;
- (void)setShouldOverrideAuthorizationStatus:(bool)arg1 withRemoteUIStatus:(long long)arg2;
- (void)setShowsAddToCalendarForICSPreview:(bool)arg1;
- (void)setShowsDelegateMessage:(bool)arg1;
- (void)setShowsDelegatorMessage:(bool)arg1;
- (void)setShowsDeleteForICSPreview:(bool)arg1;
- (void)setShowsDetectedConferenceItem:(bool)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setShowsOutOfDateMessage:(bool)arg1;
- (void)setShowsUpdateCalendarForICSPreview:(bool)arg1;
- (bool)showsAddToCalendarForICSPreview;
- (bool)showsDelegateMessage;
- (bool)showsDelegatorMessage;
- (bool)showsDeleteForICSPreview;
- (bool)showsDetectedConferenceItem;
- (bool)showsDoneButton;
- (bool)showsOutOfDateMessage;
- (bool)showsUpdateCalendarForICSPreview;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (bool)wantsManagement;

@end

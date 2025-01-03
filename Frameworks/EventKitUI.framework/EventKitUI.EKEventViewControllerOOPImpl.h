/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EventKitUI.EKEventViewControllerOOPImpl : UIViewController {
    void ICSPreview;
    void allowsCalendarPreview;
    void allowsEditing;
    void allowsInviteResponses;
    void allowsSubitems;
    void calendarPreviewIsInlineDayView;
    void delegate;
    void event;
    void hasInProcessNavBar;
    void hostView;
    void hostViewModel;
    void hostingController;
    void inlineDayViewRespectsSelectedCalendarsFilter;
    void isLargeDayView;
    void minimalMode;
    void noninteractivePlatterMode;
    void showsAddToCalendarForICSPreview;
    void showsDelegateMessage;
    void showsDelegatorMessage;
    void showsDeleteForICSPreview;
    void showsDetectedConferenceItem;
    void showsDoneButton;
    void showsOutOfDateMessage;
    void showsUpdateCalendarForICSPreview;
}

@property (nonatomic) bool ICSPreview;
@property (nonatomic) bool allowsCalendarPreview;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsInviteResponses;
@property (nonatomic) bool allowsSubitems;
@property (nonatomic) bool calendarPreviewIsInlineDayView;
@property (nonatomic, retain) <EKEventViewDelegate> *delegate;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic) bool hasInProcessNavBar;
@property (nonatomic) bool inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic) bool isLargeDayView;
@property (nonatomic) bool minimalMode;
@property (nonatomic) bool noninteractivePlatterMode;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic) bool showsAddToCalendarForICSPreview;
@property (nonatomic) bool showsDelegateMessage;
@property (nonatomic) bool showsDelegatorMessage;
@property (nonatomic) bool showsDeleteForICSPreview;
@property (nonatomic) bool showsDetectedConferenceItem;
@property (nonatomic) bool showsDoneButton;
@property (nonatomic) bool showsOutOfDateMessage;
@property (nonatomic) bool showsUpdateCalendarForICSPreview;

- (void).cxx_destruct;
- (bool)ICSPreview;
- (bool)allowsCalendarPreview;
- (bool)allowsEditing;
- (bool)allowsInviteResponses;
- (bool)allowsSubitems;
- (bool)calendarPreviewIsInlineDayView;
- (id)delegate;
- (void)doneButtonTapped;
- (id)event;
- (void)eventEditViewCompletedWith:(long long)arg1 eventID:(id)arg2 waitUntil:(id)arg3;
- (void)eventEditViewPresented:(bool)arg1;
- (bool)hasInProcessNavBar;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)inlineDayViewRespectsSelectedCalendarsFilter;
- (bool)isLargeDayView;
- (bool)minimalMode;
- (bool)noninteractivePlatterMode;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setAllowsCalendarPreview:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsInviteResponses:(bool)arg1;
- (void)setAllowsSubitems:(bool)arg1;
- (void)setCalendarPreviewIsInlineDayView:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setHasInProcessNavBar:(bool)arg1;
- (void)setICSPreview:(bool)arg1;
- (void)setInlineDayViewRespectsSelectedCalendarsFilter:(bool)arg1;
- (void)setIsLargeDayView:(bool)arg1;
- (void)setMinimalMode:(bool)arg1;
- (void)setNoninteractivePlatterMode:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
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
- (void)viewDidLoad;

@end

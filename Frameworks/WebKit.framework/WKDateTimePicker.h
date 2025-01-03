/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDateTimePicker : NSObject <UICalendarSelectionWeekOfYearDelegate, WKDatePickerPopoverControllerDelegate, WKFormControl> {
    struct RetainPtr<UICalendarView> { 
        void *m_ptr; 
    }  _calendarView;
    struct RetainPtr<UIDatePicker> { 
        void *m_ptr; 
    }  _datePicker;
    struct RetainPtr<WKDatePickerPopoverController> { 
        void *m_ptr; 
    }  _datePickerController;
    NSString * _formatString;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _initialValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionPoint;
    bool  _isDismissingDatePicker;
    struct RetainPtr<UICalendarSelectionWeekOfYear> { 
        void *m_ptr; 
    }  _selectionWeekOfYear;
    WKContentView * _view;
}

@property (nonatomic, readonly) NSString *calendarType;
@property (nonatomic, readonly) WKDatePickerPopoverController *datePickerController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double hour;
@property (nonatomic, readonly) double minute;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dateChanged;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (id)calendarType;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)controlUpdateEditing;
- (id)controlView;
- (struct RetainPtr<NSDateFormatter> { void *x1; })dateFormatterForPicker;
- (id)datePickerController;
- (void)datePickerPopoverControllerDidDismiss:(id)arg1;
- (void)datePickerPopoverControllerDidReset:(id)arg1;
- (void)dealloc;
- (void)handleDatePickerPresentationDismissal;
- (double)hour;
- (id)initWithView:(id)arg1 inputType:(unsigned char)arg2;
- (struct RetainPtr<NSISO8601DateFormatter> { void *x1; })iso8601DateFormatterForCalendarView;
- (double)minute;
- (void)removeDatePickerPresentation;
- (void)setDateTimePickerToInitialValue;
- (void)setHour:(long long)arg1 minute:(long long)arg2;
- (void)setWeekPickerToInitialValue;
- (bool)shouldForceGregorianCalendar;
- (void)showDateTimePicker;
- (void)weekOfYearSelection:(id)arg1 didSelectWeekOfYear:(id)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIYearMonthView : UIView <UIPointerInteractionDelegate> {
    NSCalendar * _calendar;
    EKCalendarDate * _calendarDate;
    double  _circleSizeForDoubleDigit;
    bool  _computeCircleFrameWithoutAdjustments;
    long long  _daysInWeek;
    EKCalendarDate * _endCalendarDate;
    long long  _firstDayIndex;
    NSSet * _firstOfOverlayMonthIndices;
    NSSet * _firstOfOverlayYearIndices;
    UIView * _hidingView;
    NSString * _monthString;
    EKUIOverlayCalendarSignificantDatesProvider * _overlaySignificantDatesProvider;
    UIView * _previewContainerView;
    long long  _todayIndex;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, retain) EKCalendarDate *calendarDate;
@property (nonatomic, readonly) double circleFrameXAdjustment;
@property (nonatomic, readonly) double circleFrameYAdjustment;
@property (nonatomic, readonly) double circleSize;
@property (nonatomic, readonly) double circleSizeForDoubleDigit;
@property (nonatomic, readonly) bool computeCircleFrameWithoutAdjustments;
@property (nonatomic, readonly) UIColor *dayColor;
@property (nonatomic, readonly) NSString *dayColorKey;
@property (nonatomic, readonly) UIFont *dayNumberFont;
@property (nonatomic, readonly) double dayNumberKerning;
@property (nonatomic, readonly) double dayTextSize;
@property (nonatomic, readonly) long long daysInWeek;
@property (nonatomic, readonly) double daysXAdjustLeft;
@property (nonatomic, readonly) double daysYAdjustTop;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIFont *headerFont;
@property (nonatomic, readonly) double headerFontKerning;
@property (nonatomic, readonly) double headerFontMaxSize;
@property (nonatomic, readonly) double headerFontMinSize;
@property (nonatomic, readonly) double headerXAdjust;
@property (nonatomic, retain) EKUIOverlayCalendarSignificantDatesProvider *overlaySignificantDatesProvider;
@property (nonatomic, readonly) double roundedRectCornerRadius;
@property (nonatomic, readonly) bool showMonthName;
@property (nonatomic, readonly) bool showWeekDayInitials;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIFont *todayNumberFont;
@property (nonatomic, readonly) double todayNumberKerning;
@property (nonatomic, readonly) double todayTextSize;
@property (nonatomic, readonly) double todayTextYAdjustment;
@property (nonatomic, readonly) bool vibrant;
@property (nonatomic, readonly) double weekDayInitialsAdjustLeft;
@property (nonatomic, readonly) double weekDayInitialsAdjustTop;
@property (nonatomic, readonly) UIFont *weekDayInitialsFont;
@property (nonatomic, readonly) double xInset;
@property (nonatomic, readonly) double xSpacing;
@property (nonatomic, readonly) double yInset;
@property (nonatomic, readonly) double ySpacing;

+ (id)_defaultTextColor;
+ (double)heightForInterfaceOrientation:(long long)arg1 windowSize:(struct CGSize { double x1; double x2; })arg2 heightSizeClass:(long long)arg3;

- (void).cxx_destruct;
- (void)_adjustHidingViewToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_containerForPreview;
- (long long)_dayIndexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_drawDayNumber:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 underlineThickness:(double)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4;
- (void)_drawMonthDays:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 underlineThickness:(double)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4;
- (void)_drawMonthName:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_drawWeekDayInitialsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_getMetricsForDayIndex:(long long)arg1 textFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 circleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)_getTodayNumberTextFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 circleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)_imageForDayNumber:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 underlineThickness:(double)arg3;
- (id)_imageForDayNumber:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 underlineThickness:(double)arg3 forPreview:(bool)arg4;
- (id)_imageForMonthDays:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 underlineThickness:(double)arg3;
- (id)_imageForMonthName:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_monthNameFrame;
- (struct CGPoint { double x1; double x2; })_monthNameOriginPoint;
- (bool)_pointIntersectsMonthName:(struct CGPoint { double x1; double x2; })arg1;
- (void)_reloadCachedValues;
- (void)_setUpInteraction;
- (bool)_shouldUseRoundedRectInsteadOfCircle;
- (id)_todayAttributes;
- (void)_updateFirstOfMonthAndYearIndices;
- (void)_updateToday;
- (void)_warmImageCache;
- (id)_weekDayInitialsImage;
- (id)calendar;
- (id)calendarDate;
- (id)calendarDateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)circleFrameXAdjustment;
- (double)circleFrameYAdjustment;
- (double)circleSize;
- (double)circleSizeForDoubleDigit;
- (bool)computeCircleFrameWithoutAdjustments;
- (bool)containsCalendarDate:(id)arg1;
- (id)dayColor;
- (id)dayColorKey;
- (id)dayNumberFont;
- (double)dayNumberKerning;
- (double)dayTextSize;
- (long long)daysInWeek;
- (double)daysXAdjustLeft;
- (double)daysYAdjustTop;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForGridOfDays:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTodayHighlight;
- (id)headerFont;
- (double)headerFontKerning;
- (double)headerFontMaxSize;
- (double)headerFontMinSize;
- (struct CGPoint { double x1; double x2; })headerOrigin;
- (double)headerXAdjust;
- (id)initWithCalendarDate:(id)arg1 calendar:(id)arg2;
- (bool)isCurrentMonth;
- (void)localeChanged;
- (double)minHeaderFontSizeUsed;
- (id)monthNameForDate:(id)arg1;
- (id)monthString;
- (void)overlaySignificantDatesChangedInRange:(id)arg1;
- (id)overlaySignificantDatesProvider;
- (bool)pointIsAboveMonthNameBaseline:(struct CGPoint { double x1; double x2; })arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)pulseTodayCircle;
- (double)roundedRectCornerRadius;
- (struct CGSize { double x1; double x2; })roundedRectSizeForDayNumberString:(id)arg1;
- (void)setCalendarDate:(id)arg1;
- (void)setOverlaySignificantDatesProvider:(id)arg1;
- (bool)shouldAddPreciseInteractivity;
- (bool)showMonthName;
- (bool)showWeekDayInitials;
- (void)tintColorDidChange;
- (id)todayNumberFont;
- (double)todayNumberKerning;
- (double)todayTextSize;
- (double)todayTextYAdjustment;
- (void)updateToday;
- (bool)vibrant;
- (double)weekDayInitialsAdjustLeft;
- (double)weekDayInitialsAdjustTop;
- (id)weekDayInitialsFont;
- (double)xInset;
- (double)xSpacing;
- (double)yInset;
- (double)ySpacing;

@end
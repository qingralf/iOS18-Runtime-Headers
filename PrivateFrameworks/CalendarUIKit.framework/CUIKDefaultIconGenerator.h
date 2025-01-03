/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator> {
    long long  _appearance;
    NSCalendar * _calendar;
    double  _canvasScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    NSDateComponents * _dateComponents;
    long long  _iconFormat;
}

@property (nonatomic, readonly) long long appearance;
@property (nonatomic, readonly, copy) NSCalendar *calendar;
@property (nonatomic, readonly) double canvasScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, readonly, copy) NSDateComponents *dateComponents;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long iconFormat;
@property (readonly) Class superclass;

+ (id)_countriesRequiringNonRedDayOfWeek;
+ (id)_dateNameFromDateComponents:(id)arg1 calendar:(id)arg2 type:(long long)arg3 forceAbbreviated:(bool)arg4;
+ (id)_dayNumberStringFromDateComponents:(id)arg1 calendar:(id)arg2;
+ (bool)_isNonRedDayOfWeekRequiredForLocale:(id)arg1;

- (void).cxx_destruct;
- (id)_colorForDayNumberWithAppearance:(long long)arg1;
- (id)_colorForDayOfWeekWithAppearance:(long long)arg1;
- (id)_dateNameFont;
- (id)_dayNumberFont;
- (void)_drawBackground;
- (void)_drawDateName;
- (void)_drawDayNumber;
- (id)_iconBlackColor;
- (double)_roundSpecToActual:(double)arg1;
- (long long)appearance;
- (id)calendar;
- (double)canvasScale;
- (struct CGSize { double x1; double x2; })canvasSize;
- (id)dateComponents;
- (long long)iconFormat;
- (struct CGImage { }*)iconImageWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 size:(struct CGSize { double x1; double x2; })arg4 scale:(double)arg5 appearance:(long long)arg6;
- (id)initWithForceNoTextEffects:(bool)arg1;

@end

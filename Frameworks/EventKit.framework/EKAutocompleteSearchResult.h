/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAutocompleteSearchResult : NSObject {
    NSURL * _URL;
    NSArray * _alarms;
    bool  _allDay;
    bool  _approximateTime;
    NSArray * _attendees;
    long long  _availability;
    EKCalendar * _calendar;
    struct CGColor { } * _calendarColor;
    EKStructuredLocation * _clientLocation;
    NSString * _displayLocation;
    NSString * _displayLocationWithoutPrediction;
    NSDate * _endDate;
    NSString * _foundInBundleID;
    NSData * _localStructuredData;
    NSString * _notes;
    NSArray * _pasteboardResults;
    long long  _privacyLevel;
    unsigned long long  _source;
    NSDate * _startDate;
    EKStructuredLocation * _structuredLocation;
    EKSuggestedEventInfo * _suggestionInfo;
    NSTimeZone * _timeZone;
    NSString * _title;
    EKStructuredLocation * _travelStartLocation;
    double  _travelTime;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSArray *alarms;
@property (nonatomic) bool allDay;
@property (nonatomic) bool approximateTime;
@property (nonatomic, retain) NSArray *attendees;
@property (nonatomic) long long availability;
@property (nonatomic, retain) EKCalendar *calendar;
@property (nonatomic) struct CGColor { }*calendarColor;
@property (nonatomic, retain) EKStructuredLocation *clientLocation;
@property (nonatomic, readonly) NSString *descriptionForDebugging;
@property (nonatomic, retain) NSString *displayLocation;
@property (nonatomic, retain) NSString *displayLocationWithoutPrediction;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSString *foundInBundleID;
@property (nonatomic, readonly) bool isReminder;
@property (nonatomic, retain) NSData *localStructuredData;
@property (nonatomic, retain) NSString *notes;
@property (nonatomic, retain) NSArray *pasteboardResults;
@property (readonly) EKStructuredLocation *preferredLocation;
@property (nonatomic) long long privacyLevel;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) EKStructuredLocation *structuredLocation;
@property (nonatomic, retain) EKSuggestedEventInfo *suggestionInfo;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) EKStructuredLocation *travelStartLocation;
@property (nonatomic) double travelTime;

+ (id)_copyAlarmsForAutocompleteFromResult:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_attendeesForSuggestedEventFromAttendees:(id)arg1;
- (id)alarms;
- (bool)allDay;
- (bool)approximateTime;
- (id)attendees;
- (long long)availability;
- (id)calendar;
- (struct CGColor { }*)calendarColor;
- (id)clientLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)descriptionForDebugging;
- (id)displayLocation;
- (id)displayLocationWithoutPrediction;
- (id)endDate;
- (id)eventRepresentingSelf;
- (id)foundInBundleID;
- (unsigned long long)hash;
- (id)initWithSource:(unsigned long long)arg1;
- (bool)isDifferentEnoughFromInitialEvent:(id)arg1 consideringTimeProperties:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isReminder;
- (id)localStructuredData;
- (id)notes;
- (id)pasteboardResults;
- (id)preferredLocation;
- (long long)privacyLevel;
- (void)setAlarms:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setApproximateTime:(bool)arg1;
- (void)setAttendees:(id)arg1;
- (void)setAvailability:(long long)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCalendarColor:(struct CGColor { }*)arg1;
- (void)setClientLocation:(id)arg1;
- (void)setDisplayLocation:(id)arg1;
- (void)setDisplayLocationWithoutPrediction:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFoundInBundleID:(id)arg1;
- (void)setLocalStructuredData:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setPasteboardResults:(id)arg1;
- (void)setPrivacyLevel:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setSuggestionInfo:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelStartLocation:(id)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setURL:(id)arg1;
- (unsigned long long)source;
- (id)startDate;
- (id)structuredLocation;
- (id)suggestionInfo;
- (id)timeZone;
- (id)title;
- (id)travelStartLocation;
- (double)travelTime;
- (void)updateEventFromSelf:(id)arg1 updateTimeProperties:(bool)arg2 updateTravelTimeProperties:(bool)arg3 updateMode:(unsigned long long)arg4 overrideCalendar:(id)arg5;
- (void)updateSelfFromEvent:(id)arg1;

@end
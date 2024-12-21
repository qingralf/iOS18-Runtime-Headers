/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULHomeSlamAnalyticEventAnalyzer : NSObject {
    struct ULDatabase { int (**x1)(); id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; unsigned int x18; id x19; } * _db;
    struct vector<CLMiLoHomeSlamAnalyticEventTable::Entry, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { 
        struct Entry {} *__begin_; 
        struct Entry {} *__end_; 
        struct __compressed_pair<CLMiLoHomeSlamAnalyticEventTable::Entry *, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { 
            struct Entry {} *__value_; 
        } __end_cap_; 
    }  _events;
}

@property (nonatomic) struct ULDatabase { int (**x1)(); id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; unsigned int x18; id x19; }*db;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<CLMiLoHomeSlamAnalyticEventTable::Entry' */ struct  events; /* unknown property attribute:  std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>>=^{Entry}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_aggregateTimeBetweenEvent:(short)arg1 andEvent:(short)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)_analyzeTriggersAndGetCA:(id)arg1 fromDate:(id)arg2 untilDate:(id)arg3;
- (long long)_calcMiLoEnabledTimeFromDate:(id)arg1 untilDate:(id)arg2;
- (long long)_calcTimeAtHomeFromDate:(id)arg1 untilDate:(id)arg2;
- (bool)_checkIfScreenTransitionedToOnBefore:(id)arg1 after:(id)arg2;
- (bool)_daemonWasRestarted;
- (long long)_hoursFromFirstEventToDate:(id)arg1;
- (id)_timepointToDate:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_1_1; } x1; })arg1;
- (bool)_wasLastScreenStateOnBefore:(id)arg1;
- (struct ULDatabase { int (**x1)(); id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; unsigned int x18; id x19; }*)db;
- (struct vector<CLMiLoHomeSlamAnalyticEventTable::Entry, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMiLoHomeSlamAnalyticEventTable::Entry *, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })events;
- (id)initWithDB:(struct ULDatabase { int (**x1)(); id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; unsigned int x18; id x19; }*)arg1;
- (id)runStopDetectionAnalysisAtTimepoint:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_1_1; } x1; })arg1;
- (void)setDb:(struct ULDatabase { int (**x1)(); id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; unsigned int x18; id x19; }*)arg1;
- (void)setEvents:(struct vector<CLMiLoHomeSlamAnalyticEventTable::Entry, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMiLoHomeSlamAnalyticEventTable::Entry *, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })arg1;

@end
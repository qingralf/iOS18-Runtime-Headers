/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMPublisherOptions : NSObject {
    NSDate * _endDate;
    BMIndexSearch * _indexSearch;
    unsigned long long  _lastN;
    unsigned long long  _maxEvents;
    bool  _reversed;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) BMIndexSearch *indexSearch;
@property (nonatomic) unsigned long long lastN;
@property (nonatomic) unsigned long long maxEvents;
@property (nonatomic) bool reversed;
@property (nonatomic, retain) NSDate *startDate;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

+ (id)reversed;

- (void).cxx_destruct;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (id)indexSearch;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 indexSearch:(id)arg3 maxEvents:(unsigned long long)arg4 lastN:(unsigned long long)arg5 reversed:(bool)arg6;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 maxEvents:(unsigned long long)arg3 lastN:(unsigned long long)arg4 reversed:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lastN;
- (unsigned long long)maxEvents;
- (bool)reversed;
- (void)setEndDate:(id)arg1;
- (void)setIndexSearch:(id)arg1;
- (void)setLastN:(unsigned long long)arg1;
- (void)setMaxEvents:(unsigned long long)arg1;
- (void)setReversed:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon

+ (id)hdsp_optionsForDateInterval:(id)arg1;
+ (id)hdsp_optionsForDateInterval:(id)arg1 reversed:(bool)arg2;

@end
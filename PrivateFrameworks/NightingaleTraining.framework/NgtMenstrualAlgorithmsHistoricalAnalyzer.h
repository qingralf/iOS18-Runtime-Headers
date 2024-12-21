/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NightingaleTraining.framework/NightingaleTraining
 */

@interface NgtMenstrualAlgorithmsHistoricalAnalyzer : NSObject <NgtMenstrualAlgorithmsPhaseIngestion> {
    NSMutableArray * _dayInputBuffer;
    struct unique_ptr<Nightingale::ngt_HistoricalAnalyzer, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> { 
        struct __compressed_pair<Nightingale::ngt_HistoricalAnalyzer *, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> { 
            struct ngt_HistoricalAnalyzer {} *__value_; 
        } __ptr_; 
    }  _historicalAnalyzer;
    struct optional<unsigned int> { 
        union { 
            BOOL __null_state_; 
            unsigned int __val_; 
        } ; 
        bool __engaged_; 
    }  _julianDayOfLastInput;
    bool  _shouldSendCoreAnalytics;
    NSMutableArray * _watchIdentifiers;
}

@property (nonatomic, retain) NSMutableArray *dayInputBuffer;
@property (nonatomic, readonly) bool shouldSendCoreAnalytics;
@property (nonatomic, retain) NSMutableArray *watchIdentifiers;

+ (unsigned int)algorithmVersion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)analyzeWithError:(id*)arg1;
- (void)appendDay:(id)arg1;
- (void)beginPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (id)dayInputBuffer;
- (void)endPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (id)initWithMlConfig:(id)arg1;
- (void)runDays;
- (void)setDayInputBuffer:(id)arg1;
- (void)setWatchIdentifiers:(id)arg1;
- (bool)shouldSendCoreAnalytics;
- (id)watchIdentifiers;
- (unsigned char)watchNumericIdentifierFromString:(id)arg1;

@end
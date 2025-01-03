/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WiFiUsageLQMWindowAnalysis : NSObject {
    NSObject<OS_dispatch_queue> * _analysisQueue;
    NSObject<OS_dispatch_source> * _analysisTimer;
    id /* block */  _completionHandler;
    unsigned long long  _diceRoll;
    NSString * _fgApp;
    NSString * _firstSubsequentLinkDownReason;
    bool  _hasKernel;
    bool  _inA2dp;
    bool  _inCall;
    bool  _inEsco;
    bool  _isDone;
    NSMutableDictionary * _lqmWindowsFeatures;
    NSString * _metricNameCDF;
    NSString * _metricNameSankey;
    NSArray * _preceedingTriggers;
    NSString * _reason;
    NSMutableArray * _subsequentTriggers;
    NSDictionary * _summary;
    NSDate * _timestamp;
    WiFiUsageLQMRollingWindow * _windowAfterTrigger;
    WiFiUsageLQMRollingWindow * _windowBeforeTrigger;
    NSMutableDictionary * dimensions;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *analysisQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *analysisTimer;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) unsigned long long diceRoll;
@property (nonatomic, retain) NSString *fgApp;
@property (nonatomic) NSString *firstSubsequentLinkDownReason;
@property (nonatomic) bool hasKernel;
@property (nonatomic) bool inA2dp;
@property (nonatomic) bool inCall;
@property (nonatomic) bool inEsco;
@property (nonatomic) bool isDone;
@property (nonatomic, retain) NSMutableDictionary *lqmWindowsFeatures;
@property (nonatomic, retain) NSString *metricNameCDF;
@property (nonatomic, retain) NSString *metricNameSankey;
@property (nonatomic, retain) NSArray *preceedingTriggers;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, retain) NSMutableArray *subsequentTriggers;
@property (nonatomic, retain) NSDictionary *summary;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, retain) WiFiUsageLQMRollingWindow *windowAfterTrigger;
@property (nonatomic, retain) WiFiUsageLQMRollingWindow *windowBeforeTrigger;

+ (unsigned long long)canCreateAnalysisFor:(id)arg1;
+ (void)computeFeatures:(id)arg1 For:(id)arg2 WithLogLabel:(id)arg3;
+ (id)config;
+ (void)initialize;
+ (bool)isInCallAnalysisDue:(id)arg1;
+ (bool)isKernerlParsingEnabled;
+ (unsigned long long)maxConcurrentAnalysis;
+ (void)updateConfig;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)arg1;
- (id)analysisQueue;
- (id)analysisTimer;
- (bool)canSubmitToCA;
- (id /* block */)completionHandler;
- (void)computeBins:(id)arg1 WithSampleKind:(Class)arg2;
- (void)computeFeaturesFor:(id)arg1 WithLogLabel:(id)arg2;
- (void)dealloc;
- (id)description;
- (unsigned long long)diceRoll;
- (id)dumpAnalysis:(id)arg1;
- (id)dumpDimensions:(id)arg1;
- (id)fetchKernelLQMRollingWindowForInterface:(id)arg1 into:(id)arg2;
- (id)fgApp;
- (id)firstSubsequentLinkDownReason;
- (bool)getBeforeKernelWindowWithLikelyhood;
- (bool)hasKernel;
- (bool)inA2dp;
- (bool)inCall;
- (bool)inEsco;
- (id)initWithRollingWindow:(id)arg1 andReason:(id)arg2 andContext:(struct context { bool x1; bool x2; bool x3; })arg3 andTimestamp:(id)arg4 onQueue:(id)arg5;
- (bool)isAnalysisTodo;
- (bool)isDone;
- (id)lqmWindowsFeatures;
- (id)metricCallbackForMetric:(id)arg1 AndField:(id)arg2;
- (id)metricNameCDF;
- (id)metricNameSankey;
- (void)performAnalysis;
- (id)preceedingTriggers;
- (id)reason;
- (void)setAnalysisQueue:(id)arg1;
- (void)setAnalysisTimer:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDiceRoll:(unsigned long long)arg1;
- (void)setFgApp:(id)arg1;
- (void)setFirstSubsequentLinkDownReason:(id)arg1;
- (void)setHasKernel:(bool)arg1;
- (void)setInA2dp:(bool)arg1;
- (void)setInCall:(bool)arg1;
- (void)setInEsco:(bool)arg1;
- (void)setIsDone:(bool)arg1;
- (void)setLqmWindowsFeatures:(id)arg1;
- (void)setMetricNameCDF:(id)arg1;
- (void)setMetricNameSankey:(id)arg1;
- (void)setPreceedingTriggers:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSubsequentTriggers:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setWindowAfterTrigger:(id)arg1;
- (void)setWindowBeforeTrigger:(id)arg1;
- (id)subsequentTriggers;
- (id)summary;
- (id)timestamp;
- (void)updateWithLQMSample:(id)arg1;
- (void)updateWithSubsequentTrigger:(id)arg1;
- (id)windowAfterTrigger;
- (id)windowBeforeTrigger;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRequest : NSObject <NSSecureCoding> {
    NSString * _clientShortName;
    NSString * _experimentId;
    NSString * _experimentNamespaceId;
    NSDictionary * _headerItems;
    bool  _isClientOnlyExperiment;
    bool  _isInReservedAllocationForExperiment;
    NSString * _keyboardInputMode;
    NSObject<OS_nw_activity> * _nwActivity;
    char * _nwActivityToken;
    bool  _pretend;
    SFCommand * _queryCommand;
    unsigned long long  _queryId;
    NSArray * _queryItems;
    double  _scale;
    NSString * _treatmentId;
    unsigned long long  _triggerEvent;
    bool  _verboseReply;
}

@property (nonatomic, readonly) unsigned long long clientQueryId;
@property (nonatomic, copy) NSString *clientShortName;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic, copy) NSString *experimentNamespaceId;
@property (nonatomic, copy) NSDictionary *headerItems;
@property (nonatomic) bool isClientOnlyExperiment;
@property (nonatomic) bool isInReservedAllocationForExperiment;
@property (nonatomic, copy) NSString *keyboardInputMode;
@property (nonatomic, retain) NSObject<OS_nw_activity> *nwActivity;
@property (nonatomic, readonly) unsigned int nwActivityLabel;
@property (nonatomic, readonly) char *nwActivityToken;
@property (nonatomic) bool pretend;
@property (nonatomic, copy) SFCommand *queryCommand;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic, copy) NSArray *queryItems;
@property (nonatomic) double scale;
@property (nonatomic, copy) NSString *treatmentId;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) bool verboseReply;

+ (id)cardRequestWithURL:(id)arg1;
+ (id)cardRequestWithURL:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)flightRequestForQuery:(id)arg1 date:(id)arg2 appBundleId:(id)arg3;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(long long)arg4 appBundleId:(id)arg5;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(long long)arg4 appBundleId:(id)arg5 queryId:(unsigned long long)arg6;
+ (id)moreResultsRequestWithURL:(id)arg1;
+ (id)moreResultsRequestWithURL:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)prefetchRequestForUrl:(id)arg1;
+ (id)prefetchRequestForUrl:(id)arg1 locale:(id)arg2;
+ (id)prefetchRequestForUrls:(id)arg1 locale:(id)arg2;
+ (id)requestWithTopics:(id)arg1 triggerEvent:(unsigned long long)arg2;
+ (id)requestWithTopics:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
+ (id)requestWithTopics:(id)arg1 triggerEvent:(unsigned long long)arg2 timeout:(double)arg3 queryId:(unsigned long long)arg4;
+ (id)searchReplayRequestWithString:(id)arg1;
+ (id)searchRequestWithCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
+ (id)searchRequestWithCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3 queryString:(id)arg4;
+ (id)searchRequestWithEngagedSuggestion:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned long long)arg2;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
+ (id)summarizeRequestForUrl:(id)arg1;
+ (id)summarizeRequestForUrl:(id)arg1 locale:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)zeroKeywordRequest;
+ (id)zeroKeywordRequest:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)beginNWActivity;
- (unsigned long long)clientQueryId;
- (id)clientShortName;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentId;
- (id)experimentNamespaceId;
- (id)headerItems;
- (id)initWithCoder:(id)arg1;
- (bool)isClientOnlyExperiment;
- (bool)isInReservedAllocationForExperiment;
- (id)keyboardInputMode;
- (id)nwActivity;
- (unsigned int)nwActivityLabel;
- (char *)nwActivityToken;
- (bool)pretend;
- (id)queryCommand;
- (unsigned long long)queryId;
- (id)queryItems;
- (Class)responseClass;
- (double)scale;
- (void)setClientShortName:(id)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setExperimentNamespaceId:(id)arg1;
- (void)setHeaderItems:(id)arg1;
- (void)setIsClientOnlyExperiment:(bool)arg1;
- (void)setIsInReservedAllocationForExperiment:(bool)arg1;
- (void)setKeyboardInputMode:(id)arg1;
- (void)setNwActivity:(id)arg1;
- (void)setPretend:(bool)arg1;
- (void)setQueryCommand:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setQueryItems:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (void)setVerboseReply:(bool)arg1;
- (id)treatmentId;
- (unsigned long long)triggerEvent;
- (bool)verboseReply;

@end
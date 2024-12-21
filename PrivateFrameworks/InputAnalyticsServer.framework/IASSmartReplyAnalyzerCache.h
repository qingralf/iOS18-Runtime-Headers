/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputAnalyticsServer.framework/InputAnalyticsServer
 */

@interface IASSmartReplyAnalyzerCache : NSObject {
    NSString * _bundleId;
    NSString * _cachedGeneratedContentString;
    NSMutableArray * _cachedQuestionsOptionsAnswers;
    NSMutableSet * _featureModel;
    bool  _initialResponseCompletedSignalSeen;
    NSDate * _initialResponseModelStartTime;
    NSDate * _initialResponseModelStopTime;
    IASignalAnalyticsObject * _intentRequestedCache;
    NSArray * _intents;
    unsigned long long  _lastEdgeDetectionState;
    NSDate * _modelStartTime;
    unsigned long long  _numUncompletedQuestionnaireModifications;
    NSString * _originalContent;
    NSDate * _questionnaireModelStartTime;
    NSDate * _questionnaireModelStopTime;
    bool  _questionnaireNotShownSignalSeen;
    bool  _questionnaireRequestedSignalSeen;
    NSDate * _rewriteModelStartTime;
    unsigned long long  _sentUsingSmartReplies;
    double  _totalModelRuntime;
    double  _totalRewriteModelRuntime;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *cachedGeneratedContentString;
@property (nonatomic, retain) NSMutableArray *cachedQuestionsOptionsAnswers;
@property (nonatomic, retain) NSMutableSet *featureModel;
@property (nonatomic) bool initialResponseCompletedSignalSeen;
@property (nonatomic, retain) NSDate *initialResponseModelStartTime;
@property (nonatomic, retain) NSDate *initialResponseModelStopTime;
@property (nonatomic, retain) IASignalAnalyticsObject *intentRequestedCache;
@property (nonatomic, retain) NSArray *intents;
@property (nonatomic) unsigned long long lastEdgeDetectionState;
@property (nonatomic, retain) NSDate *modelStartTime;
@property (nonatomic) unsigned long long numUncompletedQuestionnaireModifications;
@property (nonatomic, copy) NSString *originalContent;
@property (nonatomic, retain) NSDate *questionnaireModelStartTime;
@property (nonatomic, retain) NSDate *questionnaireModelStopTime;
@property (nonatomic) bool questionnaireNotShownSignalSeen;
@property (nonatomic) bool questionnaireRequestedSignalSeen;
@property (nonatomic, retain) NSDate *rewriteModelStartTime;
@property (nonatomic) unsigned long long sentUsingSmartReplies;
@property (nonatomic) double totalModelRuntime;
@property (nonatomic) double totalRewriteModelRuntime;

- (void).cxx_destruct;
- (id)bundleId;
- (id)cachedGeneratedContentString;
- (id)cachedQuestionsOptionsAnswers;
- (id)featureModel;
- (id)init;
- (bool)initialResponseCompletedSignalSeen;
- (id)initialResponseModelStartTime;
- (id)initialResponseModelStopTime;
- (id)intentRequestedCache;
- (id)intents;
- (unsigned long long)lastEdgeDetectionState;
- (id)modelStartTime;
- (unsigned long long)numUncompletedQuestionnaireModifications;
- (id)originalContent;
- (id)questionnaireModelStartTime;
- (id)questionnaireModelStopTime;
- (bool)questionnaireNotShownSignalSeen;
- (bool)questionnaireRequestedSignalSeen;
- (id)rewriteModelStartTime;
- (unsigned long long)sentUsingSmartReplies;
- (void)setBundleId:(id)arg1;
- (void)setCachedGeneratedContentString:(id)arg1;
- (void)setCachedQuestionsOptionsAnswers:(id)arg1;
- (void)setFeatureModel:(id)arg1;
- (void)setInitialResponseCompletedSignalSeen:(bool)arg1;
- (void)setInitialResponseModelStartTime:(id)arg1;
- (void)setInitialResponseModelStopTime:(id)arg1;
- (void)setIntentRequestedCache:(id)arg1;
- (void)setIntents:(id)arg1;
- (void)setLastEdgeDetectionState:(unsigned long long)arg1;
- (void)setModelStartTime:(id)arg1;
- (void)setNumUncompletedQuestionnaireModifications:(unsigned long long)arg1;
- (void)setOriginalContent:(id)arg1;
- (void)setQuestionnaireModelStartTime:(id)arg1;
- (void)setQuestionnaireModelStopTime:(id)arg1;
- (void)setQuestionnaireNotShownSignalSeen:(bool)arg1;
- (void)setQuestionnaireRequestedSignalSeen:(bool)arg1;
- (void)setRewriteModelStartTime:(id)arg1;
- (void)setSentUsingSmartReplies:(unsigned long long)arg1;
- (void)setTotalModelRuntime:(double)arg1;
- (void)setTotalRewriteModelRuntime:(double)arg1;
- (double)totalModelRuntime;
- (double)totalRewriteModelRuntime;

@end
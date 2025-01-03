/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {
    unsigned long long  _ageForConnectionsMetrics;
    bool  _continuousPathConversion;
    int  _dynamicPenaltyCount;
    int  _dynamicUsageCount;
    double  _excessPathRatio;
    NSString * _fromBundleId;
    double  _geometryScore;
    bool  _isFromPhraseDictionary;
    bool  _isFromTextChecker;
    bool  _isSecureContentCandidate;
    NSString * _label;
    _ICPredictedItem * _proactivePredictedItem;
    TIProactiveTrigger * _proactiveTrigger;
    NSString * _responseKitCategory;
    bool  _shouldAccept;
    bool  _shouldInsertSpaceAfterSelection;
    NSNumber * _staticLinguisticLikelihood;
    bool  _toucanInlineCompletionCandidate;
    unsigned int  _usageTrackingMask;
    unsigned long long  _wordOriginFeedbackID;
    double  _wordScore;
}

@property (nonatomic) unsigned long long ageForConnectionsMetrics;
@property (getter=isContinuousPathConversion, nonatomic) bool continuousPathConversion;
@property (nonatomic) int dynamicPenaltyCount;
@property (nonatomic) int dynamicUsageCount;
@property (nonatomic) double excessPathRatio;
@property (nonatomic, copy) NSString *fromBundleId;
@property (nonatomic) double geometryScore;
@property (nonatomic) bool isFromPhraseDictionary;
@property (nonatomic) bool isFromTextChecker;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) _ICPredictedItem *proactivePredictedItem;
@property (getter=shouldAccept, nonatomic) bool shouldAccept;
@property (getter=shouldInsertSpaceAfterSelection, nonatomic) bool shouldInsertSpaceAfterSelection;
@property (nonatomic, copy) NSNumber *staticLinguisticLikelihood;
@property (getter=isToucanInlineCompletionCandidate, nonatomic) bool toucanInlineCompletionCandidate;
@property (nonatomic) double wordScore;

+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (unsigned long long)ageForConnectionsMetrics;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2 label:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)dynamicPenaltyCount;
- (int)dynamicUsageCount;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)excessPathRatio;
- (id)fromBundleId;
- (double)geometryScore;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 rawInput:(id)arg3 wordOriginFeedbackID:(unsigned long long)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 rawInput:(id)arg3 wordOriginFeedbackID:(unsigned long long)arg4 usageTrackingMask:(unsigned int)arg5 sourceMask:(unsigned int)arg6;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 rawInput:(id)arg3 wordOriginFeedbackID:(unsigned long long)arg4 usageTrackingMask:(unsigned int)arg5 sourceMask:(unsigned int)arg6 learningFlagsMask:(unsigned long long)arg7;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 rawInput:(id)arg3 wordOriginFeedbackID:(unsigned long long)arg4 usageTrackingMask:(unsigned int)arg5 sourceMask:(unsigned int)arg6 secureContentCandidate:(bool)arg7 proactiveTrigger:(id)arg8 proactivePredictedItem:(id)arg9;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 rawInput:(id)arg3 wordOriginFeedbackID:(unsigned long long)arg4 usageTrackingMask:(unsigned int)arg5 sourceMask:(unsigned int)arg6 secureContentCandidate:(bool)arg7 proactiveTrigger:(id)arg8 proactivePredictedItem:(id)arg9 responseKitCategory:(id)arg10;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3;
- (id)initWithCandidate:(id)arg1 responseKitCategory:(id)arg2;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAutocorrection;
- (bool)isContinuousPathConversion;
- (bool)isFromPhraseDictionary;
- (bool)isFromTextChecker;
- (bool)isSecureContentCandidate;
- (bool)isToucanInlineCompletionCandidate;
- (id)label;
- (id)proactivePredictedItem;
- (id)proactiveTrigger;
- (id)responseKitCategory;
- (void)setAgeForConnectionsMetrics:(unsigned long long)arg1;
- (void)setContinuousPathConversion:(bool)arg1;
- (void)setDynamicPenaltyCount:(int)arg1;
- (void)setDynamicUsageCount:(int)arg1;
- (void)setExcessPathRatio:(double)arg1;
- (void)setFromBundleId:(id)arg1;
- (void)setGeometryScore:(double)arg1;
- (void)setIsFromPhraseDictionary:(bool)arg1;
- (void)setIsFromTextChecker:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setProactivePredictedItem:(id)arg1;
- (void)setShouldAccept:(bool)arg1;
- (void)setShouldInsertSpaceAfterSelection:(bool)arg1;
- (void)setStaticLinguisticLikelihood:(id)arg1;
- (void)setToucanInlineCompletionCandidate:(bool)arg1;
- (void)setWordScore:(double)arg1;
- (bool)shouldAccept;
- (bool)shouldInsertSpaceAfterSelection;
- (id)staticLinguisticLikelihood;
- (unsigned int)usageTrackingMask;
- (unsigned long long)wordOriginFeedbackID;
- (double)wordScore;

@end

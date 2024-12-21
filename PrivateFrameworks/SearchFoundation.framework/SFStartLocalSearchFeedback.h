/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFStartLocalSearchFeedback : SFStartSearchFeedback {
    int  _coreSpotlightIndexTypeUsed;
    SFPerformEntityQueryCommand * _entityQueryCommand;
    SFIndexState * _indexState;
    unsigned long long  _indexType;
    bool  _isPhotosScopedSearch;
    NSString * _originatingApp;
}

@property (nonatomic) int coreSpotlightIndexTypeUsed;
@property (nonatomic, copy) SFPerformEntityQueryCommand *entityQueryCommand;
@property (nonatomic, retain) SFIndexState *indexState;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) bool isPhotosScopedSearch;
@property (nonatomic, copy) NSString *originatingApp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)coreSpotlightIndexTypeUsed;
- (void)encodeWithCoder:(id)arg1;
- (id)entityQueryCommand;
- (id)indexState;
- (unsigned long long)indexType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityQueryCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 indexType:(unsigned long long)arg4 queryId:(unsigned long long)arg5 originatingApp:(id)arg6;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 queryId:(unsigned long long)arg4;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 indexType:(unsigned long long)arg4 queryId:(unsigned long long)arg5;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 indexType:(unsigned long long)arg4 queryId:(unsigned long long)arg5 originatingApp:(id)arg6;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 indexType:(unsigned long long)arg4 queryId:(unsigned long long)arg5 originatingApp:(id)arg6 coreSpotlightIndexTypeUsed:(int)arg7;
- (bool)isPhotosScopedSearch;
- (id)originatingApp;
- (void)setCoreSpotlightIndexTypeUsed:(int)arg1;
- (void)setEntityQueryCommand:(id)arg1;
- (void)setIndexState:(id)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (void)setIsPhotosScopedSearch:(bool)arg1;
- (void)setOriginatingApp:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchQuery : NSObject <NSCopying> {
    double  _cancellationTime;
    _Atomic bool  _cancelled;
    long long  _contentFilters;
    unsigned long long  _creationStamp;
    double  _creationTime;
    double  _currentTime;
    NSArray * _disabledApps;
    NSArray * _disabledBundles;
    bool  _finished;
    bool  _grouped;
    bool  _infinitePatience;
    bool  _internalDebug;
    bool  _internalValidation;
    bool  _isWideScreen;
    NSString * _keyboardLanguage;
    NSString * _keyboardPrimaryLanguage;
    long long  _maxCount;
    bool  _noTokenize;
    bool  _promoteLocalResults;
    bool  _promoteParsecResults;
    SPSearchQueryContext * _queryContext;
    unsigned long long  _queryID;
    unsigned long long  _queryIdent;
    double  _scaleFactor;
    NSString * _searchString;
    NSArray * markedTextArray;
}

@property (nonatomic, readonly) double cancellationTime;
@property (nonatomic, readonly) bool cancelled;
@property (nonatomic) long long contentFilters;
@property (nonatomic, readonly) unsigned long long creationStamp;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, retain) NSArray *disabledApps;
@property (nonatomic, retain) NSArray *disabledBundles;
@property (nonatomic) bool grouped;
@property (nonatomic) bool infinitePatience;
@property (nonatomic) bool internalDebug;
@property (nonatomic) bool internalValidation;
@property (nonatomic) bool isWideScreen;
@property (nonatomic) long long maxCount;
@property (nonatomic) bool noTokenize;
@property (nonatomic) bool promoteLocalResults;
@property (nonatomic) bool promoteParsecResults;
@property (nonatomic, readonly) SPSearchQueryContext *queryContext;
@property (nonatomic) unsigned long long queryIdent;

- (void).cxx_destruct;
- (void)cancel;
- (double)cancellationTime;
- (bool)cancelled;
- (long long)contentFilters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationStamp;
- (double)creationTime;
- (double)currentTime;
- (id)disabledApps;
- (id)disabledBundles;
- (void)execute:(id /* block */)arg1;
- (bool)grouped;
- (bool)hasMarkedText;
- (unsigned long long)hash;
- (bool)infinitePatience;
- (id)initWithQuery:(id)arg1 domains:(id)arg2;
- (id)initWithSearchQueryContext:(id)arg1;
- (bool)internalDebug;
- (bool)internalValidation;
- (bool)isEqual:(id)arg1;
- (bool)isWideScreen;
- (long long)maxCount;
- (bool)noTokenize;
- (bool)plausiblyMatchesQuery:(id)arg1;
- (bool)promoteLocalResults;
- (bool)promoteParsecResults;
- (id)queryContext;
- (unsigned long long)queryID;
- (unsigned long long)queryIdent;
- (void)setContentFilters:(long long)arg1;
- (void)setDisabledApps:(id)arg1;
- (void)setDisabledBundles:(id)arg1;
- (void)setGrouped:(bool)arg1;
- (void)setInfinitePatience:(bool)arg1;
- (void)setInternalDebug:(bool)arg1;
- (void)setInternalValidation:(bool)arg1;
- (void)setIsWideScreen:(bool)arg1;
- (void)setMaxCount:(long long)arg1;
- (void)setNoTokenize:(bool)arg1;
- (void)setPromoteLocalResults:(bool)arg1;
- (void)setPromoteParsecResults:(bool)arg1;
- (void)setQueryIdent:(unsigned long long)arg1;

@end

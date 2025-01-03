/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMAeroMLPhotosSearchInsights : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    bool  _didUserViewAnyPhoto;
    bool  _hasDidUserViewAnyPhoto;
    bool  _hasIsActionClimbingInQuery;
    bool  _hasIsActionHoldingInQuery;
    bool  _hasIsActionRunningInQuery;
    bool  _hasIsGeneralDateReferenceInQuery;
    bool  _hasIsGeneralLocationReferenceInQuery;
    bool  _hasIsGeneralPersonReferenceInQuery;
    bool  _hasIsHolidayReferenceInQuery;
    bool  _hasIsSpecificDateInQuery;
    bool  _hasIsSpecificLocationInQuery;
    bool  _hasIsSpecificPersonInQuery;
    bool  _hasNumberOfKnownEntitiesInQuery;
    bool  _hasNumberOfSearchesFromThisSurfaceLastWeek;
    bool  _hasNumberOfSearchesFromThisSurfaceWeeklyAvg;
    bool  _hasNumberOfTokensInQuery;
    bool  _hasSearchResultSize;
    bool  _hasSizeOfPhotoDB;
    bool  _hasViewedPhotoCount;
    bool  _hasWasThereAnyResultsShown;
    bool  _isActionClimbingInQuery;
    bool  _isActionHoldingInQuery;
    bool  _isActionRunningInQuery;
    bool  _isGeneralDateReferenceInQuery;
    bool  _isGeneralLocationReferenceInQuery;
    bool  _isGeneralPersonReferenceInQuery;
    bool  _isHolidayReferenceInQuery;
    bool  _isSpecificDateInQuery;
    bool  _isSpecificLocationInQuery;
    bool  _isSpecificPersonInQuery;
    unsigned int  _numberOfKnownEntitiesInQuery;
    unsigned int  _numberOfSearchesFromThisSurfaceLastWeek;
    unsigned int  _numberOfSearchesFromThisSurfaceWeeklyAvg;
    unsigned int  _numberOfTokensInQuery;
    NSString * _queryRaw;
    unsigned int  _searchResultSize;
    unsigned int  _sizeOfPhotoDB;
    int  _uiSurface;
    unsigned int  _viewedPhotoCount;
    bool  _wasThereAnyResultsShown;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didUserViewAnyPhoto;
@property (nonatomic) bool hasDidUserViewAnyPhoto;
@property (nonatomic) bool hasIsActionClimbingInQuery;
@property (nonatomic) bool hasIsActionHoldingInQuery;
@property (nonatomic) bool hasIsActionRunningInQuery;
@property (nonatomic) bool hasIsGeneralDateReferenceInQuery;
@property (nonatomic) bool hasIsGeneralLocationReferenceInQuery;
@property (nonatomic) bool hasIsGeneralPersonReferenceInQuery;
@property (nonatomic) bool hasIsHolidayReferenceInQuery;
@property (nonatomic) bool hasIsSpecificDateInQuery;
@property (nonatomic) bool hasIsSpecificLocationInQuery;
@property (nonatomic) bool hasIsSpecificPersonInQuery;
@property (nonatomic) bool hasNumberOfKnownEntitiesInQuery;
@property (nonatomic) bool hasNumberOfSearchesFromThisSurfaceLastWeek;
@property (nonatomic) bool hasNumberOfSearchesFromThisSurfaceWeeklyAvg;
@property (nonatomic) bool hasNumberOfTokensInQuery;
@property (nonatomic) bool hasSearchResultSize;
@property (nonatomic) bool hasSizeOfPhotoDB;
@property (nonatomic) bool hasViewedPhotoCount;
@property (nonatomic) bool hasWasThereAnyResultsShown;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActionClimbingInQuery;
@property (nonatomic, readonly) bool isActionHoldingInQuery;
@property (nonatomic, readonly) bool isActionRunningInQuery;
@property (nonatomic, readonly) bool isGeneralDateReferenceInQuery;
@property (nonatomic, readonly) bool isGeneralLocationReferenceInQuery;
@property (nonatomic, readonly) bool isGeneralPersonReferenceInQuery;
@property (nonatomic, readonly) bool isHolidayReferenceInQuery;
@property (nonatomic, readonly) bool isSpecificDateInQuery;
@property (nonatomic, readonly) bool isSpecificLocationInQuery;
@property (nonatomic, readonly) bool isSpecificPersonInQuery;
@property (nonatomic, readonly) unsigned int numberOfKnownEntitiesInQuery;
@property (nonatomic, readonly) unsigned int numberOfSearchesFromThisSurfaceLastWeek;
@property (nonatomic, readonly) unsigned int numberOfSearchesFromThisSurfaceWeeklyAvg;
@property (nonatomic, readonly) unsigned int numberOfTokensInQuery;
@property (nonatomic, readonly) NSString *queryRaw;
@property (nonatomic, readonly) unsigned int searchResultSize;
@property (nonatomic, readonly) unsigned int sizeOfPhotoDB;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int uiSurface;
@property (nonatomic, readonly) unsigned int viewedPhotoCount;
@property (nonatomic, readonly) bool wasThereAnyResultsShown;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)didUserViewAnyPhoto;
- (bool)hasDidUserViewAnyPhoto;
- (bool)hasIsActionClimbingInQuery;
- (bool)hasIsActionHoldingInQuery;
- (bool)hasIsActionRunningInQuery;
- (bool)hasIsGeneralDateReferenceInQuery;
- (bool)hasIsGeneralLocationReferenceInQuery;
- (bool)hasIsGeneralPersonReferenceInQuery;
- (bool)hasIsHolidayReferenceInQuery;
- (bool)hasIsSpecificDateInQuery;
- (bool)hasIsSpecificLocationInQuery;
- (bool)hasIsSpecificPersonInQuery;
- (bool)hasNumberOfKnownEntitiesInQuery;
- (bool)hasNumberOfSearchesFromThisSurfaceLastWeek;
- (bool)hasNumberOfSearchesFromThisSurfaceWeeklyAvg;
- (bool)hasNumberOfTokensInQuery;
- (bool)hasSearchResultSize;
- (bool)hasSizeOfPhotoDB;
- (bool)hasViewedPhotoCount;
- (bool)hasWasThereAnyResultsShown;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithWasThereAnyResultsShown:(id)arg1 searchResultSize:(id)arg2 didUserViewAnyPhoto:(id)arg3 viewedPhotoCount:(id)arg4 uiSurface:(int)arg5 sizeOfPhotoDB:(id)arg6 numberOfSearchesFromThisSurfaceLastWeek:(id)arg7 numberOfSearchesFromThisSurfaceWeeklyAvg:(id)arg8 queryRaw:(id)arg9 numberOfTokensInQuery:(id)arg10 numberOfKnownEntitiesInQuery:(id)arg11 isSpecificPersonInQuery:(id)arg12 isGeneralPersonReferenceInQuery:(id)arg13 isSpecificLocationInQuery:(id)arg14 isGeneralLocationReferenceInQuery:(id)arg15 isSpecificDateInQuery:(id)arg16 isGeneralDateReferenceInQuery:(id)arg17 isHolidayReferenceInQuery:(id)arg18 isActionRunningInQuery:(id)arg19 isActionHoldingInQuery:(id)arg20 isActionClimbingInQuery:(id)arg21;
- (bool)isActionClimbingInQuery;
- (bool)isActionHoldingInQuery;
- (bool)isActionRunningInQuery;
- (bool)isEqual:(id)arg1;
- (bool)isGeneralDateReferenceInQuery;
- (bool)isGeneralLocationReferenceInQuery;
- (bool)isGeneralPersonReferenceInQuery;
- (bool)isHolidayReferenceInQuery;
- (bool)isSpecificDateInQuery;
- (bool)isSpecificLocationInQuery;
- (bool)isSpecificPersonInQuery;
- (id)jsonDictionary;
- (unsigned int)numberOfKnownEntitiesInQuery;
- (unsigned int)numberOfSearchesFromThisSurfaceLastWeek;
- (unsigned int)numberOfSearchesFromThisSurfaceWeeklyAvg;
- (unsigned int)numberOfTokensInQuery;
- (id)queryRaw;
- (unsigned int)searchResultSize;
- (id)serialize;
- (void)setHasDidUserViewAnyPhoto:(bool)arg1;
- (void)setHasIsActionClimbingInQuery:(bool)arg1;
- (void)setHasIsActionHoldingInQuery:(bool)arg1;
- (void)setHasIsActionRunningInQuery:(bool)arg1;
- (void)setHasIsGeneralDateReferenceInQuery:(bool)arg1;
- (void)setHasIsGeneralLocationReferenceInQuery:(bool)arg1;
- (void)setHasIsGeneralPersonReferenceInQuery:(bool)arg1;
- (void)setHasIsHolidayReferenceInQuery:(bool)arg1;
- (void)setHasIsSpecificDateInQuery:(bool)arg1;
- (void)setHasIsSpecificLocationInQuery:(bool)arg1;
- (void)setHasIsSpecificPersonInQuery:(bool)arg1;
- (void)setHasNumberOfKnownEntitiesInQuery:(bool)arg1;
- (void)setHasNumberOfSearchesFromThisSurfaceLastWeek:(bool)arg1;
- (void)setHasNumberOfSearchesFromThisSurfaceWeeklyAvg:(bool)arg1;
- (void)setHasNumberOfTokensInQuery:(bool)arg1;
- (void)setHasSearchResultSize:(bool)arg1;
- (void)setHasSizeOfPhotoDB:(bool)arg1;
- (void)setHasViewedPhotoCount:(bool)arg1;
- (void)setHasWasThereAnyResultsShown:(bool)arg1;
- (unsigned int)sizeOfPhotoDB;
- (int)uiSurface;
- (unsigned int)viewedPhotoCount;
- (bool)wasThereAnyResultsShown;
- (void)writeTo:(id)arg1;

@end

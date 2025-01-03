/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGEnrichedMemory : NSObject <PGEnrichedMemoryProtocol> {
    NSArray * _chapterTitles;
    NSArray * _curatedAssetUUIDs;
    NSArray * _extendedCuratedAssetUUIDs;
    unsigned long long  _failureReason;
    bool  _featuresGuestAssets;
    PGFlexMusicCuration * _flexMusicCuration;
    unsigned long long  _forbiddenMoods;
    NSString * _keyAssetUUID;
    NSArray * _legacyMoodKeywords;
    PGMusicCuration * _musicCuration;
    long long  _notificationLevel;
    unsigned long long  _numberOfRelevantAssets;
    PGMoodVector * _positiveMoodVector;
    unsigned long long  _recommendedMoods;
    NSArray * _representativeAssetUUIDs;
    double  _score;
    NSString * _subtitle;
    unsigned long long  _suggestedMood;
    NSString * _title;
    long long  _titleCategory;
    <PGTriggeredMemoryProtocol> * _triggeredMemory;
}

@property (nonatomic, retain) NSArray *blockableFeatures;
@property (nonatomic, copy) NSArray *chapterTitles;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, copy) NSArray *curatedAssetUUIDs;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) double electionScore;
@property (nonatomic, copy) NSArray *extendedCuratedAssetUUIDs;
@property (nonatomic, readonly) bool failedEnrichment;
@property (nonatomic) unsigned long long failureReason;
@property (nonatomic) bool featuresGuestAssets;
@property (nonatomic, retain) PGFlexMusicCuration *flexMusicCuration;
@property (nonatomic) unsigned long long forbiddenMoods;
@property (nonatomic, readonly) bool generatedWithFallbackRequirements;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *keyAssetUUID;
@property (nonatomic, copy) NSArray *legacyMoodKeywords;
@property (nonatomic, readonly) unsigned long long memoryCategory;
@property (nonatomic, readonly) unsigned long long memoryCategorySubcategory;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (nonatomic, retain) PGMusicCuration *musicCuration;
@property (nonatomic) long long notificationLevel;
@property (nonatomic) unsigned long long numberOfRelevantAssets;
@property (nonatomic, readonly) long long photosGraphVersion;
@property (nonatomic, retain) PGMoodVector *positiveMoodVector;
@property (nonatomic) unsigned long long recommendedMoods;
@property (nonatomic, copy) NSArray *representativeAssetUUIDs;
@property (nonatomic) double score;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) unsigned long long suggestedMood;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long titleCategory;
@property (nonatomic, readonly) NSIndexSet *triggerTypes;
@property (nonatomic, readonly) NSString *uniqueMemoryIdentifier;
@property (nonatomic, readonly) NSDictionary *validityIntervalByTriggerType;

- (void).cxx_destruct;
- (id)blockableFeatures;
- (id)chapterTitles;
- (id)creationDate;
- (id)curatedAssetUUIDs;
- (id)description;
- (double)electionScore;
- (id)enrichedDescription;
- (id)extendedCuratedAssetUUIDs;
- (bool)failedEnrichment;
- (unsigned long long)failureReason;
- (bool)featuresGuestAssets;
- (id)flexMusicCuration;
- (unsigned long long)forbiddenMoods;
- (bool)generatedWithFallbackRequirements;
- (id)initWithTriggeredMemory:(id)arg1;
- (id)keyAssetUUID;
- (id)legacyMoodKeywords;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (id)memoryFeatureNodes;
- (id)memoryFeatureNodesInGraph:(id)arg1;
- (id)memoryMomentNodes;
- (id)musicCuration;
- (long long)notificationLevel;
- (unsigned long long)numberOfRelevantAssets;
- (long long)photosGraphVersion;
- (id)positiveMoodVector;
- (unsigned long long)recommendedMoods;
- (id)representativeAssetUUIDs;
- (double)score;
- (void)setBlockableFeatures:(id)arg1;
- (void)setChapterTitles:(id)arg1;
- (void)setCuratedAssetUUIDs:(id)arg1;
- (void)setElectionScore:(double)arg1;
- (void)setExtendedCuratedAssetUUIDs:(id)arg1;
- (void)setFailureReason:(unsigned long long)arg1;
- (void)setFeaturesGuestAssets:(bool)arg1;
- (void)setFlexMusicCuration:(id)arg1;
- (void)setForbiddenMoods:(unsigned long long)arg1;
- (void)setKeyAssetUUID:(id)arg1;
- (void)setLegacyMoodKeywords:(id)arg1;
- (void)setMusicCuration:(id)arg1;
- (void)setNotificationLevel:(long long)arg1;
- (void)setNumberOfRelevantAssets:(unsigned long long)arg1;
- (void)setPositiveMoodVector:(id)arg1;
- (void)setRecommendedMoods:(unsigned long long)arg1;
- (void)setRepresentativeAssetUUIDs:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuggestedMood:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleCategory:(long long)arg1;
- (id)subtitle;
- (unsigned long long)suggestedMood;
- (id)title;
- (long long)titleCategory;
- (id)triggerTypes;
- (id)uniqueMemoryIdentifier;
- (id)validityIntervalByTriggerType;

@end

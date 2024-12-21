/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFeatureAvailability : NSObject {
    NSDate * _dateComputed;
    unsigned long long  _feature;
    double  _fractionOfAllAssetsAnalyzedForScenes;
    double  _fractionOfAllAssetsWithCaptions;
    double  _fractionOfAllAssetsWithMediaAnalysisInSearchIndex;
    double  _fractionOfAllAssetsWithSceneAnalysisInSearchIndex;
    double  _fractionOfCuratedAssetsIndexedInVUClustering;
    double  _fractionOfCuratedAssetsWithCaptions;
    double  _fractionOfCuratedAssetsWithEmbeddingsInVectorIndex;
    double  _fractionOfCuratedAssetsWithSceneAnalysisInSearchIndex;
    double  _fractionOfHighlightsEnriched;
    bool  _hasConsistentMediaAnalysisImageVersion;
    bool  _isAvailable;
    NSDate * _lastFullVUIndexClusterDate;
    bool  _libraryHasEnoughCuratedAssets;
    bool  _libraryHasEnoughCuratedAssetsIndexedInVUClustering;
    bool  _libraryHasEnoughCuratedAssetsWithEmbeddingsInVectorIndex;
    unsigned long long  _mediaAnalysisImageVersion;
    unsigned long long  _numberOfAssets;
    unsigned long long  _numberOfCuratedAssets;
    bool  _photosKnowledgeGraphIsReady;
    bool  _vuIndexIsFullClustered;
    bool  _wasComputed;
}

@property (nonatomic, retain) NSDate *dateComputed;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) double fractionOfAllAssetsAnalyzedForScenes;
@property (nonatomic) double fractionOfAllAssetsWithCaptions;
@property (nonatomic) double fractionOfAllAssetsWithMediaAnalysisInSearchIndex;
@property (nonatomic) double fractionOfAllAssetsWithSceneAnalysisInSearchIndex;
@property (nonatomic) double fractionOfCuratedAssetsIndexedInVUClustering;
@property (nonatomic) double fractionOfCuratedAssetsWithCaptions;
@property (nonatomic) double fractionOfCuratedAssetsWithEmbeddingsInVectorIndex;
@property (nonatomic) double fractionOfCuratedAssetsWithSceneAnalysisInSearchIndex;
@property (nonatomic) double fractionOfHighlightsEnriched;
@property (nonatomic) bool hasConsistentMediaAnalysisImageVersion;
@property (nonatomic) bool isAvailable;
@property (nonatomic, retain) NSDate *lastFullVUIndexClusterDate;
@property (nonatomic) bool libraryHasEnoughCuratedAssets;
@property (nonatomic) bool libraryHasEnoughCuratedAssetsIndexedInVUClustering;
@property (nonatomic) bool libraryHasEnoughCuratedAssetsWithEmbeddingsInVectorIndex;
@property (nonatomic) unsigned long long mediaAnalysisImageVersion;
@property (nonatomic) unsigned long long numberOfAssets;
@property (nonatomic) unsigned long long numberOfCuratedAssets;
@property (nonatomic) bool photosKnowledgeGraphIsReady;
@property (nonatomic) bool vuIndexIsFullClustered;
@property (nonatomic, readonly) bool wasComputed;

- (void).cxx_destruct;
- (id)dateComputed;
- (id)debugDescription;
- (unsigned long long)feature;
- (double)fractionOfAllAssetsAnalyzedForScenes;
- (double)fractionOfAllAssetsWithCaptions;
- (double)fractionOfAllAssetsWithMediaAnalysisInSearchIndex;
- (double)fractionOfAllAssetsWithSceneAnalysisInSearchIndex;
- (double)fractionOfCuratedAssetsIndexedInVUClustering;
- (double)fractionOfCuratedAssetsWithCaptions;
- (double)fractionOfCuratedAssetsWithEmbeddingsInVectorIndex;
- (double)fractionOfCuratedAssetsWithSceneAnalysisInSearchIndex;
- (double)fractionOfHighlightsEnriched;
- (bool)hasConsistentMediaAnalysisImageVersion;
- (id)initForFeature:(unsigned long long)arg1;
- (id)initForFeature:(unsigned long long)arg1 withPLFeatureAvailability:(id)arg2;
- (bool)isAvailable;
- (bool)isEqual:(id)arg1;
- (id)lastFullVUIndexClusterDate;
- (bool)libraryHasEnoughCuratedAssets;
- (bool)libraryHasEnoughCuratedAssetsIndexedInVUClustering;
- (bool)libraryHasEnoughCuratedAssetsWithEmbeddingsInVectorIndex;
- (unsigned long long)mediaAnalysisImageVersion;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfCuratedAssets;
- (bool)photosKnowledgeGraphIsReady;
- (void)setDateComputed:(id)arg1;
- (void)setFeature:(unsigned long long)arg1;
- (void)setFractionOfAllAssetsAnalyzedForScenes:(double)arg1;
- (void)setFractionOfAllAssetsWithCaptions:(double)arg1;
- (void)setFractionOfAllAssetsWithMediaAnalysisInSearchIndex:(double)arg1;
- (void)setFractionOfAllAssetsWithSceneAnalysisInSearchIndex:(double)arg1;
- (void)setFractionOfCuratedAssetsIndexedInVUClustering:(double)arg1;
- (void)setFractionOfCuratedAssetsWithCaptions:(double)arg1;
- (void)setFractionOfCuratedAssetsWithEmbeddingsInVectorIndex:(double)arg1;
- (void)setFractionOfCuratedAssetsWithSceneAnalysisInSearchIndex:(double)arg1;
- (void)setFractionOfHighlightsEnriched:(double)arg1;
- (void)setHasConsistentMediaAnalysisImageVersion:(bool)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setLastFullVUIndexClusterDate:(id)arg1;
- (void)setLibraryHasEnoughCuratedAssets:(bool)arg1;
- (void)setLibraryHasEnoughCuratedAssetsIndexedInVUClustering:(bool)arg1;
- (void)setLibraryHasEnoughCuratedAssetsWithEmbeddingsInVectorIndex:(bool)arg1;
- (void)setMediaAnalysisImageVersion:(unsigned long long)arg1;
- (void)setNumberOfAssets:(unsigned long long)arg1;
- (void)setNumberOfCuratedAssets:(unsigned long long)arg1;
- (void)setPhotosKnowledgeGraphIsReady:(bool)arg1;
- (void)setVuIndexIsFullClustered:(bool)arg1;
- (bool)vuIndexIsFullClustered;
- (bool)wasComputed;

@end
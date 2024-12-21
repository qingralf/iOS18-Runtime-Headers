/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHADatasetBuilder : NSObject {
    PHACoreDuetDatasetStorage * _datasetStore;
    NSArray * _negativeLocalIdentifiers;
    PHAPrivateFederatedLearningRecipeOptions * _options;
    NSArray * _positiveLocalIdentifiers;
}

@property (nonatomic, retain) PHACoreDuetDatasetStorage *datasetStore;
@property (nonatomic, retain) NSArray *negativeLocalIdentifiers;
@property (nonatomic, readonly) PHAPrivateFederatedLearningRecipeOptions *options;
@property (nonatomic, retain) NSArray *positiveLocalIdentifiers;

+ (id)_randomIndicesWithUpperBound:(unsigned long long)arg1 count:(unsigned long long)arg2;
+ (id)labelVectorForLabelPolicy:(long long)arg1 label:(id)arg2 numberOfClasses:(unsigned long long)arg3;
+ (id)labelVectorsForLabelPolicy:(long long)arg1;

- (void).cxx_destruct;
- (id)_assetPropertiesPredicateForKeywordFromFeatureExtractorFilters:(id)arg1;
- (id)_currentFetchOptionPropertySet;
- (id)_datasetBuilderHelperForBiomeStream:(id)arg1 error:(id*)arg2;
- (id)_datasetBuilderHelperForLocalIdentifiers:(id)arg1 positiveFingerprints:(id)arg2 negativeFingerprints:(id)arg3 error:(id*)arg4;
- (id)_datasetForLocalIdentifiers:(id)arg1 positiveFingerprints:(id)arg2 negativeFingerprints:(id)arg3 error:(id*)arg4;
- (id)_featureProviderForFingerprintVectors:(id)arg1 labelVectors:(id)arg2 batchSize:(unsigned long long)arg3 error:(id*)arg4;
- (id)_fetchObjectsForFingerprintVersion:(long long)arg1 options:(id)arg2 error:(id*)arg3;
- (id)_fetchObjectsForFingerprintVersion:(long long)arg1 options:(id)arg2 localIdentifiers:(id)arg3 error:(id*)arg4;
- (id)_filterDataSamples:(id)arg1 filters:(id)arg2 numberOfSamples:(id)arg3 error:(id*)arg4;
- (id)_fingerprintsForDatasetName:(id)arg1 localIdentifiers:(id)arg2 labelName:(id)arg3 numberOfSamples:(id)arg4 filters:(id)arg5 error:(id*)arg6;
- (id)_fingerprintsForObjects:(id)arg1 fingerprintVersion:(long long)arg2 error:(id*)arg3;
- (id)_fingerprintsForPhotosStyleWithDataLabelArray:(id)arg1 error:(id*)arg2;
- (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4;
- (bool)_isFeatureNameForAssetPredicateWithFeatureName:(id)arg1;
- (id)_localIdentifiersForCoreDuetDatasetName:(id)arg1 subsetName:(id)arg2;
- (id)_localIdentifiersToExcludeForLabel:(id)arg1;
- (id)_mergeLocalIdentifiersFromPositiveLocalIdentifiers:(id)arg1 negativeLocalIdentifiers:(id)arg2 numberOfPositiveSamples:(id)arg3 numberOfNegativeSamples:(id)arg4 error:(id*)arg5;
- (unsigned long long)_minAvailableNumberOfSamples;
- (id)_numberOfSamplesPerClassWithError:(id*)arg1;
- (id)_performAugmentationsOnLabeledSamples:(id)arg1 error:(id*)arg2;
- (id)_randomSamplesOfCount:(unsigned long long)arg1 filterPredicateForKeyword:(id)arg2 labelName:(id)arg3 error:(id*)arg4;
- (id)_samplesOfCount:(unsigned long long)arg1 fromLocalIdentifiers:(id)arg2 filterPredicateForKeyword:(id)arg3 error:(id*)arg4;
- (id)_trainingDataWithDataLabelArray:(id)arg1 fingerprints:(id)arg2 error:(id*)arg3;
- (long long)_validatePHObject:(id)arg1 withFeatureValidator:(id)arg2 error:(id*)arg3;
- (id)dataLabelArrayForPhotosStyleWithError:(id*)arg1;
- (id)datasetBuilderHelperForBinaryTrainingWithError:(id*)arg1;
- (id)datasetBuilderHelperForPhotosStyleWithError:(id*)arg1;
- (id)datasetForEvaluationForLabel:(id)arg1 error:(id*)arg2;
- (id)datasetStore;
- (id)datasetWithError:(id*)arg1;
- (id)initWithDatasetOptions:(id)arg1;
- (id)negativeLocalIdentifiers;
- (id)options;
- (id)positiveLocalIdentifiers;
- (id)readLocalIdentifiersFromBiomeStream:(id)arg1 subsetName:(id)arg2 type:(id)arg3;
- (void)setDatasetStore:(id)arg1;
- (void)setNegativeLocalIdentifiers:(id)arg1;
- (void)setPositiveLocalIdentifiers:(id)arg1;
- (id)trainingDataBatchWithBiomeStream:(id)arg1 error:(id*)arg2;

@end
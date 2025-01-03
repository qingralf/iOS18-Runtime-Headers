/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSJSONMutator : NSObject {
    double  _collectionFieldSkewFactorToDecreaseProbabilityOfInvalidResults;
    double  _fieldDeletionProbability;
    double  _fieldTypeChangeProbability;
    double  _fieldValueChangeProbability;
    id  _originalJSONSource;
    NSSet * _protectedFields;
}

@property (nonatomic) double collectionFieldSkewFactorToDecreaseProbabilityOfInvalidResults;
@property (nonatomic) double fieldDeletionProbability;
@property (nonatomic) double fieldTypeChangeProbability;
@property (nonatomic) double fieldValueChangeProbability;

- (void).cxx_destruct;
- (long long)_actionToPerformOnFieldOfType:(long long)arg1;
- (id)_mutatedArrayField:(id)arg1 shouldProtectRootObject:(bool)arg2;
- (id)_mutatedCollectionField:(id)arg1;
- (id)_mutatedDictionaryField:(id)arg1 shouldProtectRootObject:(bool)arg2;
- (id)_randomDateGenerator;
- (id)_randomFieldTypeChanger;
- (id)_randomIntegerGenerator;
- (id)_randomNumberGenerator;
- (id)_randomStringGenerator;
- (id)_randomValueForField:(id)arg1;
- (double)collectionFieldSkewFactorToDecreaseProbabilityOfInvalidResults;
- (double)fieldDeletionProbability;
- (double)fieldTypeChangeProbability;
- (double)fieldValueChangeProbability;
- (id)initWithSource:(id)arg1 protectedFields:(id)arg2;
- (id)mutatedJSONProtectingRootObject:(bool)arg1;
- (void)setCollectionFieldSkewFactorToDecreaseProbabilityOfInvalidResults:(double)arg1;
- (void)setFieldDeletionProbability:(double)arg1;
- (void)setFieldTypeChangeProbability:(double)arg1;
- (void)setFieldValueChangeProbability:(double)arg1;

@end

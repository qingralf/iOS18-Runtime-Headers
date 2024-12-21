/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUSceneNetV5SceneLabelAttributes : NSObject {
    CSUSceneNetV5SceneTaxonomyAttributes * _attributeManager;
    NSString * _label;
}

@property (nonatomic, readonly) CSUMetricOperatingPointCurve *betaFScoreMaximizingOperatingPointCurve;
@property (nonatomic, readonly, copy) NSArray *detectorClasses;
@property (nonatomic, readonly, copy) NSString *humanReadableLabel;
@property (nonatomic, readonly, copy) NSArray *humanReadableSynonyms;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) float photosSearchThreshold;
@property (nonatomic, readonly) CSUMetricOperatingPointCurve *precisionOperatingPointCurve;
@property (nonatomic, readonly) CSUMetricOperatingPointCurve *recallOperatingPointCurve;
@property (getter=isSearchable, nonatomic, readonly) bool searchable;

- (void).cxx_destruct;
- (id)_metricOperatingPointCurveForAttribute:(id)arg1 metricPattern:(int)arg2;
- (id)betaFScoreMaximizingOperatingPointCurve;
- (id)detectorClasses;
- (id)humanReadableLabel;
- (id)humanReadableSynonyms;
- (id)initWithTaxonomyAttributes:(id)arg1 forLabel:(id)arg2;
- (bool)isSearchable;
- (id)label;
- (float)photosSearchThreshold;
- (id)precisionOperatingPointCurve;
- (id)recallOperatingPointCurve;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAxis : NSObject <HKAxisLabelDataSource> {
    bool  _axisAnnotationsExcludeInterstitialAxisLabels;
    NSMutableArray * _axisAnnotationsStorage;
    HKValueRange * _axisChartableValueRangeStorage;
    HKAxisLabelCache * _axisLabelCache;
    long long  _axisLabelEndingsStorage;
    NSLock * _axisMutableStateLock;
    NSNumber * _horizontalAxisLabelSpacePadding;
    <HKAxisLabelDataSource> * _labelDataSource;
    NSNumber * _maxLabelWidth;
    long long  _maxLabels;
    long long  _minLabels;
    bool  _overrideNoTopBaseline;
    struct HKLinearTransform { 
        double offset; 
        double scale; 
    }  _pointTransformStorage;
    HKAxisStyle * _preferredStyle;
    bool  _requiresScalingStorage;
    HKCoordinateTransform * _transform;
    <HKZoomScale> * _zoomScaleEngine;
}

@property (nonatomic, retain) NSMutableArray *axisAnnotations;
@property (nonatomic, readonly) bool axisAnnotationsExcludeInterstitialAxisLabels;
@property (nonatomic, retain) NSMutableArray *axisAnnotationsStorage;
@property (nonatomic, retain) HKValueRange *axisChartableValueRange;
@property (nonatomic, retain) HKValueRange *axisChartableValueRangeStorage;
@property (nonatomic, readonly) HKAxisLabelCache *axisLabelCache;
@property (nonatomic) long long axisLabelEndings;
@property (nonatomic) long long axisLabelEndingsStorage;
@property (nonatomic, readonly) NSLock *axisMutableStateLock;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *horizontalAxisLabelSpacePadding;
@property (nonatomic, readonly) <HKAxisLabelDataSource> *labelDataSource;
@property (nonatomic, retain) NSNumber *maxLabelWidth;
@property (nonatomic, readonly) long long maxLabels;
@property (nonatomic, readonly) long long minLabels;
@property (nonatomic, readonly) bool overrideNoTopBaseline;
@property (nonatomic) struct HKLinearTransform { double x1; double x2; } pointTransform;
@property (nonatomic) struct HKLinearTransform { double x1; double x2; } pointTransformStorage;
@property (nonatomic, readonly) HKAxisStyle *preferredStyle;
@property (nonatomic, readonly) bool requiresScaling;
@property (nonatomic) bool requiresScalingStorage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKCoordinateTransform *transform;
@property (nonatomic, readonly) <HKZoomScale> *zoomScaleEngine;

+ (struct HKAxisMinMaxDefinition { double x1; double x2; })contractByPointsLow:(double)arg1 high:(double)arg2 modelRange:(struct HKAxisMinMaxDefinition { double x1; double x2; })arg3 pointRange:(struct HKAxisMinMaxDefinition { double x1; double x2; })arg4;
+ (struct HKAxisMinMaxDefinition { double x1; double x2; })expandByPointsLow:(double)arg1 high:(double)arg2 modelRange:(struct HKAxisMinMaxDefinition { double x1; double x2; })arg3 pointRange:(struct HKAxisMinMaxDefinition { double x1; double x2; })arg4;

- (void).cxx_destruct;
- (void)_addTickMarksForPosition:(unsigned long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 modelRange:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint { double x1; double x2; })arg5 toBezierPath:(id)arg6 style:(id)arg7;
- (double)_axisFillWidthForStyle:(id)arg1 labels:(id)arg2 font:(id)arg3;
- (long long)_axisLabelCountWithTextInModelRange:(id)arg1 zoomScale:(double)arg2;
- (double)_axisOffsetWithStyle:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 horizontalAlignmentOut:(long long*)arg3;
- (id)_baselineForModelRange:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 style:(id)arg5;
- (struct HKRange { double x1; double x2; })_chartRangeForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint { double x1; double x2; })arg3;
- (bool)_containsTopBaselineWithModelRange:(id)arg1 zoomScale:(double)arg2;
- (void)_drawTextBackgroundWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(id)arg2 renderView:(id)arg3;
- (void)_drawTextForModelRange:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 renderView:(id)arg5 style:(id)arg6 maximumLabelSize:(struct CGSize { double x1; double x2; }*)arg7 omitOffscreenLabels:(bool)arg8;
- (void)_enumerateAxisLabelsForTextInRange:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 constantOffset:(double)arg5 isHorizontal:(bool)arg6 optionalOffset:(struct CGPoint { double x1; double x2; })arg7 gridlineWidth:(double)arg8 usingBlock:(id /* block */)arg9;
- (id)_gridLinesForModelRange:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 gridlineRanges:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint { double x1; double x2; })arg5 style:(id)arg6 gridLineType:(long long)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelBackgroundRectWithLabels:(id)arg1 font:(id)arg2 maxAnnotationWidth:(double)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 style:(id)arg5;
- (double)_maxLabelWidthFromLabels:(id)arg1 font:(id)arg2;
- (double)_maximumWidthOfAnnotations:(id)arg1 axisStyle:(id)arg2;
- (void)_offsetForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 chartRange:(struct HKRange { double x1; double x2; })arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(struct CGPoint { double x1; double x2; }*)arg4;
- (struct HKLinearTransform { double x1; double x2; })_pointTransformFromSeriesRanges:(id)arg1 linearTransform:(struct HKLinearTransform { double x1; double x2; })arg2 chartRange:(struct HKRange { double x1; double x2; })arg3;
- (void)_renderTickMarksForModelRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 style:(id)arg5 renderView:(id)arg6;
- (bool)_styleIsHorizontal:(id)arg1;
- (void)addAxisAnnotation:(id)arg1 modelCoordinate:(id)arg2;
- (id)adjustValueRangeForLabels:(id)arg1;
- (id)adjustedRangeForFittedRange:(id)arg1 chartRange:(struct HKRange { double x1; double x2; })arg2;
- (long long)axisAnnotationCount;
- (id)axisAnnotations;
- (bool)axisAnnotationsExcludeInterstitialAxisLabels;
- (id)axisAnnotationsStorage;
- (id)axisChartableValueRange;
- (id)axisChartableValueRangeStorage;
- (id)axisLabelCache;
- (long long)axisLabelEndings;
- (long long)axisLabelEndingsStorage;
- (id)axisLabelsInModelRangeFromCache:(id)arg1 zoomScale:(double)arg2;
- (id)axisMutableStateLock;
- (double)bottomBaselineYCoordinateForModelRange:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3;
- (id)cacheKeysForModelRange:(id)arg1 zoomScale:(double)arg2;
- (void)clearAnnotations;
- (void)clearCache;
- (long long)dateZoomForZoomScale:(double)arg1;
- (void)drawBaselineForModelRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 renderView:(id)arg5;
- (void)drawGridlinesForModelRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 gridlineRanges:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint { double x1; double x2; })arg5 renderView:(id)arg6 blendMode:(int)arg7;
- (void)drawLabelsWithModelRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 renderView:(id)arg5 maximumLabelSize:(struct CGSize { double x1; double x2; }*)arg6 omitOffscreenLabels:(bool)arg7;
- (void)enumerateTickCoordinatesInModelRange:(id)arg1 zoomScale:(double)arg2 handler:(id /* block */)arg3;
- (id)extendModelRangeWithRange:(id)arg1 zoomScale:(double)arg2;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)horizontalAxisLabelSpacePadding;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidateAxisLabelCache;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAxis:(id)arg1;
- (id)labelDataSource;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelRectWithModelRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3;
- (id)maxLabelWidth;
- (long long)maxLabels;
- (long long)minLabels;
- (double)offsetForLegendView;
- (void)offsetForValueRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(struct CGPoint { double x1; double x2; }*)arg4;
- (bool)overrideNoTopBaseline;
- (struct HKLinearTransform { double x1; double x2; })pointTransform;
- (struct HKLinearTransform { double x1; double x2; })pointTransformFittingValueRange:(id)arg1 toChartRange:(struct HKRange { double x1; double x2; })arg2;
- (struct HKLinearTransform { double x1; double x2; })pointTransformStorage;
- (id)preferredStyle;
- (id)rangeForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })renderPositionForLabelLocation:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 constantOffset:(double)arg5 isHorizontal:(bool)arg6 optionalOffset:(struct CGPoint { double x1; double x2; })arg7;
- (bool)requiresScaling;
- (bool)requiresScalingStorage;
- (void)setAxisAnnotations:(id)arg1;
- (void)setAxisAnnotationsStorage:(id)arg1;
- (void)setAxisChartableValueRange:(id)arg1;
- (void)setAxisChartableValueRangeStorage:(id)arg1;
- (void)setAxisLabelEndings:(long long)arg1;
- (void)setAxisLabelEndingsStorage:(long long)arg1;
- (void)setMaxLabelWidth:(id)arg1;
- (void)setPointTransform:(struct HKLinearTransform { double x1; double x2; })arg1;
- (void)setPointTransformStorage:(struct HKLinearTransform { double x1; double x2; })arg1;
- (void)setRequiresScalingStorage:(bool)arg1;
- (double)topBaselineYCoordinateForModelRange:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3;
- (id)transform;
- (id)zoomScaleEngine;

@end

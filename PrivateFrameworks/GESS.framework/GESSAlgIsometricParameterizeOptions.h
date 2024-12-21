/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GESS.framework/GESS
 */

@interface GESSAlgIsometricParameterizeOptions : GESSAlgParameterizeOptions {
    bool  enableParallel;
    float  maximumStretchRatio;
    unsigned int  optimizeBoundaryIfFaceNumberLessThan;
    bool  repairUVSelfIntersection;
    bool  skipInitialStretchOptimization;
    unsigned int  targetNumOfCharts;
}

@property bool enableParallel;
@property float maximumStretchRatio;
@property unsigned int optimizeBoundaryIfFaceNumberLessThan;
@property bool repairUVSelfIntersection;
@property bool skipInitialStretchOptimization;
@property unsigned int targetNumOfCharts;

- (bool)enableParallel;
- (id)init;
- (float)maximumStretchRatio;
- (unsigned int)optimizeBoundaryIfFaceNumberLessThan;
- (bool)repairUVSelfIntersection;
- (void)setEnableParallel:(bool)arg1;
- (void)setMaximumStretchRatio:(float)arg1;
- (void)setOptimizeBoundaryIfFaceNumberLessThan:(unsigned int)arg1;
- (void)setRepairUVSelfIntersection:(bool)arg1;
- (void)setSkipInitialStretchOptimization:(bool)arg1;
- (void)setTargetNumOfCharts:(unsigned int)arg1;
- (bool)skipInitialStretchOptimization;
- (unsigned int)targetNumOfCharts;

@end
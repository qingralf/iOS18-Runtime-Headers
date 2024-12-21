/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration {
    bool  _coalesceCompositeSymbologies;
    NSString * _locateMode;
    bool  _stopAtFirstPyramidWith2DCode;
    NSArray * _symbologies;
    bool  _useMLDetector;
}

@property (nonatomic) bool coalesceCompositeSymbologies;
@property (nonatomic, copy) NSString *locateMode;
@property (nonatomic) bool stopAtFirstPyramidWith2DCode;
@property (nonatomic, copy) NSArray *symbologies;
@property (nonatomic) bool useMLDetector;

- (void).cxx_destruct;
- (bool)coalesceCompositeSymbologies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (id)locateMode;
- (void)setCoalesceCompositeSymbologies:(bool)arg1;
- (void)setDefaultSymbologiesForRevision:(unsigned long long)arg1;
- (void)setLocateMode:(id)arg1;
- (void)setStopAtFirstPyramidWith2DCode:(bool)arg1;
- (void)setSymbologies:(id)arg1;
- (void)setUseMLDetector:(bool)arg1;
- (bool)stopAtFirstPyramidWith2DCode;
- (id)symbologies;
- (bool)useMLDetector;

@end
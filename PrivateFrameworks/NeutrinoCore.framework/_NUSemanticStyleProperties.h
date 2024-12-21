/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUSemanticStyleProperties : NSObject <NUSemanticStyleProperties> {
    NSNumber * _baseGain;
    double  _baselineExposure;
    NSNumber * _brightness;
    NSDictionary * _extendedStats;
    NSNumber * _faceBasedGlobalExposureBoostRatio;
    NSData * _globalToneCurveData;
    bool  _isVideo;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _keyTime;
    NSData * _lightMapData;
    NSNumber * _lightMapHeight;
    NSNumber * _lightMapWidth;
    NSNumber * _linearGain;
    NSData * _linearLightMapData;
    NSNumber * _linearRangeMax;
    NSNumber * _linearRangeMin;
    NSNumber * _sceneType;
    NSDictionary * _stats;
    NSData * _styleData;
    bool  _styleDataIsFloat16;
    NSNumber * _subjectRelightingValue;
    NSNumber * _tuningType;
    NUVersion * _version;
}

@property (nonatomic, retain) NSNumber *baseGain;
@property (nonatomic) double baselineExposure;
@property (nonatomic, retain) NSNumber *brightness;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *extendedStats;
@property (nonatomic, retain) NSNumber *faceBasedGlobalExposureBoostRatio;
@property (nonatomic, copy) NSData *globalToneCurveData;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isVideo;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } keyTime;
@property (nonatomic, copy) NSData *lightMapData;
@property (nonatomic, retain) NSNumber *lightMapHeight;
@property (nonatomic, retain) NSNumber *lightMapWidth;
@property (nonatomic, retain) NSNumber *linearGain;
@property (nonatomic, copy) NSData *linearLightMapData;
@property (nonatomic, retain) NSNumber *linearRangeMax;
@property (nonatomic, retain) NSNumber *linearRangeMin;
@property (nonatomic, retain) NSNumber *sceneType;
@property (nonatomic, copy) NSDictionary *stats;
@property (nonatomic, copy) NSData *styleData;
@property (nonatomic) bool styleDataIsFloat16;
@property (nonatomic, copy) NSNumber *subjectRelightingValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *tuningType;
@property (nonatomic, retain) NUVersion *version;

+ (id)baselineExposureFromLegacyMetadata:(id)arg1 error:(out id*)arg2;
+ (id)globalToneCurveDataFromCaptureMetadata:(id)arg1 error:(out id*)arg2;
+ (id)legacySemanticStylePropertiesFromData:(id)arg1 fromVideo:(bool)arg2 keyTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(out id*)arg4;
+ (id)semanticStylePropertiesFromData:(id)arg1 fromVideo:(bool)arg2 keyTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(out id*)arg4;
+ (id)semanticStylePropertiesFromImageMetadata:(id)arg1 error:(out id*)arg2;
+ (id)semanticStylePropertiesFromVideoMetadata:(id)arg1 keyTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(out id*)arg3;

- (void).cxx_destruct;
- (id)baseGain;
- (double)baselineExposure;
- (id)brightness;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extendedStats;
- (id)faceBasedGlobalExposureBoostRatio;
- (id)globalToneCurveData;
- (bool)isVideo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })keyTime;
- (id)lightMapData;
- (id)lightMapHeight;
- (id)lightMapWidth;
- (id)linearGain;
- (id)linearLightMapData;
- (id)linearRangeMax;
- (id)linearRangeMin;
- (id)sceneType;
- (void)setBaseGain:(id)arg1;
- (void)setBaselineExposure:(double)arg1;
- (void)setBrightness:(id)arg1;
- (void)setExtendedStats:(id)arg1;
- (void)setFaceBasedGlobalExposureBoostRatio:(id)arg1;
- (void)setGlobalToneCurveData:(id)arg1;
- (void)setIsVideo:(bool)arg1;
- (void)setKeyTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLightMapData:(id)arg1;
- (void)setLightMapHeight:(id)arg1;
- (void)setLightMapWidth:(id)arg1;
- (void)setLinearGain:(id)arg1;
- (void)setLinearLightMapData:(id)arg1;
- (void)setLinearRangeMax:(id)arg1;
- (void)setLinearRangeMin:(id)arg1;
- (void)setSceneType:(id)arg1;
- (void)setStats:(id)arg1;
- (void)setStyleData:(id)arg1;
- (void)setStyleDataIsFloat16:(bool)arg1;
- (void)setSubjectRelightingValue:(id)arg1;
- (void)setTuningType:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)stats;
- (id)styleData;
- (bool)styleDataIsFloat16;
- (id)subjectRelightingValue;
- (id)tuningType;
- (id)version;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface CinematicFramingSessionOptions : NSObject {
    void _defaultViewportRotation;
    NSMutableDictionary * _framingStyleSpecificOptions;
    float  deadbandRecenteringDurationSec;
    float  deadbandRecenteringIdleDurationSec;
    float  deadbandRecenteringInitialDelaySec;
    float  horizontalAccelerationMultiplier;
    float  horizontalSpeedMultiplier;
    bool  inferSubjectBodyFromFaceLocation;
    CinematicFramingSessionFramingParameters * multiPersonFramingParameters;
    float  noPeopleDelayBeforeReturningHomeSec;
    float  noPeopleReturningHomeDurationSec;
    float  recenterAfterDriftDurationThreshold;
    bool  recenterAfterDriftEnabled;
    float  recenterAfterDriftOffsetThreshold;
    bool  shouldDisableTransitions;
    CinematicFramingSessionFramingParameters * singlePersonFramingParameters;
    float  subjectMovementTolerance;
    float  tinyHeadMaxValue;
    float  tinyHeadMinValue;
    float  verticalAccelerationMultiplier;
    float  verticalSpeedMultiplier;
    float  viewportDefaultFOV;
    float  viewportMinimumFOV;
    float  xEaseInCurveA;
    float  xEaseInCurveB;
    float  yEaseInCurveA;
    float  yEaseInCurveB;
    float  zoomAccelerationMultiplier;
    float  zoomEaseInCurveA;
    float  zoomEaseInCurveB;
    float  zoomInSpeedMultiplier;
    float  zoomOutSpeedMultiplier;
}

@property (nonatomic) float deadbandRecenteringDurationSec;
@property (nonatomic) float deadbandRecenteringIdleDurationSec;
@property (nonatomic) float deadbandRecenteringInitialDelaySec;
@property (nonatomic) void defaultViewportRotation;
@property (nonatomic) float horizontalAccelerationMultiplier;
@property (nonatomic) float horizontalSpeedMultiplier;
@property (nonatomic) bool inferSubjectBodyFromFaceLocation;
@property (nonatomic, retain) CinematicFramingSessionFramingParameters *multiPersonFramingParameters;
@property (nonatomic) float noPeopleDelayBeforeReturningHomeSec;
@property (nonatomic) float noPeopleReturningHomeDurationSec;
@property (nonatomic) float recenterAfterDriftDurationThreshold;
@property (nonatomic) bool recenterAfterDriftEnabled;
@property (nonatomic) float recenterAfterDriftOffsetThreshold;
@property (nonatomic) bool shouldDisableTransitions;
@property (nonatomic, retain) CinematicFramingSessionFramingParameters *singlePersonFramingParameters;
@property (nonatomic) float subjectMovementTolerance;
@property (nonatomic) float tinyHeadMaxValue;
@property (nonatomic) float tinyHeadMinValue;
@property (nonatomic) float verticalAccelerationMultiplier;
@property (nonatomic) float verticalSpeedMultiplier;
@property (nonatomic) float viewportDefaultFOV;
@property (nonatomic) float viewportMinimumFOV;
@property (nonatomic) float xEaseInCurveA;
@property (nonatomic) float xEaseInCurveB;
@property (nonatomic) float yEaseInCurveA;
@property (nonatomic) float yEaseInCurveB;
@property (nonatomic) float zoomAccelerationMultiplier;
@property (nonatomic) float zoomEaseInCurveA;
@property (nonatomic) float zoomEaseInCurveB;
@property (nonatomic) float zoomInSpeedMultiplier;
@property (nonatomic) float zoomOutSpeedMultiplier;

- (void).cxx_destruct;
- (id)asDictionary;
- (float)deadbandRecenteringDurationSec;
- (float)deadbandRecenteringIdleDurationSec;
- (float)deadbandRecenteringInitialDelaySec;
- (void)defaultViewportRotation;
- (float)horizontalAccelerationMultiplier;
- (float)horizontalSpeedMultiplier;
- (bool)inferSubjectBodyFromFaceLocation;
- (id)initWithPlist:(id)arg1;
- (id)initWithPlistPath:(id)arg1;
- (void)loadFramingStyleSpecificOptions:(id)arg1;
- (id)multiPersonFramingParameters;
- (float)noPeopleDelayBeforeReturningHomeSec;
- (float)noPeopleReturningHomeDurationSec;
- (id)optionsForFramingStyle:(int)arg1;
- (float)recenterAfterDriftDurationThreshold;
- (bool)recenterAfterDriftEnabled;
- (float)recenterAfterDriftOffsetThreshold;
- (void)setDeadbandRecenteringDurationSec:(float)arg1;
- (void)setDeadbandRecenteringIdleDurationSec:(float)arg1;
- (void)setDeadbandRecenteringInitialDelaySec:(float)arg1;
- (void)setDefaultViewportRotation;
- (void)setHorizontalAccelerationMultiplier:(float)arg1;
- (void)setHorizontalSpeedMultiplier:(float)arg1;
- (void)setInferSubjectBodyFromFaceLocation:(bool)arg1;
- (void)setMultiPersonFramingParameters:(id)arg1;
- (void)setNoPeopleDelayBeforeReturningHomeSec:(float)arg1;
- (void)setNoPeopleReturningHomeDurationSec:(float)arg1;
- (void)setRecenterAfterDriftDurationThreshold:(float)arg1;
- (void)setRecenterAfterDriftEnabled:(bool)arg1;
- (void)setRecenterAfterDriftOffsetThreshold:(float)arg1;
- (void)setShouldDisableTransitions:(bool)arg1;
- (void)setSinglePersonFramingParameters:(id)arg1;
- (void)setSubjectMovementTolerance:(float)arg1;
- (void)setTinyHeadMaxValue:(float)arg1;
- (void)setTinyHeadMinValue:(float)arg1;
- (void)setVerticalAccelerationMultiplier:(float)arg1;
- (void)setVerticalSpeedMultiplier:(float)arg1;
- (void)setViewportDefaultFOV:(float)arg1;
- (void)setViewportMinimumFOV:(float)arg1;
- (void)setXEaseInCurveA:(float)arg1;
- (void)setXEaseInCurveB:(float)arg1;
- (void)setYEaseInCurveA:(float)arg1;
- (void)setYEaseInCurveB:(float)arg1;
- (void)setZoomAccelerationMultiplier:(float)arg1;
- (void)setZoomEaseInCurveA:(float)arg1;
- (void)setZoomEaseInCurveB:(float)arg1;
- (void)setZoomInSpeedMultiplier:(float)arg1;
- (void)setZoomOutSpeedMultiplier:(float)arg1;
- (bool)shouldDisableTransitions;
- (id)singlePersonFramingParameters;
- (float)subjectMovementTolerance;
- (float)tinyHeadMaxValue;
- (float)tinyHeadMinValue;
- (float)verticalAccelerationMultiplier;
- (float)verticalSpeedMultiplier;
- (float)viewportDefaultFOV;
- (float)viewportMinimumFOV;
- (float)xEaseInCurveA;
- (float)xEaseInCurveB;
- (float)yEaseInCurveA;
- (float)yEaseInCurveB;
- (float)zoomAccelerationMultiplier;
- (float)zoomEaseInCurveA;
- (float)zoomEaseInCurveB;
- (float)zoomInSpeedMultiplier;
- (float)zoomOutSpeedMultiplier;

@end

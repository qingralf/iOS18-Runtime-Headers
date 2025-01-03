/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Frameworks/Fluid.framework/Fluid
 */

@interface FLSpring : NSObject {
    double  _maximumTarget;
    double  _minimumTarget;
    struct FLSpringParameters { 
        double dampingRatio; 
        double dampingRatioSmoothing; 
        double response; 
        double responseSmoothing; 
    }  _parameters;
    double  _previousTarget;
    double  _projectionDeceleration;
    double  _retargetImpulse;
    double  _retargetResponseFraction;
    double  _rubberbandFactor;
    double  _rubberbandRange;
    struct FLCompoundSpring { 
        struct FLSimpleSpringState { 
            double position; 
            double velocity; 
        } state; 
        struct FLSimpleSpring { 
            struct FLSimpleSpringState { 
                double position; 
                double velocity; 
            } state; 
            double mass; 
            double stiffness; 
            double damping; 
            double anchor; 
            double stablePositionThreshold; 
            double stableVelocityThreshold; 
        } stiffness; 
        struct FLSimpleSpring { 
            struct FLSimpleSpringState { 
                double position; 
                double velocity; 
            } state; 
            double mass; 
            double stiffness; 
            double damping; 
            double anchor; 
            double stablePositionThreshold; 
            double stableVelocityThreshold; 
        } damping; 
        struct FLSimpleSpring { 
            struct FLSimpleSpringState { 
                double position; 
                double velocity; 
            } state; 
            double mass; 
            double stiffness; 
            double damping; 
            double anchor; 
            double stablePositionThreshold; 
            double stableVelocityThreshold; 
        } dampingRatio; 
        struct FLSimpleSpring { 
            struct FLSimpleSpringState { 
                double position; 
                double velocity; 
            } state; 
            double mass; 
            double stiffness; 
            double damping; 
            double anchor; 
            double stablePositionThreshold; 
            double stableVelocityThreshold; 
        } response; 
        struct FLSimpleSpring { 
            struct FLSimpleSpringState { 
                double position; 
                double velocity; 
            } state; 
            double mass; 
            double stiffness; 
            double damping; 
            double anchor; 
            double stablePositionThreshold; 
            double stableVelocityThreshold; 
        } anchor; 
        bool usesDampingRatioResponse; 
        double stablePositionThreshold; 
        double stableVelocityThreshold; 
    }  _s;
    double  _targetVelocity;
    double  _timeFactor;
    bool  _tracking;
    struct FLSpringParameters { 
        double dampingRatio; 
        double dampingRatioSmoothing; 
        double response; 
        double responseSmoothing; 
    }  _trackingParameters;
    bool  _transitioningFromTracking;
}

@property (nonatomic) double maximumTarget;
@property (nonatomic) double minimumTarget;
@property (nonatomic) struct FLSpringParameters { double x1; double x2; double x3; double x4; } parameters;
@property (nonatomic, readonly) double projectedTarget;
@property (nonatomic) double projectionDeceleration;
@property (nonatomic) double retargetImpulse;
@property (nonatomic) double retargetResponseFraction;
@property (nonatomic) double rubberbandFactor;
@property (nonatomic) double rubberbandRange;
@property (getter=isStable, nonatomic, readonly) bool stable;
@property (nonatomic) double stableValueThreshold;
@property (nonatomic) double stableVelocityThreshold;
@property (nonatomic) double target;
@property (nonatomic) double timeFactor;
@property (getter=isTracking, nonatomic) bool tracking;
@property (nonatomic) struct FLSpringParameters { double x1; double x2; double x3; double x4; } trackingParameters;
@property (nonatomic) double value;
@property (nonatomic) double velocity;

+ (id)springWithValue:(double)arg1;

- (struct FLSpringParameters { double x1; double x2; double x3; double x4; })_effectiveParameters;
- (double)_projectedTargetForVelocity:(double)arg1;
- (void)_updateForEffectiveParameters;
- (id)init;
- (id)initWithValue:(double)arg1;
- (bool)isStable;
- (bool)isTracking;
- (double)maximumTarget;
- (double)minimumTarget;
- (struct FLSpringParameters { double x1; double x2; double x3; double x4; })parameters;
- (double)projectedTarget;
- (double)projectionDeceleration;
- (void)resetImmediatelyToValue:(double)arg1;
- (double)retargetImpulse;
- (double)retargetResponseFraction;
- (double)rubberbandFactor;
- (double)rubberbandRange;
- (void)setMaximumTarget:(double)arg1;
- (void)setMinimumTarget:(double)arg1;
- (void)setParameters:(struct FLSpringParameters { double x1; double x2; double x3; double x4; })arg1;
- (void)setProjectionDeceleration:(double)arg1;
- (void)setRetargetImpulse:(double)arg1;
- (void)setRetargetResponseFraction:(double)arg1;
- (void)setRubberbandFactor:(double)arg1;
- (void)setRubberbandRange:(double)arg1;
- (void)setStableValueThreshold:(double)arg1;
- (void)setStableVelocityThreshold:(double)arg1;
- (void)setTarget:(double)arg1;
- (void)setTimeFactor:(double)arg1;
- (void)setTracking:(bool)arg1;
- (void)setTrackingParameters:(struct FLSpringParameters { double x1; double x2; double x3; double x4; })arg1;
- (void)setUsesDampingRatioResponseForSmoothing:(bool)arg1;
- (void)setValue:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)stableValueThreshold;
- (double)stableVelocityThreshold;
- (void)step:(double)arg1;
- (double)target;
- (double)timeFactor;
- (struct FLSpringParameters { double x1; double x2; double x3; double x4; })trackingParameters;
- (bool)usesDampingRatioResponseForSmoothing;
- (double)value;
- (double)velocity;

@end

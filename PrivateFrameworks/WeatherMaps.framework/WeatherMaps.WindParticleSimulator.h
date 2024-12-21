/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherMaps.framework/WeatherMaps
 */

@interface WeatherMaps.WindParticleSimulator : _TtCs12_SwiftObject {
    void bucketParticleThresholdStep;
    void checkParticleVisibilityThresholdStep;
    void delegate;
    void displayLink;
    void fullField;
    void isRunning;
    void isRunningCalculations;
    void nextSimulationCycleParameters;
    void particleAmount;
    void particleBucket;
    void particleLifespan;
    void particleLifespanLowerVariance;
    void particleLifespanUpperVariance;
    void particleSpeed;
    void particles;
    void requiresDisplayLink;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signposter;
    void simulationParametersLock;
    void stepCount;
    void stepEvolveBucketLastRun;
    void stepEvolveReviveLastRun;
    void targetFPS;
    void tiledField;
    void timeEvolveBucketLastRun;
    void timeEvolveReviveLastRun;
    void trackedAnimatedTileKeys;
    void trackedAnimatedTileKeysLock;
    void visibleTiles;
}

- (void)tick:(id)arg1;

@end
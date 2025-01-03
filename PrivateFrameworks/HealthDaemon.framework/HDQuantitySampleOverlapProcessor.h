/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySampleOverlapProcessor : NSObject {
    double  _anchorTime;
    bool  _loggedDuplicatedSample;
    unsigned long long  _overlapFunction;
    NSError * _unitTesting_DuplicateSampleError;
    struct { 
        double startTime; 
        double endTime; 
        double sampleValue; 
        bool shouldContributeToCount; 
        long long sourceID; 
    }  _workingSet;
    long long  _workingSetCount;
}

@property (nonatomic, readonly) NSError *unitTesting_DuplicateSampleError;

- (void).cxx_destruct;
- (long long)addSample:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1 outputSamples:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg2 error:(id*)arg3;
- (struct { double x1; unsigned long long x2; long long x3; bool x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; bool x_5_1_4; long long x_5_1_5; } x5[128]; })exportCurrentState;
- (bool)fetchFinalOverlapSamplesWithErrorOut:(id*)arg1 handler:(id /* block */)arg2;
- (bool)fetchOverlapProcessSamplesFrom:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1 setAnchorTime:(bool)arg2 errorOut:(id*)arg3 handler:(id /* block */)arg4;
- (long long)finishWithRemainingSamples:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1 error:(id*)arg2;
- (id)initWithOverlapFunction:(unsigned long long)arg1;
- (id)initWithState:(struct { double x1; unsigned long long x2; long long x3; bool x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; bool x_5_1_4; long long x_5_1_5; } x5[128]; })arg1;
- (bool)loggedDuplicatedSample;
- (void)resetAnchorTime:(double)arg1;
- (id)unitTesting_DuplicateSampleError;

@end

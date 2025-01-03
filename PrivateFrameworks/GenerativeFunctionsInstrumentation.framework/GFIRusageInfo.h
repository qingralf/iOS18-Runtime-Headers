/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GenerativeFunctionsInstrumentation.framework/GenerativeFunctionsInstrumentation
 */

@interface GFIRusageInfo : NSObject {
    unsigned long long  _intervalMaxNeuralFootprint;
    unsigned long long  _intervalMaxPhysFootprint;
    unsigned long long  _neuralFootprint;
    unsigned long long  _physFootprint;
}

@property (nonatomic, readonly) unsigned long long intervalMaxNeuralFootprint;
@property (nonatomic, readonly) unsigned long long intervalMaxPhysFootprint;
@property (nonatomic, readonly) unsigned long long neuralFootprint;
@property (nonatomic, readonly) unsigned long long physFootprint;

- (id)initWithPhysFootprint:(unsigned long long)arg1 intervalMaxPhysFootprint:(unsigned long long)arg2 neuralFootprint:(unsigned long long)arg3 intervalMaxNeuralFootprint:(unsigned long long)arg4;
- (unsigned long long)intervalMaxNeuralFootprint;
- (unsigned long long)intervalMaxPhysFootprint;
- (unsigned long long)neuralFootprint;
- (unsigned long long)physFootprint;

@end

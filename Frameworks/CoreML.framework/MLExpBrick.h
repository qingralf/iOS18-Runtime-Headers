/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLExpBrick : NSObject <EspressoBrick> {
    NSArray * _inputRanks;
    NSArray * _inputShapes;
    NSArray * _outputRanks;
    NSArray * _outputShapes;
    bool  _withBase2;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputRanks;
@property (nonatomic, readonly) NSArray *inputShapes;
@property (nonatomic, readonly) NSArray *outputRanks;
@property (nonatomic, readonly) NSArray *outputShapes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool withBase2;

- (void).cxx_destruct;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (bool)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)inputRanks;
- (id)inputShapes;
- (id)outputRanks;
- (id)outputShapes;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
- (bool)withBase2;

@end
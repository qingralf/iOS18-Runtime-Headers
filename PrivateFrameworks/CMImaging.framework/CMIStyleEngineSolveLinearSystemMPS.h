/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMIStyleEngineSolveLinearSystemMPS : CMIStyleEngineSolveLinearSystem {
    <MTLBuffer> * _inputLHSBuffer;
    <MTLBuffer> * _inputRHSBuffer;
    <MTLBuffer> * _inputStatusBuffer;
    <MTLBuffer> * _outputCoefficients;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 ssytemCount:(unsigned int)arg2 lhsSize:(unsigned int)arg3 rhsSize:(unsigned int)arg4;
- (id)inputLHSBuffer;
- (id)inputRHSBuffer;
- (id)inputStatusBuffer;
- (id)outputCoefficients;
- (void)setInputLHSBuffer:(id)arg1;
- (void)setInputRHSBuffer:(id)arg1;
- (void)setInputStatusBuffer:(id)arg1;
- (void)setOutputCoefficients:(id)arg1;
- (int)solveLinearSystem:(id)arg1;

@end
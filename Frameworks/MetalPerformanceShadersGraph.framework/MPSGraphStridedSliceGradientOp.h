/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
 */

@interface MPSGraphStridedSliceGradientOp : MPSGraphOperation {
    unsigned int  _begin_mask;
    bool  _end_is_size;
    unsigned int  _end_mask;
    unsigned int  _shrink_axis_mask;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 startMask:(unsigned int)arg4 endMask:(unsigned int)arg5 shrinkAxisMask:(unsigned int)arg6 endIsSize:(bool)arg7 name:(id)arg8;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end

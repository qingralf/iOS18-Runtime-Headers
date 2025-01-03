/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
 */

@interface MPSGraphInternalCommandBuffer : MPSCommandBuffer {
    unsigned int  _commandBufferIndex;
    MPSGraphExecutableExecutionDescriptor * _executableExecutionDescriptor;
    MPSCommandBuffer * _original;
}

- (void).cxx_destruct;
- (void)commit;
- (void)commitAndContinue;
- (void)forwardInvocation:(id)arg1;
- (id)initWithMPSCommandBuffer:(id)arg1 executableExecutionDescriptor:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (struct MPSCommandBufferDescriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; })mpsCommandBufferDescriptor;
- (bool)respondsToSelector:(SEL)arg1;

@end

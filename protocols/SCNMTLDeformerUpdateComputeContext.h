/* Generated by RuntimeBrowser.
 */

@protocol SCNMTLDeformerUpdateComputeContext <NSObject>

@required

- (struct SCNMTLComputeCommandEncoder { id x1[31]; unsigned long long x2[31]; id x3[128]; id x4[16]; id x5; id x6; id x7; struct SCNMTLBufferPool {} *x8; unsigned int x9; unsigned long long x10[2]; unsigned long long x11[1]; }*)currentComputeEncoder;
- (unsigned long long)currentFrameHash;
- (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })currentTransforms;
- (void)encodeCommandsInNewCommandBufferUsingBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLCommandBuffer> *, void*
- (void)setStageInputOutputBuffersToEncoder:(struct SCNMTLComputeCommandEncoder { id x1[31]; unsigned long long x2[31]; id x3[128]; id x4[16]; id x5; id x6; id x7; struct SCNMTLBufferPool {} *x8; unsigned int x9; unsigned long long x10[2]; unsigned long long x11[1]; }*)arg1;

@end

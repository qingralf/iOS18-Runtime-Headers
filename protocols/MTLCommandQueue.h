/* Generated by RuntimeBrowser.
 */

@protocol MTLCommandQueue <NSObject>

@required

- (void)addResidencySet:(id <MTLResidencySet>)arg1;
- (void)addResidencySets:(const id*)arg1 count:(unsigned long long)arg2;
- (<MTLCommandBuffer> *)commandBuffer;
- (<MTLCommandBuffer> *)commandBufferWithDescriptor:(MTLCommandBufferDescriptor *)arg1;
- (<MTLCommandBuffer> *)commandBufferWithUnretainedReferences;
- (<MTLDevice> *)device;
- (void)insertDebugCaptureBoundary;
- (NSString *)label;
- (void)removeResidencySet:(id <MTLResidencySet>)arg1;
- (void)removeResidencySets:(const id*)arg1 count:(unsigned long long)arg2;
- (void)setLabel:(NSString *)arg1;

@end

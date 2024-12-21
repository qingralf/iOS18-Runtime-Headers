/* Generated by RuntimeBrowser.
 */

@protocol MTLHeapSPI <MTLHeap>

@required

- (NSString *)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)memoryPoolId;
- (<MTLAccelerationStructure> *)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (<MTLAccelerationStructure> *)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (unsigned long long)unfilteredResourceOptions;

@optional

- (bool)detachBacking;
- (unsigned long long)gpuAddress;
- (unsigned long long)protectionOptions;
- (bool)replaceBackingWithRanges:(MTLResourceAddressRangeArray *)arg1 readOnly:(bool)arg2;

@end
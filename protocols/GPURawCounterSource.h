/* Generated by RuntimeBrowser.
 */

@protocol GPURawCounterSource <NSObject>

@required

- (NSArray *)availableCounters;
- (NSArray *)availableTriggers;
- (unsigned int)drainRingBufferAtIndex:(unsigned int)arg1 dataSize:(unsigned int)arg2;
- (unsigned int)drainRingBufferAtIndex:(unsigned int)arg1 dataSize:(unsigned int)arg2 error:(id*)arg3;
- (NSDictionary *)features;
- (void)flushRingBuffers;
- (bool)isEnabled;
- (NSString *)name;
- (NSDictionary *)options;
- (bool)pollCountersAtBufferIndex:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 9: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long*, unsigned long long, unsigned long long, void*
- (bool)pollCountersAtBufferIndex:(void *)arg1 withBlock:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 10: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long*, unsigned long long, unsigned long long, void*, id*
- (bool)postProcessRawDataWithRingBufferIndex:(unsigned int)arg1 source:(char *)arg2 sourceSize:(unsigned long long)arg3 sourceRead:(unsigned long long*)arg4 sourceWrite:(unsigned long long)arg5 output:(char *)arg6 outputSize:(unsigned long long)arg7 outputRead:(unsigned long long)arg8 outputWrite:(unsigned long long*)arg9 isLast:(bool)arg10;
- (bool)postProcessRawDataWithRingBufferIndex:(unsigned int)arg1 source:(char *)arg2 sourceSize:(unsigned long long)arg3 sourceRead:(unsigned long long*)arg4 sourceWrite:(unsigned long long)arg5 output:(char *)arg6 outputSize:(unsigned long long)arg7 outputRead:(unsigned long long)arg8 outputWrite:(unsigned long long*)arg9 isLast:(bool)arg10 error:(id*)arg11;
- (bool)postProcessRawDataWithRingBufferSource:(char *)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 sourceWrite:(unsigned long long)arg4 output:(char *)arg5 outputSize:(unsigned long long)arg6 outputRead:(unsigned long long)arg7 outputWrite:(unsigned long long*)arg8 isLast:(bool)arg9;
- (bool)postProcessRawDataWithRingBufferSource:(char *)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 sourceWrite:(unsigned long long)arg4 output:(char *)arg5 outputSize:(unsigned long long)arg6 outputRead:(unsigned long long)arg7 outputWrite:(unsigned long long*)arg8 isLast:(bool)arg9 error:(id*)arg10;
- (bool)postProcessRawDataWithSource:(char *)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 output:(char *)arg4 outputSize:(unsigned long long)arg5 outputWritten:(unsigned long long*)arg6 isLast:(bool)arg7;
- (bool)postProcessRawDataWithSource:(char *)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 output:(char *)arg4 outputSize:(unsigned long long)arg5 outputWritten:(unsigned long long*)arg6 isLast:(bool)arg7 error:(id*)arg8;
- (bool)requestCounters:(NSArray *)arg1 firstErrorIndex:(unsigned long long*)arg2;
- (bool)requestCounters:(NSArray *)arg1 firstErrorIndex:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)requestTriggers:(NSArray *)arg1 firstErrorIndex:(unsigned long long*)arg2;
- (bool)requestTriggers:(NSArray *)arg1 firstErrorIndex:(unsigned long long*)arg2 error:(id*)arg3;
- (void)resetRawDataPostProcessor;
- (bool)ringBufferInfoAtIndex:(unsigned int)arg1 base:(char **)arg2 size:(unsigned int*)arg3 dataOffset:(unsigned int*)arg4 dataSize:(unsigned int*)arg5;
- (bool)ringBufferInfoAtIndex:(unsigned int)arg1 base:(char **)arg2 size:(unsigned int*)arg3 dataOffset:(unsigned int*)arg4 dataSize:(unsigned int*)arg5 error:(id*)arg6;
- (unsigned int)ringBufferNum;
- (NSArray *)selectedCounters;
- (NSArray *)selectedTriggers;
- (bool)setEnabled:(bool)arg1;
- (bool)setEnabled:(bool)arg1 error:(id*)arg2;
- (void)setOptions:(NSDictionary *)arg1;
- (<GPURawCounterSourceGroup> *)sourceGroup;

@end
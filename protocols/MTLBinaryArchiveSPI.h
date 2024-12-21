/* Generated by RuntimeBrowser.
 */

@protocol MTLBinaryArchiveSPI <MTLBinaryArchive>

@required

- (bool)addComputePipelineFunctionsWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addMeshRenderPipelineFunctionsWithDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addRenderPipelineFunctionsWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (NSMutableArray *)archiveFunctionIds;
- (bool)enumerateArchivesFromBackingFile:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, struct { unsigned char x1[32]; }*, NSObject<OS_dispatch_data> *, void*
- (bool)enumerateArchivesFromPipelineCollection:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, struct { unsigned char x1[32]; }*, NSObject<OS_dispatch_data> *, void*
- (NSString *)formattedDescription:(unsigned long long)arg1;
- (NSArray *)keys;
- (unsigned long long)options;
- (void*)pipelineCollection;
- (bool)recompileToArchiveWithURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)serializeToURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)storeComputePipelineDescriptor:(MTLComputePipelineDescriptor *)arg1;
- (bool)storeMeshRenderPipelineDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1;
- (bool)storeRenderPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
- (bool)storeTileRenderPipelineDescriptor:(MTLTileRenderPipelineDescriptor *)arg1;

@end
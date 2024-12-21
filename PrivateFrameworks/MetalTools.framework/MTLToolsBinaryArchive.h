/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsBinaryArchive : MTLToolsObject <MTLBinaryArchiveSPI>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) unsigned long long options;
@property (readonly) Class superclass;

- (bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addFunctionWithDescriptor:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (bool)addLibraryWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addMeshRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addMeshRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)archiveFunctionIds;
- (id)device;
- (bool)enumerateArchivesFromBackingFile:(id /* block */)arg1;
- (bool)enumerateArchivesFromPipelineCollection:(id /* block */)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)keys;
- (id)label;
- (unsigned long long)options;
- (struct MTLPipelineCollection { }*)pipelineCollection;
- (bool)recompileToArchiveWithURL:(id)arg1 error:(id*)arg2;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)setLabel:(id)arg1;
- (bool)storeComputePipelineDescriptor:(id)arg1;
- (bool)storeMeshRenderPipelineDescriptor:(id)arg1;
- (bool)storeRenderPipelineDescriptor:(id)arg1;
- (bool)storeTileRenderPipelineDescriptor:(id)arg1;

@end